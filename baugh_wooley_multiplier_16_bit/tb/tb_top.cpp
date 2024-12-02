#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <cstdlib>
#include <string>
#include <iostream>
#include <fstream>
#include <bitset>
#include <verilated.h>
#include <verilated_fst_c.h>
#include "Vtop.h"

// Define simulation parameters
#define MAX_SIM       2000
vluint64_t sim_unit = 0;
vluint64_t sim_time = 0;

// Function declarations
void set_random(Vtop *dut);
void dut_clock(Vtop *dut, VerilatedFstC *vtrace);
int32_t get_expected(Vtop *dut);
void monitor_proc(Vtop *dut, int32_t expected, std::ofstream &log_file);
void monitor_outputs(Vtop *dut, std::ofstream &log_file);

// Randomize 16-bit signed inputs `a` and `b`
void set_random(Vtop *dut) {
    dut->a = (rand() % 65536) - 32768; // Random 16-bit signed value (-32768 to 32767)
    dut->b = (rand() % 65536) - 32768; // Random 16-bit signed value (-32768 to 32767)
}

void dut_clock(Vtop *dut, VerilatedFstC *vtrace) {
    // Simulate time without a clock signal
    sim_time = sim_unit * 10; // Time step

    // Evaluate at current time step
    dut->eval();
    if (vtrace) {
        vtrace->dump(sim_time); // Dump values for waveform
    }
}

// Compute the expected product of `a` and `b` for a 16-bit signed multiplier
int32_t get_expected(Vtop *dut) {
    int16_t a_signed = static_cast<int16_t>(dut->a);  // Interpret `a` as a 16-bit signed integer
    int16_t b_signed = static_cast<int16_t>(dut->b);  // Interpret `b` as a 16-bit signed integer
    int32_t result = static_cast<int32_t>(a_signed) * static_cast<int32_t>(b_signed); // Multiply as 32-bit to handle overflow

    return result; // Return the result as 32-bit signed integer to accommodate larger values
}

// Compare the actual result with the expected result and log mismatches
void monitor_proc(Vtop *dut, int32_t expected, std::ofstream &log_file) {
    int32_t actual_result = static_cast<int32_t>(dut->result); // Ensure `dut->result` is interpreted as signed

    if (actual_result != expected) {
        log_file << "ERROR: Mismatch detected!" << std::endl;
        log_file << "  a = " << std::bitset<16>(dut->a)
                 << ", b = " << std::bitset<16>(dut->b)
                 << ", Expected result = " << std::bitset<32>(expected)
                 << ", Actual result = " << std::bitset<32>(actual_result)
                 << std::endl;

        // Log in hexadecimal format for clarity
        log_file << "  Expected (hex) = " << std::hex << expected
                 << ", Actual (hex) = " << std::hex << actual_result << std::dec << std::endl;
    }
}

void monitor_outputs(Vtop *dut, std::ofstream &log_file) {
    // Log outputs in both bitset and hexadecimal formats
    log_file << "Time: " << sim_time 
             << " | a: " << std::bitset<16>(dut->a) 
             << " | b: " << std::bitset<16>(dut->b) 
             << " | result: " << std::bitset<32>(dut->result) 
             << " | result (hex): " << std::hex << static_cast<int32_t>(dut->result) << std::dec
             << std::endl;
}

int main(int argc, char **argv, char **env) {
    Verilated::commandArgs(argc, argv);

    Vtop *dut = new Vtop;

    Verilated::traceEverOn(true);
    VerilatedFstC *vtrace = new VerilatedFstC;
    dut->trace(vtrace, 2); // Trace to 2 hierarchy levels
    vtrace->open("wave.fst");
    vtrace->dump(0);

    srand(time(NULL)); // Seed the random number generator

    // Open log file for writing
    std::ofstream log_file("simulation_log.txt");
    if (!log_file.is_open()) {
        std::cerr << "Error: Unable to open log file." << std::endl;
        exit(EXIT_FAILURE);
    }

    dut->eval();

    while (sim_unit < MAX_SIM) {
        // Set random inputs each cycle
        set_random(dut);

        // Run a clock cycle
        dut_clock(dut, vtrace);

        // Additional eval to ensure stable propagation of values
        dut->eval();

        // Calculate the expected result
        int32_t expected = get_expected(dut);

        // Compare and log if there's a mismatch
        monitor_proc(dut, expected, log_file);

        // Log current values to file
        monitor_outputs(dut, log_file);

        sim_unit++;
    }

    // Close log file and trace file
    log_file.close();
    vtrace->close();
    delete dut;
    exit(EXIT_SUCCESS);
}
