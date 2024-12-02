// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgWData(oldp+0,(vlSelf->top__DOT__mul_16_bit__DOT__pp),256);
        bufp->chgBit(oldp+8,((1U & vlSelf->top__DOT__mul_16_bit__DOT__pp[1U])));
        bufp->chgBit(oldp+9,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                    >> 0x11U))));
        bufp->chgBit(oldp+10,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                     >> 2U))));
        bufp->chgBit(oldp+11,((1U & (VL_REDXOR_32((0x20004U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[0U])) 
                                     ^ vlSelf->top__DOT__mul_16_bit__DOT__pp[1U]))));
        bufp->chgBit(oldp+12,((1U & (((vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                       & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                          >> 0x11U)) 
                                      | (IData)((0x20004U 
                                                 == 
                                                 (0x20004U 
                                                  & vlSelf->top__DOT__mul_16_bit__DOT__pp[0U])))) 
                                     | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                         >> 2U) & vlSelf->top__DOT__mul_16_bit__DOT__pp[1U])))));
        bufp->chgBit(oldp+13,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                     >> 0x10U))));
        bufp->chgBit(oldp+14,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                     >> 1U))));
        bufp->chgBit(oldp+15,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                     >> 0x12U))));
        bufp->chgBit(oldp+16,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                      >> 0x12U) ^ VL_REDXOR_32(
                                                               (0x10002U 
                                                                & vlSelf->top__DOT__mul_16_bit__DOT__pp[1U]))))));
        bufp->chgBit(oldp+17,((1U & (((IData)((0x10002U 
                                               == (0x10002U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[1U]))) 
                                      | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                          >> 1U) & 
                                         (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                          >> 0x12U))) 
                                     | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                         >> 0x12U) 
                                        & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                           >> 0x10U))))));
        bufp->chgBit(oldp+18,((1U & vlSelf->top__DOT__mul_16_bit__DOT__pp[2U])));
        bufp->chgBit(oldp+19,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                     >> 0x11U))));
        bufp->chgBit(oldp+20,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                     >> 2U))));
        bufp->chgBit(oldp+21,((1U & (VL_REDXOR_32((0x20004U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[1U])) 
                                     ^ vlSelf->top__DOT__mul_16_bit__DOT__pp[2U]))));
        bufp->chgBit(oldp+22,((1U & (((vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                       & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                          >> 0x11U)) 
                                      | (IData)((0x20004U 
                                                 == 
                                                 (0x20004U 
                                                  & vlSelf->top__DOT__mul_16_bit__DOT__pp[1U])))) 
                                     | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                         >> 2U) & vlSelf->top__DOT__mul_16_bit__DOT__pp[2U])))));
        bufp->chgBit(oldp+23,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                     >> 0x10U))));
        bufp->chgBit(oldp+24,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                     >> 1U))));
        bufp->chgBit(oldp+25,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                     >> 0x12U))));
        bufp->chgBit(oldp+26,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                      >> 0x12U) ^ VL_REDXOR_32(
                                                               (0x10002U 
                                                                & vlSelf->top__DOT__mul_16_bit__DOT__pp[2U]))))));
        bufp->chgBit(oldp+27,((1U & (((IData)((0x10002U 
                                               == (0x10002U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[2U]))) 
                                      | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                          >> 1U) & 
                                         (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                          >> 0x12U))) 
                                     | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                         >> 0x12U) 
                                        & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                           >> 0x10U))))));
        bufp->chgBit(oldp+28,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                     >> 3U))));
        bufp->chgBit(oldp+29,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                     >> 0x14U))));
        bufp->chgBit(oldp+30,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                     >> 5U))));
        bufp->chgBit(oldp+31,((1U & (VL_REDXOR_32((0x100020U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[0U])) 
                                     ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                        >> 3U)))));
        bufp->chgBit(oldp+32,((1U & ((((vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                        >> 3U) & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                                  >> 0x14U)) 
                                      | (IData)((0x100020U 
                                                 == 
                                                 (0x100020U 
                                                  & vlSelf->top__DOT__mul_16_bit__DOT__pp[0U])))) 
                                     | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                         >> 5U) & (
                                                   vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                                   >> 3U))))));
        bufp->chgBit(oldp+33,((1U & vlSelf->top__DOT__mul_16_bit__DOT__pp[3U])));
        bufp->chgBit(oldp+34,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                     >> 0x11U))));
        bufp->chgBit(oldp+35,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                     >> 2U))));
        bufp->chgBit(oldp+36,((1U & (VL_REDXOR_32((0x20004U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[2U])) 
                                     ^ vlSelf->top__DOT__mul_16_bit__DOT__pp[3U]))));
        bufp->chgBit(oldp+37,((1U & (((vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                       & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                          >> 0x11U)) 
                                      | (IData)((0x20004U 
                                                 == 
                                                 (0x20004U 
                                                  & vlSelf->top__DOT__mul_16_bit__DOT__pp[2U])))) 
                                     | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                         >> 2U) & vlSelf->top__DOT__mul_16_bit__DOT__pp[3U])))));
        bufp->chgBit(oldp+38,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                     >> 0x13U))));
        bufp->chgBit(oldp+39,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                     >> 4U))));
        bufp->chgBit(oldp+40,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                     >> 0x15U))));
        bufp->chgBit(oldp+41,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                      >> 0x15U) ^ VL_REDXOR_32(
                                                               (0x80010U 
                                                                & vlSelf->top__DOT__mul_16_bit__DOT__pp[1U]))))));
        bufp->chgBit(oldp+42,((1U & (((IData)((0x80010U 
                                               == (0x80010U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[1U]))) 
                                      | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                          >> 4U) & 
                                         (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                          >> 0x15U))) 
                                     | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                         >> 0x15U) 
                                        & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                           >> 0x13U))))));
        bufp->chgBit(oldp+43,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                     >> 0x10U))));
        bufp->chgBit(oldp+44,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                     >> 1U))));
        bufp->chgBit(oldp+45,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                     >> 0x12U))));
        bufp->chgBit(oldp+46,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                      >> 0x12U) ^ VL_REDXOR_32(
                                                               (0x10002U 
                                                                & vlSelf->top__DOT__mul_16_bit__DOT__pp[3U]))))));
        bufp->chgBit(oldp+47,((1U & (((IData)((0x10002U 
                                               == (0x10002U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[3U]))) 
                                      | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                          >> 1U) & 
                                         (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                          >> 0x12U))) 
                                     | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                         >> 0x12U) 
                                        & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                           >> 0x10U))))));
        bufp->chgBit(oldp+48,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                     >> 3U))));
        bufp->chgBit(oldp+49,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                     >> 0x14U))));
        bufp->chgBit(oldp+50,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                     >> 5U))));
        bufp->chgBit(oldp+51,((1U & (VL_REDXOR_32((0x100020U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[1U])) 
                                     ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                        >> 3U)))));
        bufp->chgBit(oldp+52,((1U & ((((vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                        >> 3U) & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                                  >> 0x14U)) 
                                      | (IData)((0x100020U 
                                                 == 
                                                 (0x100020U 
                                                  & vlSelf->top__DOT__mul_16_bit__DOT__pp[1U])))) 
                                     | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                         >> 5U) & (
                                                   vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                                   >> 3U))))));
        bufp->chgBit(oldp+53,((1U & vlSelf->top__DOT__mul_16_bit__DOT__pp[4U])));
        bufp->chgBit(oldp+54,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                     >> 0x11U))));
        bufp->chgBit(oldp+55,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                     >> 2U))));
        bufp->chgBit(oldp+56,((1U & (VL_REDXOR_32((0x20004U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[3U])) 
                                     ^ vlSelf->top__DOT__mul_16_bit__DOT__pp[4U]))));
        bufp->chgBit(oldp+57,((1U & (((vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                       & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                          >> 0x11U)) 
                                      | (IData)((0x20004U 
                                                 == 
                                                 (0x20004U 
                                                  & vlSelf->top__DOT__mul_16_bit__DOT__pp[3U])))) 
                                     | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                         >> 2U) & vlSelf->top__DOT__mul_16_bit__DOT__pp[4U])))));
        bufp->chgBit(oldp+58,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                     >> 0x13U))));
        bufp->chgBit(oldp+59,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                     >> 4U))));
        bufp->chgBit(oldp+60,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                     >> 0x15U))));
        bufp->chgBit(oldp+61,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                      >> 0x15U) ^ VL_REDXOR_32(
                                                               (0x80010U 
                                                                & vlSelf->top__DOT__mul_16_bit__DOT__pp[2U]))))));
        bufp->chgBit(oldp+62,((1U & (((IData)((0x80010U 
                                               == (0x80010U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[2U]))) 
                                      | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                          >> 4U) & 
                                         (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                          >> 0x15U))) 
                                     | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                         >> 0x15U) 
                                        & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                           >> 0x13U))))));
        bufp->chgBit(oldp+63,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x2fU]));
        bufp->chgBit(oldp+64,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x30U]));
        bufp->chgBit(oldp+65,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x31U]));
        bufp->chgBit(oldp+66,(((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x2fU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x30U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x31U])));
        bufp->chgBit(oldp+67,((((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x2fU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x30U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                             [0x30U] 
                                             & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                             [0x31U])) 
                               | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                  [0x31U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                  [0x2fU]))));
        bufp->chgBit(oldp+68,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x37U]));
        bufp->chgBit(oldp+69,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x38U]));
        bufp->chgBit(oldp+70,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x39U]));
        bufp->chgBit(oldp+71,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x37U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x38U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x39U])));
        bufp->chgBit(oldp+72,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x37U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x38U]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                             [0x38U] 
                                             & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                             [0x39U])) 
                               | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x39U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x37U]))));
        bufp->chgBit(oldp+73,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x32U]));
        bufp->chgBit(oldp+74,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x33U]));
        bufp->chgBit(oldp+75,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x34U]));
        bufp->chgBit(oldp+76,(((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x32U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x33U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x34U])));
        bufp->chgBit(oldp+77,((((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x32U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x33U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                             [0x33U] 
                                             & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                             [0x34U])) 
                               | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                  [0x34U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                  [0x32U]))));
        bufp->chgBit(oldp+78,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x3bU]));
        bufp->chgBit(oldp+79,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x3cU]));
        bufp->chgBit(oldp+80,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x3dU]));
        bufp->chgBit(oldp+81,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x3bU] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x3cU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x3dU])));
        bufp->chgBit(oldp+82,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x3bU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x3cU]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                             [0x3cU] 
                                             & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                             [0x3dU])) 
                               | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x3dU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x3bU]))));
        bufp->chgBit(oldp+83,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x36U]));
        bufp->chgBit(oldp+84,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x37U]));
        bufp->chgBit(oldp+85,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x38U]));
        bufp->chgBit(oldp+86,(((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x36U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x37U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x38U])));
        bufp->chgBit(oldp+87,((((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x36U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x37U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                             [0x37U] 
                                             & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                             [0x38U])) 
                               | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                  [0x38U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                  [0x36U]))));
        bufp->chgBit(oldp+88,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x3fU]));
        bufp->chgBit(oldp+89,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x40U]));
        bufp->chgBit(oldp+90,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x3aU]));
        bufp->chgBit(oldp+91,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x3fU] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x40U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x3aU])));
        bufp->chgBit(oldp+92,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x3fU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x40U]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                             [0x40U] 
                                             & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                             [0x3aU])) 
                               | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                  [0x3aU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x3fU]))));
        bufp->chgBit(oldp+93,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x3bU]));
        bufp->chgBit(oldp+94,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x3cU]));
        bufp->chgBit(oldp+95,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x3dU]));
        bufp->chgBit(oldp+96,(((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x3bU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x3cU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x3dU])));
        bufp->chgBit(oldp+97,((((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x3bU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x3cU]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                             [0x3cU] 
                                             & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                             [0x3dU])) 
                               | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                  [0x3dU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                  [0x3bU]))));
        bufp->chgBit(oldp+98,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                              [0x43U]));
        bufp->chgBit(oldp+99,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                              [0x3eU]));
        bufp->chgBit(oldp+100,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x3fU]));
        bufp->chgBit(oldp+101,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x43U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x3eU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x3fU])));
        bufp->chgBit(oldp+102,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x43U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                  [0x3eU]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                              [0x3eU] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                              [0x3fU])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                   [0x3fU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [0x43U]))));
        bufp->chgBit(oldp+103,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x46U]));
        bufp->chgBit(oldp+104,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x41U]));
        bufp->chgBit(oldp+105,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x42U]));
        bufp->chgBit(oldp+106,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x46U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x41U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x42U])));
        bufp->chgBit(oldp+107,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x46U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                  [0x41U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                              [0x41U] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                              [0x42U])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                   [0x42U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [0x46U]))));
        bufp->chgBit(oldp+108,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x44U]));
        bufp->chgBit(oldp+109,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x45U]));
        bufp->chgBit(oldp+110,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x46U]));
        bufp->chgBit(oldp+111,(((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x44U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x45U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x46U])));
        bufp->chgBit(oldp+112,((((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                  [0x44U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                  [0x45U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                              [0x45U] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                              [0x46U])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                   [0x46U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                   [0x44U]))));
        bufp->chgBit(oldp+113,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                      >> 6U))));
        bufp->chgBit(oldp+114,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                      >> 0x17U))));
        bufp->chgBit(oldp+115,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                      >> 8U))));
        bufp->chgBit(oldp+116,((1U & (VL_REDXOR_32(
                                                   (0x800100U 
                                                    & vlSelf->top__DOT__mul_16_bit__DOT__pp[0U])) 
                                      ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                         >> 6U)))));
        bufp->chgBit(oldp+117,((1U & ((((vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                         >> 6U) & (
                                                   vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                                   >> 0x17U)) 
                                       | (IData)((0x800100U 
                                                  == 
                                                  (0x800100U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[0U])))) 
                                      | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                          >> 8U) & 
                                         (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                          >> 6U))))));
        bufp->chgBit(oldp+118,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x49U]));
        bufp->chgBit(oldp+119,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x4aU]));
        bufp->chgBit(oldp+120,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x47U]));
        bufp->chgBit(oldp+121,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x49U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x4aU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x47U])));
        bufp->chgBit(oldp+122,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x49U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x4aU]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                              [0x4aU] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                              [0x47U])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                   [0x47U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [0x49U]))));
        bufp->chgBit(oldp+123,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x4bU]));
        bufp->chgBit(oldp+124,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x4cU]));
        bufp->chgBit(oldp+125,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x49U]));
        bufp->chgBit(oldp+126,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x4bU] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x4cU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x49U])));
        bufp->chgBit(oldp+127,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x4bU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x4cU]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                              [0x4cU] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                              [0x49U])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                   [0x49U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [0x4bU]))));
        bufp->chgBit(oldp+128,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x4dU]));
        bufp->chgBit(oldp+129,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x4bU]));
        bufp->chgBit(oldp+130,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x4cU]));
        bufp->chgBit(oldp+131,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x4dU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x4bU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x4cU])));
        bufp->chgBit(oldp+132,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x4dU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                  [0x4bU]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                              [0x4bU] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                              [0x4cU])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                   [0x4cU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [0x4dU]))));
        bufp->chgBit(oldp+133,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x53U]));
        bufp->chgBit(oldp+134,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x52U]));
        bufp->chgBit(oldp+135,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [4U]));
        bufp->chgBit(oldp+136,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x53U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x52U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [4U])));
        bufp->chgBit(oldp+137,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x53U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                  [0x52U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                              [0x52U] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                              [4U])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                   [4U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [0x53U]))));
        bufp->chgBit(oldp+138,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x54U]));
        bufp->chgBit(oldp+139,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x55U]));
        bufp->chgBit(oldp+140,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x53U]));
        bufp->chgBit(oldp+141,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x54U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x55U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x53U])));
        bufp->chgBit(oldp+142,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x54U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x55U]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                              [0x55U] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                              [0x53U])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                   [0x53U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [0x54U]))));
        bufp->chgBit(oldp+143,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x56U]));
        bufp->chgBit(oldp+144,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x57U]));
        bufp->chgBit(oldp+145,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x54U]));
        bufp->chgBit(oldp+146,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x56U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x57U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x54U])));
        bufp->chgBit(oldp+147,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x56U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x57U]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                              [0x57U] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                              [0x54U])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                   [0x54U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [0x56U]))));
        bufp->chgBit(oldp+148,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x58U]));
        bufp->chgBit(oldp+149,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x59U]));
        bufp->chgBit(oldp+150,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x56U]));
        bufp->chgBit(oldp+151,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x58U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x59U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x56U])));
        bufp->chgBit(oldp+152,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x58U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x59U]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                              [0x59U] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                              [0x56U])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                   [0x56U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [0x58U]))));
        bufp->chgBit(oldp+153,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x5aU]));
        bufp->chgBit(oldp+154,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x5bU]));
        bufp->chgBit(oldp+155,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x58U]));
        bufp->chgBit(oldp+156,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x5aU] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x5bU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x58U])));
        bufp->chgBit(oldp+157,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x5aU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x5bU]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                              [0x5bU] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                              [0x58U])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                   [0x58U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [0x5aU]))));
        bufp->chgBit(oldp+158,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x5cU]));
        bufp->chgBit(oldp+159,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x5dU]));
        bufp->chgBit(oldp+160,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x5aU]));
        bufp->chgBit(oldp+161,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x5cU] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x5dU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x5aU])));
        bufp->chgBit(oldp+162,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x5cU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x5dU]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                              [0x5dU] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                              [0x5aU])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                   [0x5aU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [0x5cU]))));
        bufp->chgBit(oldp+163,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x5eU]));
        bufp->chgBit(oldp+164,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x5fU]));
        bufp->chgBit(oldp+165,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x60U]));
        bufp->chgBit(oldp+166,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x5eU] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x5fU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x60U])));
        bufp->chgBit(oldp+167,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x5eU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x5fU]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                              [0x5fU] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                              [0x60U])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [0x60U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [0x5eU]))));
        bufp->chgBit(oldp+168,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                      >> 0x10U))));
        bufp->chgBit(oldp+169,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                      >> 1U))));
        bufp->chgBit(oldp+170,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                      >> 0x12U))));
        bufp->chgBit(oldp+171,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                       >> 0x12U) ^ 
                                      VL_REDXOR_32(
                                                   (0x10002U 
                                                    & vlSelf->top__DOT__mul_16_bit__DOT__pp[4U]))))));
        bufp->chgBit(oldp+172,((1U & (((IData)((0x10002U 
                                                == 
                                                (0x10002U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[4U]))) 
                                       | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                           >> 1U) & 
                                          (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                           >> 0x12U))) 
                                      | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                          >> 0x12U) 
                                         & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                            >> 0x10U))))));
        bufp->chgBit(oldp+173,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x61U]));
        bufp->chgBit(oldp+174,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x62U]));
        bufp->chgBit(oldp+175,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x63U]));
        bufp->chgBit(oldp+176,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x61U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x62U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x63U])));
        bufp->chgBit(oldp+177,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x61U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x62U]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                              [0x62U] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                              [0x63U])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [0x63U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [0x61U]))));
        bufp->chgBit(oldp+178,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x5eU]));
        bufp->chgBit(oldp+179,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x5fU]));
        bufp->chgBit(oldp+180,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x60U]));
        bufp->chgBit(oldp+181,(((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x5eU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x5fU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x60U])));
        bufp->chgBit(oldp+182,((((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                  [0x5eU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                  [0x5fU]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                              [0x5fU] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                              [0x60U])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                   [0x60U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                   [0x5eU]))));
        bufp->chgBit(oldp+183,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x64U]));
        bufp->chgBit(oldp+184,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x65U]));
        bufp->chgBit(oldp+185,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x66U]));
        bufp->chgBit(oldp+186,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x64U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x65U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x66U])));
        bufp->chgBit(oldp+187,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x64U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x65U]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                              [0x65U] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                              [0x66U])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [0x66U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [0x64U]))));
        bufp->chgBit(oldp+188,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x61U]));
        bufp->chgBit(oldp+189,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x62U]));
        bufp->chgBit(oldp+190,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x63U]));
        bufp->chgBit(oldp+191,(((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x61U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x62U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x63U])));
        bufp->chgBit(oldp+192,((((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                  [0x61U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                  [0x62U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                              [0x62U] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                              [0x63U])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                   [0x63U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                   [0x61U]))));
        bufp->chgBit(oldp+193,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x67U]));
        bufp->chgBit(oldp+194,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x68U]));
        bufp->chgBit(oldp+195,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x69U]));
        bufp->chgBit(oldp+196,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x67U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x68U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x69U])));
        bufp->chgBit(oldp+197,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x67U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x68U]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                              [0x68U] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                              [0x69U])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [0x69U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [0x67U]))));
        bufp->chgBit(oldp+198,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x64U]));
        bufp->chgBit(oldp+199,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x65U]));
        bufp->chgBit(oldp+200,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x66U]));
        bufp->chgBit(oldp+201,(((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x64U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x65U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x66U])));
        bufp->chgBit(oldp+202,((((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                  [0x64U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                  [0x65U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                              [0x65U] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                              [0x66U])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                   [0x66U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                   [0x64U]))));
        bufp->chgBit(oldp+203,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x6aU]));
        bufp->chgBit(oldp+204,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x6bU]));
        bufp->chgBit(oldp+205,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x6cU]));
        bufp->chgBit(oldp+206,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x6aU] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x6bU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x6cU])));
        bufp->chgBit(oldp+207,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x6aU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x6bU]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                              [0x6bU] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                              [0x6cU])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [0x6cU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [0x6aU]))));
        bufp->chgBit(oldp+208,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x67U]));
        bufp->chgBit(oldp+209,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x68U]));
        bufp->chgBit(oldp+210,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x69U]));
        bufp->chgBit(oldp+211,(((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x67U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x68U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x69U])));
        bufp->chgBit(oldp+212,((((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                  [0x67U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                  [0x68U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                              [0x68U] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                              [0x69U])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                   [0x69U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                   [0x67U]))));
        bufp->chgBit(oldp+213,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x6dU]));
        bufp->chgBit(oldp+214,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x6eU]));
        bufp->chgBit(oldp+215,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x6fU]));
        bufp->chgBit(oldp+216,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x6dU] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x6eU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x6fU])));
        bufp->chgBit(oldp+217,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x6dU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x6eU]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                              [0x6eU] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                              [0x6fU])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [0x6fU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [0x6dU]))));
        bufp->chgBit(oldp+218,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x6aU]));
        bufp->chgBit(oldp+219,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x6bU]));
        bufp->chgBit(oldp+220,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x6cU]));
        bufp->chgBit(oldp+221,(((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x6aU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x6bU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x6cU])));
        bufp->chgBit(oldp+222,((((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                  [0x6aU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                  [0x6bU]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                              [0x6bU] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                              [0x6cU])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                   [0x6cU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                   [0x6aU]))));
        bufp->chgBit(oldp+223,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                      >> 3U))));
        bufp->chgBit(oldp+224,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                      >> 0x14U))));
        bufp->chgBit(oldp+225,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                      >> 5U))));
        bufp->chgBit(oldp+226,((1U & (VL_REDXOR_32(
                                                   (0x100020U 
                                                    & vlSelf->top__DOT__mul_16_bit__DOT__pp[2U])) 
                                      ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                         >> 3U)))));
        bufp->chgBit(oldp+227,((1U & ((((vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                         >> 3U) & (
                                                   vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                                   >> 0x14U)) 
                                       | (IData)((0x100020U 
                                                  == 
                                                  (0x100020U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[2U])))) 
                                      | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                          >> 5U) & 
                                         (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                          >> 3U))))));
        bufp->chgBit(oldp+228,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x70U]));
        bufp->chgBit(oldp+229,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x71U]));
        bufp->chgBit(oldp+230,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x72U]));
        bufp->chgBit(oldp+231,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x70U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x71U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x72U])));
        bufp->chgBit(oldp+232,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x70U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x71U]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                              [0x71U] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                              [0x72U])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [0x72U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [0x70U]))));
        bufp->chgBit(oldp+233,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x6dU]));
        bufp->chgBit(oldp+234,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x6eU]));
        bufp->chgBit(oldp+235,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x6fU]));
        bufp->chgBit(oldp+236,(((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x6dU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x6eU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x6fU])));
        bufp->chgBit(oldp+237,((((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                  [0x6dU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                  [0x6eU]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                              [0x6eU] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                              [0x6fU])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                   [0x6fU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                   [0x6dU]))));
        bufp->chgBit(oldp+238,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x73U]));
        bufp->chgBit(oldp+239,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x74U]));
        bufp->chgBit(oldp+240,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x70U]));
        bufp->chgBit(oldp+241,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x73U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x74U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x70U])));
        bufp->chgBit(oldp+242,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x73U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x74U]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                              [0x74U] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                              [0x70U])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                   [0x70U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [0x73U]))));
        bufp->chgBit(oldp+243,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x71U]));
        bufp->chgBit(oldp+244,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x72U]));
        bufp->chgBit(oldp+245,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x36U]));
        bufp->chgBit(oldp+246,(((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x71U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x72U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x36U])));
        bufp->chgBit(oldp+247,((((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                  [0x71U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                  [0x72U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                              [0x72U] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                              [0x36U])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [0x36U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                   [0x71U]))));
        bufp->chgBit(oldp+248,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x73U]));
        bufp->chgBit(oldp+249,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x74U]));
        bufp->chgBit(oldp+250,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x3aU]));
        bufp->chgBit(oldp+251,(((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x73U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x74U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x3aU])));
        bufp->chgBit(oldp+252,((((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                  [0x73U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                  [0x74U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                              [0x74U] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                              [0x3aU])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [0x3aU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                   [0x73U]))));
        bufp->chgBit(oldp+253,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x75U]));
        bufp->chgBit(oldp+254,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x76U]));
        bufp->chgBit(oldp+255,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x3eU]));
        bufp->chgBit(oldp+256,(((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x75U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x76U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x3eU])));
        bufp->chgBit(oldp+257,((((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                  [0x75U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                  [0x76U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                              [0x76U] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                              [0x3eU])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [0x3eU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                   [0x75U]))));
        bufp->chgBit(oldp+258,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x7aU]));
        bufp->chgBit(oldp+259,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x77U]));
        bufp->chgBit(oldp+260,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x78U]));
        bufp->chgBit(oldp+261,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x7aU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x77U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x78U])));
        bufp->chgBit(oldp+262,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x7aU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                  [0x77U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                              [0x77U] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                              [0x78U])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                   [0x78U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [0x7aU]))));
        bufp->chgBit(oldp+263,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x7cU]));
        bufp->chgBit(oldp+264,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x79U]));
        bufp->chgBit(oldp+265,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x7aU]));
        bufp->chgBit(oldp+266,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x7cU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x79U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x7aU])));
        bufp->chgBit(oldp+267,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x7cU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                  [0x79U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                              [0x79U] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                              [0x7aU])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                   [0x7aU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [0x7cU]))));
        bufp->chgBit(oldp+268,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x7eU]));
        bufp->chgBit(oldp+269,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x7bU]));
        bufp->chgBit(oldp+270,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x7cU]));
        bufp->chgBit(oldp+271,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x7eU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x7bU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x7cU])));
        bufp->chgBit(oldp+272,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x7eU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                  [0x7bU]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                              [0x7bU] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                              [0x7cU])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                   [0x7cU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [0x7eU]))));
        bufp->chgBit(oldp+273,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x7fU]));
        bufp->chgBit(oldp+274,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x7dU]));
        bufp->chgBit(oldp+275,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x7eU]));
        bufp->chgBit(oldp+276,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x7fU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x7dU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x7eU])));
        bufp->chgBit(oldp+277,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x7fU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                  [0x7dU]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                              [0x7dU] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                              [0x7eU])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                   [0x7eU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [0x7fU]))));
        bufp->chgBit(oldp+278,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                      >> 0x16U))));
        bufp->chgBit(oldp+279,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                      >> 7U))));
        bufp->chgBit(oldp+280,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                      >> 0x18U))));
        bufp->chgBit(oldp+281,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                       >> 0x18U) ^ 
                                      VL_REDXOR_32(
                                                   (0x400080U 
                                                    & vlSelf->top__DOT__mul_16_bit__DOT__pp[1U]))))));
        bufp->chgBit(oldp+282,((1U & (((IData)((0x400080U 
                                                == 
                                                (0x400080U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[1U]))) 
                                       | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                           >> 7U) & 
                                          (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                           >> 0x18U))) 
                                      | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                          >> 0x18U) 
                                         & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                            >> 0x16U))))));
        bufp->chgBit(oldp+283,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [6U]));
        bufp->chgBit(oldp+284,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [5U]));
        bufp->chgBit(oldp+285,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x55U]));
        bufp->chgBit(oldp+286,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [6U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [5U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x55U])));
        bufp->chgBit(oldp+287,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [6U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                  [5U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [5U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                           [0x55U])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                   [0x55U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                   [6U]))));
        bufp->chgBit(oldp+288,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [7U]));
        bufp->chgBit(oldp+289,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [6U]));
        bufp->chgBit(oldp+290,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x57U]));
        bufp->chgBit(oldp+291,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [7U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [6U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x57U])));
        bufp->chgBit(oldp+292,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [7U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                  [6U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [6U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                           [0x57U])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                   [0x57U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                   [7U]))));
        bufp->chgBit(oldp+293,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [8U]));
        bufp->chgBit(oldp+294,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [9U]));
        bufp->chgBit(oldp+295,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [7U]));
        bufp->chgBit(oldp+296,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [8U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [9U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [7U])));
        bufp->chgBit(oldp+297,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [8U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [9U]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                           [9U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                           [7U])) | 
                                (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [7U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [8U]))));
        bufp->chgBit(oldp+298,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0xaU]));
        bufp->chgBit(oldp+299,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0xbU]));
        bufp->chgBit(oldp+300,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [8U]));
        bufp->chgBit(oldp+301,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0xaU] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0xbU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [8U])));
        bufp->chgBit(oldp+302,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0xaU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0xbU]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                             [0xbU] 
                                             & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                             [8U])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                   [8U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                   [0xaU]))));
        bufp->chgBit(oldp+303,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0xcU]));
        bufp->chgBit(oldp+304,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0xdU]));
        bufp->chgBit(oldp+305,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0xaU]));
        bufp->chgBit(oldp+306,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0xcU] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0xdU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0xaU])));
        bufp->chgBit(oldp+307,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0xcU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0xdU]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                             [0xdU] 
                                             & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                             [0xaU])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                   [0xaU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                   [0xcU]))));
        bufp->chgBit(oldp+308,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0xeU]));
        bufp->chgBit(oldp+309,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0xfU]));
        bufp->chgBit(oldp+310,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0xcU]));
        bufp->chgBit(oldp+311,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0xeU] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0xfU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0xcU])));
        bufp->chgBit(oldp+312,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0xeU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0xfU]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                             [0xfU] 
                                             & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                             [0xcU])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                   [0xcU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                   [0xeU]))));
        bufp->chgBit(oldp+313,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x10U]));
        bufp->chgBit(oldp+314,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x11U]));
        bufp->chgBit(oldp+315,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0xeU]));
        bufp->chgBit(oldp+316,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x10U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x11U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0xeU])));
        bufp->chgBit(oldp+317,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x10U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x11U]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                              [0x11U] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0xeU])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                   [0xeU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                   [0x10U]))));
        bufp->chgBit(oldp+318,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x12U]));
        bufp->chgBit(oldp+319,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x13U]));
        bufp->chgBit(oldp+320,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x10U]));
        bufp->chgBit(oldp+321,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x12U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x13U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x10U])));
        bufp->chgBit(oldp+322,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x12U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x13U]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                              [0x13U] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x10U])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                   [0x10U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                   [0x12U]))));
        bufp->chgBit(oldp+323,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x14U]));
        bufp->chgBit(oldp+324,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x15U]));
        bufp->chgBit(oldp+325,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x12U]));
        bufp->chgBit(oldp+326,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x14U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x15U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x12U])));
        bufp->chgBit(oldp+327,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x14U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x15U]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                              [0x15U] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x12U])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                   [0x12U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                   [0x14U]))));
        bufp->chgBit(oldp+328,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x13U]));
        bufp->chgBit(oldp+329,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x27U]));
        bufp->chgBit(oldp+330,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                      >> 0xfU))));
        bufp->chgBit(oldp+331,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                       [0x13U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                       [0x27U]) ^ (
                                                   vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                                   >> 0xfU)))));
        bufp->chgBit(oldp+332,((((vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                  [0x13U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                  [0x27U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                              [0x27U] 
                                              & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                                 >> 0xfU))) 
                                | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                    >> 0xfU) & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                   [0x13U]))));
        bufp->chgBit(oldp+333,((1U & vlSelf->top__DOT__mul_16_bit__DOT__pp[5U])));
        bufp->chgBit(oldp+334,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                      >> 0x11U))));
        bufp->chgBit(oldp+335,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                      >> 2U))));
        bufp->chgBit(oldp+336,((1U & (VL_REDXOR_32(
                                                   (0x20004U 
                                                    & vlSelf->top__DOT__mul_16_bit__DOT__pp[4U])) 
                                      ^ vlSelf->top__DOT__mul_16_bit__DOT__pp[5U]))));
        bufp->chgBit(oldp+337,((1U & (((vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                        & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                           >> 0x11U)) 
                                       | (IData)((0x20004U 
                                                  == 
                                                  (0x20004U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[4U])))) 
                                      | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                          >> 2U) & 
                                         vlSelf->top__DOT__mul_16_bit__DOT__pp[5U])))));
        bufp->chgBit(oldp+338,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x16U]));
        bufp->chgBit(oldp+339,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x17U]));
        bufp->chgBit(oldp+340,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x14U]));
        bufp->chgBit(oldp+341,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x16U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x17U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x14U])));
        bufp->chgBit(oldp+342,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x16U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x17U]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                              [0x17U] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x14U])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                   [0x14U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                   [0x16U]))));
        bufp->chgBit(oldp+343,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x15U]));
        bufp->chgBit(oldp+344,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x2cU]));
        bufp->chgBit(oldp+345,((vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                >> 0x1fU)));
        bufp->chgBit(oldp+346,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                       [0x15U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                       [0x2cU]) ^ (
                                                   vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                                   >> 0x1fU)))));
        bufp->chgBit(oldp+347,((((vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                  [0x15U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                  [0x2cU]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                              [0x2cU] 
                                              & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                                 >> 0x1fU))) 
                                | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                    >> 0x1fU) & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                   [0x15U]))));
        bufp->chgBit(oldp+348,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x18U]));
        bufp->chgBit(oldp+349,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x19U]));
        bufp->chgBit(oldp+350,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x16U]));
        bufp->chgBit(oldp+351,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x18U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x19U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x16U])));
        bufp->chgBit(oldp+352,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x18U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x19U]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                              [0x19U] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x16U])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                   [0x16U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                   [0x18U]))));
        bufp->chgBit(oldp+353,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x17U]));
        bufp->chgBit(oldp+354,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                      >> 0x12U))));
        bufp->chgBit(oldp+355,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                      >> 0xfU))));
        bufp->chgBit(oldp+356,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                       [0x17U] ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                                  >> 0x12U)) 
                                      ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+357,((1U & (((vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                        [0x17U] & (
                                                   vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                                   >> 0x12U)) 
                                       | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                           >> 0x12U) 
                                          & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                             >> 0xfU))) 
                                      | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                          >> 0xfU) 
                                         & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                         [0x17U])))));
        bufp->chgBit(oldp+358,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x1aU]));
        bufp->chgBit(oldp+359,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x1bU]));
        bufp->chgBit(oldp+360,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x18U]));
        bufp->chgBit(oldp+361,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x1aU] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x1bU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x18U])));
        bufp->chgBit(oldp+362,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x1aU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x1bU]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                              [0x1bU] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x18U])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                   [0x18U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                   [0x1aU]))));
        bufp->chgBit(oldp+363,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x19U]));
        bufp->chgBit(oldp+364,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x35U]));
        bufp->chgBit(oldp+365,((vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                >> 0x1fU)));
        bufp->chgBit(oldp+366,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                       [0x19U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                       [0x35U]) ^ (
                                                   vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                                   >> 0x1fU)))));
        bufp->chgBit(oldp+367,((((vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                  [0x19U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                  [0x35U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                              [0x35U] 
                                              & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                                 >> 0x1fU))) 
                                | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                    >> 0x1fU) & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                   [0x19U]))));
        bufp->chgBit(oldp+368,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x1cU]));
        bufp->chgBit(oldp+369,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x1dU]));
        bufp->chgBit(oldp+370,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x1aU]));
        bufp->chgBit(oldp+371,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x1cU] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x1dU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x1aU])));
        bufp->chgBit(oldp+372,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x1cU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x1dU]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                              [0x1dU] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x1aU])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                   [0x1aU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                   [0x1cU]))));
        bufp->chgBit(oldp+373,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x1bU]));
        bufp->chgBit(oldp+374,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x39U]));
        bufp->chgBit(oldp+375,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                      >> 0xfU))));
        bufp->chgBit(oldp+376,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                       [0x1bU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                       [0x39U]) ^ (
                                                   vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                                   >> 0xfU)))));
        bufp->chgBit(oldp+377,((((vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                  [0x1bU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                  [0x39U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                              [0x39U] 
                                              & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                                 >> 0xfU))) 
                                | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                    >> 0xfU) & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                   [0x1bU]))));
        bufp->chgBit(oldp+378,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x1eU]));
        bufp->chgBit(oldp+379,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x1fU]));
        bufp->chgBit(oldp+380,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x1cU]));
        bufp->chgBit(oldp+381,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x1eU] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x1fU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x1cU])));
        bufp->chgBit(oldp+382,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x1eU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x1fU]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                              [0x1fU] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x1cU])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                   [0x1cU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                   [0x1eU]))));
        bufp->chgBit(oldp+383,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x1dU]));
        bufp->chgBit(oldp+384,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                      >> 0x15U))));
        bufp->chgBit(oldp+385,((vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                >> 0x1fU)));
        bufp->chgBit(oldp+386,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                       [0x1dU] ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                                  >> 0x15U)) 
                                      ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                         >> 0x1fU)))));
        bufp->chgBit(oldp+387,((1U & (((vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                        [0x1dU] & (
                                                   vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                                   >> 0x15U)) 
                                       | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                           >> 0x15U) 
                                          & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                             >> 0x1fU))) 
                                      | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                          >> 0x1fU) 
                                         & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                         [0x1dU])))));
        bufp->chgBit(oldp+388,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                      >> 0x13U))));
        bufp->chgBit(oldp+389,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                      >> 4U))));
        bufp->chgBit(oldp+390,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                      >> 0x15U))));
        bufp->chgBit(oldp+391,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                       >> 0x15U) ^ 
                                      VL_REDXOR_32(
                                                   (0x80010U 
                                                    & vlSelf->top__DOT__mul_16_bit__DOT__pp[3U]))))));
        bufp->chgBit(oldp+392,((1U & (((IData)((0x80010U 
                                                == 
                                                (0x80010U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[3U]))) 
                                       | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                           >> 4U) & 
                                          (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                           >> 0x15U))) 
                                      | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                          >> 0x15U) 
                                         & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                            >> 0x13U))))));
        bufp->chgBit(oldp+393,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x20U]));
        bufp->chgBit(oldp+394,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x1eU]));
        bufp->chgBit(oldp+395,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x1fU]));
        bufp->chgBit(oldp+396,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x20U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x1eU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x1fU])));
        bufp->chgBit(oldp+397,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x20U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                  [0x1eU]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x1eU] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x1fU])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                   [0x1fU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                   [0x20U]))));
        bufp->chgBit(oldp+398,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x79U]));
        bufp->chgBit(oldp+399,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x40U]));
        bufp->chgBit(oldp+400,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                      >> 0xfU))));
        bufp->chgBit(oldp+401,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                       [0x79U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                       [0x40U]) ^ (
                                                   vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                                   >> 0xfU)))));
        bufp->chgBit(oldp+402,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x79U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                  [0x40U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                              [0x40U] 
                                              & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                                 >> 0xfU))) 
                                | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                    >> 0xfU) & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [0x79U]))));
        bufp->chgBit(oldp+403,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x7bU]));
        bufp->chgBit(oldp+404,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x43U]));
        bufp->chgBit(oldp+405,((vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                >> 0x1fU)));
        bufp->chgBit(oldp+406,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                       [0x7bU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                       [0x43U]) ^ (
                                                   vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                                   >> 0x1fU)))));
        bufp->chgBit(oldp+407,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x7bU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                  [0x43U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                              [0x43U] 
                                              & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                                 >> 0x1fU))) 
                                | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                    >> 0x1fU) & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [0x7bU]))));
        bufp->chgBit(oldp+408,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x7dU]));
        bufp->chgBit(oldp+409,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                      >> 0x18U))));
        bufp->chgBit(oldp+410,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                      >> 0xfU))));
        bufp->chgBit(oldp+411,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                       [0x7dU] ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                                  >> 0x18U)) 
                                      ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+412,((1U & (((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                        [0x7dU] & (
                                                   vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                                   >> 0x18U)) 
                                       | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                           >> 0x18U) 
                                          & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                             >> 0xfU))) 
                                      | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                          >> 0xfU) 
                                         & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                         [0x7dU])))));
        bufp->chgBit(oldp+413,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x22U]));
        bufp->chgBit(oldp+414,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x48U]));
        bufp->chgBit(oldp+415,((vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                >> 0x1fU)));
        bufp->chgBit(oldp+416,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                       [0x22U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                       [0x48U]) ^ (
                                                   vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                                   >> 0x1fU)))));
        bufp->chgBit(oldp+417,((((vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                  [0x22U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                  [0x48U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                              [0x48U] 
                                              & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                                 >> 0x1fU))) 
                                | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                    >> 0x1fU) & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                   [0x22U]))));
        bufp->chgBit(oldp+418,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x23U]));
        bufp->chgBit(oldp+419,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x4aU]));
        bufp->chgBit(oldp+420,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                      >> 0xfU))));
        bufp->chgBit(oldp+421,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                       [0x23U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                       [0x4aU]) ^ (
                                                   vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                                   >> 0xfU)))));
        bufp->chgBit(oldp+422,((((vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                  [0x23U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                  [0x4aU]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                              [0x4aU] 
                                              & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                                 >> 0xfU))) 
                                | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                    >> 0xfU) & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                   [0x23U]))));
        bufp->chgBit(oldp+423,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x24U]));
        bufp->chgBit(oldp+424,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+425,((vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                >> 0x1fU)));
        bufp->chgBit(oldp+426,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                       [0x24U] ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                                  >> 0x1bU)) 
                                      ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                         >> 0x1fU)))));
        bufp->chgBit(oldp+427,((1U & (((vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                        [0x24U] & (
                                                   vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                                   >> 0x1bU)) 
                                       | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                           >> 0x1bU) 
                                          & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                             >> 0x1fU))) 
                                      | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                          >> 0x1fU) 
                                         & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                         [0x24U])))));
        bufp->chgBit(oldp+428,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x2dU]));
        bufp->chgBit(oldp+429,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x2cU]));
        bufp->chgBit(oldp+430,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [9U]));
        bufp->chgBit(oldp+431,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x2dU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x2cU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [9U])));
        bufp->chgBit(oldp+432,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x2dU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                  [0x2cU]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x2cU] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [9U])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                   [9U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                   [0x2dU]))));
        bufp->chgBit(oldp+433,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x2eU]));
        bufp->chgBit(oldp+434,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x2dU]));
        bufp->chgBit(oldp+435,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0xbU]));
        bufp->chgBit(oldp+436,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x2eU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x2dU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0xbU])));
        bufp->chgBit(oldp+437,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x2eU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                  [0x2dU]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x2dU] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0xbU])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                   [0xbU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                   [0x2eU]))));
        bufp->chgBit(oldp+438,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x2fU]));
        bufp->chgBit(oldp+439,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x2eU]));
        bufp->chgBit(oldp+440,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0xdU]));
        bufp->chgBit(oldp+441,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x2fU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x2eU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0xdU])));
        bufp->chgBit(oldp+442,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x2fU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                  [0x2eU]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x2eU] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0xdU])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                   [0xdU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                   [0x2fU]))));
        bufp->chgBit(oldp+443,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                      >> 6U))));
        bufp->chgBit(oldp+444,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                      >> 0x17U))));
        bufp->chgBit(oldp+445,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                      >> 8U))));
        bufp->chgBit(oldp+446,((1U & (VL_REDXOR_32(
                                                   (0x800100U 
                                                    & vlSelf->top__DOT__mul_16_bit__DOT__pp[1U])) 
                                      ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                         >> 6U)))));
        bufp->chgBit(oldp+447,((1U & ((((vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                         >> 6U) & (
                                                   vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                                   >> 0x17U)) 
                                       | (IData)((0x800100U 
                                                  == 
                                                  (0x800100U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[1U])))) 
                                      | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                          >> 8U) & 
                                         (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                          >> 6U))))));
        bufp->chgBit(oldp+448,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x30U]));
        bufp->chgBit(oldp+449,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x2fU]));
        bufp->chgBit(oldp+450,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0xfU]));
        bufp->chgBit(oldp+451,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x30U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x2fU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0xfU])));
        bufp->chgBit(oldp+452,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x30U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                  [0x2fU]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x2fU] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0xfU])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                   [0xfU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                   [0x30U]))));
        bufp->chgBit(oldp+453,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x31U]));
        bufp->chgBit(oldp+454,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x32U]));
        bufp->chgBit(oldp+455,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x30U]));
        bufp->chgBit(oldp+456,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x31U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x32U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x30U])));
        bufp->chgBit(oldp+457,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x31U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x32U]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                              [0x32U] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x30U])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                   [0x30U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                   [0x31U]))));
        bufp->chgBit(oldp+458,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x33U]));
        bufp->chgBit(oldp+459,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x34U]));
        bufp->chgBit(oldp+460,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x31U]));
        bufp->chgBit(oldp+461,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x33U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x34U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x31U])));
        bufp->chgBit(oldp+462,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x33U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x34U]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                              [0x34U] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x31U])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                   [0x31U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                   [0x33U]))));
        bufp->chgBit(oldp+463,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x35U]));
        bufp->chgBit(oldp+464,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x36U]));
        bufp->chgBit(oldp+465,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x33U]));
        bufp->chgBit(oldp+466,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x35U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x36U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x33U])));
        bufp->chgBit(oldp+467,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x35U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x36U]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                              [0x36U] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x33U])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                   [0x33U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                   [0x35U]))));
        bufp->chgBit(oldp+468,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x37U]));
        bufp->chgBit(oldp+469,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x38U]));
        bufp->chgBit(oldp+470,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x35U]));
        bufp->chgBit(oldp+471,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x37U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x38U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x35U])));
        bufp->chgBit(oldp+472,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x37U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x38U]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                              [0x38U] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x35U])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                   [0x35U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                   [0x37U]))));
        bufp->chgBit(oldp+473,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x39U]));
        bufp->chgBit(oldp+474,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x3aU]));
        bufp->chgBit(oldp+475,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x37U]));
        bufp->chgBit(oldp+476,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x39U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x3aU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x37U])));
        bufp->chgBit(oldp+477,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x39U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x3aU]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                              [0x3aU] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x37U])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                   [0x37U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                   [0x39U]))));
        bufp->chgBit(oldp+478,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x3bU]));
        bufp->chgBit(oldp+479,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x3cU]));
        bufp->chgBit(oldp+480,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x39U]));
        bufp->chgBit(oldp+481,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x3bU] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x3cU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x39U])));
        bufp->chgBit(oldp+482,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x3bU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x3cU]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                              [0x3cU] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x39U])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                   [0x39U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                   [0x3bU]))));
        bufp->chgBit(oldp+483,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x3dU]));
        bufp->chgBit(oldp+484,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x3eU]));
        bufp->chgBit(oldp+485,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x3bU]));
        bufp->chgBit(oldp+486,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x3dU] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x3eU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x3bU])));
        bufp->chgBit(oldp+487,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x3dU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x3eU]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                              [0x3eU] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x3bU])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                   [0x3bU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                   [0x3dU]))));
        bufp->chgBit(oldp+488,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x3fU]));
        bufp->chgBit(oldp+489,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x40U]));
        bufp->chgBit(oldp+490,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x3dU]));
        bufp->chgBit(oldp+491,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x3fU] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x40U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x3dU])));
        bufp->chgBit(oldp+492,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x3fU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x40U]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                              [0x40U] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x3dU])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                   [0x3dU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                   [0x3fU]))));
        bufp->chgBit(oldp+493,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x41U]));
        bufp->chgBit(oldp+494,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x42U]));
        bufp->chgBit(oldp+495,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x3fU]));
        bufp->chgBit(oldp+496,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x41U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x42U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x3fU])));
        bufp->chgBit(oldp+497,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x41U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x42U]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                              [0x42U] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x3fU])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                   [0x3fU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                   [0x41U]))));
        bufp->chgBit(oldp+498,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                      >> 0x10U))));
        bufp->chgBit(oldp+499,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                      >> 1U))));
        bufp->chgBit(oldp+500,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                      >> 0x12U))));
        bufp->chgBit(oldp+501,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                       >> 0x12U) ^ 
                                      VL_REDXOR_32(
                                                   (0x10002U 
                                                    & vlSelf->top__DOT__mul_16_bit__DOT__pp[5U]))))));
        bufp->chgBit(oldp+502,((1U & (((IData)((0x10002U 
                                                == 
                                                (0x10002U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[5U]))) 
                                       | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                           >> 1U) & 
                                          (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                           >> 0x12U))) 
                                      | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                          >> 0x12U) 
                                         & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                            >> 0x10U))))));
        bufp->chgBit(oldp+503,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x43U]));
        bufp->chgBit(oldp+504,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x44U]));
        bufp->chgBit(oldp+505,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x41U]));
        bufp->chgBit(oldp+506,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x43U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x44U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x41U])));
        bufp->chgBit(oldp+507,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x43U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x44U]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                              [0x44U] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x41U])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                   [0x41U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                   [0x43U]))));
        bufp->chgBit(oldp+508,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x45U]));
        bufp->chgBit(oldp+509,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x43U]));
        bufp->chgBit(oldp+510,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x44U]));
        bufp->chgBit(oldp+511,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x45U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x43U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x44U])));
        bufp->chgBit(oldp+512,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x45U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                  [0x43U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x43U] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x44U])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                   [0x44U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                   [0x45U]))));
        bufp->chgBit(oldp+513,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x55U]));
        bufp->chgBit(oldp+514,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x54U]));
        bufp->chgBit(oldp+515,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x32U]));
        bufp->chgBit(oldp+516,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x55U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x54U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x32U])));
        bufp->chgBit(oldp+517,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x55U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                  [0x54U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x54U] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x32U])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                   [0x32U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                   [0x55U]))));
        bufp->chgBit(oldp+518,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x56U]));
        bufp->chgBit(oldp+519,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x55U]));
        bufp->chgBit(oldp+520,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x34U]));
        bufp->chgBit(oldp+521,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x56U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x55U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x34U])));
        bufp->chgBit(oldp+522,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x56U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                  [0x55U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x55U] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x34U])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                   [0x34U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                   [0x56U]))));
        bufp->chgBit(oldp+523,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x57U]));
        bufp->chgBit(oldp+524,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x56U]));
        bufp->chgBit(oldp+525,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x36U]));
        bufp->chgBit(oldp+526,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x57U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x56U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x36U])));
        bufp->chgBit(oldp+527,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x57U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                  [0x56U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x56U] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x36U])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                   [0x36U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                   [0x57U]))));
        bufp->chgBit(oldp+528,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x58U]));
        bufp->chgBit(oldp+529,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x57U]));
        bufp->chgBit(oldp+530,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x38U]));
        bufp->chgBit(oldp+531,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x58U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x57U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x38U])));
        bufp->chgBit(oldp+532,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x58U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                  [0x57U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x57U] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x38U])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                   [0x38U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                   [0x58U]))));
        bufp->chgBit(oldp+533,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x59U]));
        bufp->chgBit(oldp+534,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x58U]));
        bufp->chgBit(oldp+535,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x3aU]));
        bufp->chgBit(oldp+536,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x59U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x58U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x3aU])));
        bufp->chgBit(oldp+537,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x59U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                  [0x58U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x58U] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x3aU])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                   [0x3aU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                   [0x59U]))));
        bufp->chgBit(oldp+538,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x5aU]));
        bufp->chgBit(oldp+539,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x59U]));
        bufp->chgBit(oldp+540,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x3cU]));
        bufp->chgBit(oldp+541,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x5aU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x59U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x3cU])));
        bufp->chgBit(oldp+542,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x5aU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                  [0x59U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x59U] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x3cU])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                   [0x3cU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                   [0x5aU]))));
        bufp->chgBit(oldp+543,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x5bU]));
        bufp->chgBit(oldp+544,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x5aU]));
        bufp->chgBit(oldp+545,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x3eU]));
        bufp->chgBit(oldp+546,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x5bU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x5aU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x3eU])));
        bufp->chgBit(oldp+547,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x5bU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                  [0x5aU]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x5aU] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x3eU])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                   [0x3eU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                   [0x5bU]))));
        bufp->chgBit(oldp+548,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x5cU]));
        bufp->chgBit(oldp+549,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x5bU]));
        bufp->chgBit(oldp+550,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x40U]));
        bufp->chgBit(oldp+551,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x5cU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x5bU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x40U])));
        bufp->chgBit(oldp+552,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x5cU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                  [0x5bU]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x5bU] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x40U])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                   [0x40U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                   [0x5cU]))));
        bufp->chgBit(oldp+553,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                      >> 3U))));
        bufp->chgBit(oldp+554,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                      >> 0x14U))));
        bufp->chgBit(oldp+555,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                      >> 5U))));
        bufp->chgBit(oldp+556,((1U & (VL_REDXOR_32(
                                                   (0x100020U 
                                                    & vlSelf->top__DOT__mul_16_bit__DOT__pp[3U])) 
                                      ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                         >> 3U)))));
        bufp->chgBit(oldp+557,((1U & ((((vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                         >> 3U) & (
                                                   vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                                   >> 0x14U)) 
                                       | (IData)((0x100020U 
                                                  == 
                                                  (0x100020U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[3U])))) 
                                      | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                          >> 5U) & 
                                         (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                          >> 3U))))));
        bufp->chgBit(oldp+558,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x5dU]));
        bufp->chgBit(oldp+559,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x5cU]));
        bufp->chgBit(oldp+560,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x42U]));
        bufp->chgBit(oldp+561,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x5dU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x5cU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x42U])));
        bufp->chgBit(oldp+562,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x5dU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                  [0x5cU]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x5cU] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x42U])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                   [0x42U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                   [0x5dU]))));
        bufp->chgBit(oldp+563,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x5eU]));
        bufp->chgBit(oldp+564,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x5dU]));
        bufp->chgBit(oldp+565,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x23U]));
        bufp->chgBit(oldp+566,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x5eU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x5dU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x23U])));
        bufp->chgBit(oldp+567,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x5eU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                  [0x5dU]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x5dU] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                              [0x23U])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                   [0x23U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                   [0x5eU]))));
        bufp->chgBit(oldp+568,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x5fU]));
        bufp->chgBit(oldp+569,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x5eU]));
        bufp->chgBit(oldp+570,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x24U]));
        bufp->chgBit(oldp+571,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x5fU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x5eU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x24U])));
        bufp->chgBit(oldp+572,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x5fU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                  [0x5eU]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x5eU] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                              [0x24U])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                   [0x24U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                   [0x5fU]))));
        bufp->chgBit(oldp+573,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x60U]));
        bufp->chgBit(oldp+574,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x5fU]));
        bufp->chgBit(oldp+575,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x25U]));
        bufp->chgBit(oldp+576,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x60U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x5fU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x25U])));
        bufp->chgBit(oldp+577,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x60U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                  [0x5fU]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x5fU] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                              [0x25U])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                   [0x25U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                   [0x60U]))));
        bufp->chgBit(oldp+578,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x61U]));
        bufp->chgBit(oldp+579,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x60U]));
        bufp->chgBit(oldp+580,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x26U]));
        bufp->chgBit(oldp+581,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x61U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x60U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x26U])));
        bufp->chgBit(oldp+582,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x61U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                  [0x60U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x60U] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                              [0x26U])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                   [0x26U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                   [0x61U]))));
        bufp->chgBit(oldp+583,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x62U]));
        bufp->chgBit(oldp+584,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x61U]));
        bufp->chgBit(oldp+585,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x26U]));
        bufp->chgBit(oldp+586,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x62U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x61U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x26U])));
        bufp->chgBit(oldp+587,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x62U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                  [0x61U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x61U] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x26U])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                   [0x26U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                   [0x62U]))));
        bufp->chgBit(oldp+588,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x4aU]));
        bufp->chgBit(oldp+589,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x62U]));
        bufp->chgBit(oldp+590,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x49U]));
        bufp->chgBit(oldp+591,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x4aU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x62U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x49U])));
        bufp->chgBit(oldp+592,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x4aU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                  [0x62U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x62U] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x49U])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                   [0x49U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                   [0x4aU]))));
        bufp->chgBit(oldp+593,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x65U]));
        bufp->chgBit(oldp+594,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x64U]));
        bufp->chgBit(oldp+595,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x7cU]));
        bufp->chgBit(oldp+596,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x65U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x64U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x7cU])));
        bufp->chgBit(oldp+597,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x65U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                  [0x64U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x64U] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x7cU])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                   [0x7cU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                   [0x65U]))));
        bufp->chgBit(oldp+598,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x66U]));
        bufp->chgBit(oldp+599,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x65U]));
        bufp->chgBit(oldp+600,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x7dU]));
        bufp->chgBit(oldp+601,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x66U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x65U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x7dU])));
        bufp->chgBit(oldp+602,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x66U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                  [0x65U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x65U] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x7dU])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                   [0x7dU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                   [0x66U]))));
        bufp->chgBit(oldp+603,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x67U]));
        bufp->chgBit(oldp+604,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x66U]));
        bufp->chgBit(oldp+605,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x7eU]));
        bufp->chgBit(oldp+606,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x67U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x66U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x7eU])));
        bufp->chgBit(oldp+607,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x67U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                  [0x66U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x66U] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x7eU])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                   [0x7eU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                   [0x67U]))));
        bufp->chgBit(oldp+608,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                      >> 0x16U))));
        bufp->chgBit(oldp+609,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                      >> 7U))));
        bufp->chgBit(oldp+610,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                      >> 0x18U))));
        bufp->chgBit(oldp+611,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                       >> 0x18U) ^ 
                                      VL_REDXOR_32(
                                                   (0x400080U 
                                                    & vlSelf->top__DOT__mul_16_bit__DOT__pp[2U]))))));
        bufp->chgBit(oldp+612,((1U & (((IData)((0x400080U 
                                                == 
                                                (0x400080U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[2U]))) 
                                       | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                           >> 7U) & 
                                          (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                           >> 0x18U))) 
                                      | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                          >> 0x18U) 
                                         & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                            >> 0x16U))))));
        bufp->chgBit(oldp+613,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x68U]));
        bufp->chgBit(oldp+614,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x67U]));
        bufp->chgBit(oldp+615,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x7fU]));
        bufp->chgBit(oldp+616,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x68U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x67U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x7fU])));
        bufp->chgBit(oldp+617,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x68U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                  [0x67U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x67U] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x7fU])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                   [0x7fU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                   [0x68U]))));
        bufp->chgBit(oldp+618,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x69U]));
        bufp->chgBit(oldp+619,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x68U]));
        bufp->chgBit(oldp+620,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x80U]));
        bufp->chgBit(oldp+621,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x69U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x68U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x80U])));
        bufp->chgBit(oldp+622,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x69U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                  [0x68U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x68U] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x80U])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                   [0x80U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                   [0x69U]))));
        bufp->chgBit(oldp+623,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x6aU]));
        bufp->chgBit(oldp+624,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x69U]));
        bufp->chgBit(oldp+625,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x81U]));
        bufp->chgBit(oldp+626,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x6aU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x69U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x81U])));
        bufp->chgBit(oldp+627,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x6aU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                  [0x69U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x69U] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x81U])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                   [0x81U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                   [0x6aU]))));
        bufp->chgBit(oldp+628,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x6bU]));
        bufp->chgBit(oldp+629,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x6aU]));
        bufp->chgBit(oldp+630,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x82U]));
        bufp->chgBit(oldp+631,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x6bU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x6aU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x82U])));
        bufp->chgBit(oldp+632,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x6bU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                  [0x6aU]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x6aU] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x82U])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                   [0x82U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                   [0x6bU]))));
        bufp->chgBit(oldp+633,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x6cU]));
        bufp->chgBit(oldp+634,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x6bU]));
        bufp->chgBit(oldp+635,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x83U]));
        bufp->chgBit(oldp+636,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x6cU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x6bU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x83U])));
        bufp->chgBit(oldp+637,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x6cU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                  [0x6bU]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x6bU] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x83U])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                   [0x83U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                   [0x6cU]))));
        bufp->chgBit(oldp+638,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x6dU]));
        bufp->chgBit(oldp+639,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x6cU]));
        bufp->chgBit(oldp+640,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x84U]));
        bufp->chgBit(oldp+641,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x6dU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x6cU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x84U])));
        bufp->chgBit(oldp+642,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x6dU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                  [0x6cU]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x6cU] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x84U])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                   [0x84U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                   [0x6dU]))));
        bufp->chgBit(oldp+643,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x6eU]));
        bufp->chgBit(oldp+644,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x6dU]));
        bufp->chgBit(oldp+645,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x85U]));
        bufp->chgBit(oldp+646,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x6eU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x6dU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x85U])));
        bufp->chgBit(oldp+647,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x6eU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                  [0x6dU]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x6dU] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x85U])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                   [0x85U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                   [0x6eU]))));
        bufp->chgBit(oldp+648,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x6fU]));
        bufp->chgBit(oldp+649,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x6eU]));
        bufp->chgBit(oldp+650,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x86U]));
        bufp->chgBit(oldp+651,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x6fU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x6eU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x86U])));
        bufp->chgBit(oldp+652,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x6fU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                  [0x6eU]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x6eU] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x86U])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                   [0x86U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                   [0x6fU]))));
        bufp->chgBit(oldp+653,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x70U]));
        bufp->chgBit(oldp+654,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x6fU]));
        bufp->chgBit(oldp+655,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x87U]));
        bufp->chgBit(oldp+656,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x70U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x6fU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x87U])));
        bufp->chgBit(oldp+657,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x70U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                  [0x6fU]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x6fU] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x87U])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                   [0x87U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                   [0x70U]))));
        bufp->chgBit(oldp+658,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x71U]));
        bufp->chgBit(oldp+659,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x70U]));
        bufp->chgBit(oldp+660,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x88U]));
        bufp->chgBit(oldp+661,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x71U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x70U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x88U])));
        bufp->chgBit(oldp+662,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x71U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                  [0x70U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x70U] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x88U])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                   [0x88U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                   [0x71U]))));
        bufp->chgBit(oldp+663,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                      >> 9U))));
        bufp->chgBit(oldp+664,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+665,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                      >> 0xbU))));
        bufp->chgBit(oldp+666,((1U & (VL_REDXOR_32(
                                                   (0x4000800U 
                                                    & vlSelf->top__DOT__mul_16_bit__DOT__pp[0U])) 
                                      ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                         >> 9U)))));
        bufp->chgBit(oldp+667,((1U & ((((vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                         >> 9U) & (
                                                   vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                                   >> 0x1aU)) 
                                       | (IData)((0x4000800U 
                                                  == 
                                                  (0x4000800U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[0U])))) 
                                      | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                          >> 0xbU) 
                                         & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                            >> 9U))))));
        bufp->chgBit(oldp+668,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x72U]));
        bufp->chgBit(oldp+669,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x71U]));
        bufp->chgBit(oldp+670,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x89U]));
        bufp->chgBit(oldp+671,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x72U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x71U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x89U])));
        bufp->chgBit(oldp+672,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x72U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                  [0x71U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x71U] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x89U])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                   [0x89U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                   [0x72U]))));
        bufp->chgBit(oldp+673,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x73U]));
        bufp->chgBit(oldp+674,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x72U]));
        bufp->chgBit(oldp+675,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x8aU]));
        bufp->chgBit(oldp+676,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x73U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x72U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x8aU])));
        bufp->chgBit(oldp+677,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x73U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                  [0x72U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x72U] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x8aU])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                   [0x8aU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                   [0x73U]))));
        bufp->chgBit(oldp+678,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x74U]));
        bufp->chgBit(oldp+679,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x73U]));
        bufp->chgBit(oldp+680,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x8bU]));
        bufp->chgBit(oldp+681,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x74U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x73U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x8bU])));
        bufp->chgBit(oldp+682,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x74U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                  [0x73U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x73U] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x8bU])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                   [0x8bU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                   [0x74U]))));
        bufp->chgBit(oldp+683,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x75U]));
        bufp->chgBit(oldp+684,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x74U]));
        bufp->chgBit(oldp+685,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x8cU]));
        bufp->chgBit(oldp+686,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x75U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x74U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x8cU])));
        bufp->chgBit(oldp+687,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x75U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                  [0x74U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x74U] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x8cU])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                   [0x8cU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                   [0x75U]))));
        bufp->chgBit(oldp+688,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x76U]));
        bufp->chgBit(oldp+689,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x75U]));
        bufp->chgBit(oldp+690,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x8dU]));
        bufp->chgBit(oldp+691,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x76U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x75U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x8dU])));
        bufp->chgBit(oldp+692,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x76U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                  [0x75U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x75U] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x8dU])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                   [0x8dU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                   [0x76U]))));
        bufp->chgBit(oldp+693,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x77U]));
        bufp->chgBit(oldp+694,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x76U]));
        bufp->chgBit(oldp+695,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x8eU]));
        bufp->chgBit(oldp+696,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x77U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x76U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x8eU])));
        bufp->chgBit(oldp+697,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x77U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                  [0x76U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x76U] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x8eU])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                   [0x8eU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                   [0x77U]))));
        bufp->chgBit(oldp+698,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x78U]));
        bufp->chgBit(oldp+699,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x77U]));
        bufp->chgBit(oldp+700,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x8fU]));
        bufp->chgBit(oldp+701,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x78U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x77U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x8fU])));
        bufp->chgBit(oldp+702,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x78U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                  [0x77U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x77U] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x8fU])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                   [0x8fU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                   [0x78U]))));
        bufp->chgBit(oldp+703,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x79U]));
        bufp->chgBit(oldp+704,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x78U]));
        bufp->chgBit(oldp+705,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x90U]));
        bufp->chgBit(oldp+706,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x79U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x78U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x90U])));
        bufp->chgBit(oldp+707,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x79U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                  [0x78U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x78U] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x90U])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                   [0x90U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                   [0x79U]))));
        bufp->chgBit(oldp+708,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x7aU]));
        bufp->chgBit(oldp+709,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x79U]));
        bufp->chgBit(oldp+710,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x91U]));
        bufp->chgBit(oldp+711,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x7aU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x79U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x91U])));
        bufp->chgBit(oldp+712,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x7aU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                  [0x79U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x79U] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x91U])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                   [0x91U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                   [0x7aU]))));
        bufp->chgBit(oldp+713,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                               [0x7bU]));
        bufp->chgBit(oldp+714,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x7aU]));
        bufp->chgBit(oldp+715,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x92U]));
        bufp->chgBit(oldp+716,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x7bU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x7aU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x92U])));
        bufp->chgBit(oldp+717,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                  [0x7bU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                  [0x7aU]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x7aU] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                              [0x92U])) 
                                | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                   [0x92U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                   [0x7bU]))));
        bufp->chgBit(oldp+718,((1U & vlSelf->top__DOT__mul_16_bit__DOT__pp[6U])));
        bufp->chgBit(oldp+719,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                      >> 0x11U))));
        bufp->chgBit(oldp+720,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                      >> 2U))));
        bufp->chgBit(oldp+721,((1U & (VL_REDXOR_32(
                                                   (0x20004U 
                                                    & vlSelf->top__DOT__mul_16_bit__DOT__pp[5U])) 
                                      ^ vlSelf->top__DOT__mul_16_bit__DOT__pp[6U]))));
        bufp->chgBit(oldp+722,((1U & (((vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                        & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                           >> 0x11U)) 
                                       | (IData)((0x20004U 
                                                  == 
                                                  (0x20004U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[5U])))) 
                                      | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                          >> 2U) & 
                                         vlSelf->top__DOT__mul_16_bit__DOT__pp[6U])))));
        bufp->chgBit(oldp+723,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+724,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                      >> 0xdU))));
        bufp->chgBit(oldp+725,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+726,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                       >> 0x1eU) ^ 
                                      VL_REDXOR_32(
                                                   (0x10002000U 
                                                    & vlSelf->top__DOT__mul_16_bit__DOT__pp[6U]))))));
        bufp->chgBit(oldp+727,((1U & (((IData)((0x10002000U 
                                                == 
                                                (0x10002000U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[6U]))) 
                                       | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                           >> 0xdU) 
                                          & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                             >> 0x1eU))) 
                                      | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                          >> 0x1eU) 
                                         & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                            >> 0x1cU))))));
        bufp->chgBit(oldp+728,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x25U]));
        bufp->chgBit(oldp+729,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x4dU]));
        bufp->chgBit(oldp+730,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                      >> 0xfU))));
        bufp->chgBit(oldp+731,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                       [0x25U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                       [0x4dU]) ^ (
                                                   vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                                   >> 0xfU)))));
        bufp->chgBit(oldp+732,((((vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                  [0x25U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                  [0x4dU]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                              [0x4dU] 
                                              & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                                 >> 0xfU))) 
                                | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                    >> 0xfU) & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                   [0x25U]))));
        bufp->chgBit(oldp+733,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [0x4fU]));
        bufp->chgBit(oldp+734,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x4eU]));
        bufp->chgBit(oldp+735,((vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                >> 0x1fU)));
        bufp->chgBit(oldp+736,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                       [0x4fU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                       [0x4eU]) ^ (
                                                   vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                                   >> 0x1fU)))));
        bufp->chgBit(oldp+737,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x4fU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                  [0x4eU]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                              [0x4eU] 
                                              & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                                 >> 0x1fU))) 
                                | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                    >> 0x1fU) & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [0x4fU]))));
        bufp->chgBit(oldp+738,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+739,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                      >> 0xfU))));
        bufp->chgBit(oldp+740,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [0x4fU]));
        bufp->chgBit(oldp+741,((1U & (VL_REDXOR_32(
                                                   (0x40008000U 
                                                    & vlSelf->top__DOT__mul_16_bit__DOT__pp[7U])) 
                                      ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                      [0x4fU]))));
        bufp->chgBit(oldp+742,((1U & (((IData)((0x40008000U 
                                                == 
                                                (0x40008000U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[7U]))) 
                                       | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                           >> 0xfU) 
                                          & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                          [0x4fU])) 
                                      | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                         [0x4fU] & 
                                         (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                          >> 0x1eU))))));
        bufp->chgBit(oldp+743,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x7bU]));
        bufp->chgBit(oldp+744,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                               [0x93U]));
        bufp->chgBit(oldp+745,((1U & ((~ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                       [0x7bU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                      [0x93U]))));
        bufp->chgBit(oldp+746,(((vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x7bU] | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                            [0x7bU] 
                                            & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                            [0x93U])) 
                                | vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x93U])));
        bufp->chgBit(oldp+747,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                      >> 0x13U))));
        bufp->chgBit(oldp+748,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                      >> 4U))));
        bufp->chgBit(oldp+749,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                      >> 0x15U))));
        bufp->chgBit(oldp+750,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                       >> 0x15U) ^ 
                                      VL_REDXOR_32(
                                                   (0x80010U 
                                                    & vlSelf->top__DOT__mul_16_bit__DOT__pp[4U]))))));
        bufp->chgBit(oldp+751,((1U & (((IData)((0x80010U 
                                                == 
                                                (0x80010U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[4U]))) 
                                       | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                           >> 4U) & 
                                          (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                           >> 0x15U))) 
                                      | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                          >> 0x15U) 
                                         & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                            >> 0x13U))))));
        bufp->chgBit(oldp+752,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                      >> 6U))));
        bufp->chgBit(oldp+753,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                      >> 0x17U))));
        bufp->chgBit(oldp+754,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                      >> 8U))));
        bufp->chgBit(oldp+755,((1U & (VL_REDXOR_32(
                                                   (0x800100U 
                                                    & vlSelf->top__DOT__mul_16_bit__DOT__pp[2U])) 
                                      ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                         >> 6U)))));
        bufp->chgBit(oldp+756,((1U & ((((vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                         >> 6U) & (
                                                   vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                                   >> 0x17U)) 
                                       | (IData)((0x800100U 
                                                  == 
                                                  (0x800100U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[2U])))) 
                                      | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                          >> 8U) & 
                                         (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                          >> 6U))))));
        bufp->chgBit(oldp+757,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                      >> 0x19U))));
        bufp->chgBit(oldp+758,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                      >> 0xaU))));
        bufp->chgBit(oldp+759,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+760,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                       >> 0x1bU) ^ 
                                      VL_REDXOR_32(
                                                   (0x2000400U 
                                                    & vlSelf->top__DOT__mul_16_bit__DOT__pp[1U]))))));
        bufp->chgBit(oldp+761,((1U & (((IData)((0x2000400U 
                                                == 
                                                (0x2000400U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[1U]))) 
                                       | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                           >> 0xaU) 
                                          & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                             >> 0x1bU))) 
                                      | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                          >> 0x1bU) 
                                         & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                            >> 0x19U))))));
        bufp->chgBit(oldp+762,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                      >> 0x10U))));
        bufp->chgBit(oldp+763,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                      >> 1U))));
        bufp->chgBit(oldp+764,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                      >> 0x12U))));
        bufp->chgBit(oldp+765,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                       >> 0x12U) ^ 
                                      VL_REDXOR_32(
                                                   (0x10002U 
                                                    & vlSelf->top__DOT__mul_16_bit__DOT__pp[6U]))))));
        bufp->chgBit(oldp+766,((1U & (((IData)((0x10002U 
                                                == 
                                                (0x10002U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[6U]))) 
                                       | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                           >> 1U) & 
                                          (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                           >> 0x12U))) 
                                      | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                          >> 0x12U) 
                                         & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                            >> 0x10U))))));
        bufp->chgBit(oldp+767,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                      >> 3U))));
        bufp->chgBit(oldp+768,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                      >> 0x14U))));
        bufp->chgBit(oldp+769,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                      >> 5U))));
        bufp->chgBit(oldp+770,((1U & (VL_REDXOR_32(
                                                   (0x100020U 
                                                    & vlSelf->top__DOT__mul_16_bit__DOT__pp[4U])) 
                                      ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                         >> 3U)))));
        bufp->chgBit(oldp+771,((1U & ((((vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                         >> 3U) & (
                                                   vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                                   >> 0x14U)) 
                                       | (IData)((0x100020U 
                                                  == 
                                                  (0x100020U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[4U])))) 
                                      | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                          >> 5U) & 
                                         (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                          >> 3U))))));
        bufp->chgBit(oldp+772,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                      >> 0x16U))));
        bufp->chgBit(oldp+773,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                      >> 7U))));
        bufp->chgBit(oldp+774,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                      >> 0x18U))));
        bufp->chgBit(oldp+775,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                       >> 0x18U) ^ 
                                      VL_REDXOR_32(
                                                   (0x400080U 
                                                    & vlSelf->top__DOT__mul_16_bit__DOT__pp[3U]))))));
        bufp->chgBit(oldp+776,((1U & (((IData)((0x400080U 
                                                == 
                                                (0x400080U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[3U]))) 
                                       | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                           >> 7U) & 
                                          (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                           >> 0x18U))) 
                                      | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                          >> 0x18U) 
                                         & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                            >> 0x16U))))));
        bufp->chgBit(oldp+777,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                      >> 9U))));
        bufp->chgBit(oldp+778,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+779,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                      >> 0xbU))));
        bufp->chgBit(oldp+780,((1U & (VL_REDXOR_32(
                                                   (0x4000800U 
                                                    & vlSelf->top__DOT__mul_16_bit__DOT__pp[1U])) 
                                      ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                         >> 9U)))));
        bufp->chgBit(oldp+781,((1U & ((((vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                         >> 9U) & (
                                                   vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                                   >> 0x1aU)) 
                                       | (IData)((0x4000800U 
                                                  == 
                                                  (0x4000800U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[1U])))) 
                                      | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                          >> 0xbU) 
                                         & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                            >> 9U))))));
        bufp->chgBit(oldp+782,((1U & vlSelf->top__DOT__mul_16_bit__DOT__pp[7U])));
        bufp->chgBit(oldp+783,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                      >> 0x11U))));
        bufp->chgBit(oldp+784,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                      >> 2U))));
        bufp->chgBit(oldp+785,((1U & (VL_REDXOR_32(
                                                   (0x20004U 
                                                    & vlSelf->top__DOT__mul_16_bit__DOT__pp[6U])) 
                                      ^ vlSelf->top__DOT__mul_16_bit__DOT__pp[7U]))));
        bufp->chgBit(oldp+786,((1U & (((vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                        & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                           >> 0x11U)) 
                                       | (IData)((0x20004U 
                                                  == 
                                                  (0x20004U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[6U])))) 
                                      | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                          >> 2U) & 
                                         vlSelf->top__DOT__mul_16_bit__DOT__pp[7U])))));
        bufp->chgBit(oldp+787,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                      >> 0x13U))));
        bufp->chgBit(oldp+788,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                      >> 4U))));
        bufp->chgBit(oldp+789,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                      >> 0x15U))));
        bufp->chgBit(oldp+790,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                       >> 0x15U) ^ 
                                      VL_REDXOR_32(
                                                   (0x80010U 
                                                    & vlSelf->top__DOT__mul_16_bit__DOT__pp[5U]))))));
        bufp->chgBit(oldp+791,((1U & (((IData)((0x80010U 
                                                == 
                                                (0x80010U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[5U]))) 
                                       | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                           >> 4U) & 
                                          (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                           >> 0x15U))) 
                                      | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                          >> 0x15U) 
                                         & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                            >> 0x13U))))));
        bufp->chgBit(oldp+792,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                      >> 6U))));
        bufp->chgBit(oldp+793,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                      >> 0x17U))));
        bufp->chgBit(oldp+794,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                      >> 8U))));
        bufp->chgBit(oldp+795,((1U & (VL_REDXOR_32(
                                                   (0x800100U 
                                                    & vlSelf->top__DOT__mul_16_bit__DOT__pp[3U])) 
                                      ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                         >> 6U)))));
        bufp->chgBit(oldp+796,((1U & ((((vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                         >> 6U) & (
                                                   vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                                   >> 0x17U)) 
                                       | (IData)((0x800100U 
                                                  == 
                                                  (0x800100U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[3U])))) 
                                      | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                          >> 8U) & 
                                         (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                          >> 6U))))));
        bufp->chgBit(oldp+797,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                      >> 0x19U))));
        bufp->chgBit(oldp+798,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                      >> 0xaU))));
        bufp->chgBit(oldp+799,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+800,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                       >> 0x1bU) ^ 
                                      VL_REDXOR_32(
                                                   (0x2000400U 
                                                    & vlSelf->top__DOT__mul_16_bit__DOT__pp[2U]))))));
        bufp->chgBit(oldp+801,((1U & (((IData)((0x2000400U 
                                                == 
                                                (0x2000400U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[2U]))) 
                                       | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                           >> 0xaU) 
                                          & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                             >> 0x1bU))) 
                                      | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                          >> 0x1bU) 
                                         & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                            >> 0x19U))))));
        bufp->chgBit(oldp+802,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                      >> 0xcU))));
        bufp->chgBit(oldp+803,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+804,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                      >> 0xeU))));
        bufp->chgBit(oldp+805,((1U & (VL_REDXOR_32(
                                                   (0x20004000U 
                                                    & vlSelf->top__DOT__mul_16_bit__DOT__pp[0U])) 
                                      ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                         >> 0xcU)))));
        bufp->chgBit(oldp+806,((1U & ((((vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                         >> 0xcU) & 
                                        (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                         >> 0x1dU)) 
                                       | (IData)((0x20004000U 
                                                  == 
                                                  (0x20004000U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[0U])))) 
                                      | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                          >> 0xeU) 
                                         & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                            >> 0xcU))))));
        bufp->chgBit(oldp+807,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                      >> 0x10U))));
        bufp->chgBit(oldp+808,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                      >> 1U))));
        bufp->chgBit(oldp+809,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                      >> 0x12U))));
        bufp->chgBit(oldp+810,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                       >> 0x12U) ^ 
                                      VL_REDXOR_32(
                                                   (0x10002U 
                                                    & vlSelf->top__DOT__mul_16_bit__DOT__pp[7U]))))));
        bufp->chgBit(oldp+811,((1U & (((IData)((0x10002U 
                                                == 
                                                (0x10002U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[7U]))) 
                                       | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                           >> 1U) & 
                                          (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                           >> 0x12U))) 
                                      | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                          >> 0x12U) 
                                         & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                            >> 0x10U))))));
        bufp->chgBit(oldp+812,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                      >> 3U))));
        bufp->chgBit(oldp+813,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                      >> 0x14U))));
        bufp->chgBit(oldp+814,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                      >> 5U))));
        bufp->chgBit(oldp+815,((1U & (VL_REDXOR_32(
                                                   (0x100020U 
                                                    & vlSelf->top__DOT__mul_16_bit__DOT__pp[5U])) 
                                      ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                         >> 3U)))));
        bufp->chgBit(oldp+816,((1U & ((((vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                         >> 3U) & (
                                                   vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                                   >> 0x14U)) 
                                       | (IData)((0x100020U 
                                                  == 
                                                  (0x100020U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[5U])))) 
                                      | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                          >> 5U) & 
                                         (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                          >> 3U))))));
        bufp->chgBit(oldp+817,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                      >> 0x16U))));
        bufp->chgBit(oldp+818,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                      >> 7U))));
        bufp->chgBit(oldp+819,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                      >> 0x18U))));
        bufp->chgBit(oldp+820,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                       >> 0x18U) ^ 
                                      VL_REDXOR_32(
                                                   (0x400080U 
                                                    & vlSelf->top__DOT__mul_16_bit__DOT__pp[4U]))))));
        bufp->chgBit(oldp+821,((1U & (((IData)((0x400080U 
                                                == 
                                                (0x400080U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[4U]))) 
                                       | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                           >> 7U) & 
                                          (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                           >> 0x18U))) 
                                      | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                          >> 0x18U) 
                                         & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                            >> 0x16U))))));
        bufp->chgBit(oldp+822,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                      >> 9U))));
        bufp->chgBit(oldp+823,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+824,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                      >> 0xbU))));
        bufp->chgBit(oldp+825,((1U & (VL_REDXOR_32(
                                                   (0x4000800U 
                                                    & vlSelf->top__DOT__mul_16_bit__DOT__pp[2U])) 
                                      ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                         >> 9U)))));
        bufp->chgBit(oldp+826,((1U & ((((vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                         >> 9U) & (
                                                   vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                                   >> 0x1aU)) 
                                       | (IData)((0x4000800U 
                                                  == 
                                                  (0x4000800U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[2U])))) 
                                      | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                          >> 0xbU) 
                                         & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                            >> 9U))))));
        bufp->chgBit(oldp+827,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+828,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                      >> 0xdU))));
        bufp->chgBit(oldp+829,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+830,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                       >> 0x1eU) ^ 
                                      VL_REDXOR_32(
                                                   (0x10002000U 
                                                    & vlSelf->top__DOT__mul_16_bit__DOT__pp[1U]))))));
        bufp->chgBit(oldp+831,((1U & (((IData)((0x10002000U 
                                                == 
                                                (0x10002000U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[1U]))) 
                                       | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                           >> 0xdU) 
                                          & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                             >> 0x1eU))) 
                                      | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                          >> 0x1eU) 
                                         & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                            >> 0x1cU))))));
        bufp->chgBit(oldp+832,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                      >> 0x11U))));
        bufp->chgBit(oldp+833,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                      >> 2U))));
        bufp->chgBit(oldp+834,((1U & (~ VL_REDXOR_32(
                                                     (0x20004U 
                                                      & vlSelf->top__DOT__mul_16_bit__DOT__pp[7U]))))));
        bufp->chgBit(oldp+835,((1U & (IData)(((0U != 
                                               (0x20004U 
                                                & vlSelf->top__DOT__mul_16_bit__DOT__pp[7U])) 
                                              | (0x20004U 
                                                 == 
                                                 (0x20004U 
                                                  & vlSelf->top__DOT__mul_16_bit__DOT__pp[7U])))))));
        bufp->chgBit(oldp+836,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                      >> 0x13U))));
        bufp->chgBit(oldp+837,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                      >> 4U))));
        bufp->chgBit(oldp+838,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                      >> 0x15U))));
        bufp->chgBit(oldp+839,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                       >> 0x15U) ^ 
                                      VL_REDXOR_32(
                                                   (0x80010U 
                                                    & vlSelf->top__DOT__mul_16_bit__DOT__pp[6U]))))));
        bufp->chgBit(oldp+840,((1U & (((IData)((0x80010U 
                                                == 
                                                (0x80010U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[6U]))) 
                                       | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                           >> 4U) & 
                                          (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                           >> 0x15U))) 
                                      | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                          >> 0x15U) 
                                         & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                            >> 0x13U))))));
        bufp->chgBit(oldp+841,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                      >> 6U))));
        bufp->chgBit(oldp+842,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                      >> 0x17U))));
        bufp->chgBit(oldp+843,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                      >> 8U))));
        bufp->chgBit(oldp+844,((1U & (VL_REDXOR_32(
                                                   (0x800100U 
                                                    & vlSelf->top__DOT__mul_16_bit__DOT__pp[4U])) 
                                      ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                         >> 6U)))));
        bufp->chgBit(oldp+845,((1U & ((((vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                         >> 6U) & (
                                                   vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                                   >> 0x17U)) 
                                       | (IData)((0x800100U 
                                                  == 
                                                  (0x800100U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[4U])))) 
                                      | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                          >> 8U) & 
                                         (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                          >> 6U))))));
        bufp->chgBit(oldp+846,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                      >> 0x19U))));
        bufp->chgBit(oldp+847,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                      >> 0xaU))));
        bufp->chgBit(oldp+848,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+849,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                       >> 0x1bU) ^ 
                                      VL_REDXOR_32(
                                                   (0x2000400U 
                                                    & vlSelf->top__DOT__mul_16_bit__DOT__pp[3U]))))));
        bufp->chgBit(oldp+850,((1U & (((IData)((0x2000400U 
                                                == 
                                                (0x2000400U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[3U]))) 
                                       | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                           >> 0xaU) 
                                          & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                             >> 0x1bU))) 
                                      | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                          >> 0x1bU) 
                                         & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                            >> 0x19U))))));
        bufp->chgBit(oldp+851,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                      >> 0xcU))));
        bufp->chgBit(oldp+852,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+853,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                      >> 0xeU))));
        bufp->chgBit(oldp+854,((1U & (VL_REDXOR_32(
                                                   (0x20004000U 
                                                    & vlSelf->top__DOT__mul_16_bit__DOT__pp[1U])) 
                                      ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                         >> 0xcU)))));
        bufp->chgBit(oldp+855,((1U & ((((vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                         >> 0xcU) & 
                                        (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                         >> 0x1dU)) 
                                       | (IData)((0x20004000U 
                                                  == 
                                                  (0x20004000U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[1U])))) 
                                      | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                          >> 0xeU) 
                                         & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                            >> 0xcU))))));
        bufp->chgBit(oldp+856,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                      >> 3U))));
        bufp->chgBit(oldp+857,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                      >> 0x14U))));
        bufp->chgBit(oldp+858,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                      >> 5U))));
        bufp->chgBit(oldp+859,((1U & (VL_REDXOR_32(
                                                   (0x100020U 
                                                    & vlSelf->top__DOT__mul_16_bit__DOT__pp[6U])) 
                                      ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                         >> 3U)))));
        bufp->chgBit(oldp+860,((1U & ((((vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                         >> 3U) & (
                                                   vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                                   >> 0x14U)) 
                                       | (IData)((0x100020U 
                                                  == 
                                                  (0x100020U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[6U])))) 
                                      | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                          >> 5U) & 
                                         (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                          >> 3U))))));
        bufp->chgBit(oldp+861,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                      >> 0x16U))));
        bufp->chgBit(oldp+862,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                      >> 7U))));
        bufp->chgBit(oldp+863,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                      >> 0x18U))));
        bufp->chgBit(oldp+864,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                       >> 0x18U) ^ 
                                      VL_REDXOR_32(
                                                   (0x400080U 
                                                    & vlSelf->top__DOT__mul_16_bit__DOT__pp[5U]))))));
        bufp->chgBit(oldp+865,((1U & (((IData)((0x400080U 
                                                == 
                                                (0x400080U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[5U]))) 
                                       | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                           >> 7U) & 
                                          (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                           >> 0x18U))) 
                                      | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                          >> 0x18U) 
                                         & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                            >> 0x16U))))));
        bufp->chgBit(oldp+866,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                      >> 9U))));
        bufp->chgBit(oldp+867,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+868,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                      >> 0xbU))));
        bufp->chgBit(oldp+869,((1U & (VL_REDXOR_32(
                                                   (0x4000800U 
                                                    & vlSelf->top__DOT__mul_16_bit__DOT__pp[3U])) 
                                      ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                         >> 9U)))));
        bufp->chgBit(oldp+870,((1U & ((((vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                         >> 9U) & (
                                                   vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                                   >> 0x1aU)) 
                                       | (IData)((0x4000800U 
                                                  == 
                                                  (0x4000800U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[3U])))) 
                                      | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                          >> 0xbU) 
                                         & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                            >> 9U))))));
        bufp->chgBit(oldp+871,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+872,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                      >> 0xdU))));
        bufp->chgBit(oldp+873,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+874,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                       >> 0x1eU) ^ 
                                      VL_REDXOR_32(
                                                   (0x10002000U 
                                                    & vlSelf->top__DOT__mul_16_bit__DOT__pp[2U]))))));
        bufp->chgBit(oldp+875,((1U & (((IData)((0x10002000U 
                                                == 
                                                (0x10002000U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[2U]))) 
                                       | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                           >> 0xdU) 
                                          & (vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                             >> 0x1eU))) 
                                      | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[1U] 
                                          >> 0x1eU) 
                                         & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                            >> 0x1cU))))));
        bufp->chgBit(oldp+876,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                      >> 0x13U))));
        bufp->chgBit(oldp+877,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                      >> 4U))));
        bufp->chgBit(oldp+878,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                      >> 0x15U))));
        bufp->chgBit(oldp+879,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                       >> 0x15U) ^ 
                                      VL_REDXOR_32(
                                                   (0x80010U 
                                                    & vlSelf->top__DOT__mul_16_bit__DOT__pp[7U]))))));
        bufp->chgBit(oldp+880,((1U & (((IData)((0x80010U 
                                                == 
                                                (0x80010U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[7U]))) 
                                       | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                           >> 4U) & 
                                          (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                           >> 0x15U))) 
                                      | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                          >> 0x15U) 
                                         & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                            >> 0x13U))))));
        bufp->chgBit(oldp+881,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                      >> 6U))));
        bufp->chgBit(oldp+882,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                      >> 0x17U))));
        bufp->chgBit(oldp+883,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                      >> 8U))));
        bufp->chgBit(oldp+884,((1U & (VL_REDXOR_32(
                                                   (0x800100U 
                                                    & vlSelf->top__DOT__mul_16_bit__DOT__pp[5U])) 
                                      ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                         >> 6U)))));
        bufp->chgBit(oldp+885,((1U & ((((vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                         >> 6U) & (
                                                   vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                                   >> 0x17U)) 
                                       | (IData)((0x800100U 
                                                  == 
                                                  (0x800100U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[5U])))) 
                                      | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                          >> 8U) & 
                                         (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                          >> 6U))))));
        bufp->chgBit(oldp+886,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                      >> 0x19U))));
        bufp->chgBit(oldp+887,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                      >> 0xaU))));
        bufp->chgBit(oldp+888,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+889,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                       >> 0x1bU) ^ 
                                      VL_REDXOR_32(
                                                   (0x2000400U 
                                                    & vlSelf->top__DOT__mul_16_bit__DOT__pp[4U]))))));
        bufp->chgBit(oldp+890,((1U & (((IData)((0x2000400U 
                                                == 
                                                (0x2000400U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[4U]))) 
                                       | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                           >> 0xaU) 
                                          & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                             >> 0x1bU))) 
                                      | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                          >> 0x1bU) 
                                         & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                            >> 0x19U))))));
        bufp->chgBit(oldp+891,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                      >> 0xcU))));
        bufp->chgBit(oldp+892,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+893,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                      >> 0xeU))));
        bufp->chgBit(oldp+894,((1U & (VL_REDXOR_32(
                                                   (0x20004000U 
                                                    & vlSelf->top__DOT__mul_16_bit__DOT__pp[2U])) 
                                      ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                         >> 0xcU)))));
        bufp->chgBit(oldp+895,((1U & ((((vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                         >> 0xcU) & 
                                        (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                         >> 0x1dU)) 
                                       | (IData)((0x20004000U 
                                                  == 
                                                  (0x20004000U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[2U])))) 
                                      | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                          >> 0xeU) 
                                         & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                            >> 0xcU))))));
        bufp->chgBit(oldp+896,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                      >> 0x16U))));
        bufp->chgBit(oldp+897,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                      >> 7U))));
        bufp->chgBit(oldp+898,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                      >> 0x18U))));
        bufp->chgBit(oldp+899,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                       >> 0x18U) ^ 
                                      VL_REDXOR_32(
                                                   (0x400080U 
                                                    & vlSelf->top__DOT__mul_16_bit__DOT__pp[6U]))))));
        bufp->chgBit(oldp+900,((1U & (((IData)((0x400080U 
                                                == 
                                                (0x400080U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[6U]))) 
                                       | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                           >> 7U) & 
                                          (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                           >> 0x18U))) 
                                      | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                          >> 0x18U) 
                                         & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                            >> 0x16U))))));
        bufp->chgBit(oldp+901,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                      >> 9U))));
        bufp->chgBit(oldp+902,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+903,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                      >> 0xbU))));
        bufp->chgBit(oldp+904,((1U & (VL_REDXOR_32(
                                                   (0x4000800U 
                                                    & vlSelf->top__DOT__mul_16_bit__DOT__pp[4U])) 
                                      ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                         >> 9U)))));
        bufp->chgBit(oldp+905,((1U & ((((vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                         >> 9U) & (
                                                   vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                                   >> 0x1aU)) 
                                       | (IData)((0x4000800U 
                                                  == 
                                                  (0x4000800U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[4U])))) 
                                      | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                          >> 0xbU) 
                                         & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                            >> 9U))))));
        bufp->chgBit(oldp+906,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+907,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                      >> 0xdU))));
        bufp->chgBit(oldp+908,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+909,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                       >> 0x1eU) ^ 
                                      VL_REDXOR_32(
                                                   (0x10002000U 
                                                    & vlSelf->top__DOT__mul_16_bit__DOT__pp[3U]))))));
        bufp->chgBit(oldp+910,((1U & (((IData)((0x10002000U 
                                                == 
                                                (0x10002000U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[3U]))) 
                                       | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                           >> 0xdU) 
                                          & (vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                             >> 0x1eU))) 
                                      | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[2U] 
                                          >> 0x1eU) 
                                         & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                            >> 0x1cU))))));
        bufp->chgBit(oldp+911,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                      >> 6U))));
        bufp->chgBit(oldp+912,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                      >> 0x17U))));
        bufp->chgBit(oldp+913,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                      >> 8U))));
        bufp->chgBit(oldp+914,((1U & (VL_REDXOR_32(
                                                   (0x800100U 
                                                    & vlSelf->top__DOT__mul_16_bit__DOT__pp[6U])) 
                                      ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                         >> 6U)))));
        bufp->chgBit(oldp+915,((1U & ((((vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                         >> 6U) & (
                                                   vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                                   >> 0x17U)) 
                                       | (IData)((0x800100U 
                                                  == 
                                                  (0x800100U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[6U])))) 
                                      | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                          >> 8U) & 
                                         (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                          >> 6U))))));
        bufp->chgBit(oldp+916,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                      >> 0x19U))));
        bufp->chgBit(oldp+917,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                      >> 0xaU))));
        bufp->chgBit(oldp+918,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+919,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                       >> 0x1bU) ^ 
                                      VL_REDXOR_32(
                                                   (0x2000400U 
                                                    & vlSelf->top__DOT__mul_16_bit__DOT__pp[5U]))))));
        bufp->chgBit(oldp+920,((1U & (((IData)((0x2000400U 
                                                == 
                                                (0x2000400U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[5U]))) 
                                       | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                           >> 0xaU) 
                                          & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                             >> 0x1bU))) 
                                      | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                          >> 0x1bU) 
                                         & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                            >> 0x19U))))));
        bufp->chgBit(oldp+921,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                      >> 0xcU))));
        bufp->chgBit(oldp+922,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+923,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                      >> 0xeU))));
        bufp->chgBit(oldp+924,((1U & (VL_REDXOR_32(
                                                   (0x20004000U 
                                                    & vlSelf->top__DOT__mul_16_bit__DOT__pp[3U])) 
                                      ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                         >> 0xcU)))));
        bufp->chgBit(oldp+925,((1U & ((((vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                         >> 0xcU) & 
                                        (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                         >> 0x1dU)) 
                                       | (IData)((0x20004000U 
                                                  == 
                                                  (0x20004000U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[3U])))) 
                                      | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                          >> 0xeU) 
                                         & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                            >> 0xcU))))));
        bufp->chgBit(oldp+926,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                      >> 0x16U))));
        bufp->chgBit(oldp+927,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                      >> 7U))));
        bufp->chgBit(oldp+928,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                      >> 0x18U))));
        bufp->chgBit(oldp+929,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                       >> 0x18U) ^ 
                                      VL_REDXOR_32(
                                                   (0x400080U 
                                                    & vlSelf->top__DOT__mul_16_bit__DOT__pp[7U]))))));
        bufp->chgBit(oldp+930,((1U & (((IData)((0x400080U 
                                                == 
                                                (0x400080U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[7U]))) 
                                       | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                           >> 7U) & 
                                          (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                           >> 0x18U))) 
                                      | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                          >> 0x18U) 
                                         & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                            >> 0x16U))))));
        bufp->chgBit(oldp+931,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                      >> 9U))));
        bufp->chgBit(oldp+932,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+933,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                      >> 0xbU))));
        bufp->chgBit(oldp+934,((1U & (VL_REDXOR_32(
                                                   (0x4000800U 
                                                    & vlSelf->top__DOT__mul_16_bit__DOT__pp[5U])) 
                                      ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                         >> 9U)))));
        bufp->chgBit(oldp+935,((1U & ((((vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                         >> 9U) & (
                                                   vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                                   >> 0x1aU)) 
                                       | (IData)((0x4000800U 
                                                  == 
                                                  (0x4000800U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[5U])))) 
                                      | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                          >> 0xbU) 
                                         & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                            >> 9U))))));
        bufp->chgBit(oldp+936,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+937,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                      >> 0xdU))));
        bufp->chgBit(oldp+938,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+939,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                       >> 0x1eU) ^ 
                                      VL_REDXOR_32(
                                                   (0x10002000U 
                                                    & vlSelf->top__DOT__mul_16_bit__DOT__pp[4U]))))));
        bufp->chgBit(oldp+940,((1U & (((IData)((0x10002000U 
                                                == 
                                                (0x10002000U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[4U]))) 
                                       | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                           >> 0xdU) 
                                          & (vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                             >> 0x1eU))) 
                                      | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[3U] 
                                          >> 0x1eU) 
                                         & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                            >> 0x1cU))))));
        bufp->chgBit(oldp+941,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                      >> 0x19U))));
        bufp->chgBit(oldp+942,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                      >> 0xaU))));
        bufp->chgBit(oldp+943,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+944,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                       >> 0x1bU) ^ 
                                      VL_REDXOR_32(
                                                   (0x2000400U 
                                                    & vlSelf->top__DOT__mul_16_bit__DOT__pp[6U]))))));
        bufp->chgBit(oldp+945,((1U & (((IData)((0x2000400U 
                                                == 
                                                (0x2000400U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[6U]))) 
                                       | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                           >> 0xaU) 
                                          & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                             >> 0x1bU))) 
                                      | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                          >> 0x1bU) 
                                         & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                            >> 0x19U))))));
        bufp->chgBit(oldp+946,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                      >> 0xcU))));
        bufp->chgBit(oldp+947,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+948,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                      >> 0xeU))));
        bufp->chgBit(oldp+949,((1U & (VL_REDXOR_32(
                                                   (0x20004000U 
                                                    & vlSelf->top__DOT__mul_16_bit__DOT__pp[4U])) 
                                      ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                         >> 0xcU)))));
        bufp->chgBit(oldp+950,((1U & ((((vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                         >> 0xcU) & 
                                        (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                         >> 0x1dU)) 
                                       | (IData)((0x20004000U 
                                                  == 
                                                  (0x20004000U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[4U])))) 
                                      | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                          >> 0xeU) 
                                         & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                            >> 0xcU))))));
        bufp->chgBit(oldp+951,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                      >> 9U))));
        bufp->chgBit(oldp+952,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+953,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                      >> 0xbU))));
        bufp->chgBit(oldp+954,((1U & (VL_REDXOR_32(
                                                   (0x4000800U 
                                                    & vlSelf->top__DOT__mul_16_bit__DOT__pp[6U])) 
                                      ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                         >> 9U)))));
        bufp->chgBit(oldp+955,((1U & ((((vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                         >> 9U) & (
                                                   vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                                   >> 0x1aU)) 
                                       | (IData)((0x4000800U 
                                                  == 
                                                  (0x4000800U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[6U])))) 
                                      | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                          >> 0xbU) 
                                         & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                            >> 9U))))));
        bufp->chgBit(oldp+956,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+957,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                      >> 0xdU))));
        bufp->chgBit(oldp+958,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+959,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                       >> 0x1eU) ^ 
                                      VL_REDXOR_32(
                                                   (0x10002000U 
                                                    & vlSelf->top__DOT__mul_16_bit__DOT__pp[5U]))))));
        bufp->chgBit(oldp+960,((1U & (((IData)((0x10002000U 
                                                == 
                                                (0x10002000U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[5U]))) 
                                       | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                           >> 0xdU) 
                                          & (vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                             >> 0x1eU))) 
                                      | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[4U] 
                                          >> 0x1eU) 
                                         & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                            >> 0x1cU))))));
        bufp->chgBit(oldp+961,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                      >> 0x19U))));
        bufp->chgBit(oldp+962,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                      >> 0xaU))));
        bufp->chgBit(oldp+963,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+964,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                       >> 0x1bU) ^ 
                                      VL_REDXOR_32(
                                                   (0x2000400U 
                                                    & vlSelf->top__DOT__mul_16_bit__DOT__pp[7U]))))));
        bufp->chgBit(oldp+965,((1U & (((IData)((0x2000400U 
                                                == 
                                                (0x2000400U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[7U]))) 
                                       | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                           >> 0xaU) 
                                          & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                             >> 0x1bU))) 
                                      | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                          >> 0x1bU) 
                                         & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                            >> 0x19U))))));
        bufp->chgBit(oldp+966,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                      >> 0xcU))));
        bufp->chgBit(oldp+967,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+968,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                      >> 0xeU))));
        bufp->chgBit(oldp+969,((1U & (VL_REDXOR_32(
                                                   (0x20004000U 
                                                    & vlSelf->top__DOT__mul_16_bit__DOT__pp[5U])) 
                                      ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                         >> 0xcU)))));
        bufp->chgBit(oldp+970,((1U & ((((vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                         >> 0xcU) & 
                                        (vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                         >> 0x1dU)) 
                                       | (IData)((0x20004000U 
                                                  == 
                                                  (0x20004000U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[5U])))) 
                                      | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[5U] 
                                          >> 0xeU) 
                                         & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                            >> 0xcU))))));
        bufp->chgBit(oldp+971,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                      >> 0xcU))));
        bufp->chgBit(oldp+972,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+973,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                      >> 0xeU))));
        bufp->chgBit(oldp+974,((1U & (VL_REDXOR_32(
                                                   (0x20004000U 
                                                    & vlSelf->top__DOT__mul_16_bit__DOT__pp[6U])) 
                                      ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                         >> 0xcU)))));
        bufp->chgBit(oldp+975,((1U & ((((vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                         >> 0xcU) & 
                                        (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                         >> 0x1dU)) 
                                       | (IData)((0x20004000U 
                                                  == 
                                                  (0x20004000U 
                                                   & vlSelf->top__DOT__mul_16_bit__DOT__pp[6U])))) 
                                      | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                          >> 0xeU) 
                                         & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                            >> 0xcU))))));
        bufp->chgBit(oldp+976,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+977,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                      >> 0xdU))));
        bufp->chgBit(oldp+978,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+979,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                       >> 0x1eU) ^ 
                                      VL_REDXOR_32(
                                                   (0x10002000U 
                                                    & vlSelf->top__DOT__mul_16_bit__DOT__pp[7U]))))));
        bufp->chgBit(oldp+980,((1U & (((IData)((0x10002000U 
                                                == 
                                                (0x10002000U 
                                                 & vlSelf->top__DOT__mul_16_bit__DOT__pp[7U]))) 
                                       | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                           >> 0xdU) 
                                          & (vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                             >> 0x1eU))) 
                                      | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[6U] 
                                          >> 0x1eU) 
                                         & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                            >> 0x1cU))))));
        bufp->chgBit(oldp+981,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [2U]));
        bufp->chgBit(oldp+982,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [1U]));
        bufp->chgBit(oldp+983,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                      >> 3U))));
        bufp->chgBit(oldp+984,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                       [2U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                       [1U]) ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                                >> 3U)))));
        bufp->chgBit(oldp+985,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [2U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                  [1U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                           [1U] & (
                                                   vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                                   >> 3U))) 
                                | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                    >> 3U) & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [2U]))));
        bufp->chgBit(oldp+986,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [3U]));
        bufp->chgBit(oldp+987,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [4U]));
        bufp->chgBit(oldp+988,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [2U]));
        bufp->chgBit(oldp+989,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [3U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [4U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [2U])));
        bufp->chgBit(oldp+990,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [3U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [4U]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                           [4U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                           [2U])) | 
                                (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [2U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [3U]))));
        bufp->chgBit(oldp+991,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [5U]));
        bufp->chgBit(oldp+992,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [6U]));
        bufp->chgBit(oldp+993,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [3U]));
        bufp->chgBit(oldp+994,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [5U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [6U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [3U])));
        bufp->chgBit(oldp+995,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [5U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [6U]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                           [6U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                           [3U])) | 
                                (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [3U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [5U]))));
        bufp->chgBit(oldp+996,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [7U]));
        bufp->chgBit(oldp+997,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                               [8U]));
        bufp->chgBit(oldp+998,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                               [5U]));
        bufp->chgBit(oldp+999,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [7U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [8U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [5U])));
        bufp->chgBit(oldp+1000,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [7U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [8U]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                            [8U] & 
                                            vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                            [5U])) 
                                 | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                    [5U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                    [7U]))));
        bufp->chgBit(oldp+1001,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [9U]));
        bufp->chgBit(oldp+1002,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0xaU]));
        bufp->chgBit(oldp+1003,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0xbU]));
        bufp->chgBit(oldp+1004,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [9U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0xaU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0xbU])));
        bufp->chgBit(oldp+1005,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [9U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [0xaU]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                              [0xaU] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                              [0xbU])) 
                                 | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                    [0xbU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                    [9U]))));
        bufp->chgBit(oldp+1006,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0xcU]));
        bufp->chgBit(oldp+1007,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0xdU]));
        bufp->chgBit(oldp+1008,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0xeU]));
        bufp->chgBit(oldp+1009,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0xcU] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0xdU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0xeU])));
        bufp->chgBit(oldp+1010,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [0xcU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [0xdU]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                              [0xdU] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                              [0xeU])) 
                                 | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                    [0xeU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                    [0xcU]))));
        bufp->chgBit(oldp+1011,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [9U]));
        bufp->chgBit(oldp+1012,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0xaU]));
        bufp->chgBit(oldp+1013,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0xbU]));
        bufp->chgBit(oldp+1014,(((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                  [9U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                  [0xaU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0xbU])));
        bufp->chgBit(oldp+1015,((((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                   [9U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                   [0xaU]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                              [0xaU] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                              [0xbU])) 
                                 | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                    [0xbU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                    [9U]))));
        bufp->chgBit(oldp+1016,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0xfU]));
        bufp->chgBit(oldp+1017,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x10U]));
        bufp->chgBit(oldp+1018,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x11U]));
        bufp->chgBit(oldp+1019,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0xfU] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x10U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x11U])));
        bufp->chgBit(oldp+1020,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [0xfU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [0x10U]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                               [0x10U] 
                                               & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                               [0x11U])) 
                                 | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                    [0x11U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                    [0xfU]))));
        bufp->chgBit(oldp+1021,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0xcU]));
        bufp->chgBit(oldp+1022,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0xdU]));
        bufp->chgBit(oldp+1023,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0xeU]));
        bufp->chgBit(oldp+1024,(((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                  [0xcU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                  [0xdU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0xeU])));
        bufp->chgBit(oldp+1025,((((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                   [0xcU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                   [0xdU]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                              [0xdU] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                              [0xeU])) 
                                 | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                    [0xeU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                    [0xcU]))));
        bufp->chgBit(oldp+1026,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x12U]));
        bufp->chgBit(oldp+1027,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x13U]));
        bufp->chgBit(oldp+1028,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x14U]));
        bufp->chgBit(oldp+1029,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x12U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x13U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x14U])));
        bufp->chgBit(oldp+1030,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [0x12U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [0x13U]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                               [0x13U] 
                                               & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                               [0x14U])) 
                                 | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                    [0x14U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                    [0x12U]))));
        bufp->chgBit(oldp+1031,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x15U]));
        bufp->chgBit(oldp+1032,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0xfU]));
        bufp->chgBit(oldp+1033,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x10U]));
        bufp->chgBit(oldp+1034,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x15U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                  [0xfU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x10U])));
        bufp->chgBit(oldp+1035,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [0x15U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                   [0xfU]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                              [0xfU] 
                                              & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                              [0x10U])) 
                                 | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                    [0x10U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                    [0x15U]))));
        bufp->chgBit(oldp+1036,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x16U]));
        bufp->chgBit(oldp+1037,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x17U]));
        bufp->chgBit(oldp+1038,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x18U]));
        bufp->chgBit(oldp+1039,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x16U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x17U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x18U])));
        bufp->chgBit(oldp+1040,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [0x16U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [0x17U]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                               [0x17U] 
                                               & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                               [0x18U])) 
                                 | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                    [0x18U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                    [0x16U]))));
        bufp->chgBit(oldp+1041,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x19U]));
        bufp->chgBit(oldp+1042,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x12U]));
        bufp->chgBit(oldp+1043,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x13U]));
        bufp->chgBit(oldp+1044,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x19U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                  [0x12U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x13U])));
        bufp->chgBit(oldp+1045,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [0x19U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                   [0x12U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                               [0x12U] 
                                               & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                               [0x13U])) 
                                 | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                    [0x13U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                    [0x19U]))));
        bufp->chgBit(oldp+1046,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x1aU]));
        bufp->chgBit(oldp+1047,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x1bU]));
        bufp->chgBit(oldp+1048,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x1cU]));
        bufp->chgBit(oldp+1049,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x1aU] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x1bU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x1cU])));
        bufp->chgBit(oldp+1050,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [0x1aU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [0x1bU]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                               [0x1bU] 
                                               & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                               [0x1cU])) 
                                 | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                    [0x1cU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                    [0x1aU]))));
        bufp->chgBit(oldp+1051,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x1dU]));
        bufp->chgBit(oldp+1052,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x16U]));
        bufp->chgBit(oldp+1053,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x17U]));
        bufp->chgBit(oldp+1054,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x1dU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                  [0x16U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x17U])));
        bufp->chgBit(oldp+1055,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [0x1dU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                   [0x16U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                               [0x16U] 
                                               & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                               [0x17U])) 
                                 | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                    [0x17U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                    [0x1dU]))));
        bufp->chgBit(oldp+1056,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x18U]));
        bufp->chgBit(oldp+1057,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x19U]));
        bufp->chgBit(oldp+1058,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1059,((1U & ((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                        [0x18U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                        [0x19U]) ^ 
                                       (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                        >> 0xcU)))));
        bufp->chgBit(oldp+1060,((((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                   [0x18U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                   [0x19U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                               [0x19U] 
                                               & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                                  >> 0xcU))) 
                                 | ((vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                     >> 0xcU) & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                    [0x18U]))));
        bufp->chgBit(oldp+1061,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x1eU]));
        bufp->chgBit(oldp+1062,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x1fU]));
        bufp->chgBit(oldp+1063,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x20U]));
        bufp->chgBit(oldp+1064,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x1eU] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x1fU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x20U])));
        bufp->chgBit(oldp+1065,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [0x1eU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [0x1fU]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                               [0x1fU] 
                                               & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                               [0x20U])) 
                                 | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                    [0x20U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                    [0x1eU]))));
        bufp->chgBit(oldp+1066,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x21U]));
        bufp->chgBit(oldp+1067,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x22U]));
        bufp->chgBit(oldp+1068,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x1aU]));
        bufp->chgBit(oldp+1069,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x21U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x22U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x1aU])));
        bufp->chgBit(oldp+1070,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [0x21U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [0x22U]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                               [0x22U] 
                                               & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                               [0x1aU])) 
                                 | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                    [0x1aU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                    [0x21U]))));
        bufp->chgBit(oldp+1071,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x1bU]));
        bufp->chgBit(oldp+1072,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x1cU]));
        bufp->chgBit(oldp+1073,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x1dU]));
        bufp->chgBit(oldp+1074,(((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                  [0x1bU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                  [0x1cU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x1dU])));
        bufp->chgBit(oldp+1075,((((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                   [0x1bU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                   [0x1cU]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                               [0x1cU] 
                                               & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                               [0x1dU])) 
                                 | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                    [0x1dU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                    [0x1bU]))));
        bufp->chgBit(oldp+1076,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x23U]));
        bufp->chgBit(oldp+1077,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x24U]));
        bufp->chgBit(oldp+1078,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x25U]));
        bufp->chgBit(oldp+1079,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x23U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x24U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x25U])));
        bufp->chgBit(oldp+1080,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [0x23U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [0x24U]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                               [0x24U] 
                                               & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                               [0x25U])) 
                                 | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                    [0x25U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                    [0x23U]))));
        bufp->chgBit(oldp+1081,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x26U]));
        bufp->chgBit(oldp+1082,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x27U]));
        bufp->chgBit(oldp+1083,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x1eU]));
        bufp->chgBit(oldp+1084,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x26U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x27U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x1eU])));
        bufp->chgBit(oldp+1085,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [0x26U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [0x27U]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                               [0x27U] 
                                               & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                               [0x1eU])) 
                                 | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                    [0x1eU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                    [0x26U]))));
        bufp->chgBit(oldp+1086,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x1fU]));
        bufp->chgBit(oldp+1087,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x20U]));
        bufp->chgBit(oldp+1088,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x21U]));
        bufp->chgBit(oldp+1089,(((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                  [0x1fU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                  [0x20U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x21U])));
        bufp->chgBit(oldp+1090,((((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                   [0x1fU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                   [0x20U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                               [0x20U] 
                                               & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                               [0x21U])) 
                                 | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                    [0x21U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                    [0x1fU]))));
        bufp->chgBit(oldp+1091,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x28U]));
        bufp->chgBit(oldp+1092,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x29U]));
        bufp->chgBit(oldp+1093,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x2aU]));
        bufp->chgBit(oldp+1094,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x28U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x29U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x2aU])));
        bufp->chgBit(oldp+1095,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [0x28U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [0x29U]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                               [0x29U] 
                                               & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                               [0x2aU])) 
                                 | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                    [0x2aU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                    [0x28U]))));
        bufp->chgBit(oldp+1096,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x2bU]));
        bufp->chgBit(oldp+1097,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x2cU]));
        bufp->chgBit(oldp+1098,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x23U]));
        bufp->chgBit(oldp+1099,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x2bU] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x2cU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x23U])));
        bufp->chgBit(oldp+1100,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [0x2bU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [0x2cU]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                               [0x2cU] 
                                               & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                               [0x23U])) 
                                 | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                    [0x23U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                    [0x2bU]))));
        bufp->chgBit(oldp+1101,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x24U]));
        bufp->chgBit(oldp+1102,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x25U]));
        bufp->chgBit(oldp+1103,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x26U]));
        bufp->chgBit(oldp+1104,(((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                  [0x24U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                  [0x25U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x26U])));
        bufp->chgBit(oldp+1105,((((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                   [0x24U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                   [0x25U]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                               [0x25U] 
                                               & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                               [0x26U])) 
                                 | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                    [0x26U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                    [0x24U]))));
        bufp->chgBit(oldp+1106,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x2dU]));
        bufp->chgBit(oldp+1107,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x2eU]));
        bufp->chgBit(oldp+1108,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x2fU]));
        bufp->chgBit(oldp+1109,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x2dU] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x2eU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x2fU])));
        bufp->chgBit(oldp+1110,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [0x2dU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [0x2eU]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                               [0x2eU] 
                                               & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                               [0x2fU])) 
                                 | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                    [0x2fU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                    [0x2dU]))));
        bufp->chgBit(oldp+1111,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x30U]));
        bufp->chgBit(oldp+1112,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x31U]));
        bufp->chgBit(oldp+1113,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x28U]));
        bufp->chgBit(oldp+1114,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x30U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x31U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x28U])));
        bufp->chgBit(oldp+1115,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [0x30U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [0x31U]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                               [0x31U] 
                                               & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                               [0x28U])) 
                                 | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                    [0x28U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                    [0x30U]))));
        bufp->chgBit(oldp+1116,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x29U]));
        bufp->chgBit(oldp+1117,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x2aU]));
        bufp->chgBit(oldp+1118,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x2bU]));
        bufp->chgBit(oldp+1119,(((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                  [0x29U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                  [0x2aU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x2bU])));
        bufp->chgBit(oldp+1120,((((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                   [0x29U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                   [0x2aU]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                               [0x2aU] 
                                               & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                               [0x2bU])) 
                                 | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                    [0x2bU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                    [0x29U]))));
        bufp->chgBit(oldp+1121,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x32U]));
        bufp->chgBit(oldp+1122,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x33U]));
        bufp->chgBit(oldp+1123,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x34U]));
        bufp->chgBit(oldp+1124,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x32U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x33U]) ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x34U])));
        bufp->chgBit(oldp+1125,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [0x32U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [0x33U]) | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                               [0x33U] 
                                               & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                               [0x34U])) 
                                 | (vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                    [0x34U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                    [0x32U]))));
        bufp->chgBit(oldp+1126,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x35U]));
        bufp->chgBit(oldp+1127,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x2dU]));
        bufp->chgBit(oldp+1128,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x2eU]));
        bufp->chgBit(oldp+1129,(((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                  [0x35U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                  [0x2dU]) ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x2eU])));
        bufp->chgBit(oldp+1130,((((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                   [0x35U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                   [0x2dU]) | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                               [0x2dU] 
                                               & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                               [0x2eU])) 
                                 | (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                    [0x2eU] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                    [0x35U]))));
        bufp->chgBit(oldp+1131,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                       >> 0x10U))));
        bufp->chgBit(oldp+1132,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                       >> 1U))));
        bufp->chgBit(oldp+1133,((1U & VL_REDXOR_32(
                                                   (0x10002U 
                                                    & vlSelf->top__DOT__mul_16_bit__DOT__pp[0U])))));
        bufp->chgBit(oldp+1134,((IData)((0x10002U == 
                                         (0x10002U 
                                          & vlSelf->top__DOT__mul_16_bit__DOT__pp[0U])))));
        bufp->chgBit(oldp+1135,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                       >> 0x13U))));
        bufp->chgBit(oldp+1136,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                       >> 4U))));
        bufp->chgBit(oldp+1137,((1U & VL_REDXOR_32(
                                                   (0x80010U 
                                                    & vlSelf->top__DOT__mul_16_bit__DOT__pp[0U])))));
        bufp->chgBit(oldp+1138,((IData)((0x80010U == 
                                         (0x80010U 
                                          & vlSelf->top__DOT__mul_16_bit__DOT__pp[0U])))));
        bufp->chgBit(oldp+1139,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                       >> 0x16U))));
        bufp->chgBit(oldp+1140,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                       >> 7U))));
        bufp->chgBit(oldp+1141,((1U & VL_REDXOR_32(
                                                   (0x400080U 
                                                    & vlSelf->top__DOT__mul_16_bit__DOT__pp[0U])))));
        bufp->chgBit(oldp+1142,((IData)((0x400080U 
                                         == (0x400080U 
                                             & vlSelf->top__DOT__mul_16_bit__DOT__pp[0U])))));
        bufp->chgBit(oldp+1143,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1144,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1145,((1U & VL_REDXOR_32(
                                                   (0x2000400U 
                                                    & vlSelf->top__DOT__mul_16_bit__DOT__pp[0U])))));
        bufp->chgBit(oldp+1146,((IData)((0x2000400U 
                                         == (0x2000400U 
                                             & vlSelf->top__DOT__mul_16_bit__DOT__pp[0U])))));
        bufp->chgBit(oldp+1147,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                       >> 0x1cU))));
        bufp->chgBit(oldp+1148,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1149,((1U & VL_REDXOR_32(
                                                   (0x10002000U 
                                                    & vlSelf->top__DOT__mul_16_bit__DOT__pp[0U])))));
        bufp->chgBit(oldp+1150,((IData)((0x10002000U 
                                         == (0x10002000U 
                                             & vlSelf->top__DOT__mul_16_bit__DOT__pp[0U])))));
        bufp->chgBit(oldp+1151,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                       >> 0x14U))));
        bufp->chgBit(oldp+1152,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                       >> 5U))));
        bufp->chgBit(oldp+1153,((1U & VL_REDXOR_32(
                                                   (0x100020U 
                                                    & vlSelf->top__DOT__mul_16_bit__DOT__pp[7U])))));
        bufp->chgBit(oldp+1154,((IData)((0x100020U 
                                         == (0x100020U 
                                             & vlSelf->top__DOT__mul_16_bit__DOT__pp[7U])))));
        bufp->chgBit(oldp+1155,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                       >> 0x17U))));
        bufp->chgBit(oldp+1156,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                       >> 8U))));
        bufp->chgBit(oldp+1157,((1U & VL_REDXOR_32(
                                                   (0x800100U 
                                                    & vlSelf->top__DOT__mul_16_bit__DOT__pp[7U])))));
        bufp->chgBit(oldp+1158,((IData)((0x800100U 
                                         == (0x800100U 
                                             & vlSelf->top__DOT__mul_16_bit__DOT__pp[7U])))));
        bufp->chgBit(oldp+1159,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                       >> 0x1aU))));
        bufp->chgBit(oldp+1160,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1161,((1U & VL_REDXOR_32(
                                                   (0x4000800U 
                                                    & vlSelf->top__DOT__mul_16_bit__DOT__pp[7U])))));
        bufp->chgBit(oldp+1162,((IData)((0x4000800U 
                                         == (0x4000800U 
                                             & vlSelf->top__DOT__mul_16_bit__DOT__pp[7U])))));
        bufp->chgBit(oldp+1163,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                       >> 0x1dU))));
        bufp->chgBit(oldp+1164,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                       >> 0xeU))));
        bufp->chgBit(oldp+1165,((1U & VL_REDXOR_32(
                                                   (0x20004000U 
                                                    & vlSelf->top__DOT__mul_16_bit__DOT__pp[7U])))));
        bufp->chgBit(oldp+1166,((IData)((0x20004000U 
                                         == (0x20004000U 
                                             & vlSelf->top__DOT__mul_16_bit__DOT__pp[7U])))));
        bufp->chgBit(oldp+1167,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [1U]));
        bufp->chgBit(oldp+1168,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0U]));
        bufp->chgBit(oldp+1169,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [1U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0U])));
        bufp->chgBit(oldp+1170,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [1U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0U])));
        bufp->chgBit(oldp+1171,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [6U]));
        bufp->chgBit(oldp+1172,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                       >> 6U))));
        bufp->chgBit(oldp+1173,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                       [6U] ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                               >> 6U)))));
        bufp->chgBit(oldp+1174,((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [6U] & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                         >> 6U))));
        bufp->chgBit(oldp+1175,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [7U]));
        bufp->chgBit(oldp+1176,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [8U]));
        bufp->chgBit(oldp+1177,((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [7U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [8U])));
        bufp->chgBit(oldp+1178,((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [7U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [8U])));
        bufp->chgBit(oldp+1179,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x14U]));
        bufp->chgBit(oldp+1180,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x15U]));
        bufp->chgBit(oldp+1181,((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x14U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x15U])));
        bufp->chgBit(oldp+1182,((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x14U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x15U])));
        bufp->chgBit(oldp+1183,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x41U]));
        bufp->chgBit(oldp+1184,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x42U]));
        bufp->chgBit(oldp+1185,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x41U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x42U])));
        bufp->chgBit(oldp+1186,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x41U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x42U])));
        bufp->chgBit(oldp+1187,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x44U]));
        bufp->chgBit(oldp+1188,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x45U]));
        bufp->chgBit(oldp+1189,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x44U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x45U])));
        bufp->chgBit(oldp+1190,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x44U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x45U])));
        bufp->chgBit(oldp+1191,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x47U]));
        bufp->chgBit(oldp+1192,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x48U]));
        bufp->chgBit(oldp+1193,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x47U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x48U])));
        bufp->chgBit(oldp+1194,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x47U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x48U])));
        bufp->chgBit(oldp+1195,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x51U]));
        bufp->chgBit(oldp+1196,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x50U]));
        bufp->chgBit(oldp+1197,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x51U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x50U])));
        bufp->chgBit(oldp+1198,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x51U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x50U])));
        bufp->chgBit(oldp+1199,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x52U]));
        bufp->chgBit(oldp+1200,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x51U]));
        bufp->chgBit(oldp+1201,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x52U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x51U])));
        bufp->chgBit(oldp+1202,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x52U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x51U])));
        bufp->chgBit(oldp+1203,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x59U]));
        bufp->chgBit(oldp+1204,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                       >> 9U))));
        bufp->chgBit(oldp+1205,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                       [0x59U] ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                                  >> 9U)))));
        bufp->chgBit(oldp+1206,((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x59U] & (vlSelf->top__DOT__mul_16_bit__DOT__pp[0U] 
                                            >> 9U))));
        bufp->chgBit(oldp+1207,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x5bU]));
        bufp->chgBit(oldp+1208,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x11U]));
        bufp->chgBit(oldp+1209,((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x5bU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x11U])));
        bufp->chgBit(oldp+1210,((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x5bU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x11U])));
        bufp->chgBit(oldp+1211,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x5cU]));
        bufp->chgBit(oldp+1212,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x5dU]));
        bufp->chgBit(oldp+1213,((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x5cU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x5dU])));
        bufp->chgBit(oldp+1214,((vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x5cU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x5dU])));
        bufp->chgBit(oldp+1215,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x75U]));
        bufp->chgBit(oldp+1216,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x76U]));
        bufp->chgBit(oldp+1217,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x75U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x76U])));
        bufp->chgBit(oldp+1218,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x75U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x76U])));
        bufp->chgBit(oldp+1219,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x77U]));
        bufp->chgBit(oldp+1220,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x78U]));
        bufp->chgBit(oldp+1221,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x77U] ^ vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x78U])));
        bufp->chgBit(oldp+1222,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x77U] & vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x78U])));
        bufp->chgBit(oldp+1223,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0U]));
        bufp->chgBit(oldp+1224,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x7fU]));
        bufp->chgBit(oldp+1225,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x7fU])));
        bufp->chgBit(oldp+1226,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x7fU])));
        bufp->chgBit(oldp+1227,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [1U]));
        bufp->chgBit(oldp+1228,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0U]));
        bufp->chgBit(oldp+1229,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [1U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0U])));
        bufp->chgBit(oldp+1230,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [1U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0U])));
        bufp->chgBit(oldp+1231,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                [0x4eU]));
        bufp->chgBit(oldp+1232,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [1U]));
        bufp->chgBit(oldp+1233,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x4eU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [1U])));
        bufp->chgBit(oldp+1234,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage1
                                 [0x4eU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [1U])));
        bufp->chgBit(oldp+1235,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [3U]));
        bufp->chgBit(oldp+1236,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [2U]));
        bufp->chgBit(oldp+1237,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [3U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [2U])));
        bufp->chgBit(oldp+1238,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [3U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [2U])));
        bufp->chgBit(oldp+1239,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [4U]));
        bufp->chgBit(oldp+1240,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [3U]));
        bufp->chgBit(oldp+1241,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [4U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [3U])));
        bufp->chgBit(oldp+1242,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [4U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [3U])));
        bufp->chgBit(oldp+1243,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [5U]));
        bufp->chgBit(oldp+1244,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [4U]));
        bufp->chgBit(oldp+1245,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [5U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [4U])));
        bufp->chgBit(oldp+1246,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [5U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [4U])));
        bufp->chgBit(oldp+1247,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x11U]));
        bufp->chgBit(oldp+1248,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                [0x22U]));
        bufp->chgBit(oldp+1249,((vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x11U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x22U])));
        bufp->chgBit(oldp+1250,((vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x11U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage1
                                 [0x22U])));
        bufp->chgBit(oldp+1251,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x22U]));
        bufp->chgBit(oldp+1252,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x21U]));
        bufp->chgBit(oldp+1253,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x22U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x21U])));
        bufp->chgBit(oldp+1254,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x22U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x21U])));
        bufp->chgBit(oldp+1255,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x28U]));
        bufp->chgBit(oldp+1256,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x27U]));
        bufp->chgBit(oldp+1257,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x28U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x27U])));
        bufp->chgBit(oldp+1258,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x28U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x27U])));
        bufp->chgBit(oldp+1259,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x29U]));
        bufp->chgBit(oldp+1260,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x28U]));
        bufp->chgBit(oldp+1261,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x29U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x28U])));
        bufp->chgBit(oldp+1262,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x29U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x28U])));
        bufp->chgBit(oldp+1263,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x2aU]));
        bufp->chgBit(oldp+1264,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x29U]));
        bufp->chgBit(oldp+1265,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x2aU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x29U])));
        bufp->chgBit(oldp+1266,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x2aU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x29U])));
        bufp->chgBit(oldp+1267,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x2bU]));
        bufp->chgBit(oldp+1268,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x2aU]));
        bufp->chgBit(oldp+1269,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x2bU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x2aU])));
        bufp->chgBit(oldp+1270,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x2bU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x2aU])));
        bufp->chgBit(oldp+1271,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x2cU]));
        bufp->chgBit(oldp+1272,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x2bU]));
        bufp->chgBit(oldp+1273,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x2cU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x2bU])));
        bufp->chgBit(oldp+1274,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x2cU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x2bU])));
        bufp->chgBit(oldp+1275,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x46U]));
        bufp->chgBit(oldp+1276,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x45U]));
        bufp->chgBit(oldp+1277,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x46U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x45U])));
        bufp->chgBit(oldp+1278,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x46U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x45U])));
        bufp->chgBit(oldp+1279,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x47U]));
        bufp->chgBit(oldp+1280,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x46U]));
        bufp->chgBit(oldp+1281,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x47U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x46U])));
        bufp->chgBit(oldp+1282,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x47U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x46U])));
        bufp->chgBit(oldp+1283,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x48U]));
        bufp->chgBit(oldp+1284,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x47U]));
        bufp->chgBit(oldp+1285,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x48U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x47U])));
        bufp->chgBit(oldp+1286,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x48U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x47U])));
        bufp->chgBit(oldp+1287,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x49U]));
        bufp->chgBit(oldp+1288,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x48U]));
        bufp->chgBit(oldp+1289,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x49U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x48U])));
        bufp->chgBit(oldp+1290,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x49U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x48U])));
        bufp->chgBit(oldp+1291,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x4cU]));
        bufp->chgBit(oldp+1292,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x4bU]));
        bufp->chgBit(oldp+1293,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x4cU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x4bU])));
        bufp->chgBit(oldp+1294,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x4cU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x4bU])));
        bufp->chgBit(oldp+1295,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x4dU]));
        bufp->chgBit(oldp+1296,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x4cU]));
        bufp->chgBit(oldp+1297,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x4dU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x4cU])));
        bufp->chgBit(oldp+1298,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x4dU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x4cU])));
        bufp->chgBit(oldp+1299,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x4eU]));
        bufp->chgBit(oldp+1300,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x4dU]));
        bufp->chgBit(oldp+1301,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x4eU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x4dU])));
        bufp->chgBit(oldp+1302,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x4eU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x4dU])));
        bufp->chgBit(oldp+1303,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x4fU]));
        bufp->chgBit(oldp+1304,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x4eU]));
        bufp->chgBit(oldp+1305,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x4fU] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x4eU])));
        bufp->chgBit(oldp+1306,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x4fU] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x4eU])));
        bufp->chgBit(oldp+1307,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x50U]));
        bufp->chgBit(oldp+1308,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x4fU]));
        bufp->chgBit(oldp+1309,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x50U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x4fU])));
        bufp->chgBit(oldp+1310,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x50U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x4fU])));
        bufp->chgBit(oldp+1311,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x51U]));
        bufp->chgBit(oldp+1312,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x50U]));
        bufp->chgBit(oldp+1313,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x51U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x50U])));
        bufp->chgBit(oldp+1314,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x51U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x50U])));
        bufp->chgBit(oldp+1315,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x52U]));
        bufp->chgBit(oldp+1316,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x51U]));
        bufp->chgBit(oldp+1317,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x52U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x51U])));
        bufp->chgBit(oldp+1318,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x52U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x51U])));
        bufp->chgBit(oldp+1319,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x53U]));
        bufp->chgBit(oldp+1320,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x52U]));
        bufp->chgBit(oldp+1321,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x53U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x52U])));
        bufp->chgBit(oldp+1322,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x53U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x52U])));
        bufp->chgBit(oldp+1323,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x54U]));
        bufp->chgBit(oldp+1324,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x53U]));
        bufp->chgBit(oldp+1325,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x54U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x53U])));
        bufp->chgBit(oldp+1326,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x54U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x53U])));
        bufp->chgBit(oldp+1327,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x4aU]));
        bufp->chgBit(oldp+1328,((vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                 >> 0x1fU)));
        bufp->chgBit(oldp+1329,((1U & (vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                       [0x4aU] ^ (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                                  >> 0x1fU)))));
        bufp->chgBit(oldp+1330,((vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x4aU] & (vlSelf->top__DOT__mul_16_bit__DOT__pp[7U] 
                                            >> 0x1fU))));
        bufp->chgBit(oldp+1331,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x64U]));
        bufp->chgBit(oldp+1332,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x63U]));
        bufp->chgBit(oldp+1333,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x64U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x63U])));
        bufp->chgBit(oldp+1334,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x64U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x63U])));
        bufp->chgBit(oldp+1335,(vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                [0x21U]));
        bufp->chgBit(oldp+1336,(vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                [0x20U]));
        bufp->chgBit(oldp+1337,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x21U] ^ vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x20U])));
        bufp->chgBit(oldp+1338,((vlSelf->top__DOT__mul_16_bit__DOT__s_stage2
                                 [0x21U] & vlSelf->top__DOT__mul_16_bit__DOT__c_stage2
                                 [0x20U])));
    }
    bufp->chgSData(oldp+1339,(vlSelf->a),16);
    bufp->chgSData(oldp+1340,(vlSelf->b),16);
    bufp->chgIData(oldp+1341,(vlSelf->result),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
