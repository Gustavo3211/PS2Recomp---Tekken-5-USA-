#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029DF30
// Address: 0x29df30 - 0x29e070
void sub_0029DF30_0x29df30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029DF30_0x29df30");
#endif

    ctx->pc = 0x29df30u;

    // 0x29df30: 0x8c880150  lw          $t0, 0x150($a0)
    ctx->pc = 0x29df30u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x29df34: 0x240a0064  addiu       $t2, $zero, 0x64
    ctx->pc = 0x29df34u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x29df38: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x29df38u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29df3c: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x29df3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x29df40: 0x8d090008  lw          $t1, 0x8($t0)
    ctx->pc = 0x29df40u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x29df44: 0x1a0302d  daddu       $a2, $t5, $zero
    ctx->pc = 0x29df44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29df48: 0x8d050014  lw          $a1, 0x14($t0)
    ctx->pc = 0x29df48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x29df4c: 0x244c0028  addiu       $t4, $v0, 0x28
    ctx->pc = 0x29df4cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x29df50: 0x12a001a  div         $zero, $t1, $t2
    ctx->pc = 0x29df50u;
    { int32_t divisor = GPR_S32(ctx, 10);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x29df54: 0x8c8b0158  lw          $t3, 0x158($a0)
    ctx->pc = 0x29df54u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 344)));
    // 0x29df58: 0x3812  mflo        $a3
    ctx->pc = 0x29df58u;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x29df5c: 0x28e30001  slti        $v1, $a3, 0x1
    ctx->pc = 0x29df5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)1) ? 1 : 0);
    // 0x29df60: 0xe3300a  movz        $a2, $a3, $v1
    ctx->pc = 0x29df60u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 7));
    // 0x29df64: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x29df64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x29df68: 0xad050014  sw          $a1, 0x14($t0)
    ctx->pc = 0x29df68u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 5));
    // 0x29df6c: 0x8c840150  lw          $a0, 0x150($a0)
    ctx->pc = 0x29df6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x29df70: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x29df70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x29df74: 0x123102a  slt         $v0, $t1, $v1
    ctx->pc = 0x29df74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x29df78: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x29DF78u;
    {
        const bool branch_taken_0x29df78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29df78) {
            ctx->pc = 0x29DF7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29DF78u;
            // 0x29df7c: 0x12a001a  div         $zero, $t1, $t2 (Delay Slot)
            { int32_t divisor = GPR_S32(ctx, 10);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
            ctx->in_delay_slot = false;
            ctx->pc = 0x29DF8Cu;
            goto label_29df8c;
        }
    }
    ctx->pc = 0x29DF80u;
    // 0x29df80: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x29df80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29df84: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x29df84u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29df88: 0x12a001a  div         $zero, $t1, $t2
    ctx->pc = 0x29df88u;
    { int32_t divisor = GPR_S32(ctx, 10);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_29df8c:
    // 0x29df8c: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x29df8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x29df90: 0x3012  mflo        $a2
    ctx->pc = 0x29df90u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x29df94: 0x4010  mfhi        $t0
    ctx->pc = 0x29df94u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x29df98: 0xc2001a  div         $zero, $a2, $v0
    ctx->pc = 0x29df98u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x29df9c: 0x2812  mflo        $a1
    ctx->pc = 0x29df9cu;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x29dfa0: 0x3010  mfhi        $a2
    ctx->pc = 0x29dfa0u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x29dfa4: 0x28a30064  slti        $v1, $a1, 0x64
    ctx->pc = 0x29dfa4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x29dfa8: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x29DFA8u;
    {
        const bool branch_taken_0x29dfa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29DFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DFA8u;
        // 0x29dfac: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dfa8) {
            ctx->pc = 0x29DFC4u;
            goto label_29dfc4;
        }
    }
    ctx->pc = 0x29DFB0u;
    // 0x29dfb0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x29dfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x29dfb4: 0x24080063  addiu       $t0, $zero, 0x63
    ctx->pc = 0x29dfb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x29dfb8: 0x24050063  addiu       $a1, $zero, 0x63
    ctx->pc = 0x29dfb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x29dfbc: 0x2406003b  addiu       $a2, $zero, 0x3B
    ctx->pc = 0x29dfbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x29dfc0: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x29dfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
