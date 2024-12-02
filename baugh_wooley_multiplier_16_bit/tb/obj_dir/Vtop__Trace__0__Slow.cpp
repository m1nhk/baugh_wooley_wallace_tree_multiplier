// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1340,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+1341,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+1342,"result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBus(c+1340,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+1341,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+1342,"result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("mul_16_bit ");
    tracep->declBus(c+1340,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+1341,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+1342,"result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declArray(c+1,"pp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 255,0);
    tracep->pushNamePrefix("full_adder00 ");
    tracep->declBit(c+9,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+10,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+11,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+12,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+13,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder01 ");
    tracep->declBit(c+14,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+15,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+16,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+17,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+18,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder02 ");
    tracep->declBit(c+19,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+20,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+21,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+22,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+23,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder03 ");
    tracep->declBit(c+24,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+25,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+26,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+27,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+28,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder04 ");
    tracep->declBit(c+29,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+30,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+31,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+32,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+33,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder05 ");
    tracep->declBit(c+34,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+35,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+36,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+37,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+38,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder06 ");
    tracep->declBit(c+39,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+40,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+41,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+42,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+43,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder07 ");
    tracep->declBit(c+44,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+45,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+46,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+47,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+48,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder08 ");
    tracep->declBit(c+49,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+50,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+51,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+52,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+53,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder09 ");
    tracep->declBit(c+54,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+55,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+56,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+57,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+58,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder10 ");
    tracep->declBit(c+59,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+60,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+61,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+62,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+63,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder100 ");
    tracep->declBit(c+64,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+65,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+66,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+67,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+68,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder101 ");
    tracep->declBit(c+69,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+70,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+71,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+72,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+73,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder102 ");
    tracep->declBit(c+74,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+75,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+76,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+77,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+78,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder103 ");
    tracep->declBit(c+79,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+80,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+81,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+82,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+83,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder104 ");
    tracep->declBit(c+84,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+85,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+86,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+87,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+88,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder105 ");
    tracep->declBit(c+89,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+90,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+91,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+92,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+93,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder106 ");
    tracep->declBit(c+94,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+95,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+96,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+97,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+98,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder107 ");
    tracep->declBit(c+99,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+100,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+101,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+102,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+103,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder108 ");
    tracep->declBit(c+104,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+105,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+106,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+107,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+108,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder109 ");
    tracep->declBit(c+109,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+110,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+111,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+112,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+113,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder11 ");
    tracep->declBit(c+114,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+115,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+116,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+117,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+118,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder110 ");
    tracep->declBit(c+119,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+120,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+121,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+122,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+123,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder111 ");
    tracep->declBit(c+124,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+125,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+126,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+127,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+128,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder112 ");
    tracep->declBit(c+129,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+130,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+131,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+132,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+133,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder113 ");
    tracep->declBit(c+134,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+135,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+136,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+137,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+138,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder114 ");
    tracep->declBit(c+139,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+140,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+141,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+142,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+143,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder115 ");
    tracep->declBit(c+144,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+145,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+146,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+147,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+148,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder116 ");
    tracep->declBit(c+149,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+150,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+151,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+152,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+153,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder117 ");
    tracep->declBit(c+154,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+155,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+156,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+157,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+158,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder118 ");
    tracep->declBit(c+159,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+160,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+161,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+162,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+163,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder119 ");
    tracep->declBit(c+164,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+165,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+166,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+167,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+168,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder12 ");
    tracep->declBit(c+169,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+170,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+171,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+172,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+173,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder120 ");
    tracep->declBit(c+174,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+175,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+176,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+177,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+178,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder121 ");
    tracep->declBit(c+179,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+180,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+181,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+182,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+183,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder122 ");
    tracep->declBit(c+184,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+185,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+186,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+187,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+188,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder123 ");
    tracep->declBit(c+189,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+190,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+191,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+192,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+193,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder124 ");
    tracep->declBit(c+194,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+195,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+196,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+197,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+198,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder125 ");
    tracep->declBit(c+199,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+200,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+201,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+202,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+203,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder126 ");
    tracep->declBit(c+204,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+205,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+206,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+207,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+208,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder127 ");
    tracep->declBit(c+209,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+210,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+211,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+212,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+213,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder128 ");
    tracep->declBit(c+214,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+215,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+216,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+217,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+218,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder129 ");
    tracep->declBit(c+219,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+220,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+221,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+222,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+223,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder13 ");
    tracep->declBit(c+224,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+225,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+226,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+227,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+228,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder130 ");
    tracep->declBit(c+229,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+230,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+231,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+232,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+233,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder131 ");
    tracep->declBit(c+234,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+235,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+236,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+237,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+238,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder132 ");
    tracep->declBit(c+239,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+240,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+241,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+242,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+243,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder133 ");
    tracep->declBit(c+244,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+245,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+246,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+247,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+248,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder134 ");
    tracep->declBit(c+249,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+250,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+251,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+252,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+253,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder135 ");
    tracep->declBit(c+254,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+255,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+256,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+257,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+258,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder136 ");
    tracep->declBit(c+259,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+260,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+261,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+262,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+263,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder137 ");
    tracep->declBit(c+264,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+265,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+266,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+267,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+268,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder138 ");
    tracep->declBit(c+269,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+270,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+271,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+272,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+273,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder139 ");
    tracep->declBit(c+274,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+275,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+276,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+277,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+278,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder14 ");
    tracep->declBit(c+279,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+280,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+281,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+282,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+283,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder140 ");
    tracep->declBit(c+284,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+285,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+286,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+287,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+288,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder141 ");
    tracep->declBit(c+289,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+290,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+291,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+292,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+293,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder142 ");
    tracep->declBit(c+294,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+295,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+296,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+297,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+298,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder143 ");
    tracep->declBit(c+299,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+300,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+301,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+302,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+303,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder144 ");
    tracep->declBit(c+304,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+305,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+306,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+307,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+308,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder145 ");
    tracep->declBit(c+309,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+310,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+311,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+312,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+313,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder146 ");
    tracep->declBit(c+314,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+315,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+316,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+317,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+318,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder147 ");
    tracep->declBit(c+319,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+320,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+321,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+322,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+323,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder148 ");
    tracep->declBit(c+324,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+325,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+326,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+327,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+328,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder149 ");
    tracep->declBit(c+329,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+330,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+331,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+332,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+333,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder15 ");
    tracep->declBit(c+334,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+335,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+336,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+337,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+338,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder150 ");
    tracep->declBit(c+339,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+340,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+341,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+342,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+343,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder151 ");
    tracep->declBit(c+344,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+345,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+346,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+347,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+348,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder152 ");
    tracep->declBit(c+349,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+350,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+351,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+352,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+353,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder153 ");
    tracep->declBit(c+354,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+355,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+356,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+357,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+358,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder154 ");
    tracep->declBit(c+359,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+360,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+361,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+362,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+363,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder155 ");
    tracep->declBit(c+364,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+365,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+366,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+367,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+368,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder156 ");
    tracep->declBit(c+369,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+370,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+371,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+372,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+373,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder157 ");
    tracep->declBit(c+374,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+375,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+376,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+377,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+378,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder158 ");
    tracep->declBit(c+379,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+380,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+381,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+382,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+383,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder159 ");
    tracep->declBit(c+384,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+385,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+386,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+387,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+388,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder16 ");
    tracep->declBit(c+389,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+390,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+391,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+392,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+393,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder160 ");
    tracep->declBit(c+394,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+395,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+396,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+397,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+398,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder161 ");
    tracep->declBit(c+399,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+400,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+401,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+402,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+403,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder162 ");
    tracep->declBit(c+404,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+405,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+406,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+407,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+408,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder163 ");
    tracep->declBit(c+409,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+410,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+411,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+412,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+413,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder164 ");
    tracep->declBit(c+414,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+415,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+416,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+417,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+418,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder165 ");
    tracep->declBit(c+419,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+420,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+421,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+422,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+423,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder166 ");
    tracep->declBit(c+424,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+425,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+426,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+427,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+428,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder167 ");
    tracep->declBit(c+429,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+430,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+431,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+432,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+433,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder168 ");
    tracep->declBit(c+434,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+435,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+436,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+437,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+438,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder169 ");
    tracep->declBit(c+439,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+440,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+441,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+442,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+443,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder17 ");
    tracep->declBit(c+444,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+445,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+446,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+447,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+448,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder170 ");
    tracep->declBit(c+449,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+450,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+451,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+452,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+453,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder171 ");
    tracep->declBit(c+454,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+455,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+456,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+457,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+458,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder172 ");
    tracep->declBit(c+459,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+460,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+461,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+462,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+463,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder173 ");
    tracep->declBit(c+464,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+465,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+466,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+467,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+468,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder174 ");
    tracep->declBit(c+469,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+470,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+471,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+472,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+473,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder175 ");
    tracep->declBit(c+474,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+475,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+476,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+477,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+478,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder176 ");
    tracep->declBit(c+479,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+480,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+481,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+482,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+483,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder177 ");
    tracep->declBit(c+484,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+485,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+486,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+487,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+488,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder178 ");
    tracep->declBit(c+489,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+490,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+491,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+492,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+493,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder179 ");
    tracep->declBit(c+494,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+495,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+496,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+497,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+498,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder18 ");
    tracep->declBit(c+499,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+500,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+501,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+502,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+503,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder180 ");
    tracep->declBit(c+504,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+505,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+506,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+507,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+508,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder181 ");
    tracep->declBit(c+509,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+510,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+511,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+512,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+513,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder182 ");
    tracep->declBit(c+514,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+515,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+516,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+517,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+518,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder183 ");
    tracep->declBit(c+519,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+520,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+521,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+522,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+523,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder184 ");
    tracep->declBit(c+524,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+525,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+526,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+527,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+528,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder185 ");
    tracep->declBit(c+529,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+530,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+531,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+532,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+533,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder186 ");
    tracep->declBit(c+534,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+535,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+536,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+537,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+538,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder187 ");
    tracep->declBit(c+539,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+540,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+541,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+542,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+543,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder188 ");
    tracep->declBit(c+544,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+545,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+546,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+547,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+548,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder189 ");
    tracep->declBit(c+549,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+550,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+551,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+552,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+553,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder19 ");
    tracep->declBit(c+554,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+555,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+556,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+557,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+558,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder190 ");
    tracep->declBit(c+559,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+560,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+561,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+562,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+563,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder191 ");
    tracep->declBit(c+564,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+565,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+566,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+567,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+568,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder192 ");
    tracep->declBit(c+569,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+570,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+571,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+572,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+573,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder193 ");
    tracep->declBit(c+574,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+575,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+576,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+577,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+578,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder194 ");
    tracep->declBit(c+579,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+580,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+581,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+582,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+583,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder195 ");
    tracep->declBit(c+584,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+585,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+586,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+587,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+588,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder196 ");
    tracep->declBit(c+589,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+590,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+591,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+592,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+593,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder197 ");
    tracep->declBit(c+594,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+595,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+596,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+597,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+598,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder198 ");
    tracep->declBit(c+599,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+600,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+601,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+602,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+603,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder199 ");
    tracep->declBit(c+604,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+605,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+606,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+607,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+608,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder20 ");
    tracep->declBit(c+609,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+610,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+611,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+612,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+613,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder200 ");
    tracep->declBit(c+614,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+615,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+616,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+617,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+618,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder201 ");
    tracep->declBit(c+619,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+620,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+621,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+622,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+623,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder202 ");
    tracep->declBit(c+624,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+625,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+626,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+627,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+628,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder203 ");
    tracep->declBit(c+629,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+630,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+631,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+632,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+633,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder204 ");
    tracep->declBit(c+634,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+635,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+636,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+637,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+638,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder205 ");
    tracep->declBit(c+639,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+640,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+641,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+642,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+643,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder206 ");
    tracep->declBit(c+644,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+645,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+646,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+647,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+648,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder207 ");
    tracep->declBit(c+649,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+650,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+651,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+652,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+653,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder208 ");
    tracep->declBit(c+654,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+655,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+656,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+657,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+658,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder209 ");
    tracep->declBit(c+659,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+660,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+661,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+662,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+663,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder21 ");
    tracep->declBit(c+664,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+665,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+666,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+667,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+668,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder210 ");
    tracep->declBit(c+669,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+670,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+671,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+672,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+673,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder211 ");
    tracep->declBit(c+674,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+675,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+676,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+677,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+678,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder212 ");
    tracep->declBit(c+679,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+680,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+681,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+682,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+683,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder213 ");
    tracep->declBit(c+684,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+685,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+686,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+687,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+688,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder214 ");
    tracep->declBit(c+689,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+690,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+691,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+692,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+693,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder215 ");
    tracep->declBit(c+694,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+695,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+696,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+697,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+698,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder216 ");
    tracep->declBit(c+699,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+700,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+701,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+702,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+703,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder217 ");
    tracep->declBit(c+704,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+705,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+706,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+707,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+708,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder218 ");
    tracep->declBit(c+709,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+710,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+711,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+712,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+713,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder219 ");
    tracep->declBit(c+714,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+715,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+716,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+717,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+718,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder22 ");
    tracep->declBit(c+719,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+720,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+721,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+722,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+723,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder220 ");
    tracep->declBit(c+724,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+725,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+726,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+727,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+728,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder221 ");
    tracep->declBit(c+729,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+730,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+731,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+732,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+733,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder222 ");
    tracep->declBit(c+734,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+735,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+736,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+737,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+738,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder223 ");
    tracep->declBit(c+739,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+740,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+741,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+742,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+743,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder224 ");
    tracep->declBit(c+1343,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+744,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+745,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+746,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+747,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder23 ");
    tracep->declBit(c+748,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+749,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+750,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+751,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+752,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder24 ");
    tracep->declBit(c+753,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+754,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+755,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+756,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+757,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder25 ");
    tracep->declBit(c+758,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+759,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+760,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+761,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+762,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder26 ");
    tracep->declBit(c+763,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+764,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+765,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+766,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+767,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder27 ");
    tracep->declBit(c+768,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+769,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+770,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+771,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+772,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder28 ");
    tracep->declBit(c+773,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+774,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+775,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+776,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+777,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder29 ");
    tracep->declBit(c+778,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+779,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+780,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+781,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+782,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder30 ");
    tracep->declBit(c+783,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+784,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+785,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+786,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+787,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder31 ");
    tracep->declBit(c+788,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+789,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+790,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+791,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+792,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder32 ");
    tracep->declBit(c+793,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+794,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+795,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+796,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+797,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder33 ");
    tracep->declBit(c+798,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+799,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+800,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+801,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+802,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder34 ");
    tracep->declBit(c+803,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+804,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+805,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+806,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+807,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder35 ");
    tracep->declBit(c+808,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+809,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+810,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+811,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+812,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder36 ");
    tracep->declBit(c+813,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+814,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+815,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+816,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+817,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder37 ");
    tracep->declBit(c+818,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+819,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+820,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+821,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+822,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder38 ");
    tracep->declBit(c+823,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+824,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+825,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+826,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+827,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder39 ");
    tracep->declBit(c+828,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+829,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+830,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+831,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+832,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder40 ");
    tracep->declBit(c+1343,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+833,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+834,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+835,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+836,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder41 ");
    tracep->declBit(c+837,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+838,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+839,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+840,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+841,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder42 ");
    tracep->declBit(c+842,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+843,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+844,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+845,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+846,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder43 ");
    tracep->declBit(c+847,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+848,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+849,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+850,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+851,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder44 ");
    tracep->declBit(c+852,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+853,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+854,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+855,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+856,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder45 ");
    tracep->declBit(c+857,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+858,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+859,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+860,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+861,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder46 ");
    tracep->declBit(c+862,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+863,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+864,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+865,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+866,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder47 ");
    tracep->declBit(c+867,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+868,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+869,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+870,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+871,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder48 ");
    tracep->declBit(c+872,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+873,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+874,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+875,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+876,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder49 ");
    tracep->declBit(c+877,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+878,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+879,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+880,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+881,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder50 ");
    tracep->declBit(c+882,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+883,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+884,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+885,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+886,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder51 ");
    tracep->declBit(c+887,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+888,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+889,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+890,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+891,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder52 ");
    tracep->declBit(c+892,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+893,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+894,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+895,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+896,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder53 ");
    tracep->declBit(c+897,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+898,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+899,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+900,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+901,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder54 ");
    tracep->declBit(c+902,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+903,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+904,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+905,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+906,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder55 ");
    tracep->declBit(c+907,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+908,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+909,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+910,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+911,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder56 ");
    tracep->declBit(c+912,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+913,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+914,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+915,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+916,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder57 ");
    tracep->declBit(c+917,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+918,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+919,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+920,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+921,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder58 ");
    tracep->declBit(c+922,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+923,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+924,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+925,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+926,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder59 ");
    tracep->declBit(c+927,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+928,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+929,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+930,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+931,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder60 ");
    tracep->declBit(c+932,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+933,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+934,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+935,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+936,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder61 ");
    tracep->declBit(c+937,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+938,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+939,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+940,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+941,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder62 ");
    tracep->declBit(c+942,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+943,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+944,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+945,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+946,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder63 ");
    tracep->declBit(c+947,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+948,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+949,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+950,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+951,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder64 ");
    tracep->declBit(c+952,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+953,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+954,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+955,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+956,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder65 ");
    tracep->declBit(c+957,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+958,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+959,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+960,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+961,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder66 ");
    tracep->declBit(c+962,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+963,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+964,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+965,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+966,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder67 ");
    tracep->declBit(c+967,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+968,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+969,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+970,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+971,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder68 ");
    tracep->declBit(c+972,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+973,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+974,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+975,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+976,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder69 ");
    tracep->declBit(c+977,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+978,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+979,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+980,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+981,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder70 ");
    tracep->declBit(c+982,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+983,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+984,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+985,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+986,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder71 ");
    tracep->declBit(c+987,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+988,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+989,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+990,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+991,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder72 ");
    tracep->declBit(c+992,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+993,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+994,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+995,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+996,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder73 ");
    tracep->declBit(c+997,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+998,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+999,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1000,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1001,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder74 ");
    tracep->declBit(c+1002,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1003,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1004,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1005,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1006,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder75 ");
    tracep->declBit(c+1007,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1008,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1009,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1010,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1011,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder76 ");
    tracep->declBit(c+1012,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1013,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1014,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1015,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1016,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder77 ");
    tracep->declBit(c+1017,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1018,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1019,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1020,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1021,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder78 ");
    tracep->declBit(c+1022,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1023,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1024,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1025,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1026,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder79 ");
    tracep->declBit(c+1027,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1028,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1029,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1030,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1031,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder80 ");
    tracep->declBit(c+1032,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1033,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1034,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1035,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1036,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder81 ");
    tracep->declBit(c+1037,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1038,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1039,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1040,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1041,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder82 ");
    tracep->declBit(c+1042,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1043,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1044,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1045,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1046,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder83 ");
    tracep->declBit(c+1047,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1048,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1049,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1050,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1051,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder84 ");
    tracep->declBit(c+1052,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1053,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1054,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1055,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1056,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder85 ");
    tracep->declBit(c+1057,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1058,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1059,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1060,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1061,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder86 ");
    tracep->declBit(c+1062,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1063,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1064,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1065,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1066,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder87 ");
    tracep->declBit(c+1067,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1068,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1069,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1070,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1071,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder88 ");
    tracep->declBit(c+1072,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1073,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1074,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1075,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1076,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder89 ");
    tracep->declBit(c+1077,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1078,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1079,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1080,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1081,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder90 ");
    tracep->declBit(c+1082,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1083,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1084,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1085,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1086,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder91 ");
    tracep->declBit(c+1087,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1088,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1089,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1090,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1091,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder92 ");
    tracep->declBit(c+1092,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1093,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1094,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1095,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1096,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder93 ");
    tracep->declBit(c+1097,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1098,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1099,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1100,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1101,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder94 ");
    tracep->declBit(c+1102,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1103,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1104,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1105,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1106,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder95 ");
    tracep->declBit(c+1107,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1108,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1109,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1110,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1111,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder96 ");
    tracep->declBit(c+1112,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1113,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1114,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1115,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1116,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder97 ");
    tracep->declBit(c+1117,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1118,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1119,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1120,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1121,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder98 ");
    tracep->declBit(c+1122,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1123,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1124,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1125,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1126,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder99 ");
    tracep->declBit(c+1127,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1128,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1129,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1130,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1131,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("half_adder00 ");
    tracep->declBit(c+1132,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1133,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1134,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1135,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("half_adder01 ");
    tracep->declBit(c+1136,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1137,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1138,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1139,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("half_adder02 ");
    tracep->declBit(c+1140,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1141,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1142,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1143,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("half_adder03 ");
    tracep->declBit(c+1144,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1145,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1146,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1147,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("half_adder04 ");
    tracep->declBit(c+1148,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1149,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1150,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1151,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("half_adder05 ");
    tracep->declBit(c+1152,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1153,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1154,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1155,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("half_adder06 ");
    tracep->declBit(c+1156,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1157,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1158,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1159,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("half_adder07 ");
    tracep->declBit(c+1160,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1161,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1162,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1163,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("half_adder08 ");
    tracep->declBit(c+1164,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1165,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1166,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1167,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("half_adder09 ");
    tracep->declBit(c+1168,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1169,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1170,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1171,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("half_adder10 ");
    tracep->declBit(c+1172,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1173,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1174,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1175,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("half_adder11 ");
    tracep->declBit(c+1176,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1177,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1178,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1179,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("half_adder12 ");
    tracep->declBit(c+1180,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1181,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1182,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1183,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("half_adder13 ");
    tracep->declBit(c+1184,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1185,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1186,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1187,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("half_adder14 ");
    tracep->declBit(c+1188,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1189,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1190,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1191,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("half_adder15 ");
    tracep->declBit(c+1192,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1193,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1194,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1195,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("half_adder16 ");
    tracep->declBit(c+1196,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1197,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1198,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1199,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("half_adder17 ");
    tracep->declBit(c+1200,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1202,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1203,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("half_adder18 ");
    tracep->declBit(c+1204,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1205,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1206,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1207,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("half_adder19 ");
    tracep->declBit(c+1208,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1209,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1210,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1211,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("half_adder20 ");
    tracep->declBit(c+1212,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1213,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1214,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1215,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("half_adder21 ");
    tracep->declBit(c+1216,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1217,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1218,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1219,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("half_adder22 ");
    tracep->declBit(c+1220,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1221,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1222,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1223,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("half_adder23 ");
    tracep->declBit(c+1224,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1225,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1226,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1227,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("half_adder24 ");
    tracep->declBit(c+1228,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1229,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1230,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1231,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("half_adder25 ");
    tracep->declBit(c+1232,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1233,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1234,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1235,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("half_adder26 ");
    tracep->declBit(c+1236,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1237,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1238,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1239,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("half_adder27 ");
    tracep->declBit(c+1240,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1241,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1242,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1243,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("half_adder28 ");
    tracep->declBit(c+1244,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1245,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1246,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1247,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("half_adder29 ");
    tracep->declBit(c+1248,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1249,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1250,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1251,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("half_adder30 ");
    tracep->declBit(c+1252,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1253,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1254,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1255,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("half_adder31 ");
    tracep->declBit(c+1256,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1257,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1258,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1259,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("half_adder32 ");
    tracep->declBit(c+1260,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1261,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1262,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1263,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("half_adder33 ");
    tracep->declBit(c+1264,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1265,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1266,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1267,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("half_adder34 ");
    tracep->declBit(c+1268,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1269,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1270,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1271,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("half_adder35 ");
    tracep->declBit(c+1272,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1273,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1274,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1275,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("half_adder36 ");
    tracep->declBit(c+1276,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1277,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1278,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1279,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("half_adder37 ");
    tracep->declBit(c+1280,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1281,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1282,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1283,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("half_adder38 ");
    tracep->declBit(c+1284,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1285,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1286,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1287,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("half_adder39 ");
    tracep->declBit(c+1288,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1289,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1290,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1291,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("half_adder40 ");
    tracep->declBit(c+1292,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1293,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1294,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1295,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("half_adder41 ");
    tracep->declBit(c+1296,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1297,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1298,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1299,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("half_adder42 ");
    tracep->declBit(c+1300,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1301,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1302,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1303,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("half_adder43 ");
    tracep->declBit(c+1304,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1305,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1306,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1307,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("half_adder44 ");
    tracep->declBit(c+1308,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1309,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1310,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1311,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("half_adder45 ");
    tracep->declBit(c+1312,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1313,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1314,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1315,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("half_adder46 ");
    tracep->declBit(c+1316,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1317,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1318,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1319,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("half_adder47 ");
    tracep->declBit(c+1320,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1321,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1322,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1323,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("half_adder48 ");
    tracep->declBit(c+1324,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1325,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1326,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1327,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("half_adder49 ");
    tracep->declBit(c+1328,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1329,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1330,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1331,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("half_adder50 ");
    tracep->declBit(c+1332,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1333,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1334,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1335,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("half_adder52 ");
    tracep->declBit(c+1336,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1337,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1338,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1339,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullWData(oldp+1,(vlSelf->top__DOT__mul_16_bit__DOT__pp),256);
    bufp->fullBit(oldp+9,((1U & vlSelf->top__DOT__mul_16_bit__DOT__pp[1U])));
    bufp->fullBit(oldp+10,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                  >> 0x11U))));
    bufp->fullBit(oldp+11,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                  >> 2U))));
    bufp->fullBit(oldp+12,((1U & (VL_REDXOR_32((0x20004U 
                                                & vlSelf->top__DOT__mul_16_bit__DOT__pp[0U])) 
                                  ^ vlSelf->top__DOT__mul_16_bit__DOT__pp[1U]))));
    bufp->fullBit(oldp+13,((1U & (((vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                    & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                       >> 0x11U)) | (IData)(
                                                            (0x20004U 
                                                             == 
                                                             (0x20004U 
                                                              & vlSelf->top__DOT__mul_16_bit__DOT__pp[0U])))) 
                                  | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                      >> 2U) & vlSelf->top__DOT__mul_16_bit__DOT__pp[1U])))));
    bufp->fullBit(oldp+14,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                  >> 0x10U))));
    bufp->fullBit(oldp+15,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                  >> 1U))));
    bufp->fullBit(oldp+16,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                  >> 0x12U))));
    bufp->fullBit(oldp+17,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                   >> 0x12U) ^ VL_REDXOR_32(
                                                            (0x10002U 
                                                             & vlSelf->top__DOT__mul_16_bit__DOT__pp[1U]))))));
    bufp->fullBit(oldp+18,((1U & (((IData)((0x10002U 
                                            == (0x10002U 
                                                & vlSelf->top__DOT__mul_16_bit__DOT__pp[1U]))) 
                                   | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                       >> 1U) & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                                 >> 0x12U))) 
                                  | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                      >> 0x12U) & (
                                                   vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                                   >> 0x10U))))));
    bufp->fullBit(oldp+19,((1U & vlSelf->top__DOT__mul_16_bit__DOT__pp[2U])));
    bufp->fullBit(oldp+20,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                  >> 0x11U))));
    bufp->fullBit(oldp+21,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                  >> 2U))));
    bufp->fullBit(oldp+22,((1U & (VL_REDXOR_32((0x20004U 
                                                & vlSelf->top__DOT__mul_16_bit__DOT__pp[1U])) 
                                  ^ vlSelf->top__DOT__mul_16_bit__DOT__pp[2U]))));
    bufp->fullBit(oldp+23,((1U & (((vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                    & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                       >> 0x11U)) | (IData)(
                                                            (0x20004U 
                                                             == 
                                                             (0x20004U 
                                                              & vlSelf->top__DOT__mul_16_bit__DOT__pp[1U])))) 
                                  | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                      >> 2U) & vlSelf->top__DOT__mul_16_bit__DOT__pp[2U])))));
    bufp->fullBit(oldp+24,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                  >> 0x10U))));
    bufp->fullBit(oldp+25,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                  >> 1U))));
    bufp->fullBit(oldp+26,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                  >> 0x12U))));
    bufp->fullBit(oldp+27,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                   >> 0x12U) ^ VL_REDXOR_32(
                                                            (0x10002U 
                                                             & vlSelf->top__DOT__mul_16_bit__DOT__pp[2U]))))));
    bufp->fullBit(oldp+28,((1U & (((IData)((0x10002U 
                                            == (0x10002U 
                                                & vlSelf->top__DOT__mul_16_bit__DOT__pp[2U]))) 
                                   | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                       >> 1U) & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                                 >> 0x12U))) 
                                  | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                      >> 0x12U) & (
                                                   vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                                   >> 0x10U))))));
    bufp->fullBit(oldp+29,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                  >> 3U))));
    bufp->fullBit(oldp+30,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                  >> 0x14U))));
    bufp->fullBit(oldp+31,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                  >> 5U))));
    bufp->fullBit(oldp+32,((1U & (VL_REDXOR_32((0x100020U 
                                                & vlSelf->top__DOT__mul_16_bit__DOT__pp[0U])) 
                                  ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                     >> 3U)))));
    bufp->fullBit(oldp+33,((1U & ((((vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                     >> 3U) & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                               >> 0x14U)) 
                                   | (IData)((0x100020U 
                                              == (0x100020U 
                                                  & vlSelf->top__DOT__mul_16_bit__DOT__pp[0U])))) 
                                  | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                      >> 5U) & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                                >> 3U))))));
    bufp->fullBit(oldp+34,((1U & vlSelf->top__DOT__mul_16_bit__DOT__pp[3U])));
    bufp->fullBit(oldp+35,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                  >> 0x11U))));
    bufp->fullBit(oldp+36,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                  >> 2U))));
    bufp->fullBit(oldp+37,((1U & (VL_REDXOR_32((0x20004U 
                                                & vlSelf->top__DOT__mul_16_bit__DOT__pp[2U])) 
                                  ^ vlSelf->top__DOT__mul_16_bit__DOT__pp[3U]))));
    bufp->fullBit(oldp+38,((1U & (((vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                    & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                       >> 0x11U)) | (IData)(
                                                            (0x20004U 
                                                             == 
                                                             (0x20004U 
                                                              & vlSelf->top__DOT__mul_16_bit__DOT__pp[2U])))) 
                                  | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                      >> 2U) & vlSelf->top__DOT__mul_16_bit__DOT__pp[3U])))));
    bufp->fullBit(oldp+39,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                  >> 0x13U))));
    bufp->fullBit(oldp+40,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                  >> 4U))));
    bufp->fullBit(oldp+41,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                  >> 0x15U))));
    bufp->fullBit(oldp+42,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                   >> 0x15U) ^ VL_REDXOR_32(
                                                            (0x80010U 
                                                             & vlSelf->top__DOT__mul_16_bit__DOT__pp[1U]))))));
    bufp->fullBit(oldp+43,((1U & (((IData)((0x80010U 
                                            == (0x80010U 
                                                & vlSelf->top__DOT__mul_16_bit__DOT__pp[1U]))) 
                                   | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                       >> 4U) & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                                 >> 0x15U))) 
                                  | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                      >> 0x15U) & (
                                                   vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                                   >> 0x13U))))));
    bufp->fullBit(oldp+44,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                  >> 0x10U))));
    bufp->fullBit(oldp+45,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                  >> 1U))));
    bufp->fullBit(oldp+46,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                  >> 0x12U))));
    bufp->fullBit(oldp+47,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                   >> 0x12U) ^ VL_REDXOR_32(
                                                            (0x10002U 
                                                             & vlSelf->top__DOT__mul_16_bit__DOT__pp[3U]))))));
    bufp->fullBit(oldp+48,((1U & (((IData)((0x10002U 
                                            == (0x10002U 
                                                & vlSelf->top__DOT__mul_16_bit__DOT__pp[3U]))) 
                                   | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                       >> 1U) & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                                 >> 0x12U))) 
                                  | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                      >> 0x12U) & (
                                                   vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                                   >> 0x10U))))));
    bufp->fullBit(oldp+49,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                  >> 3U))));
    bufp->fullBit(oldp+50,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                  >> 0x14U))));
    bufp->fullBit(oldp+51,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                  >> 5U))));
    bufp->fullBit(oldp+52,((1U & (VL_REDXOR_32((0x100020U 
                                                & vlSelf->top__DOT__mul_16_bit__DOT__pp[1U])) 
                                  ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                     >> 3U)))));
    bufp->fullBit(oldp+53,((1U & ((((vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                     >> 3U) & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                               >> 0x14U)) 
                                   | (IData)((0x100020U 
                                              == (0x100020U 
                                                  & vlSelf->top__DOT__mul_16_bit__DOT__pp[1U])))) 
                                  | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                      >> 5U) & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                                >> 3U))))));
    bufp->fullBit(oldp+54,((1U & vlSelf->top__DOT__mul_16_bit__DOT__pp[4U])));
    bufp->fullBit(oldp+55,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                  >> 0x11U))));
    bufp->fullBit(oldp+56,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                  >> 2U))));
    bufp->fullBit(oldp+57,((1U & (VL_REDXOR_32((0x20004U 
                                                & vlSelf->top__DOT__mul_16_bit__DOT__pp[3U])) 
                                  ^ vlSelf->top__DOT__mul_16_bit__DOT__pp[4U]))));
    bufp->fullBit(oldp+58,((1U & (((vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                    & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                       >> 0x11U)) | (IData)(
                                                            (0x20004U 
                                                             == 
                                                             (0x20004U 
                                                              & vlSelf->top__DOT__mul_16_bit__DOT__pp[3U])))) 
                                  | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                      >> 2U) & vlSelf->top__DOT__mul_16_bit__DOT__pp[4U])))));
    bufp->fullBit(oldp+59,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                  >> 0x13U))));
    bufp->fullBit(oldp+60,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                  >> 4U))));
    bufp->fullBit(oldp+61,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                  >> 0x15U))));
    bufp->fullBit(oldp+62,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                   >> 0x15U) ^ VL_REDXOR_32(
                                                            (0x80010U 
                                                             & vlSelf->top__DOT__mul_16_bit__DOT__pp[2U]))))));
    bufp->fullBit(oldp+63,((1U & (((IData)((0x80010U 
                                            == (0x80010U 
                                                & vlSelf->top__DOT__mul_16_bit__DOT__pp[2U]))) 
                                   | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                       >> 4U) & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                                 >> 0x15U))) 
                                  | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                      >> 0x15U) & (
                                                   vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                                   >> 0x13U))))));
    bufp->fullBit(oldp+64,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                           [0x2fU]));
    bufp->fullBit(oldp+65,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                           [0x30U]));
    bufp->fullBit(oldp+66,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                           [0x31U]));
    bufp->fullBit(oldp+67,(((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0x2fU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0x30U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [0x31U])));
    bufp->fullBit(oldp+68,((((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x2fU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x30U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                          [0x30U] & 
                                          vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                          [0x31U])) 
                            | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x31U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x2fU]))));
    bufp->fullBit(oldp+69,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                           [0x37U]));
    bufp->fullBit(oldp+70,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                           [0x38U]));
    bufp->fullBit(oldp+71,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                           [0x39U]));
    bufp->fullBit(oldp+72,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0x37U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0x38U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                            [0x39U])));
    bufp->fullBit(oldp+73,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x37U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x38U]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                          [0x38U] & 
                                          vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                          [0x39U])) 
                            | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x39U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x37U]))));
    bufp->fullBit(oldp+74,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                           [0x32U]));
    bufp->fullBit(oldp+75,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                           [0x33U]));
    bufp->fullBit(oldp+76,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                           [0x34U]));
    bufp->fullBit(oldp+77,(((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0x32U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0x33U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [0x34U])));
    bufp->fullBit(oldp+78,((((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x32U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x33U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                          [0x33U] & 
                                          vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                          [0x34U])) 
                            | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x34U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x32U]))));
    bufp->fullBit(oldp+79,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                           [0x3bU]));
    bufp->fullBit(oldp+80,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                           [0x3cU]));
    bufp->fullBit(oldp+81,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                           [0x3dU]));
    bufp->fullBit(oldp+82,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0x3bU] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0x3cU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                            [0x3dU])));
    bufp->fullBit(oldp+83,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x3bU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x3cU]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                          [0x3cU] & 
                                          vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                          [0x3dU])) 
                            | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x3dU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x3bU]))));
    bufp->fullBit(oldp+84,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                           [0x36U]));
    bufp->fullBit(oldp+85,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                           [0x37U]));
    bufp->fullBit(oldp+86,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                           [0x38U]));
    bufp->fullBit(oldp+87,(((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0x36U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0x37U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [0x38U])));
    bufp->fullBit(oldp+88,((((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x36U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x37U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                          [0x37U] & 
                                          vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                          [0x38U])) 
                            | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x38U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x36U]))));
    bufp->fullBit(oldp+89,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                           [0x3fU]));
    bufp->fullBit(oldp+90,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                           [0x40U]));
    bufp->fullBit(oldp+91,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                           [0x3aU]));
    bufp->fullBit(oldp+92,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0x3fU] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0x40U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [0x3aU])));
    bufp->fullBit(oldp+93,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x3fU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x40U]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                          [0x40U] & 
                                          vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                          [0x3aU])) 
                            | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x3aU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x3fU]))));
    bufp->fullBit(oldp+94,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                           [0x3bU]));
    bufp->fullBit(oldp+95,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                           [0x3cU]));
    bufp->fullBit(oldp+96,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                           [0x3dU]));
    bufp->fullBit(oldp+97,(((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0x3bU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0x3cU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [0x3dU])));
    bufp->fullBit(oldp+98,((((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x3bU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x3cU]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                          [0x3cU] & 
                                          vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                          [0x3dU])) 
                            | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x3dU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x3bU]))));
    bufp->fullBit(oldp+99,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                           [0x43U]));
    bufp->fullBit(oldp+100,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [0x3eU]));
    bufp->fullBit(oldp+101,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [0x3fU]));
    bufp->fullBit(oldp+102,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x43U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x3eU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0x3fU])));
    bufp->fullBit(oldp+103,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x43U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x3eU]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                           [0x3eU] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                           [0x3fU])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x3fU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x43U]))));
    bufp->fullBit(oldp+104,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                            [0x46U]));
    bufp->fullBit(oldp+105,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [0x41U]));
    bufp->fullBit(oldp+106,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [0x42U]));
    bufp->fullBit(oldp+107,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x46U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x41U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0x42U])));
    bufp->fullBit(oldp+108,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x46U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x41U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                           [0x41U] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                           [0x42U])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x42U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x46U]))));
    bufp->fullBit(oldp+109,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [0x44U]));
    bufp->fullBit(oldp+110,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [0x45U]));
    bufp->fullBit(oldp+111,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [0x46U]));
    bufp->fullBit(oldp+112,(((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x44U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x45U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0x46U])));
    bufp->fullBit(oldp+113,((((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x44U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x45U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                           [0x45U] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                           [0x46U])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x46U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x44U]))));
    bufp->fullBit(oldp+114,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                   >> 6U))));
    bufp->fullBit(oldp+115,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                   >> 0x17U))));
    bufp->fullBit(oldp+116,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                   >> 8U))));
    bufp->fullBit(oldp+117,((1U & (VL_REDXOR_32((0x800100U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[0U])) 
                                   ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                      >> 6U)))));
    bufp->fullBit(oldp+118,((1U & ((((vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                      >> 6U) & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                                >> 0x17U)) 
                                    | (IData)((0x800100U 
                                               == (0x800100U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[0U])))) 
                                   | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                       >> 8U) & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                                 >> 6U))))));
    bufp->fullBit(oldp+119,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                            [0x49U]));
    bufp->fullBit(oldp+120,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                            [0x4aU]));
    bufp->fullBit(oldp+121,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [0x47U]));
    bufp->fullBit(oldp+122,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x49U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x4aU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0x47U])));
    bufp->fullBit(oldp+123,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x49U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x4aU]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                           [0x4aU] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                           [0x47U])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x47U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x49U]))));
    bufp->fullBit(oldp+124,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                            [0x4bU]));
    bufp->fullBit(oldp+125,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                            [0x4cU]));
    bufp->fullBit(oldp+126,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [0x49U]));
    bufp->fullBit(oldp+127,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x4bU] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x4cU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0x49U])));
    bufp->fullBit(oldp+128,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x4bU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x4cU]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                           [0x4cU] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                           [0x49U])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x49U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x4bU]))));
    bufp->fullBit(oldp+129,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                            [0x4dU]));
    bufp->fullBit(oldp+130,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [0x4bU]));
    bufp->fullBit(oldp+131,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [0x4cU]));
    bufp->fullBit(oldp+132,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x4dU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x4bU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0x4cU])));
    bufp->fullBit(oldp+133,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x4dU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x4bU]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                           [0x4bU] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                           [0x4cU])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x4cU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x4dU]))));
    bufp->fullBit(oldp+134,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                            [0x53U]));
    bufp->fullBit(oldp+135,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [0x52U]));
    bufp->fullBit(oldp+136,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [4U]));
    bufp->fullBit(oldp+137,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x53U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x52U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [4U])));
    bufp->fullBit(oldp+138,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x53U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x52U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                           [0x52U] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                           [4U])) | 
                             (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [4U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x53U]))));
    bufp->fullBit(oldp+139,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                            [0x54U]));
    bufp->fullBit(oldp+140,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                            [0x55U]));
    bufp->fullBit(oldp+141,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [0x53U]));
    bufp->fullBit(oldp+142,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x54U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x55U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0x53U])));
    bufp->fullBit(oldp+143,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x54U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x55U]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                           [0x55U] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                           [0x53U])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x53U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x54U]))));
    bufp->fullBit(oldp+144,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                            [0x56U]));
    bufp->fullBit(oldp+145,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                            [0x57U]));
    bufp->fullBit(oldp+146,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [0x54U]));
    bufp->fullBit(oldp+147,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x56U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x57U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0x54U])));
    bufp->fullBit(oldp+148,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x56U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x57U]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                           [0x57U] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                           [0x54U])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x54U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x56U]))));
    bufp->fullBit(oldp+149,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                            [0x58U]));
    bufp->fullBit(oldp+150,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                            [0x59U]));
    bufp->fullBit(oldp+151,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [0x56U]));
    bufp->fullBit(oldp+152,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x58U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x59U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0x56U])));
    bufp->fullBit(oldp+153,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x58U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x59U]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                           [0x59U] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                           [0x56U])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x56U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x58U]))));
    bufp->fullBit(oldp+154,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                            [0x5aU]));
    bufp->fullBit(oldp+155,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                            [0x5bU]));
    bufp->fullBit(oldp+156,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [0x58U]));
    bufp->fullBit(oldp+157,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x5aU] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x5bU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0x58U])));
    bufp->fullBit(oldp+158,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x5aU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x5bU]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                           [0x5bU] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                           [0x58U])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x58U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x5aU]))));
    bufp->fullBit(oldp+159,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                            [0x5cU]));
    bufp->fullBit(oldp+160,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                            [0x5dU]));
    bufp->fullBit(oldp+161,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [0x5aU]));
    bufp->fullBit(oldp+162,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x5cU] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x5dU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0x5aU])));
    bufp->fullBit(oldp+163,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x5cU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x5dU]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                           [0x5dU] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                           [0x5aU])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x5aU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x5cU]))));
    bufp->fullBit(oldp+164,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                            [0x5eU]));
    bufp->fullBit(oldp+165,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                            [0x5fU]));
    bufp->fullBit(oldp+166,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                            [0x60U]));
    bufp->fullBit(oldp+167,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x5eU] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x5fU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0x60U])));
    bufp->fullBit(oldp+168,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x5eU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x5fU]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                           [0x5fU] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                           [0x60U])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x60U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x5eU]))));
    bufp->fullBit(oldp+169,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                   >> 0x10U))));
    bufp->fullBit(oldp+170,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                   >> 1U))));
    bufp->fullBit(oldp+171,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                   >> 0x12U))));
    bufp->fullBit(oldp+172,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                    >> 0x12U) ^ VL_REDXOR_32(
                                                             (0x10002U 
                                                              & vlSelf->top__DOT__mul_16_bit__DOT__pp[4U]))))));
    bufp->fullBit(oldp+173,((1U & (((IData)((0x10002U 
                                             == (0x10002U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[4U]))) 
                                    | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                        >> 1U) & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                                  >> 0x12U))) 
                                   | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                       >> 0x12U) & 
                                      (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                       >> 0x10U))))));
    bufp->fullBit(oldp+174,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                            [0x61U]));
    bufp->fullBit(oldp+175,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                            [0x62U]));
    bufp->fullBit(oldp+176,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                            [0x63U]));
    bufp->fullBit(oldp+177,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x61U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x62U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0x63U])));
    bufp->fullBit(oldp+178,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x61U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x62U]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                           [0x62U] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                           [0x63U])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x63U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x61U]))));
    bufp->fullBit(oldp+179,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [0x5eU]));
    bufp->fullBit(oldp+180,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [0x5fU]));
    bufp->fullBit(oldp+181,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [0x60U]));
    bufp->fullBit(oldp+182,(((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x5eU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x5fU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0x60U])));
    bufp->fullBit(oldp+183,((((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x5eU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x5fU]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                           [0x5fU] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                           [0x60U])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x60U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x5eU]))));
    bufp->fullBit(oldp+184,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                            [0x64U]));
    bufp->fullBit(oldp+185,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                            [0x65U]));
    bufp->fullBit(oldp+186,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                            [0x66U]));
    bufp->fullBit(oldp+187,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x64U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x65U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0x66U])));
    bufp->fullBit(oldp+188,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x64U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x65U]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                           [0x65U] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                           [0x66U])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x66U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x64U]))));
    bufp->fullBit(oldp+189,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [0x61U]));
    bufp->fullBit(oldp+190,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [0x62U]));
    bufp->fullBit(oldp+191,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [0x63U]));
    bufp->fullBit(oldp+192,(((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x61U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x62U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0x63U])));
    bufp->fullBit(oldp+193,((((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x61U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x62U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                           [0x62U] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                           [0x63U])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x63U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x61U]))));
    bufp->fullBit(oldp+194,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                            [0x67U]));
    bufp->fullBit(oldp+195,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                            [0x68U]));
    bufp->fullBit(oldp+196,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                            [0x69U]));
    bufp->fullBit(oldp+197,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x67U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x68U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0x69U])));
    bufp->fullBit(oldp+198,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x67U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x68U]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                           [0x68U] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                           [0x69U])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x69U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x67U]))));
    bufp->fullBit(oldp+199,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [0x64U]));
    bufp->fullBit(oldp+200,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [0x65U]));
    bufp->fullBit(oldp+201,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [0x66U]));
    bufp->fullBit(oldp+202,(((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x64U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x65U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0x66U])));
    bufp->fullBit(oldp+203,((((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x64U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x65U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                           [0x65U] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                           [0x66U])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x66U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x64U]))));
    bufp->fullBit(oldp+204,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                            [0x6aU]));
    bufp->fullBit(oldp+205,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                            [0x6bU]));
    bufp->fullBit(oldp+206,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                            [0x6cU]));
    bufp->fullBit(oldp+207,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x6aU] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x6bU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0x6cU])));
    bufp->fullBit(oldp+208,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x6aU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x6bU]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                           [0x6bU] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                           [0x6cU])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x6cU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x6aU]))));
    bufp->fullBit(oldp+209,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [0x67U]));
    bufp->fullBit(oldp+210,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [0x68U]));
    bufp->fullBit(oldp+211,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [0x69U]));
    bufp->fullBit(oldp+212,(((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x67U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x68U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0x69U])));
    bufp->fullBit(oldp+213,((((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x67U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x68U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                           [0x68U] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                           [0x69U])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x69U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x67U]))));
    bufp->fullBit(oldp+214,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                            [0x6dU]));
    bufp->fullBit(oldp+215,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                            [0x6eU]));
    bufp->fullBit(oldp+216,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                            [0x6fU]));
    bufp->fullBit(oldp+217,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x6dU] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x6eU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0x6fU])));
    bufp->fullBit(oldp+218,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x6dU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x6eU]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                           [0x6eU] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                           [0x6fU])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x6fU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x6dU]))));
    bufp->fullBit(oldp+219,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [0x6aU]));
    bufp->fullBit(oldp+220,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [0x6bU]));
    bufp->fullBit(oldp+221,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [0x6cU]));
    bufp->fullBit(oldp+222,(((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x6aU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x6bU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0x6cU])));
    bufp->fullBit(oldp+223,((((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x6aU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x6bU]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                           [0x6bU] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                           [0x6cU])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x6cU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x6aU]))));
    bufp->fullBit(oldp+224,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                   >> 3U))));
    bufp->fullBit(oldp+225,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                   >> 0x14U))));
    bufp->fullBit(oldp+226,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                   >> 5U))));
    bufp->fullBit(oldp+227,((1U & (VL_REDXOR_32((0x100020U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[2U])) 
                                   ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                      >> 3U)))));
    bufp->fullBit(oldp+228,((1U & ((((vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                      >> 3U) & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                                >> 0x14U)) 
                                    | (IData)((0x100020U 
                                               == (0x100020U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[2U])))) 
                                   | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                       >> 5U) & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                                 >> 3U))))));
    bufp->fullBit(oldp+229,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                            [0x70U]));
    bufp->fullBit(oldp+230,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                            [0x71U]));
    bufp->fullBit(oldp+231,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                            [0x72U]));
    bufp->fullBit(oldp+232,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x70U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x71U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0x72U])));
    bufp->fullBit(oldp+233,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x70U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x71U]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                           [0x71U] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                           [0x72U])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x72U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x70U]))));
    bufp->fullBit(oldp+234,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [0x6dU]));
    bufp->fullBit(oldp+235,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [0x6eU]));
    bufp->fullBit(oldp+236,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [0x6fU]));
    bufp->fullBit(oldp+237,(((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x6dU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x6eU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0x6fU])));
    bufp->fullBit(oldp+238,((((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x6dU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x6eU]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                           [0x6eU] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                           [0x6fU])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x6fU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x6dU]))));
    bufp->fullBit(oldp+239,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                            [0x73U]));
    bufp->fullBit(oldp+240,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                            [0x74U]));
    bufp->fullBit(oldp+241,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [0x70U]));
    bufp->fullBit(oldp+242,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x73U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x74U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0x70U])));
    bufp->fullBit(oldp+243,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x73U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x74U]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                           [0x74U] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                           [0x70U])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x70U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x73U]))));
    bufp->fullBit(oldp+244,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [0x71U]));
    bufp->fullBit(oldp+245,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [0x72U]));
    bufp->fullBit(oldp+246,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                            [0x36U]));
    bufp->fullBit(oldp+247,(((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x71U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x72U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0x36U])));
    bufp->fullBit(oldp+248,((((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x71U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x72U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                           [0x72U] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                           [0x36U])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x36U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x71U]))));
    bufp->fullBit(oldp+249,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [0x73U]));
    bufp->fullBit(oldp+250,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [0x74U]));
    bufp->fullBit(oldp+251,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                            [0x3aU]));
    bufp->fullBit(oldp+252,(((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x73U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x74U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0x3aU])));
    bufp->fullBit(oldp+253,((((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x73U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x74U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                           [0x74U] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                           [0x3aU])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x3aU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x73U]))));
    bufp->fullBit(oldp+254,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [0x75U]));
    bufp->fullBit(oldp+255,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [0x76U]));
    bufp->fullBit(oldp+256,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                            [0x3eU]));
    bufp->fullBit(oldp+257,(((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x75U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x76U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0x3eU])));
    bufp->fullBit(oldp+258,((((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x75U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x76U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                           [0x76U] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                           [0x3eU])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x3eU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x75U]))));
    bufp->fullBit(oldp+259,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                            [0x7aU]));
    bufp->fullBit(oldp+260,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [0x77U]));
    bufp->fullBit(oldp+261,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [0x78U]));
    bufp->fullBit(oldp+262,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x7aU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x77U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0x78U])));
    bufp->fullBit(oldp+263,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x7aU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x77U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                           [0x77U] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                           [0x78U])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x78U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x7aU]))));
    bufp->fullBit(oldp+264,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                            [0x7cU]));
    bufp->fullBit(oldp+265,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [0x79U]));
    bufp->fullBit(oldp+266,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [0x7aU]));
    bufp->fullBit(oldp+267,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x7cU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x79U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0x7aU])));
    bufp->fullBit(oldp+268,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x7cU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x79U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                           [0x79U] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                           [0x7aU])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x7aU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x7cU]))));
    bufp->fullBit(oldp+269,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                            [0x7eU]));
    bufp->fullBit(oldp+270,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [0x7bU]));
    bufp->fullBit(oldp+271,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [0x7cU]));
    bufp->fullBit(oldp+272,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x7eU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x7bU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0x7cU])));
    bufp->fullBit(oldp+273,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x7eU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x7bU]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                           [0x7bU] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                           [0x7cU])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x7cU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x7eU]))));
    bufp->fullBit(oldp+274,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                            [0x7fU]));
    bufp->fullBit(oldp+275,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [0x7dU]));
    bufp->fullBit(oldp+276,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [0x7eU]));
    bufp->fullBit(oldp+277,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x7fU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x7dU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0x7eU])));
    bufp->fullBit(oldp+278,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x7fU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x7dU]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                           [0x7dU] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                           [0x7eU])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x7eU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x7fU]))));
    bufp->fullBit(oldp+279,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                   >> 0x16U))));
    bufp->fullBit(oldp+280,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                   >> 7U))));
    bufp->fullBit(oldp+281,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                   >> 0x18U))));
    bufp->fullBit(oldp+282,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                    >> 0x18U) ^ VL_REDXOR_32(
                                                             (0x400080U 
                                                              & vlSelf->top__DOT__mul_16_bit__DOT__pp[1U]))))));
    bufp->fullBit(oldp+283,((1U & (((IData)((0x400080U 
                                             == (0x400080U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[1U]))) 
                                    | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                        >> 7U) & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                                  >> 0x18U))) 
                                   | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                       >> 0x18U) & 
                                      (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                       >> 0x16U))))));
    bufp->fullBit(oldp+284,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [6U]));
    bufp->fullBit(oldp+285,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [5U]));
    bufp->fullBit(oldp+286,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [0x55U]));
    bufp->fullBit(oldp+287,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [6U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [5U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0x55U])));
    bufp->fullBit(oldp+288,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [6U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [5U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                        [5U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                        [0x55U])) | 
                             (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x55U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [6U]))));
    bufp->fullBit(oldp+289,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [7U]));
    bufp->fullBit(oldp+290,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [6U]));
    bufp->fullBit(oldp+291,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [0x57U]));
    bufp->fullBit(oldp+292,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [7U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [6U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0x57U])));
    bufp->fullBit(oldp+293,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [7U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [6U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                        [6U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                        [0x57U])) | 
                             (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x57U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [7U]))));
    bufp->fullBit(oldp+294,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [8U]));
    bufp->fullBit(oldp+295,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [9U]));
    bufp->fullBit(oldp+296,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [7U]));
    bufp->fullBit(oldp+297,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [8U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [9U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [7U])));
    bufp->fullBit(oldp+298,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [8U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [9U]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                        [9U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                        [7U])) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                                  [7U] 
                                                  & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                                  [8U]))));
    bufp->fullBit(oldp+299,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0xaU]));
    bufp->fullBit(oldp+300,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0xbU]));
    bufp->fullBit(oldp+301,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [8U]));
    bufp->fullBit(oldp+302,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0xaU] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0xbU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [8U])));
    bufp->fullBit(oldp+303,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0xaU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0xbU]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                          [0xbU] & 
                                          vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                          [8U])) | 
                             (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [8U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0xaU]))));
    bufp->fullBit(oldp+304,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0xcU]));
    bufp->fullBit(oldp+305,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0xdU]));
    bufp->fullBit(oldp+306,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0xaU]));
    bufp->fullBit(oldp+307,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0xcU] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0xdU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0xaU])));
    bufp->fullBit(oldp+308,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0xcU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0xdU]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                          [0xdU] & 
                                          vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                          [0xaU])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0xaU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0xcU]))));
    bufp->fullBit(oldp+309,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0xeU]));
    bufp->fullBit(oldp+310,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0xfU]));
    bufp->fullBit(oldp+311,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0xcU]));
    bufp->fullBit(oldp+312,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0xeU] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0xfU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0xcU])));
    bufp->fullBit(oldp+313,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0xeU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0xfU]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                          [0xfU] & 
                                          vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                          [0xcU])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0xcU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0xeU]))));
    bufp->fullBit(oldp+314,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x10U]));
    bufp->fullBit(oldp+315,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x11U]));
    bufp->fullBit(oldp+316,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0xeU]));
    bufp->fullBit(oldp+317,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x10U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x11U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0xeU])));
    bufp->fullBit(oldp+318,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x10U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x11U]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                           [0x11U] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0xeU])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0xeU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x10U]))));
    bufp->fullBit(oldp+319,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x12U]));
    bufp->fullBit(oldp+320,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x13U]));
    bufp->fullBit(oldp+321,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x10U]));
    bufp->fullBit(oldp+322,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x12U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x13U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x10U])));
    bufp->fullBit(oldp+323,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x12U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x13U]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                           [0x13U] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x10U])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x10U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x12U]))));
    bufp->fullBit(oldp+324,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x14U]));
    bufp->fullBit(oldp+325,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x15U]));
    bufp->fullBit(oldp+326,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x12U]));
    bufp->fullBit(oldp+327,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x14U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x15U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x12U])));
    bufp->fullBit(oldp+328,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x14U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x15U]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                           [0x15U] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x12U])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x12U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x14U]))));
    bufp->fullBit(oldp+329,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x13U]));
    bufp->fullBit(oldp+330,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [0x27U]));
    bufp->fullBit(oldp+331,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                   >> 0xfU))));
    bufp->fullBit(oldp+332,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                    [0x13U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                    [0x27U]) ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                                >> 0xfU)))));
    bufp->fullBit(oldp+333,((((vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x13U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x27U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                           [0x27U] 
                                           & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                              >> 0xfU))) 
                             | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                 >> 0xfU) & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x13U]))));
    bufp->fullBit(oldp+334,((1U & vlSelf->top__DOT__mul_16_bit__DOT__pp[5U])));
    bufp->fullBit(oldp+335,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                   >> 0x11U))));
    bufp->fullBit(oldp+336,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                   >> 2U))));
    bufp->fullBit(oldp+337,((1U & (VL_REDXOR_32((0x20004U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[4U])) 
                                   ^ vlSelf->top__DOT__mul_16_bit__DOT__pp[5U]))));
    bufp->fullBit(oldp+338,((1U & (((vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                     & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                        >> 0x11U)) 
                                    | (IData)((0x20004U 
                                               == (0x20004U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[4U])))) 
                                   | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                       >> 2U) & vlSelf->top__DOT__mul_16_bit__DOT__pp[5U])))));
    bufp->fullBit(oldp+339,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x16U]));
    bufp->fullBit(oldp+340,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x17U]));
    bufp->fullBit(oldp+341,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x14U]));
    bufp->fullBit(oldp+342,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x16U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x17U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x14U])));
    bufp->fullBit(oldp+343,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x16U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x17U]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                           [0x17U] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x14U])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x14U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x16U]))));
    bufp->fullBit(oldp+344,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x15U]));
    bufp->fullBit(oldp+345,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [0x2cU]));
    bufp->fullBit(oldp+346,((vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                             >> 0x1fU)));
    bufp->fullBit(oldp+347,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                    [0x15U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                    [0x2cU]) ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                                >> 0x1fU)))));
    bufp->fullBit(oldp+348,((((vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x15U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x2cU]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                           [0x2cU] 
                                           & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                              >> 0x1fU))) 
                             | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                 >> 0x1fU) & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x15U]))));
    bufp->fullBit(oldp+349,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x18U]));
    bufp->fullBit(oldp+350,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x19U]));
    bufp->fullBit(oldp+351,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x16U]));
    bufp->fullBit(oldp+352,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x18U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x19U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x16U])));
    bufp->fullBit(oldp+353,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x18U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x19U]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                           [0x19U] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x16U])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x16U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x18U]))));
    bufp->fullBit(oldp+354,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x17U]));
    bufp->fullBit(oldp+355,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                   >> 0x12U))));
    bufp->fullBit(oldp+356,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                   >> 0xfU))));
    bufp->fullBit(oldp+357,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                    [0x17U] ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                               >> 0x12U)) 
                                   ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                      >> 0xfU)))));
    bufp->fullBit(oldp+358,((1U & (((vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                     [0x17U] & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                                >> 0x12U)) 
                                    | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                        >> 0x12U) & 
                                       (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                        >> 0xfU))) 
                                   | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                       >> 0xfU) & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                      [0x17U])))));
    bufp->fullBit(oldp+359,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x1aU]));
    bufp->fullBit(oldp+360,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x1bU]));
    bufp->fullBit(oldp+361,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x18U]));
    bufp->fullBit(oldp+362,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x1aU] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x1bU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x18U])));
    bufp->fullBit(oldp+363,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x1aU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x1bU]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                           [0x1bU] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x18U])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x18U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x1aU]))));
    bufp->fullBit(oldp+364,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x19U]));
    bufp->fullBit(oldp+365,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [0x35U]));
    bufp->fullBit(oldp+366,((vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                             >> 0x1fU)));
    bufp->fullBit(oldp+367,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                    [0x19U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                    [0x35U]) ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                                >> 0x1fU)))));
    bufp->fullBit(oldp+368,((((vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x19U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x35U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                           [0x35U] 
                                           & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                              >> 0x1fU))) 
                             | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                 >> 0x1fU) & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x19U]))));
    bufp->fullBit(oldp+369,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x1cU]));
    bufp->fullBit(oldp+370,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x1dU]));
    bufp->fullBit(oldp+371,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x1aU]));
    bufp->fullBit(oldp+372,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x1cU] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x1dU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x1aU])));
    bufp->fullBit(oldp+373,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x1cU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x1dU]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                           [0x1dU] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x1aU])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x1aU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x1cU]))));
    bufp->fullBit(oldp+374,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x1bU]));
    bufp->fullBit(oldp+375,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [0x39U]));
    bufp->fullBit(oldp+376,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                   >> 0xfU))));
    bufp->fullBit(oldp+377,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                    [0x1bU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                    [0x39U]) ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                                >> 0xfU)))));
    bufp->fullBit(oldp+378,((((vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x1bU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x39U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                           [0x39U] 
                                           & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                              >> 0xfU))) 
                             | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                 >> 0xfU) & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x1bU]))));
    bufp->fullBit(oldp+379,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x1eU]));
    bufp->fullBit(oldp+380,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x1fU]));
    bufp->fullBit(oldp+381,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x1cU]));
    bufp->fullBit(oldp+382,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x1eU] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x1fU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x1cU])));
    bufp->fullBit(oldp+383,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x1eU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x1fU]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                           [0x1fU] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x1cU])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x1cU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x1eU]))));
    bufp->fullBit(oldp+384,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x1dU]));
    bufp->fullBit(oldp+385,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                   >> 0x15U))));
    bufp->fullBit(oldp+386,((vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                             >> 0x1fU)));
    bufp->fullBit(oldp+387,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                    [0x1dU] ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                               >> 0x15U)) 
                                   ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                      >> 0x1fU)))));
    bufp->fullBit(oldp+388,((1U & (((vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                     [0x1dU] & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                                >> 0x15U)) 
                                    | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                        >> 0x15U) & 
                                       (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                        >> 0x1fU))) 
                                   | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                       >> 0x1fU) & 
                                      vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                      [0x1dU])))));
    bufp->fullBit(oldp+389,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                   >> 0x13U))));
    bufp->fullBit(oldp+390,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                   >> 4U))));
    bufp->fullBit(oldp+391,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                   >> 0x15U))));
    bufp->fullBit(oldp+392,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                    >> 0x15U) ^ VL_REDXOR_32(
                                                             (0x80010U 
                                                              & vlSelf->top__DOT__mul_16_bit__DOT__pp[3U]))))));
    bufp->fullBit(oldp+393,((1U & (((IData)((0x80010U 
                                             == (0x80010U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[3U]))) 
                                    | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                        >> 4U) & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                                  >> 0x15U))) 
                                   | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                       >> 0x15U) & 
                                      (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                       >> 0x13U))))));
    bufp->fullBit(oldp+394,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x20U]));
    bufp->fullBit(oldp+395,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x1eU]));
    bufp->fullBit(oldp+396,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x1fU]));
    bufp->fullBit(oldp+397,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x20U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x1eU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x1fU])));
    bufp->fullBit(oldp+398,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x20U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x1eU]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x1eU] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x1fU])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x1fU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x20U]))));
    bufp->fullBit(oldp+399,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                            [0x79U]));
    bufp->fullBit(oldp+400,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [0x40U]));
    bufp->fullBit(oldp+401,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                   >> 0xfU))));
    bufp->fullBit(oldp+402,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                    [0x79U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                    [0x40U]) ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                                >> 0xfU)))));
    bufp->fullBit(oldp+403,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x79U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x40U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                           [0x40U] 
                                           & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                              >> 0xfU))) 
                             | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                 >> 0xfU) & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x79U]))));
    bufp->fullBit(oldp+404,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                            [0x7bU]));
    bufp->fullBit(oldp+405,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [0x43U]));
    bufp->fullBit(oldp+406,((vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                             >> 0x1fU)));
    bufp->fullBit(oldp+407,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                    [0x7bU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                    [0x43U]) ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                                >> 0x1fU)))));
    bufp->fullBit(oldp+408,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x7bU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x43U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                           [0x43U] 
                                           & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                              >> 0x1fU))) 
                             | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                 >> 0x1fU) & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x7bU]))));
    bufp->fullBit(oldp+409,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                            [0x7dU]));
    bufp->fullBit(oldp+410,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                   >> 0x18U))));
    bufp->fullBit(oldp+411,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                   >> 0xfU))));
    bufp->fullBit(oldp+412,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                    [0x7dU] ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                               >> 0x18U)) 
                                   ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                      >> 0xfU)))));
    bufp->fullBit(oldp+413,((1U & (((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                     [0x7dU] & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                                >> 0x18U)) 
                                    | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                        >> 0x18U) & 
                                       (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                        >> 0xfU))) 
                                   | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                       >> 0xfU) & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                      [0x7dU])))));
    bufp->fullBit(oldp+414,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x22U]));
    bufp->fullBit(oldp+415,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [0x48U]));
    bufp->fullBit(oldp+416,((vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                             >> 0x1fU)));
    bufp->fullBit(oldp+417,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                    [0x22U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                    [0x48U]) ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                                >> 0x1fU)))));
    bufp->fullBit(oldp+418,((((vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x22U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x48U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                           [0x48U] 
                                           & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                              >> 0x1fU))) 
                             | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                 >> 0x1fU) & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x22U]))));
    bufp->fullBit(oldp+419,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x23U]));
    bufp->fullBit(oldp+420,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [0x4aU]));
    bufp->fullBit(oldp+421,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                   >> 0xfU))));
    bufp->fullBit(oldp+422,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                    [0x23U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                    [0x4aU]) ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                                >> 0xfU)))));
    bufp->fullBit(oldp+423,((((vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x23U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x4aU]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                           [0x4aU] 
                                           & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                              >> 0xfU))) 
                             | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                 >> 0xfU) & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x23U]))));
    bufp->fullBit(oldp+424,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x24U]));
    bufp->fullBit(oldp+425,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+426,((vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                             >> 0x1fU)));
    bufp->fullBit(oldp+427,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                    [0x24U] ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                               >> 0x1bU)) 
                                   ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                      >> 0x1fU)))));
    bufp->fullBit(oldp+428,((1U & (((vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                     [0x24U] & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                                >> 0x1bU)) 
                                    | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                        >> 0x1bU) & 
                                       (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                        >> 0x1fU))) 
                                   | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                       >> 0x1fU) & 
                                      vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                      [0x24U])))));
    bufp->fullBit(oldp+429,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x2dU]));
    bufp->fullBit(oldp+430,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x2cU]));
    bufp->fullBit(oldp+431,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [9U]));
    bufp->fullBit(oldp+432,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x2dU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x2cU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [9U])));
    bufp->fullBit(oldp+433,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x2dU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x2cU]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x2cU] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [9U])) | 
                             (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [9U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x2dU]))));
    bufp->fullBit(oldp+434,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x2eU]));
    bufp->fullBit(oldp+435,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x2dU]));
    bufp->fullBit(oldp+436,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0xbU]));
    bufp->fullBit(oldp+437,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x2eU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x2dU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0xbU])));
    bufp->fullBit(oldp+438,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x2eU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x2dU]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x2dU] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0xbU])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0xbU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x2eU]))));
    bufp->fullBit(oldp+439,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x2fU]));
    bufp->fullBit(oldp+440,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x2eU]));
    bufp->fullBit(oldp+441,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0xdU]));
    bufp->fullBit(oldp+442,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x2fU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x2eU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0xdU])));
    bufp->fullBit(oldp+443,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x2fU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x2eU]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x2eU] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0xdU])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0xdU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x2fU]))));
    bufp->fullBit(oldp+444,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                   >> 6U))));
    bufp->fullBit(oldp+445,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                   >> 0x17U))));
    bufp->fullBit(oldp+446,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                   >> 8U))));
    bufp->fullBit(oldp+447,((1U & (VL_REDXOR_32((0x800100U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[1U])) 
                                   ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                      >> 6U)))));
    bufp->fullBit(oldp+448,((1U & ((((vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                      >> 6U) & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                                >> 0x17U)) 
                                    | (IData)((0x800100U 
                                               == (0x800100U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[1U])))) 
                                   | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                       >> 8U) & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                                 >> 6U))))));
    bufp->fullBit(oldp+449,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x30U]));
    bufp->fullBit(oldp+450,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x2fU]));
    bufp->fullBit(oldp+451,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0xfU]));
    bufp->fullBit(oldp+452,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x30U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x2fU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0xfU])));
    bufp->fullBit(oldp+453,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x30U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x2fU]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x2fU] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0xfU])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0xfU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x30U]))));
    bufp->fullBit(oldp+454,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x31U]));
    bufp->fullBit(oldp+455,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x32U]));
    bufp->fullBit(oldp+456,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x30U]));
    bufp->fullBit(oldp+457,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x31U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x32U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x30U])));
    bufp->fullBit(oldp+458,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x31U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x32U]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                           [0x32U] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x30U])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x30U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x31U]))));
    bufp->fullBit(oldp+459,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x33U]));
    bufp->fullBit(oldp+460,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x34U]));
    bufp->fullBit(oldp+461,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x31U]));
    bufp->fullBit(oldp+462,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x33U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x34U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x31U])));
    bufp->fullBit(oldp+463,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x33U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x34U]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                           [0x34U] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x31U])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x31U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x33U]))));
    bufp->fullBit(oldp+464,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x35U]));
    bufp->fullBit(oldp+465,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x36U]));
    bufp->fullBit(oldp+466,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x33U]));
    bufp->fullBit(oldp+467,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x35U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x36U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x33U])));
    bufp->fullBit(oldp+468,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x35U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x36U]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                           [0x36U] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x33U])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x33U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x35U]))));
    bufp->fullBit(oldp+469,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x37U]));
    bufp->fullBit(oldp+470,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x38U]));
    bufp->fullBit(oldp+471,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x35U]));
    bufp->fullBit(oldp+472,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x37U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x38U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x35U])));
    bufp->fullBit(oldp+473,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x37U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x38U]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                           [0x38U] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x35U])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x35U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x37U]))));
    bufp->fullBit(oldp+474,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x39U]));
    bufp->fullBit(oldp+475,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x3aU]));
    bufp->fullBit(oldp+476,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x37U]));
    bufp->fullBit(oldp+477,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x39U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x3aU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x37U])));
    bufp->fullBit(oldp+478,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x39U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x3aU]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                           [0x3aU] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x37U])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x37U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x39U]))));
    bufp->fullBit(oldp+479,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x3bU]));
    bufp->fullBit(oldp+480,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x3cU]));
    bufp->fullBit(oldp+481,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x39U]));
    bufp->fullBit(oldp+482,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x3bU] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x3cU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x39U])));
    bufp->fullBit(oldp+483,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x3bU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x3cU]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                           [0x3cU] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x39U])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x39U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x3bU]))));
    bufp->fullBit(oldp+484,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x3dU]));
    bufp->fullBit(oldp+485,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x3eU]));
    bufp->fullBit(oldp+486,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x3bU]));
    bufp->fullBit(oldp+487,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x3dU] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x3eU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x3bU])));
    bufp->fullBit(oldp+488,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x3dU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x3eU]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                           [0x3eU] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x3bU])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x3bU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x3dU]))));
    bufp->fullBit(oldp+489,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x3fU]));
    bufp->fullBit(oldp+490,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x40U]));
    bufp->fullBit(oldp+491,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x3dU]));
    bufp->fullBit(oldp+492,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x3fU] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x40U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x3dU])));
    bufp->fullBit(oldp+493,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x3fU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x40U]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                           [0x40U] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x3dU])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x3dU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x3fU]))));
    bufp->fullBit(oldp+494,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x41U]));
    bufp->fullBit(oldp+495,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x42U]));
    bufp->fullBit(oldp+496,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x3fU]));
    bufp->fullBit(oldp+497,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x41U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x42U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x3fU])));
    bufp->fullBit(oldp+498,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x41U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x42U]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                           [0x42U] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x3fU])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x3fU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x41U]))));
    bufp->fullBit(oldp+499,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                   >> 0x10U))));
    bufp->fullBit(oldp+500,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                   >> 1U))));
    bufp->fullBit(oldp+501,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                   >> 0x12U))));
    bufp->fullBit(oldp+502,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                    >> 0x12U) ^ VL_REDXOR_32(
                                                             (0x10002U 
                                                              & vlSelf->top__DOT__mul_16_bit__DOT__pp[5U]))))));
    bufp->fullBit(oldp+503,((1U & (((IData)((0x10002U 
                                             == (0x10002U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[5U]))) 
                                    | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                        >> 1U) & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                                  >> 0x12U))) 
                                   | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                       >> 0x12U) & 
                                      (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                       >> 0x10U))))));
    bufp->fullBit(oldp+504,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x43U]));
    bufp->fullBit(oldp+505,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x44U]));
    bufp->fullBit(oldp+506,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x41U]));
    bufp->fullBit(oldp+507,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x43U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x44U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x41U])));
    bufp->fullBit(oldp+508,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x43U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x44U]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                           [0x44U] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x41U])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x41U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x43U]))));
    bufp->fullBit(oldp+509,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x45U]));
    bufp->fullBit(oldp+510,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x43U]));
    bufp->fullBit(oldp+511,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x44U]));
    bufp->fullBit(oldp+512,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x45U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x43U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x44U])));
    bufp->fullBit(oldp+513,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x45U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x43U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x43U] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x44U])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x44U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x45U]))));
    bufp->fullBit(oldp+514,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x55U]));
    bufp->fullBit(oldp+515,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x54U]));
    bufp->fullBit(oldp+516,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x32U]));
    bufp->fullBit(oldp+517,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x55U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x54U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x32U])));
    bufp->fullBit(oldp+518,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x55U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x54U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x54U] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x32U])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x32U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x55U]))));
    bufp->fullBit(oldp+519,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x56U]));
    bufp->fullBit(oldp+520,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x55U]));
    bufp->fullBit(oldp+521,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x34U]));
    bufp->fullBit(oldp+522,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x56U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x55U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x34U])));
    bufp->fullBit(oldp+523,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x56U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x55U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x55U] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x34U])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x34U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x56U]))));
    bufp->fullBit(oldp+524,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x57U]));
    bufp->fullBit(oldp+525,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x56U]));
    bufp->fullBit(oldp+526,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x36U]));
    bufp->fullBit(oldp+527,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x57U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x56U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x36U])));
    bufp->fullBit(oldp+528,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x57U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x56U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x56U] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x36U])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x36U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x57U]))));
    bufp->fullBit(oldp+529,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x58U]));
    bufp->fullBit(oldp+530,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x57U]));
    bufp->fullBit(oldp+531,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x38U]));
    bufp->fullBit(oldp+532,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x58U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x57U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x38U])));
    bufp->fullBit(oldp+533,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x58U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x57U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x57U] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x38U])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x38U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x58U]))));
    bufp->fullBit(oldp+534,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x59U]));
    bufp->fullBit(oldp+535,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x58U]));
    bufp->fullBit(oldp+536,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x3aU]));
    bufp->fullBit(oldp+537,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x59U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x58U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x3aU])));
    bufp->fullBit(oldp+538,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x59U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x58U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x58U] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x3aU])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x3aU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x59U]))));
    bufp->fullBit(oldp+539,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x5aU]));
    bufp->fullBit(oldp+540,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x59U]));
    bufp->fullBit(oldp+541,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x3cU]));
    bufp->fullBit(oldp+542,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x5aU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x59U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x3cU])));
    bufp->fullBit(oldp+543,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x5aU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x59U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x59U] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x3cU])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x3cU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x5aU]))));
    bufp->fullBit(oldp+544,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x5bU]));
    bufp->fullBit(oldp+545,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x5aU]));
    bufp->fullBit(oldp+546,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x3eU]));
    bufp->fullBit(oldp+547,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x5bU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x5aU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x3eU])));
    bufp->fullBit(oldp+548,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x5bU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x5aU]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x5aU] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x3eU])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x3eU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x5bU]))));
    bufp->fullBit(oldp+549,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x5cU]));
    bufp->fullBit(oldp+550,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x5bU]));
    bufp->fullBit(oldp+551,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x40U]));
    bufp->fullBit(oldp+552,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x5cU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x5bU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x40U])));
    bufp->fullBit(oldp+553,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x5cU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x5bU]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x5bU] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x40U])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x40U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x5cU]))));
    bufp->fullBit(oldp+554,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                   >> 3U))));
    bufp->fullBit(oldp+555,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                   >> 0x14U))));
    bufp->fullBit(oldp+556,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                   >> 5U))));
    bufp->fullBit(oldp+557,((1U & (VL_REDXOR_32((0x100020U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[3U])) 
                                   ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                      >> 3U)))));
    bufp->fullBit(oldp+558,((1U & ((((vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                      >> 3U) & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                                >> 0x14U)) 
                                    | (IData)((0x100020U 
                                               == (0x100020U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[3U])))) 
                                   | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                       >> 5U) & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                                 >> 3U))))));
    bufp->fullBit(oldp+559,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x5dU]));
    bufp->fullBit(oldp+560,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x5cU]));
    bufp->fullBit(oldp+561,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x42U]));
    bufp->fullBit(oldp+562,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x5dU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x5cU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x42U])));
    bufp->fullBit(oldp+563,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x5dU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x5cU]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x5cU] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x42U])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x42U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x5dU]))));
    bufp->fullBit(oldp+564,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x5eU]));
    bufp->fullBit(oldp+565,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x5dU]));
    bufp->fullBit(oldp+566,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x23U]));
    bufp->fullBit(oldp+567,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x5eU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x5dU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                             [0x23U])));
    bufp->fullBit(oldp+568,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x5eU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x5dU]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x5dU] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                           [0x23U])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x23U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x5eU]))));
    bufp->fullBit(oldp+569,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x5fU]));
    bufp->fullBit(oldp+570,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x5eU]));
    bufp->fullBit(oldp+571,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x24U]));
    bufp->fullBit(oldp+572,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x5fU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x5eU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                             [0x24U])));
    bufp->fullBit(oldp+573,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x5fU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x5eU]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x5eU] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                           [0x24U])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x24U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x5fU]))));
    bufp->fullBit(oldp+574,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x60U]));
    bufp->fullBit(oldp+575,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x5fU]));
    bufp->fullBit(oldp+576,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x25U]));
    bufp->fullBit(oldp+577,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x60U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x5fU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                             [0x25U])));
    bufp->fullBit(oldp+578,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x60U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x5fU]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x5fU] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                           [0x25U])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x25U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x60U]))));
    bufp->fullBit(oldp+579,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x61U]));
    bufp->fullBit(oldp+580,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x60U]));
    bufp->fullBit(oldp+581,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x26U]));
    bufp->fullBit(oldp+582,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x61U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x60U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                             [0x26U])));
    bufp->fullBit(oldp+583,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x61U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x60U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x60U] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                           [0x26U])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x26U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x61U]))));
    bufp->fullBit(oldp+584,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x62U]));
    bufp->fullBit(oldp+585,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x61U]));
    bufp->fullBit(oldp+586,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x26U]));
    bufp->fullBit(oldp+587,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x62U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x61U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x26U])));
    bufp->fullBit(oldp+588,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x62U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x61U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x61U] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x26U])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x26U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x62U]))));
    bufp->fullBit(oldp+589,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x4aU]));
    bufp->fullBit(oldp+590,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x62U]));
    bufp->fullBit(oldp+591,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x49U]));
    bufp->fullBit(oldp+592,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x4aU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x62U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x49U])));
    bufp->fullBit(oldp+593,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x4aU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x62U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x62U] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x49U])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x49U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x4aU]))));
    bufp->fullBit(oldp+594,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x65U]));
    bufp->fullBit(oldp+595,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x64U]));
    bufp->fullBit(oldp+596,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x7cU]));
    bufp->fullBit(oldp+597,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x65U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x64U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x7cU])));
    bufp->fullBit(oldp+598,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x65U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x64U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x64U] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x7cU])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x7cU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x65U]))));
    bufp->fullBit(oldp+599,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x66U]));
    bufp->fullBit(oldp+600,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x65U]));
    bufp->fullBit(oldp+601,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x7dU]));
    bufp->fullBit(oldp+602,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x66U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x65U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x7dU])));
    bufp->fullBit(oldp+603,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x66U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x65U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x65U] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x7dU])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x7dU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x66U]))));
    bufp->fullBit(oldp+604,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x67U]));
    bufp->fullBit(oldp+605,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x66U]));
    bufp->fullBit(oldp+606,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x7eU]));
    bufp->fullBit(oldp+607,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x67U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x66U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x7eU])));
    bufp->fullBit(oldp+608,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x67U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x66U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x66U] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x7eU])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x7eU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x67U]))));
    bufp->fullBit(oldp+609,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                   >> 0x16U))));
    bufp->fullBit(oldp+610,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                   >> 7U))));
    bufp->fullBit(oldp+611,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                   >> 0x18U))));
    bufp->fullBit(oldp+612,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                    >> 0x18U) ^ VL_REDXOR_32(
                                                             (0x400080U 
                                                              & vlSelf->top__DOT__mul_16_bit__DOT__pp[2U]))))));
    bufp->fullBit(oldp+613,((1U & (((IData)((0x400080U 
                                             == (0x400080U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[2U]))) 
                                    | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                        >> 7U) & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                                  >> 0x18U))) 
                                   | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                       >> 0x18U) & 
                                      (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                       >> 0x16U))))));
    bufp->fullBit(oldp+614,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x68U]));
    bufp->fullBit(oldp+615,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x67U]));
    bufp->fullBit(oldp+616,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x7fU]));
    bufp->fullBit(oldp+617,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x68U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x67U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x7fU])));
    bufp->fullBit(oldp+618,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x68U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x67U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x67U] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x7fU])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x7fU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x68U]))));
    bufp->fullBit(oldp+619,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x69U]));
    bufp->fullBit(oldp+620,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x68U]));
    bufp->fullBit(oldp+621,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x80U]));
    bufp->fullBit(oldp+622,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x69U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x68U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x80U])));
    bufp->fullBit(oldp+623,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x69U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x68U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x68U] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x80U])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x80U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x69U]))));
    bufp->fullBit(oldp+624,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x6aU]));
    bufp->fullBit(oldp+625,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x69U]));
    bufp->fullBit(oldp+626,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x81U]));
    bufp->fullBit(oldp+627,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x6aU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x69U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x81U])));
    bufp->fullBit(oldp+628,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x6aU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x69U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x69U] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x81U])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x81U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x6aU]))));
    bufp->fullBit(oldp+629,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x6bU]));
    bufp->fullBit(oldp+630,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x6aU]));
    bufp->fullBit(oldp+631,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x82U]));
    bufp->fullBit(oldp+632,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x6bU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x6aU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x82U])));
    bufp->fullBit(oldp+633,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x6bU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x6aU]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x6aU] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x82U])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x82U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x6bU]))));
    bufp->fullBit(oldp+634,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x6cU]));
    bufp->fullBit(oldp+635,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x6bU]));
    bufp->fullBit(oldp+636,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x83U]));
    bufp->fullBit(oldp+637,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x6cU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x6bU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x83U])));
    bufp->fullBit(oldp+638,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x6cU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x6bU]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x6bU] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x83U])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x83U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x6cU]))));
    bufp->fullBit(oldp+639,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x6dU]));
    bufp->fullBit(oldp+640,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x6cU]));
    bufp->fullBit(oldp+641,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x84U]));
    bufp->fullBit(oldp+642,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x6dU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x6cU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x84U])));
    bufp->fullBit(oldp+643,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x6dU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x6cU]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x6cU] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x84U])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x84U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x6dU]))));
    bufp->fullBit(oldp+644,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x6eU]));
    bufp->fullBit(oldp+645,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x6dU]));
    bufp->fullBit(oldp+646,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x85U]));
    bufp->fullBit(oldp+647,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x6eU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x6dU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x85U])));
    bufp->fullBit(oldp+648,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x6eU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x6dU]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x6dU] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x85U])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x85U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x6eU]))));
    bufp->fullBit(oldp+649,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x6fU]));
    bufp->fullBit(oldp+650,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x6eU]));
    bufp->fullBit(oldp+651,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x86U]));
    bufp->fullBit(oldp+652,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x6fU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x6eU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x86U])));
    bufp->fullBit(oldp+653,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x6fU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x6eU]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x6eU] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x86U])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x86U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x6fU]))));
    bufp->fullBit(oldp+654,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x70U]));
    bufp->fullBit(oldp+655,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x6fU]));
    bufp->fullBit(oldp+656,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x87U]));
    bufp->fullBit(oldp+657,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x70U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x6fU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x87U])));
    bufp->fullBit(oldp+658,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x70U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x6fU]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x6fU] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x87U])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x87U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x70U]))));
    bufp->fullBit(oldp+659,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x71U]));
    bufp->fullBit(oldp+660,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x70U]));
    bufp->fullBit(oldp+661,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x88U]));
    bufp->fullBit(oldp+662,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x71U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x70U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x88U])));
    bufp->fullBit(oldp+663,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x71U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x70U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x70U] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x88U])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x88U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x71U]))));
    bufp->fullBit(oldp+664,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                   >> 9U))));
    bufp->fullBit(oldp+665,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+666,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                   >> 0xbU))));
    bufp->fullBit(oldp+667,((1U & (VL_REDXOR_32((0x4000800U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[0U])) 
                                   ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                      >> 9U)))));
    bufp->fullBit(oldp+668,((1U & ((((vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                      >> 9U) & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                                >> 0x1aU)) 
                                    | (IData)((0x4000800U 
                                               == (0x4000800U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[0U])))) 
                                   | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                       >> 0xbU) & (
                                                   vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                                   >> 9U))))));
    bufp->fullBit(oldp+669,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x72U]));
    bufp->fullBit(oldp+670,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x71U]));
    bufp->fullBit(oldp+671,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x89U]));
    bufp->fullBit(oldp+672,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x72U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x71U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x89U])));
    bufp->fullBit(oldp+673,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x72U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x71U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x71U] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x89U])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x89U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x72U]))));
    bufp->fullBit(oldp+674,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x73U]));
    bufp->fullBit(oldp+675,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x72U]));
    bufp->fullBit(oldp+676,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x8aU]));
    bufp->fullBit(oldp+677,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x73U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x72U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x8aU])));
    bufp->fullBit(oldp+678,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x73U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x72U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x72U] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x8aU])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x8aU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x73U]))));
    bufp->fullBit(oldp+679,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x74U]));
    bufp->fullBit(oldp+680,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x73U]));
    bufp->fullBit(oldp+681,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x8bU]));
    bufp->fullBit(oldp+682,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x74U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x73U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x8bU])));
    bufp->fullBit(oldp+683,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x74U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x73U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x73U] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x8bU])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x8bU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x74U]))));
    bufp->fullBit(oldp+684,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x75U]));
    bufp->fullBit(oldp+685,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x74U]));
    bufp->fullBit(oldp+686,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x8cU]));
    bufp->fullBit(oldp+687,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x75U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x74U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x8cU])));
    bufp->fullBit(oldp+688,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x75U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x74U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x74U] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x8cU])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x8cU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x75U]))));
    bufp->fullBit(oldp+689,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x76U]));
    bufp->fullBit(oldp+690,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x75U]));
    bufp->fullBit(oldp+691,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x8dU]));
    bufp->fullBit(oldp+692,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x76U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x75U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x8dU])));
    bufp->fullBit(oldp+693,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x76U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x75U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x75U] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x8dU])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x8dU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x76U]))));
    bufp->fullBit(oldp+694,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x77U]));
    bufp->fullBit(oldp+695,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x76U]));
    bufp->fullBit(oldp+696,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x8eU]));
    bufp->fullBit(oldp+697,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x77U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x76U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x8eU])));
    bufp->fullBit(oldp+698,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x77U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x76U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x76U] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x8eU])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x8eU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x77U]))));
    bufp->fullBit(oldp+699,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x78U]));
    bufp->fullBit(oldp+700,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x77U]));
    bufp->fullBit(oldp+701,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x8fU]));
    bufp->fullBit(oldp+702,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x78U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x77U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x8fU])));
    bufp->fullBit(oldp+703,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x78U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x77U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x77U] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x8fU])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x8fU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x78U]))));
    bufp->fullBit(oldp+704,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x79U]));
    bufp->fullBit(oldp+705,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x78U]));
    bufp->fullBit(oldp+706,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x90U]));
    bufp->fullBit(oldp+707,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x79U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x78U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x90U])));
    bufp->fullBit(oldp+708,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x79U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x78U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x78U] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x90U])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x90U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x79U]))));
    bufp->fullBit(oldp+709,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x7aU]));
    bufp->fullBit(oldp+710,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x79U]));
    bufp->fullBit(oldp+711,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x91U]));
    bufp->fullBit(oldp+712,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x7aU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x79U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x91U])));
    bufp->fullBit(oldp+713,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x7aU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x79U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x79U] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x91U])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x91U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x7aU]))));
    bufp->fullBit(oldp+714,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                            [0x7bU]));
    bufp->fullBit(oldp+715,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x7aU]));
    bufp->fullBit(oldp+716,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x92U]));
    bufp->fullBit(oldp+717,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x7bU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x7aU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x92U])));
    bufp->fullBit(oldp+718,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x7bU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x7aU]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x7aU] 
                                           & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [0x92U])) 
                             | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x92U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x7bU]))));
    bufp->fullBit(oldp+719,((1U & vlSelf->top__DOT__mul_16_bit__DOT__pp[6U])));
    bufp->fullBit(oldp+720,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                   >> 0x11U))));
    bufp->fullBit(oldp+721,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                   >> 2U))));
    bufp->fullBit(oldp+722,((1U & (VL_REDXOR_32((0x20004U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[5U])) 
                                   ^ vlSelf->top__DOT__mul_16_bit__DOT__pp[6U]))));
    bufp->fullBit(oldp+723,((1U & (((vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                     & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                        >> 0x11U)) 
                                    | (IData)((0x20004U 
                                               == (0x20004U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[5U])))) 
                                   | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                       >> 2U) & vlSelf->top__DOT__mul_16_bit__DOT__pp[6U])))));
    bufp->fullBit(oldp+724,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+725,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                   >> 0xdU))));
    bufp->fullBit(oldp+726,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+727,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                    >> 0x1eU) ^ VL_REDXOR_32(
                                                             (0x10002000U 
                                                              & vlSelf->top__DOT__mul_16_bit__DOT__pp[6U]))))));
    bufp->fullBit(oldp+728,((1U & (((IData)((0x10002000U 
                                             == (0x10002000U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[6U]))) 
                                    | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                        >> 0xdU) & 
                                       (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                        >> 0x1eU))) 
                                   | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                       >> 0x1eU) & 
                                      (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                       >> 0x1cU))))));
    bufp->fullBit(oldp+729,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x25U]));
    bufp->fullBit(oldp+730,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [0x4dU]));
    bufp->fullBit(oldp+731,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                   >> 0xfU))));
    bufp->fullBit(oldp+732,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                    [0x25U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                    [0x4dU]) ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                                >> 0xfU)))));
    bufp->fullBit(oldp+733,((((vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x25U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x4dU]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                           [0x4dU] 
                                           & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                              >> 0xfU))) 
                             | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                 >> 0xfU) & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x25U]))));
    bufp->fullBit(oldp+734,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                            [0x4fU]));
    bufp->fullBit(oldp+735,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [0x4eU]));
    bufp->fullBit(oldp+736,((vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                             >> 0x1fU)));
    bufp->fullBit(oldp+737,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                    [0x4fU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                    [0x4eU]) ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                                >> 0x1fU)))));
    bufp->fullBit(oldp+738,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x4fU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x4eU]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                           [0x4eU] 
                                           & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                              >> 0x1fU))) 
                             | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                 >> 0x1fU) & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x4fU]))));
    bufp->fullBit(oldp+739,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+740,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                   >> 0xfU))));
    bufp->fullBit(oldp+741,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [0x4fU]));
    bufp->fullBit(oldp+742,((1U & (VL_REDXOR_32((0x40008000U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[7U])) 
                                   ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                   [0x4fU]))));
    bufp->fullBit(oldp+743,((1U & (((IData)((0x40008000U 
                                             == (0x40008000U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[7U]))) 
                                    | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                        >> 0xfU) & 
                                       vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                       [0x4fU])) | 
                                   (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                    [0x4fU] & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                               >> 0x1eU))))));
    bufp->fullBit(oldp+744,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x7bU]));
    bufp->fullBit(oldp+745,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                            [0x93U]));
    bufp->fullBit(oldp+746,((1U & ((~ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                    [0x7bU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                   [0x93U]))));
    bufp->fullBit(oldp+747,(((vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x7bU] | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                         [0x7bU] & 
                                         vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                         [0x93U])) 
                             | vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x93U])));
    bufp->fullBit(oldp+748,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                   >> 0x13U))));
    bufp->fullBit(oldp+749,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                   >> 4U))));
    bufp->fullBit(oldp+750,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                   >> 0x15U))));
    bufp->fullBit(oldp+751,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                    >> 0x15U) ^ VL_REDXOR_32(
                                                             (0x80010U 
                                                              & vlSelf->top__DOT__mul_16_bit__DOT__pp[4U]))))));
    bufp->fullBit(oldp+752,((1U & (((IData)((0x80010U 
                                             == (0x80010U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[4U]))) 
                                    | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                        >> 4U) & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                                  >> 0x15U))) 
                                   | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                       >> 0x15U) & 
                                      (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                       >> 0x13U))))));
    bufp->fullBit(oldp+753,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                   >> 6U))));
    bufp->fullBit(oldp+754,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                   >> 0x17U))));
    bufp->fullBit(oldp+755,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                   >> 8U))));
    bufp->fullBit(oldp+756,((1U & (VL_REDXOR_32((0x800100U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[2U])) 
                                   ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                      >> 6U)))));
    bufp->fullBit(oldp+757,((1U & ((((vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                      >> 6U) & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                                >> 0x17U)) 
                                    | (IData)((0x800100U 
                                               == (0x800100U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[2U])))) 
                                   | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                       >> 8U) & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                                 >> 6U))))));
    bufp->fullBit(oldp+758,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                   >> 0x19U))));
    bufp->fullBit(oldp+759,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                   >> 0xaU))));
    bufp->fullBit(oldp+760,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+761,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                    >> 0x1bU) ^ VL_REDXOR_32(
                                                             (0x2000400U 
                                                              & vlSelf->top__DOT__mul_16_bit__DOT__pp[1U]))))));
    bufp->fullBit(oldp+762,((1U & (((IData)((0x2000400U 
                                             == (0x2000400U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[1U]))) 
                                    | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                        >> 0xaU) & 
                                       (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                        >> 0x1bU))) 
                                   | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                       >> 0x1bU) & 
                                      (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                       >> 0x19U))))));
    bufp->fullBit(oldp+763,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                   >> 0x10U))));
    bufp->fullBit(oldp+764,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                   >> 1U))));
    bufp->fullBit(oldp+765,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                   >> 0x12U))));
    bufp->fullBit(oldp+766,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                    >> 0x12U) ^ VL_REDXOR_32(
                                                             (0x10002U 
                                                              & vlSelf->top__DOT__mul_16_bit__DOT__pp[6U]))))));
    bufp->fullBit(oldp+767,((1U & (((IData)((0x10002U 
                                             == (0x10002U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[6U]))) 
                                    | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                        >> 1U) & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                                  >> 0x12U))) 
                                   | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                       >> 0x12U) & 
                                      (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                       >> 0x10U))))));
    bufp->fullBit(oldp+768,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                   >> 3U))));
    bufp->fullBit(oldp+769,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                   >> 0x14U))));
    bufp->fullBit(oldp+770,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                   >> 5U))));
    bufp->fullBit(oldp+771,((1U & (VL_REDXOR_32((0x100020U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[4U])) 
                                   ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                      >> 3U)))));
    bufp->fullBit(oldp+772,((1U & ((((vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                      >> 3U) & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                                >> 0x14U)) 
                                    | (IData)((0x100020U 
                                               == (0x100020U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[4U])))) 
                                   | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                       >> 5U) & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                                 >> 3U))))));
    bufp->fullBit(oldp+773,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                   >> 0x16U))));
    bufp->fullBit(oldp+774,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                   >> 7U))));
    bufp->fullBit(oldp+775,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                   >> 0x18U))));
    bufp->fullBit(oldp+776,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                    >> 0x18U) ^ VL_REDXOR_32(
                                                             (0x400080U 
                                                              & vlSelf->top__DOT__mul_16_bit__DOT__pp[3U]))))));
    bufp->fullBit(oldp+777,((1U & (((IData)((0x400080U 
                                             == (0x400080U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[3U]))) 
                                    | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                        >> 7U) & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                                  >> 0x18U))) 
                                   | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                       >> 0x18U) & 
                                      (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                       >> 0x16U))))));
    bufp->fullBit(oldp+778,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                   >> 9U))));
    bufp->fullBit(oldp+779,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+780,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                   >> 0xbU))));
    bufp->fullBit(oldp+781,((1U & (VL_REDXOR_32((0x4000800U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[1U])) 
                                   ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                      >> 9U)))));
    bufp->fullBit(oldp+782,((1U & ((((vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                      >> 9U) & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                                >> 0x1aU)) 
                                    | (IData)((0x4000800U 
                                               == (0x4000800U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[1U])))) 
                                   | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                       >> 0xbU) & (
                                                   vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                                   >> 9U))))));
    bufp->fullBit(oldp+783,((1U & vlSelf->top__DOT__mul_16_bit__DOT__pp[7U])));
    bufp->fullBit(oldp+784,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                   >> 0x11U))));
    bufp->fullBit(oldp+785,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                   >> 2U))));
    bufp->fullBit(oldp+786,((1U & (VL_REDXOR_32((0x20004U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[6U])) 
                                   ^ vlSelf->top__DOT__mul_16_bit__DOT__pp[7U]))));
    bufp->fullBit(oldp+787,((1U & (((vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                     & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                        >> 0x11U)) 
                                    | (IData)((0x20004U 
                                               == (0x20004U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[6U])))) 
                                   | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                       >> 2U) & vlSelf->top__DOT__mul_16_bit__DOT__pp[7U])))));
    bufp->fullBit(oldp+788,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                   >> 0x13U))));
    bufp->fullBit(oldp+789,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                   >> 4U))));
    bufp->fullBit(oldp+790,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                   >> 0x15U))));
    bufp->fullBit(oldp+791,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                    >> 0x15U) ^ VL_REDXOR_32(
                                                             (0x80010U 
                                                              & vlSelf->top__DOT__mul_16_bit__DOT__pp[5U]))))));
    bufp->fullBit(oldp+792,((1U & (((IData)((0x80010U 
                                             == (0x80010U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[5U]))) 
                                    | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                        >> 4U) & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                                  >> 0x15U))) 
                                   | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                       >> 0x15U) & 
                                      (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                       >> 0x13U))))));
    bufp->fullBit(oldp+793,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                   >> 6U))));
    bufp->fullBit(oldp+794,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                   >> 0x17U))));
    bufp->fullBit(oldp+795,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                   >> 8U))));
    bufp->fullBit(oldp+796,((1U & (VL_REDXOR_32((0x800100U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[3U])) 
                                   ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                      >> 6U)))));
    bufp->fullBit(oldp+797,((1U & ((((vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                      >> 6U) & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                                >> 0x17U)) 
                                    | (IData)((0x800100U 
                                               == (0x800100U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[3U])))) 
                                   | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                       >> 8U) & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                                 >> 6U))))));
    bufp->fullBit(oldp+798,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                   >> 0x19U))));
    bufp->fullBit(oldp+799,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                   >> 0xaU))));
    bufp->fullBit(oldp+800,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+801,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                    >> 0x1bU) ^ VL_REDXOR_32(
                                                             (0x2000400U 
                                                              & vlSelf->top__DOT__mul_16_bit__DOT__pp[2U]))))));
    bufp->fullBit(oldp+802,((1U & (((IData)((0x2000400U 
                                             == (0x2000400U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[2U]))) 
                                    | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                        >> 0xaU) & 
                                       (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                        >> 0x1bU))) 
                                   | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                       >> 0x1bU) & 
                                      (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                       >> 0x19U))))));
    bufp->fullBit(oldp+803,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                   >> 0xcU))));
    bufp->fullBit(oldp+804,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+805,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                   >> 0xeU))));
    bufp->fullBit(oldp+806,((1U & (VL_REDXOR_32((0x20004000U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[0U])) 
                                   ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                      >> 0xcU)))));
    bufp->fullBit(oldp+807,((1U & ((((vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                      >> 0xcU) & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                                  >> 0x1dU)) 
                                    | (IData)((0x20004000U 
                                               == (0x20004000U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[0U])))) 
                                   | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                       >> 0xeU) & (
                                                   vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                                   >> 0xcU))))));
    bufp->fullBit(oldp+808,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                   >> 0x10U))));
    bufp->fullBit(oldp+809,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                   >> 1U))));
    bufp->fullBit(oldp+810,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                   >> 0x12U))));
    bufp->fullBit(oldp+811,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                    >> 0x12U) ^ VL_REDXOR_32(
                                                             (0x10002U 
                                                              & vlSelf->top__DOT__mul_16_bit__DOT__pp[7U]))))));
    bufp->fullBit(oldp+812,((1U & (((IData)((0x10002U 
                                             == (0x10002U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[7U]))) 
                                    | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                        >> 1U) & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                                  >> 0x12U))) 
                                   | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                       >> 0x12U) & 
                                      (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                       >> 0x10U))))));
    bufp->fullBit(oldp+813,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                   >> 3U))));
    bufp->fullBit(oldp+814,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                   >> 0x14U))));
    bufp->fullBit(oldp+815,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                   >> 5U))));
    bufp->fullBit(oldp+816,((1U & (VL_REDXOR_32((0x100020U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[5U])) 
                                   ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                      >> 3U)))));
    bufp->fullBit(oldp+817,((1U & ((((vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                      >> 3U) & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                                >> 0x14U)) 
                                    | (IData)((0x100020U 
                                               == (0x100020U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[5U])))) 
                                   | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                       >> 5U) & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                                 >> 3U))))));
    bufp->fullBit(oldp+818,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                   >> 0x16U))));
    bufp->fullBit(oldp+819,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                   >> 7U))));
    bufp->fullBit(oldp+820,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                   >> 0x18U))));
    bufp->fullBit(oldp+821,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                    >> 0x18U) ^ VL_REDXOR_32(
                                                             (0x400080U 
                                                              & vlSelf->top__DOT__mul_16_bit__DOT__pp[4U]))))));
    bufp->fullBit(oldp+822,((1U & (((IData)((0x400080U 
                                             == (0x400080U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[4U]))) 
                                    | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                        >> 7U) & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                                  >> 0x18U))) 
                                   | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                       >> 0x18U) & 
                                      (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                       >> 0x16U))))));
    bufp->fullBit(oldp+823,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                   >> 9U))));
    bufp->fullBit(oldp+824,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+825,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                   >> 0xbU))));
    bufp->fullBit(oldp+826,((1U & (VL_REDXOR_32((0x4000800U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[2U])) 
                                   ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                      >> 9U)))));
    bufp->fullBit(oldp+827,((1U & ((((vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                      >> 9U) & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                                >> 0x1aU)) 
                                    | (IData)((0x4000800U 
                                               == (0x4000800U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[2U])))) 
                                   | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                       >> 0xbU) & (
                                                   vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                                   >> 9U))))));
    bufp->fullBit(oldp+828,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+829,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                   >> 0xdU))));
    bufp->fullBit(oldp+830,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+831,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                    >> 0x1eU) ^ VL_REDXOR_32(
                                                             (0x10002000U 
                                                              & vlSelf->top__DOT__mul_16_bit__DOT__pp[1U]))))));
    bufp->fullBit(oldp+832,((1U & (((IData)((0x10002000U 
                                             == (0x10002000U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[1U]))) 
                                    | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                        >> 0xdU) & 
                                       (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                        >> 0x1eU))) 
                                   | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                       >> 0x1eU) & 
                                      (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                       >> 0x1cU))))));
    bufp->fullBit(oldp+833,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                   >> 0x11U))));
    bufp->fullBit(oldp+834,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                   >> 2U))));
    bufp->fullBit(oldp+835,((1U & (~ VL_REDXOR_32((0x20004U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[7U]))))));
    bufp->fullBit(oldp+836,((1U & (IData)(((0U != (0x20004U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[7U])) 
                                           | (0x20004U 
                                              == (0x20004U 
                                                  & vlSelf->top__DOT__mul_16_bit__DOT__pp[7U])))))));
    bufp->fullBit(oldp+837,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                   >> 0x13U))));
    bufp->fullBit(oldp+838,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                   >> 4U))));
    bufp->fullBit(oldp+839,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                   >> 0x15U))));
    bufp->fullBit(oldp+840,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                    >> 0x15U) ^ VL_REDXOR_32(
                                                             (0x80010U 
                                                              & vlSelf->top__DOT__mul_16_bit__DOT__pp[6U]))))));
    bufp->fullBit(oldp+841,((1U & (((IData)((0x80010U 
                                             == (0x80010U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[6U]))) 
                                    | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                        >> 4U) & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                                  >> 0x15U))) 
                                   | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                       >> 0x15U) & 
                                      (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                       >> 0x13U))))));
    bufp->fullBit(oldp+842,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                   >> 6U))));
    bufp->fullBit(oldp+843,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                   >> 0x17U))));
    bufp->fullBit(oldp+844,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                   >> 8U))));
    bufp->fullBit(oldp+845,((1U & (VL_REDXOR_32((0x800100U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[4U])) 
                                   ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                      >> 6U)))));
    bufp->fullBit(oldp+846,((1U & ((((vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                      >> 6U) & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                                >> 0x17U)) 
                                    | (IData)((0x800100U 
                                               == (0x800100U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[4U])))) 
                                   | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                       >> 8U) & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                                 >> 6U))))));
    bufp->fullBit(oldp+847,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                   >> 0x19U))));
    bufp->fullBit(oldp+848,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                   >> 0xaU))));
    bufp->fullBit(oldp+849,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+850,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                    >> 0x1bU) ^ VL_REDXOR_32(
                                                             (0x2000400U 
                                                              & vlSelf->top__DOT__mul_16_bit__DOT__pp[3U]))))));
    bufp->fullBit(oldp+851,((1U & (((IData)((0x2000400U 
                                             == (0x2000400U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[3U]))) 
                                    | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                        >> 0xaU) & 
                                       (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                        >> 0x1bU))) 
                                   | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                       >> 0x1bU) & 
                                      (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                       >> 0x19U))))));
    bufp->fullBit(oldp+852,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                   >> 0xcU))));
    bufp->fullBit(oldp+853,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+854,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                   >> 0xeU))));
    bufp->fullBit(oldp+855,((1U & (VL_REDXOR_32((0x20004000U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[1U])) 
                                   ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                      >> 0xcU)))));
    bufp->fullBit(oldp+856,((1U & ((((vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                      >> 0xcU) & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                                  >> 0x1dU)) 
                                    | (IData)((0x20004000U 
                                               == (0x20004000U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[1U])))) 
                                   | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                       >> 0xeU) & (
                                                   vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                                   >> 0xcU))))));
    bufp->fullBit(oldp+857,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                   >> 3U))));
    bufp->fullBit(oldp+858,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                   >> 0x14U))));
    bufp->fullBit(oldp+859,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                   >> 5U))));
    bufp->fullBit(oldp+860,((1U & (VL_REDXOR_32((0x100020U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[6U])) 
                                   ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                      >> 3U)))));
    bufp->fullBit(oldp+861,((1U & ((((vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                      >> 3U) & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                                >> 0x14U)) 
                                    | (IData)((0x100020U 
                                               == (0x100020U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[6U])))) 
                                   | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                       >> 5U) & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                                 >> 3U))))));
    bufp->fullBit(oldp+862,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                   >> 0x16U))));
    bufp->fullBit(oldp+863,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                   >> 7U))));
    bufp->fullBit(oldp+864,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                   >> 0x18U))));
    bufp->fullBit(oldp+865,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                    >> 0x18U) ^ VL_REDXOR_32(
                                                             (0x400080U 
                                                              & vlSelf->top__DOT__mul_16_bit__DOT__pp[5U]))))));
    bufp->fullBit(oldp+866,((1U & (((IData)((0x400080U 
                                             == (0x400080U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[5U]))) 
                                    | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                        >> 7U) & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                                  >> 0x18U))) 
                                   | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                       >> 0x18U) & 
                                      (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                       >> 0x16U))))));
    bufp->fullBit(oldp+867,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                   >> 9U))));
    bufp->fullBit(oldp+868,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+869,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                   >> 0xbU))));
    bufp->fullBit(oldp+870,((1U & (VL_REDXOR_32((0x4000800U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[3U])) 
                                   ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                      >> 9U)))));
    bufp->fullBit(oldp+871,((1U & ((((vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                      >> 9U) & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                                >> 0x1aU)) 
                                    | (IData)((0x4000800U 
                                               == (0x4000800U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[3U])))) 
                                   | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                       >> 0xbU) & (
                                                   vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                                   >> 9U))))));
    bufp->fullBit(oldp+872,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+873,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                   >> 0xdU))));
    bufp->fullBit(oldp+874,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+875,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                    >> 0x1eU) ^ VL_REDXOR_32(
                                                             (0x10002000U 
                                                              & vlSelf->top__DOT__mul_16_bit__DOT__pp[2U]))))));
    bufp->fullBit(oldp+876,((1U & (((IData)((0x10002000U 
                                             == (0x10002000U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[2U]))) 
                                    | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                        >> 0xdU) & 
                                       (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                        >> 0x1eU))) 
                                   | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                       >> 0x1eU) & 
                                      (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                       >> 0x1cU))))));
    bufp->fullBit(oldp+877,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                   >> 0x13U))));
    bufp->fullBit(oldp+878,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                   >> 4U))));
    bufp->fullBit(oldp+879,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                   >> 0x15U))));
    bufp->fullBit(oldp+880,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                    >> 0x15U) ^ VL_REDXOR_32(
                                                             (0x80010U 
                                                              & vlSelf->top__DOT__mul_16_bit__DOT__pp[7U]))))));
    bufp->fullBit(oldp+881,((1U & (((IData)((0x80010U 
                                             == (0x80010U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[7U]))) 
                                    | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                        >> 4U) & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                                  >> 0x15U))) 
                                   | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                       >> 0x15U) & 
                                      (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                       >> 0x13U))))));
    bufp->fullBit(oldp+882,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                   >> 6U))));
    bufp->fullBit(oldp+883,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                   >> 0x17U))));
    bufp->fullBit(oldp+884,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                   >> 8U))));
    bufp->fullBit(oldp+885,((1U & (VL_REDXOR_32((0x800100U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[5U])) 
                                   ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                      >> 6U)))));
    bufp->fullBit(oldp+886,((1U & ((((vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                      >> 6U) & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                                >> 0x17U)) 
                                    | (IData)((0x800100U 
                                               == (0x800100U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[5U])))) 
                                   | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                       >> 8U) & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                                 >> 6U))))));
    bufp->fullBit(oldp+887,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                   >> 0x19U))));
    bufp->fullBit(oldp+888,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                   >> 0xaU))));
    bufp->fullBit(oldp+889,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+890,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                    >> 0x1bU) ^ VL_REDXOR_32(
                                                             (0x2000400U 
                                                              & vlSelf->top__DOT__mul_16_bit__DOT__pp[4U]))))));
    bufp->fullBit(oldp+891,((1U & (((IData)((0x2000400U 
                                             == (0x2000400U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[4U]))) 
                                    | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                        >> 0xaU) & 
                                       (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                        >> 0x1bU))) 
                                   | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                       >> 0x1bU) & 
                                      (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                       >> 0x19U))))));
    bufp->fullBit(oldp+892,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                   >> 0xcU))));
    bufp->fullBit(oldp+893,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+894,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                   >> 0xeU))));
    bufp->fullBit(oldp+895,((1U & (VL_REDXOR_32((0x20004000U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[2U])) 
                                   ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                      >> 0xcU)))));
    bufp->fullBit(oldp+896,((1U & ((((vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                      >> 0xcU) & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                                  >> 0x1dU)) 
                                    | (IData)((0x20004000U 
                                               == (0x20004000U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[2U])))) 
                                   | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                       >> 0xeU) & (
                                                   vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                                   >> 0xcU))))));
    bufp->fullBit(oldp+897,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                   >> 0x16U))));
    bufp->fullBit(oldp+898,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                   >> 7U))));
    bufp->fullBit(oldp+899,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                   >> 0x18U))));
    bufp->fullBit(oldp+900,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                    >> 0x18U) ^ VL_REDXOR_32(
                                                             (0x400080U 
                                                              & vlSelf->top__DOT__mul_16_bit__DOT__pp[6U]))))));
    bufp->fullBit(oldp+901,((1U & (((IData)((0x400080U 
                                             == (0x400080U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[6U]))) 
                                    | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                        >> 7U) & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                                  >> 0x18U))) 
                                   | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                       >> 0x18U) & 
                                      (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                       >> 0x16U))))));
    bufp->fullBit(oldp+902,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                   >> 9U))));
    bufp->fullBit(oldp+903,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+904,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                   >> 0xbU))));
    bufp->fullBit(oldp+905,((1U & (VL_REDXOR_32((0x4000800U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[4U])) 
                                   ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                      >> 9U)))));
    bufp->fullBit(oldp+906,((1U & ((((vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                      >> 9U) & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                                >> 0x1aU)) 
                                    | (IData)((0x4000800U 
                                               == (0x4000800U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[4U])))) 
                                   | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                       >> 0xbU) & (
                                                   vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                                   >> 9U))))));
    bufp->fullBit(oldp+907,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+908,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                   >> 0xdU))));
    bufp->fullBit(oldp+909,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+910,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                    >> 0x1eU) ^ VL_REDXOR_32(
                                                             (0x10002000U 
                                                              & vlSelf->top__DOT__mul_16_bit__DOT__pp[3U]))))));
    bufp->fullBit(oldp+911,((1U & (((IData)((0x10002000U 
                                             == (0x10002000U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[3U]))) 
                                    | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                        >> 0xdU) & 
                                       (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                        >> 0x1eU))) 
                                   | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                       >> 0x1eU) & 
                                      (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                       >> 0x1cU))))));
    bufp->fullBit(oldp+912,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                   >> 6U))));
    bufp->fullBit(oldp+913,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                   >> 0x17U))));
    bufp->fullBit(oldp+914,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                   >> 8U))));
    bufp->fullBit(oldp+915,((1U & (VL_REDXOR_32((0x800100U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[6U])) 
                                   ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                      >> 6U)))));
    bufp->fullBit(oldp+916,((1U & ((((vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                      >> 6U) & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                                >> 0x17U)) 
                                    | (IData)((0x800100U 
                                               == (0x800100U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[6U])))) 
                                   | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                       >> 8U) & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                                 >> 6U))))));
    bufp->fullBit(oldp+917,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                   >> 0x19U))));
    bufp->fullBit(oldp+918,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                   >> 0xaU))));
    bufp->fullBit(oldp+919,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+920,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                    >> 0x1bU) ^ VL_REDXOR_32(
                                                             (0x2000400U 
                                                              & vlSelf->top__DOT__mul_16_bit__DOT__pp[5U]))))));
    bufp->fullBit(oldp+921,((1U & (((IData)((0x2000400U 
                                             == (0x2000400U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[5U]))) 
                                    | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                        >> 0xaU) & 
                                       (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                        >> 0x1bU))) 
                                   | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                       >> 0x1bU) & 
                                      (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                       >> 0x19U))))));
    bufp->fullBit(oldp+922,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                   >> 0xcU))));
    bufp->fullBit(oldp+923,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+924,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                   >> 0xeU))));
    bufp->fullBit(oldp+925,((1U & (VL_REDXOR_32((0x20004000U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[3U])) 
                                   ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                      >> 0xcU)))));
    bufp->fullBit(oldp+926,((1U & ((((vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                      >> 0xcU) & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                                  >> 0x1dU)) 
                                    | (IData)((0x20004000U 
                                               == (0x20004000U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[3U])))) 
                                   | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                       >> 0xeU) & (
                                                   vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                                   >> 0xcU))))));
    bufp->fullBit(oldp+927,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                   >> 0x16U))));
    bufp->fullBit(oldp+928,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                   >> 7U))));
    bufp->fullBit(oldp+929,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                   >> 0x18U))));
    bufp->fullBit(oldp+930,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                    >> 0x18U) ^ VL_REDXOR_32(
                                                             (0x400080U 
                                                              & vlSelf->top__DOT__mul_16_bit__DOT__pp[7U]))))));
    bufp->fullBit(oldp+931,((1U & (((IData)((0x400080U 
                                             == (0x400080U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[7U]))) 
                                    | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                        >> 7U) & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                                  >> 0x18U))) 
                                   | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                       >> 0x18U) & 
                                      (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                       >> 0x16U))))));
    bufp->fullBit(oldp+932,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                   >> 9U))));
    bufp->fullBit(oldp+933,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+934,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                   >> 0xbU))));
    bufp->fullBit(oldp+935,((1U & (VL_REDXOR_32((0x4000800U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[5U])) 
                                   ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                      >> 9U)))));
    bufp->fullBit(oldp+936,((1U & ((((vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                      >> 9U) & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                                >> 0x1aU)) 
                                    | (IData)((0x4000800U 
                                               == (0x4000800U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[5U])))) 
                                   | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                       >> 0xbU) & (
                                                   vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                                   >> 9U))))));
    bufp->fullBit(oldp+937,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+938,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                   >> 0xdU))));
    bufp->fullBit(oldp+939,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+940,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                    >> 0x1eU) ^ VL_REDXOR_32(
                                                             (0x10002000U 
                                                              & vlSelf->top__DOT__mul_16_bit__DOT__pp[4U]))))));
    bufp->fullBit(oldp+941,((1U & (((IData)((0x10002000U 
                                             == (0x10002000U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[4U]))) 
                                    | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                        >> 0xdU) & 
                                       (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                        >> 0x1eU))) 
                                   | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                       >> 0x1eU) & 
                                      (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                       >> 0x1cU))))));
    bufp->fullBit(oldp+942,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                   >> 0x19U))));
    bufp->fullBit(oldp+943,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                   >> 0xaU))));
    bufp->fullBit(oldp+944,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+945,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                    >> 0x1bU) ^ VL_REDXOR_32(
                                                             (0x2000400U 
                                                              & vlSelf->top__DOT__mul_16_bit__DOT__pp[6U]))))));
    bufp->fullBit(oldp+946,((1U & (((IData)((0x2000400U 
                                             == (0x2000400U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[6U]))) 
                                    | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                        >> 0xaU) & 
                                       (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                        >> 0x1bU))) 
                                   | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                       >> 0x1bU) & 
                                      (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                       >> 0x19U))))));
    bufp->fullBit(oldp+947,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                   >> 0xcU))));
    bufp->fullBit(oldp+948,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+949,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                   >> 0xeU))));
    bufp->fullBit(oldp+950,((1U & (VL_REDXOR_32((0x20004000U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[4U])) 
                                   ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                      >> 0xcU)))));
    bufp->fullBit(oldp+951,((1U & ((((vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                      >> 0xcU) & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                                  >> 0x1dU)) 
                                    | (IData)((0x20004000U 
                                               == (0x20004000U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[4U])))) 
                                   | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                       >> 0xeU) & (
                                                   vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                                   >> 0xcU))))));
    bufp->fullBit(oldp+952,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                   >> 9U))));
    bufp->fullBit(oldp+953,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+954,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                   >> 0xbU))));
    bufp->fullBit(oldp+955,((1U & (VL_REDXOR_32((0x4000800U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[6U])) 
                                   ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                      >> 9U)))));
    bufp->fullBit(oldp+956,((1U & ((((vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                      >> 9U) & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                                >> 0x1aU)) 
                                    | (IData)((0x4000800U 
                                               == (0x4000800U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[6U])))) 
                                   | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                       >> 0xbU) & (
                                                   vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                                   >> 9U))))));
    bufp->fullBit(oldp+957,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+958,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                   >> 0xdU))));
    bufp->fullBit(oldp+959,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+960,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                    >> 0x1eU) ^ VL_REDXOR_32(
                                                             (0x10002000U 
                                                              & vlSelf->top__DOT__mul_16_bit__DOT__pp[5U]))))));
    bufp->fullBit(oldp+961,((1U & (((IData)((0x10002000U 
                                             == (0x10002000U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[5U]))) 
                                    | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                        >> 0xdU) & 
                                       (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                        >> 0x1eU))) 
                                   | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                       >> 0x1eU) & 
                                      (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                       >> 0x1cU))))));
    bufp->fullBit(oldp+962,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                   >> 0x19U))));
    bufp->fullBit(oldp+963,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                   >> 0xaU))));
    bufp->fullBit(oldp+964,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+965,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                    >> 0x1bU) ^ VL_REDXOR_32(
                                                             (0x2000400U 
                                                              & vlSelf->top__DOT__mul_16_bit__DOT__pp[7U]))))));
    bufp->fullBit(oldp+966,((1U & (((IData)((0x2000400U 
                                             == (0x2000400U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[7U]))) 
                                    | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                        >> 0xaU) & 
                                       (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                        >> 0x1bU))) 
                                   | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                       >> 0x1bU) & 
                                      (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                       >> 0x19U))))));
    bufp->fullBit(oldp+967,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                   >> 0xcU))));
    bufp->fullBit(oldp+968,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+969,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                   >> 0xeU))));
    bufp->fullBit(oldp+970,((1U & (VL_REDXOR_32((0x20004000U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[5U])) 
                                   ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                      >> 0xcU)))));
    bufp->fullBit(oldp+971,((1U & ((((vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                      >> 0xcU) & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                                  >> 0x1dU)) 
                                    | (IData)((0x20004000U 
                                               == (0x20004000U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[5U])))) 
                                   | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                       >> 0xeU) & (
                                                   vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                                   >> 0xcU))))));
    bufp->fullBit(oldp+972,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                   >> 0xcU))));
    bufp->fullBit(oldp+973,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+974,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                   >> 0xeU))));
    bufp->fullBit(oldp+975,((1U & (VL_REDXOR_32((0x20004000U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[6U])) 
                                   ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                      >> 0xcU)))));
    bufp->fullBit(oldp+976,((1U & ((((vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                      >> 0xcU) & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                                  >> 0x1dU)) 
                                    | (IData)((0x20004000U 
                                               == (0x20004000U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[6U])))) 
                                   | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                       >> 0xeU) & (
                                                   vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                                   >> 0xcU))))));
    bufp->fullBit(oldp+977,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+978,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                   >> 0xdU))));
    bufp->fullBit(oldp+979,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+980,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                    >> 0x1eU) ^ VL_REDXOR_32(
                                                             (0x10002000U 
                                                              & vlSelf->top__DOT__mul_16_bit__DOT__pp[7U]))))));
    bufp->fullBit(oldp+981,((1U & (((IData)((0x10002000U 
                                             == (0x10002000U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[7U]))) 
                                    | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                        >> 0xdU) & 
                                       (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                        >> 0x1eU))) 
                                   | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                       >> 0x1eU) & 
                                      (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                       >> 0x1cU))))));
    bufp->fullBit(oldp+982,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                            [2U]));
    bufp->fullBit(oldp+983,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [1U]));
    bufp->fullBit(oldp+984,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                   >> 3U))));
    bufp->fullBit(oldp+985,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                    [2U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                    [1U]) ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                             >> 3U)))));
    bufp->fullBit(oldp+986,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [2U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [1U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                        [1U] & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                                >> 3U))) 
                             | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                 >> 3U) & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [2U]))));
    bufp->fullBit(oldp+987,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                            [3U]));
    bufp->fullBit(oldp+988,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                            [4U]));
    bufp->fullBit(oldp+989,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [2U]));
    bufp->fullBit(oldp+990,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [3U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [4U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [2U])));
    bufp->fullBit(oldp+991,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [3U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [4U]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                        [4U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                        [2U])) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                                  [2U] 
                                                  & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                                  [3U]))));
    bufp->fullBit(oldp+992,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                            [5U]));
    bufp->fullBit(oldp+993,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                            [6U]));
    bufp->fullBit(oldp+994,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [3U]));
    bufp->fullBit(oldp+995,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [5U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [6U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [3U])));
    bufp->fullBit(oldp+996,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [5U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [6U]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                        [6U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                        [3U])) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                                  [3U] 
                                                  & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                                  [5U]))));
    bufp->fullBit(oldp+997,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                            [7U]));
    bufp->fullBit(oldp+998,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                            [8U]));
    bufp->fullBit(oldp+999,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                            [5U]));
    bufp->fullBit(oldp+1000,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [7U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [8U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [5U])));
    bufp->fullBit(oldp+1001,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [7U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [8U]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                         [8U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                         [5U])) | (
                                                   vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                                   [5U] 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                                   [7U]))));
    bufp->fullBit(oldp+1002,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [9U]));
    bufp->fullBit(oldp+1003,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0xaU]));
    bufp->fullBit(oldp+1004,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0xbU]));
    bufp->fullBit(oldp+1005,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [9U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0xaU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0xbU])));
    bufp->fullBit(oldp+1006,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [9U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0xaU]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                           [0xaU] & 
                                           vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                           [0xbU])) 
                              | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0xbU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [9U]))));
    bufp->fullBit(oldp+1007,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0xcU]));
    bufp->fullBit(oldp+1008,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0xdU]));
    bufp->fullBit(oldp+1009,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0xeU]));
    bufp->fullBit(oldp+1010,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0xcU] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0xdU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0xeU])));
    bufp->fullBit(oldp+1011,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0xcU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0xdU]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                           [0xdU] & 
                                           vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                           [0xeU])) 
                              | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0xeU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0xcU]))));
    bufp->fullBit(oldp+1012,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [9U]));
    bufp->fullBit(oldp+1013,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0xaU]));
    bufp->fullBit(oldp+1014,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0xbU]));
    bufp->fullBit(oldp+1015,(((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [9U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0xaU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0xbU])));
    bufp->fullBit(oldp+1016,((((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [9U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0xaU]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                           [0xaU] & 
                                           vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                           [0xbU])) 
                              | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0xbU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [9U]))));
    bufp->fullBit(oldp+1017,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0xfU]));
    bufp->fullBit(oldp+1018,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0x10U]));
    bufp->fullBit(oldp+1019,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0x11U]));
    bufp->fullBit(oldp+1020,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0xfU] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x10U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x11U])));
    bufp->fullBit(oldp+1021,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0xfU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x10U]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                            [0x10U] 
                                            & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                            [0x11U])) 
                              | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x11U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0xfU]))));
    bufp->fullBit(oldp+1022,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0xcU]));
    bufp->fullBit(oldp+1023,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0xdU]));
    bufp->fullBit(oldp+1024,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0xeU]));
    bufp->fullBit(oldp+1025,(((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0xcU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0xdU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0xeU])));
    bufp->fullBit(oldp+1026,((((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0xcU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0xdU]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                           [0xdU] & 
                                           vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                           [0xeU])) 
                              | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0xeU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0xcU]))));
    bufp->fullBit(oldp+1027,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0x12U]));
    bufp->fullBit(oldp+1028,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0x13U]));
    bufp->fullBit(oldp+1029,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0x14U]));
    bufp->fullBit(oldp+1030,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x12U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x13U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x14U])));
    bufp->fullBit(oldp+1031,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x12U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x13U]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                            [0x13U] 
                                            & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                            [0x14U])) 
                              | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x14U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x12U]))));
    bufp->fullBit(oldp+1032,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0x15U]));
    bufp->fullBit(oldp+1033,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0xfU]));
    bufp->fullBit(oldp+1034,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0x10U]));
    bufp->fullBit(oldp+1035,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x15U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0xfU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x10U])));
    bufp->fullBit(oldp+1036,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x15U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0xfU]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                           [0xfU] & 
                                           vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                           [0x10U])) 
                              | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x10U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x15U]))));
    bufp->fullBit(oldp+1037,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0x16U]));
    bufp->fullBit(oldp+1038,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0x17U]));
    bufp->fullBit(oldp+1039,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0x18U]));
    bufp->fullBit(oldp+1040,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x16U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x17U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x18U])));
    bufp->fullBit(oldp+1041,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x16U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x17U]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                            [0x17U] 
                                            & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                            [0x18U])) 
                              | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x18U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x16U]))));
    bufp->fullBit(oldp+1042,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0x19U]));
    bufp->fullBit(oldp+1043,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0x12U]));
    bufp->fullBit(oldp+1044,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0x13U]));
    bufp->fullBit(oldp+1045,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x19U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x12U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x13U])));
    bufp->fullBit(oldp+1046,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x19U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x12U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                            [0x12U] 
                                            & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                            [0x13U])) 
                              | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x13U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x19U]))));
    bufp->fullBit(oldp+1047,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0x1aU]));
    bufp->fullBit(oldp+1048,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0x1bU]));
    bufp->fullBit(oldp+1049,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0x1cU]));
    bufp->fullBit(oldp+1050,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x1aU] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x1bU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x1cU])));
    bufp->fullBit(oldp+1051,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x1aU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x1bU]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                            [0x1bU] 
                                            & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                            [0x1cU])) 
                              | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x1cU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x1aU]))));
    bufp->fullBit(oldp+1052,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0x1dU]));
    bufp->fullBit(oldp+1053,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0x16U]));
    bufp->fullBit(oldp+1054,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0x17U]));
    bufp->fullBit(oldp+1055,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x1dU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x16U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x17U])));
    bufp->fullBit(oldp+1056,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x1dU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x16U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                            [0x16U] 
                                            & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                            [0x17U])) 
                              | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x17U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x1dU]))));
    bufp->fullBit(oldp+1057,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0x18U]));
    bufp->fullBit(oldp+1058,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0x19U]));
    bufp->fullBit(oldp+1059,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                    >> 0xcU))));
    bufp->fullBit(oldp+1060,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                     [0x18U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                     [0x19U]) ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                                 >> 0xcU)))));
    bufp->fullBit(oldp+1061,((((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x18U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x19U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                            [0x19U] 
                                            & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                               >> 0xcU))) 
                              | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                  >> 0xcU) & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x18U]))));
    bufp->fullBit(oldp+1062,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0x1eU]));
    bufp->fullBit(oldp+1063,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0x1fU]));
    bufp->fullBit(oldp+1064,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0x20U]));
    bufp->fullBit(oldp+1065,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x1eU] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x1fU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x20U])));
    bufp->fullBit(oldp+1066,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x1eU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x1fU]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                            [0x1fU] 
                                            & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                            [0x20U])) 
                              | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x20U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x1eU]))));
    bufp->fullBit(oldp+1067,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0x21U]));
    bufp->fullBit(oldp+1068,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0x22U]));
    bufp->fullBit(oldp+1069,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0x1aU]));
    bufp->fullBit(oldp+1070,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x21U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x22U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x1aU])));
    bufp->fullBit(oldp+1071,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x21U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x22U]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                            [0x22U] 
                                            & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                            [0x1aU])) 
                              | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x1aU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x21U]))));
    bufp->fullBit(oldp+1072,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0x1bU]));
    bufp->fullBit(oldp+1073,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0x1cU]));
    bufp->fullBit(oldp+1074,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0x1dU]));
    bufp->fullBit(oldp+1075,(((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x1bU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x1cU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x1dU])));
    bufp->fullBit(oldp+1076,((((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x1bU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x1cU]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                            [0x1cU] 
                                            & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                            [0x1dU])) 
                              | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x1dU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x1bU]))));
    bufp->fullBit(oldp+1077,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0x23U]));
    bufp->fullBit(oldp+1078,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0x24U]));
    bufp->fullBit(oldp+1079,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0x25U]));
    bufp->fullBit(oldp+1080,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x23U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x24U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x25U])));
    bufp->fullBit(oldp+1081,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x23U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x24U]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                            [0x24U] 
                                            & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                            [0x25U])) 
                              | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x25U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x23U]))));
    bufp->fullBit(oldp+1082,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0x26U]));
    bufp->fullBit(oldp+1083,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0x27U]));
    bufp->fullBit(oldp+1084,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0x1eU]));
    bufp->fullBit(oldp+1085,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x26U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x27U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x1eU])));
    bufp->fullBit(oldp+1086,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x26U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x27U]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                            [0x27U] 
                                            & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                            [0x1eU])) 
                              | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x1eU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x26U]))));
    bufp->fullBit(oldp+1087,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0x1fU]));
    bufp->fullBit(oldp+1088,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0x20U]));
    bufp->fullBit(oldp+1089,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0x21U]));
    bufp->fullBit(oldp+1090,(((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x1fU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x20U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x21U])));
    bufp->fullBit(oldp+1091,((((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x1fU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x20U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                            [0x20U] 
                                            & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                            [0x21U])) 
                              | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x21U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x1fU]))));
    bufp->fullBit(oldp+1092,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0x28U]));
    bufp->fullBit(oldp+1093,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0x29U]));
    bufp->fullBit(oldp+1094,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0x2aU]));
    bufp->fullBit(oldp+1095,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x28U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x29U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x2aU])));
    bufp->fullBit(oldp+1096,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x28U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x29U]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                            [0x29U] 
                                            & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                            [0x2aU])) 
                              | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x2aU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x28U]))));
    bufp->fullBit(oldp+1097,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0x2bU]));
    bufp->fullBit(oldp+1098,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0x2cU]));
    bufp->fullBit(oldp+1099,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0x23U]));
    bufp->fullBit(oldp+1100,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x2bU] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x2cU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x23U])));
    bufp->fullBit(oldp+1101,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x2bU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x2cU]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                            [0x2cU] 
                                            & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                            [0x23U])) 
                              | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x23U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x2bU]))));
    bufp->fullBit(oldp+1102,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0x24U]));
    bufp->fullBit(oldp+1103,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0x25U]));
    bufp->fullBit(oldp+1104,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0x26U]));
    bufp->fullBit(oldp+1105,(((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x24U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x25U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x26U])));
    bufp->fullBit(oldp+1106,((((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x24U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x25U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                            [0x25U] 
                                            & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                            [0x26U])) 
                              | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x26U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x24U]))));
    bufp->fullBit(oldp+1107,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0x2dU]));
    bufp->fullBit(oldp+1108,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0x2eU]));
    bufp->fullBit(oldp+1109,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0x2fU]));
    bufp->fullBit(oldp+1110,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x2dU] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x2eU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x2fU])));
    bufp->fullBit(oldp+1111,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x2dU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x2eU]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                            [0x2eU] 
                                            & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                            [0x2fU])) 
                              | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x2fU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x2dU]))));
    bufp->fullBit(oldp+1112,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0x30U]));
    bufp->fullBit(oldp+1113,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0x31U]));
    bufp->fullBit(oldp+1114,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0x28U]));
    bufp->fullBit(oldp+1115,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x30U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x31U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x28U])));
    bufp->fullBit(oldp+1116,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x30U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x31U]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                            [0x31U] 
                                            & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                            [0x28U])) 
                              | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x28U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x30U]))));
    bufp->fullBit(oldp+1117,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0x29U]));
    bufp->fullBit(oldp+1118,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0x2aU]));
    bufp->fullBit(oldp+1119,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0x2bU]));
    bufp->fullBit(oldp+1120,(((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x29U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x2aU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x2bU])));
    bufp->fullBit(oldp+1121,((((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x29U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x2aU]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                            [0x2aU] 
                                            & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                            [0x2bU])) 
                              | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x2bU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x29U]))));
    bufp->fullBit(oldp+1122,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0x32U]));
    bufp->fullBit(oldp+1123,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0x33U]));
    bufp->fullBit(oldp+1124,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0x34U]));
    bufp->fullBit(oldp+1125,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x32U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x33U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x34U])));
    bufp->fullBit(oldp+1126,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x32U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x33U]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                            [0x33U] 
                                            & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                            [0x34U])) 
                              | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x34U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x32U]))));
    bufp->fullBit(oldp+1127,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0x35U]));
    bufp->fullBit(oldp+1128,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0x2dU]));
    bufp->fullBit(oldp+1129,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0x2eU]));
    bufp->fullBit(oldp+1130,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x35U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x2dU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x2eU])));
    bufp->fullBit(oldp+1131,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x35U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x2dU]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                            [0x2dU] 
                                            & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                            [0x2eU])) 
                              | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x2eU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x35U]))));
    bufp->fullBit(oldp+1132,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                    >> 0x10U))));
    bufp->fullBit(oldp+1133,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                    >> 1U))));
    bufp->fullBit(oldp+1134,((1U & VL_REDXOR_32((0x10002U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[0U])))));
    bufp->fullBit(oldp+1135,((IData)((0x10002U == (0x10002U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[0U])))));
    bufp->fullBit(oldp+1136,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                    >> 0x13U))));
    bufp->fullBit(oldp+1137,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                    >> 4U))));
    bufp->fullBit(oldp+1138,((1U & VL_REDXOR_32((0x80010U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[0U])))));
    bufp->fullBit(oldp+1139,((IData)((0x80010U == (0x80010U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[0U])))));
    bufp->fullBit(oldp+1140,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                    >> 0x16U))));
    bufp->fullBit(oldp+1141,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                    >> 7U))));
    bufp->fullBit(oldp+1142,((1U & VL_REDXOR_32((0x400080U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[0U])))));
    bufp->fullBit(oldp+1143,((IData)((0x400080U == 
                                      (0x400080U & 
                                       vlSelf->top__DOT__mul_16_bit__DOT__pp[0U])))));
    bufp->fullBit(oldp+1144,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                    >> 0x19U))));
    bufp->fullBit(oldp+1145,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                    >> 0xaU))));
    bufp->fullBit(oldp+1146,((1U & VL_REDXOR_32((0x2000400U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[0U])))));
    bufp->fullBit(oldp+1147,((IData)((0x2000400U == 
                                      (0x2000400U & 
                                       vlSelf->top__DOT__mul_16_bit__DOT__pp[0U])))));
    bufp->fullBit(oldp+1148,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                    >> 0x1cU))));
    bufp->fullBit(oldp+1149,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                    >> 0xdU))));
    bufp->fullBit(oldp+1150,((1U & VL_REDXOR_32((0x10002000U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[0U])))));
    bufp->fullBit(oldp+1151,((IData)((0x10002000U == 
                                      (0x10002000U 
                                       & vlSelf->top__DOT__mul_16_bit__DOT__pp[0U])))));
    bufp->fullBit(oldp+1152,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                    >> 0x14U))));
    bufp->fullBit(oldp+1153,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                    >> 5U))));
    bufp->fullBit(oldp+1154,((1U & VL_REDXOR_32((0x100020U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[7U])))));
    bufp->fullBit(oldp+1155,((IData)((0x100020U == 
                                      (0x100020U & 
                                       vlSelf->top__DOT__mul_16_bit__DOT__pp[7U])))));
    bufp->fullBit(oldp+1156,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                    >> 0x17U))));
    bufp->fullBit(oldp+1157,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                    >> 8U))));
    bufp->fullBit(oldp+1158,((1U & VL_REDXOR_32((0x800100U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[7U])))));
    bufp->fullBit(oldp+1159,((IData)((0x800100U == 
                                      (0x800100U & 
                                       vlSelf->top__DOT__mul_16_bit__DOT__pp[7U])))));
    bufp->fullBit(oldp+1160,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                    >> 0x1aU))));
    bufp->fullBit(oldp+1161,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                    >> 0xbU))));
    bufp->fullBit(oldp+1162,((1U & VL_REDXOR_32((0x4000800U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[7U])))));
    bufp->fullBit(oldp+1163,((IData)((0x4000800U == 
                                      (0x4000800U & 
                                       vlSelf->top__DOT__mul_16_bit__DOT__pp[7U])))));
    bufp->fullBit(oldp+1164,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                    >> 0x1dU))));
    bufp->fullBit(oldp+1165,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                    >> 0xeU))));
    bufp->fullBit(oldp+1166,((1U & VL_REDXOR_32((0x20004000U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[7U])))));
    bufp->fullBit(oldp+1167,((IData)((0x20004000U == 
                                      (0x20004000U 
                                       & vlSelf->top__DOT__mul_16_bit__DOT__pp[7U])))));
    bufp->fullBit(oldp+1168,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [1U]));
    bufp->fullBit(oldp+1169,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0U]));
    bufp->fullBit(oldp+1170,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [1U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0U])));
    bufp->fullBit(oldp+1171,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [1U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0U])));
    bufp->fullBit(oldp+1172,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [6U]));
    bufp->fullBit(oldp+1173,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                    >> 6U))));
    bufp->fullBit(oldp+1174,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                    [6U] ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                            >> 6U)))));
    bufp->fullBit(oldp+1175,((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [6U] & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                      >> 6U))));
    bufp->fullBit(oldp+1176,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [7U]));
    bufp->fullBit(oldp+1177,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [8U]));
    bufp->fullBit(oldp+1178,((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [7U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [8U])));
    bufp->fullBit(oldp+1179,((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [7U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [8U])));
    bufp->fullBit(oldp+1180,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0x14U]));
    bufp->fullBit(oldp+1181,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0x15U]));
    bufp->fullBit(oldp+1182,((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x14U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x15U])));
    bufp->fullBit(oldp+1183,((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x14U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x15U])));
    bufp->fullBit(oldp+1184,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0x41U]));
    bufp->fullBit(oldp+1185,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0x42U]));
    bufp->fullBit(oldp+1186,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x41U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x42U])));
    bufp->fullBit(oldp+1187,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x41U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x42U])));
    bufp->fullBit(oldp+1188,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0x44U]));
    bufp->fullBit(oldp+1189,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0x45U]));
    bufp->fullBit(oldp+1190,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x44U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x45U])));
    bufp->fullBit(oldp+1191,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x44U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x45U])));
    bufp->fullBit(oldp+1192,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0x47U]));
    bufp->fullBit(oldp+1193,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0x48U]));
    bufp->fullBit(oldp+1194,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x47U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x48U])));
    bufp->fullBit(oldp+1195,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x47U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x48U])));
    bufp->fullBit(oldp+1196,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0x51U]));
    bufp->fullBit(oldp+1197,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0x50U]));
    bufp->fullBit(oldp+1198,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x51U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x50U])));
    bufp->fullBit(oldp+1199,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x51U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x50U])));
    bufp->fullBit(oldp+1200,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0x52U]));
    bufp->fullBit(oldp+1201,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0x51U]));
    bufp->fullBit(oldp+1202,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x52U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x51U])));
    bufp->fullBit(oldp+1203,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x52U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x51U])));
    bufp->fullBit(oldp+1204,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0x59U]));
    bufp->fullBit(oldp+1205,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                    >> 9U))));
    bufp->fullBit(oldp+1206,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                    [0x59U] ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                               >> 9U)))));
    bufp->fullBit(oldp+1207,((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x59U] & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                         >> 9U))));
    bufp->fullBit(oldp+1208,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0x5bU]));
    bufp->fullBit(oldp+1209,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0x11U]));
    bufp->fullBit(oldp+1210,((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x5bU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x11U])));
    bufp->fullBit(oldp+1211,((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x5bU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x11U])));
    bufp->fullBit(oldp+1212,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0x5cU]));
    bufp->fullBit(oldp+1213,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0x5dU]));
    bufp->fullBit(oldp+1214,((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x5cU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x5dU])));
    bufp->fullBit(oldp+1215,((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x5cU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x5dU])));
    bufp->fullBit(oldp+1216,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0x75U]));
    bufp->fullBit(oldp+1217,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0x76U]));
    bufp->fullBit(oldp+1218,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x75U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x76U])));
    bufp->fullBit(oldp+1219,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x75U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x76U])));
    bufp->fullBit(oldp+1220,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0x77U]));
    bufp->fullBit(oldp+1221,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0x78U]));
    bufp->fullBit(oldp+1222,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x77U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x78U])));
    bufp->fullBit(oldp+1223,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x77U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x78U])));
    bufp->fullBit(oldp+1224,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                             [0U]));
    bufp->fullBit(oldp+1225,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0x7fU]));
    bufp->fullBit(oldp+1226,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x7fU])));
    bufp->fullBit(oldp+1227,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x7fU])));
    bufp->fullBit(oldp+1228,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                             [1U]));
    bufp->fullBit(oldp+1229,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0U]));
    bufp->fullBit(oldp+1230,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [1U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0U])));
    bufp->fullBit(oldp+1231,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [1U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0U])));
    bufp->fullBit(oldp+1232,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                             [0x4eU]));
    bufp->fullBit(oldp+1233,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [1U]));
    bufp->fullBit(oldp+1234,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x4eU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [1U])));
    bufp->fullBit(oldp+1235,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x4eU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [1U])));
    bufp->fullBit(oldp+1236,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                             [3U]));
    bufp->fullBit(oldp+1237,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [2U]));
    bufp->fullBit(oldp+1238,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [3U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [2U])));
    bufp->fullBit(oldp+1239,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [3U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [2U])));
    bufp->fullBit(oldp+1240,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                             [4U]));
    bufp->fullBit(oldp+1241,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [3U]));
    bufp->fullBit(oldp+1242,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [4U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [3U])));
    bufp->fullBit(oldp+1243,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [4U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [3U])));
    bufp->fullBit(oldp+1244,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                             [5U]));
    bufp->fullBit(oldp+1245,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [4U]));
    bufp->fullBit(oldp+1246,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [5U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [4U])));
    bufp->fullBit(oldp+1247,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [5U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [4U])));
    bufp->fullBit(oldp+1248,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x11U]));
    bufp->fullBit(oldp+1249,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                             [0x22U]));
    bufp->fullBit(oldp+1250,((vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x11U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x22U])));
    bufp->fullBit(oldp+1251,((vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x11U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x22U])));
    bufp->fullBit(oldp+1252,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                             [0x22U]));
    bufp->fullBit(oldp+1253,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x21U]));
    bufp->fullBit(oldp+1254,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x22U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x21U])));
    bufp->fullBit(oldp+1255,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x22U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x21U])));
    bufp->fullBit(oldp+1256,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                             [0x28U]));
    bufp->fullBit(oldp+1257,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x27U]));
    bufp->fullBit(oldp+1258,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x28U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x27U])));
    bufp->fullBit(oldp+1259,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x28U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x27U])));
    bufp->fullBit(oldp+1260,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                             [0x29U]));
    bufp->fullBit(oldp+1261,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x28U]));
    bufp->fullBit(oldp+1262,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x29U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x28U])));
    bufp->fullBit(oldp+1263,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x29U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x28U])));
    bufp->fullBit(oldp+1264,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                             [0x2aU]));
    bufp->fullBit(oldp+1265,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x29U]));
    bufp->fullBit(oldp+1266,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x2aU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x29U])));
    bufp->fullBit(oldp+1267,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x2aU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x29U])));
    bufp->fullBit(oldp+1268,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                             [0x2bU]));
    bufp->fullBit(oldp+1269,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x2aU]));
    bufp->fullBit(oldp+1270,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x2bU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x2aU])));
    bufp->fullBit(oldp+1271,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x2bU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x2aU])));
    bufp->fullBit(oldp+1272,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                             [0x2cU]));
    bufp->fullBit(oldp+1273,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x2bU]));
    bufp->fullBit(oldp+1274,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x2cU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x2bU])));
    bufp->fullBit(oldp+1275,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x2cU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x2bU])));
    bufp->fullBit(oldp+1276,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                             [0x46U]));
    bufp->fullBit(oldp+1277,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x45U]));
    bufp->fullBit(oldp+1278,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x46U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x45U])));
    bufp->fullBit(oldp+1279,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x46U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x45U])));
    bufp->fullBit(oldp+1280,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                             [0x47U]));
    bufp->fullBit(oldp+1281,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x46U]));
    bufp->fullBit(oldp+1282,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x47U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x46U])));
    bufp->fullBit(oldp+1283,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x47U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x46U])));
    bufp->fullBit(oldp+1284,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                             [0x48U]));
    bufp->fullBit(oldp+1285,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x47U]));
    bufp->fullBit(oldp+1286,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x48U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x47U])));
    bufp->fullBit(oldp+1287,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x48U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x47U])));
    bufp->fullBit(oldp+1288,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                             [0x49U]));
    bufp->fullBit(oldp+1289,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x48U]));
    bufp->fullBit(oldp+1290,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x49U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x48U])));
    bufp->fullBit(oldp+1291,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x49U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x48U])));
    bufp->fullBit(oldp+1292,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                             [0x4cU]));
    bufp->fullBit(oldp+1293,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x4bU]));
    bufp->fullBit(oldp+1294,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x4cU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x4bU])));
    bufp->fullBit(oldp+1295,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x4cU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x4bU])));
    bufp->fullBit(oldp+1296,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                             [0x4dU]));
    bufp->fullBit(oldp+1297,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x4cU]));
    bufp->fullBit(oldp+1298,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x4dU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x4cU])));
    bufp->fullBit(oldp+1299,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x4dU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x4cU])));
    bufp->fullBit(oldp+1300,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                             [0x4eU]));
    bufp->fullBit(oldp+1301,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x4dU]));
    bufp->fullBit(oldp+1302,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x4eU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x4dU])));
    bufp->fullBit(oldp+1303,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x4eU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x4dU])));
    bufp->fullBit(oldp+1304,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                             [0x4fU]));
    bufp->fullBit(oldp+1305,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x4eU]));
    bufp->fullBit(oldp+1306,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x4fU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x4eU])));
    bufp->fullBit(oldp+1307,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x4fU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x4eU])));
    bufp->fullBit(oldp+1308,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                             [0x50U]));
    bufp->fullBit(oldp+1309,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x4fU]));
    bufp->fullBit(oldp+1310,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x50U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x4fU])));
    bufp->fullBit(oldp+1311,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x50U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x4fU])));
    bufp->fullBit(oldp+1312,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                             [0x51U]));
    bufp->fullBit(oldp+1313,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x50U]));
    bufp->fullBit(oldp+1314,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x51U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x50U])));
    bufp->fullBit(oldp+1315,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x51U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x50U])));
    bufp->fullBit(oldp+1316,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                             [0x52U]));
    bufp->fullBit(oldp+1317,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x51U]));
    bufp->fullBit(oldp+1318,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x52U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x51U])));
    bufp->fullBit(oldp+1319,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x52U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x51U])));
    bufp->fullBit(oldp+1320,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                             [0x53U]));
    bufp->fullBit(oldp+1321,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x52U]));
    bufp->fullBit(oldp+1322,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x53U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x52U])));
    bufp->fullBit(oldp+1323,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x53U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x52U])));
    bufp->fullBit(oldp+1324,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                             [0x54U]));
    bufp->fullBit(oldp+1325,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x53U]));
    bufp->fullBit(oldp+1326,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x54U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x53U])));
    bufp->fullBit(oldp+1327,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x54U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x53U])));
    bufp->fullBit(oldp+1328,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x4aU]));
    bufp->fullBit(oldp+1329,((vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                              >> 0x1fU)));
    bufp->fullBit(oldp+1330,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                    [0x4aU] ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                               >> 0x1fU)))));
    bufp->fullBit(oldp+1331,((vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x4aU] & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                         >> 0x1fU))));
    bufp->fullBit(oldp+1332,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                             [0x64U]));
    bufp->fullBit(oldp+1333,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x63U]));
    bufp->fullBit(oldp+1334,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x64U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x63U])));
    bufp->fullBit(oldp+1335,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x64U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x63U])));
    bufp->fullBit(oldp+1336,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                             [0x21U]));
    bufp->fullBit(oldp+1337,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                             [0x20U]));
    bufp->fullBit(oldp+1338,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x21U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x20U])));
    bufp->fullBit(oldp+1339,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                              [0x21U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                              [0x20U])));
    bufp->fullSData(oldp+1340,(vlSelf->a),16);
    bufp->fullSData(oldp+1341,(vlSelf->b),16);
    bufp->fullIData(oldp+1342,(vlSelf->result),32);
    bufp->fullBit(oldp+1343,(1U));
}