label_29dfc4:
    // 0x29dfc4: 0x8d8a0000  lw          $t2, 0x0($t4)
    ctx->pc = 0x29dfc4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x29dfc8: 0x103001a  div         $zero, $t0, $v1
    ctx->pc = 0x29dfc8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x29dfcc: 0x1a0102d  daddu       $v0, $t5, $zero
    ctx->pc = 0x29dfccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dfd0: 0x4012  mflo        $t0
    ctx->pc = 0x29dfd0u;
    SET_GPR_U64(ctx, 8, ctx->lo);
    // 0x29dfd4: 0x4810  mfhi        $t1
    ctx->pc = 0x29dfd4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x29dfd8: 0xa3001a  div         $zero, $a1, $v1
    ctx->pc = 0x29dfd8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x29dfdc: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x29dfdcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x29dfe0: 0x10b4021  addu        $t0, $t0, $t3
    ctx->pc = 0x29dfe0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x29dfe4: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x29dfe4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x29dfe8: 0x12b4821  addu        $t1, $t1, $t3
    ctx->pc = 0x29dfe8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x29dfec: 0x2012  mflo        $a0
    ctx->pc = 0x29dfecu;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x29dff0: 0x2810  mfhi        $a1
    ctx->pc = 0x29dff0u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x29dff4: 0xc3001a  div         $zero, $a2, $v1
    ctx->pc = 0x29dff4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x29dff8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x29dff8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x29dffc: 0xab2821  addu        $a1, $a1, $t3
    ctx->pc = 0x29dffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x29e000: 0x3012  mflo        $a2
    ctx->pc = 0x29e000u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x29e004: 0x3810  mfhi        $a3
    ctx->pc = 0x29e004u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x29e008: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x29e008u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x29e00c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x29e00cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x29e010: 0xcb3021  addu        $a2, $a2, $t3
    ctx->pc = 0x29e010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x29e014: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x29e014u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x29e018: 0xeb3821  addu        $a3, $a3, $t3
    ctx->pc = 0x29e018u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x29e01c: 0x2010  mfhi        $a0
    ctx->pc = 0x29e01cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x29e020: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x29e020u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x29e024: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x29e024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x29e028: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x29e028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29e02c: 0xad430078  sw          $v1, 0x78($t2)
    ctx->pc = 0x29e02cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 120), GPR_U32(ctx, 3));
    // 0x29e030: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x29e030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x29e034: 0x8d830004  lw          $v1, 0x4($t4)
    ctx->pc = 0x29e034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x29e038: 0xac640078  sw          $a0, 0x78($v1)
    ctx->pc = 0x29e038u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 120), GPR_U32(ctx, 4));
    // 0x29e03c: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x29e03cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x29e040: 0x8d830008  lw          $v1, 0x8($t4)
    ctx->pc = 0x29e040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x29e044: 0xac650078  sw          $a1, 0x78($v1)
    ctx->pc = 0x29e044u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 120), GPR_U32(ctx, 5));
    // 0x29e048: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x29e048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x29e04c: 0x8d83000c  lw          $v1, 0xC($t4)
    ctx->pc = 0x29e04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x29e050: 0xac640078  sw          $a0, 0x78($v1)
    ctx->pc = 0x29e050u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 120), GPR_U32(ctx, 4));
    // 0x29e054: 0x8d830010  lw          $v1, 0x10($t4)
    ctx->pc = 0x29e054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x29e058: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x29e058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x29e05c: 0xac650078  sw          $a1, 0x78($v1)
    ctx->pc = 0x29e05cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 120), GPR_U32(ctx, 5));
    // 0x29e060: 0x8d840014  lw          $a0, 0x14($t4)
    ctx->pc = 0x29e060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 20)));
    // 0x29e064: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x29e064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x29e068: 0x3e00008  jr          $ra
    ctx->pc = 0x29E068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E068u;
        // 0x29e06c: 0xac830078  sw          $v1, 0x78($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E070u;
}
