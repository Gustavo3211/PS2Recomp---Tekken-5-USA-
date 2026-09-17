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

// Function: sub_00120CC8
// Address: 0x120cc8 - 0x121248
void sub_00120CC8_0x120cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00120CC8_0x120cc8");
#endif

    ctx->pc = 0x120cc8u;

    // 0x120cc8: 0x5403f  dsra32      $t0, $a1, 0
    ctx->pc = 0x120cc8u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x120ccc: 0x4503f  dsra32      $t2, $a0, 0
    ctx->pc = 0x120cccu;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x120cd0: 0x5483c  dsll32      $t1, $a1, 0
    ctx->pc = 0x120cd0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) << (32 + 0));
    // 0x120cd4: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x120cd4u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x120cd8: 0x4583c  dsll32      $t3, $a0, 0
    ctx->pc = 0x120cd8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 4) << (32 + 0));
    // 0x120cdc: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x120cdcu;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x120ce0: 0x150000e1  bnez        $t0, . + 4 + (0xE1 << 2)
    ctx->pc = 0x120CE0u;
    {
        const bool branch_taken_0x120ce0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x120CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120CE0u;
        // 0x120ce4: 0x148102b  sltu        $v0, $t2, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x120ce0) {
            ctx->pc = 0x121068u;
            goto label_121068;
        }
    }
    ctx->pc = 0x120CE8u;
    // 0x120ce8: 0x149102b  sltu        $v0, $t2, $t1
    ctx->pc = 0x120ce8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x120cec: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x120CECu;
    {
        const bool branch_taken_0x120cec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x120CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120CECu;
        // 0x120cf0: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x120cec) {
            ctx->pc = 0x120E28u;
            goto label_120e28;
        }
    }
    ctx->pc = 0x120CF4u;
    // 0x120cf4: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x120cf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x120cf8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x120CF8u;
    {
        const bool branch_taken_0x120cf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x120CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120CF8u;
        // 0x120cfc: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120cf8) {
            ctx->pc = 0x120D10u;
            goto label_120d10;
        }
    }
    ctx->pc = 0x120D00u;
    // 0x120d00: 0x2d220100  sltiu       $v0, $t1, 0x100
    ctx->pc = 0x120d00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x120d04: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x120d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x120d08: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x120D08u;
    {
        const bool branch_taken_0x120d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120D08u;
        // 0x120d0c: 0x2200b  movn        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120d08) {
            ctx->pc = 0x120D24u;
            goto label_120d24;
        }
    }
    ctx->pc = 0x120D10u;
label_120d10:
    // 0x120d10: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x120d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x120d14: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x120d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x120d18: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x120d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x120d1c: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x120d1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x120d20: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x120d20u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_120d24:
    // 0x120d24: 0x891806  srlv        $v1, $t1, $a0
    ctx->pc = 0x120d24u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 4) & 0x1F));
    // 0x120d28: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x120d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x120d2c: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x120d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x120d30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x120d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x120d34: 0x9042f008  lbu         $v0, -0xFF8($v0)
    ctx->pc = 0x120d34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294963208)));
    // 0x120d38: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x120d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x120d3c: 0xa23023  subu        $a2, $a1, $v0
    ctx->pc = 0x120d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x120d40: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x120D40u;
    {
        const bool branch_taken_0x120d40 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x120D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120D40u;
        // 0x120d44: 0xa61023  subu        $v0, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120d40) {
            ctx->pc = 0x120D5Cu;
            goto label_120d5c;
        }
    }
    ctx->pc = 0x120D48u;
    // 0x120d48: 0xca1804  sllv        $v1, $t2, $a2
    ctx->pc = 0x120d48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x120d4c: 0x4b1006  srlv        $v0, $t3, $v0
    ctx->pc = 0x120d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 11), GPR_U32(ctx, 2) & 0x1F));
    // 0x120d50: 0xcb5804  sllv        $t3, $t3, $a2
    ctx->pc = 0x120d50u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 6) & 0x1F));
    // 0x120d54: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x120d54u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x120d58: 0xc94804  sllv        $t1, $t1, $a2
    ctx->pc = 0x120d58u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
label_120d5c:
    // 0x120d5c: 0x93402  srl         $a2, $t1, 16
    ctx->pc = 0x120d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x120d60: 0x3128ffff  andi        $t0, $t1, 0xFFFF
    ctx->pc = 0x120d60u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x120d64: 0x146001b  divu        $zero, $t2, $a2
    ctx->pc = 0x120d64u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
    // 0x120d68: 0xb2402  srl         $a0, $t3, 16
    ctx->pc = 0x120d68u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
    // 0x120d6c: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x120D6Cu;
    {
        const bool branch_taken_0x120d6c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x120d6c) {
            ctx->pc = 0x120D70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120D6Cu;
            // 0x120d70: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x120D74u;
            goto label_120d74;
        }
    }
    ctx->pc = 0x120D74u;
label_120d74:
    // 0x120d74: 0x1012  mflo        $v0
    ctx->pc = 0x120d74u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x120d78: 0x1810  mfhi        $v1
    ctx->pc = 0x120d78u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x120d7c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x120d7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120d80: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x120d80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x120d84: 0xe82818  mult        $a1, $a3, $t0
    ctx->pc = 0x120d84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x120d88: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x120d88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x120d8c: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x120d8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x120d90: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x120D90u;
    {
        const bool branch_taken_0x120d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x120d90) {
            ctx->pc = 0x120D94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120D90u;
            // 0x120d94: 0x651823  subu        $v1, $v1, $a1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x120DC4u;
            goto label_120dc4;
        }
    }
    ctx->pc = 0x120D98u;
    // 0x120d98: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x120d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x120d9c: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x120d9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x120da0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x120DA0u;
    {
        const bool branch_taken_0x120da0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x120DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120DA0u;
        // 0x120da4: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120da0) {
            ctx->pc = 0x120DC0u;
            goto label_120dc0;
        }
    }
    ctx->pc = 0x120DA8u;
    // 0x120da8: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x120da8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x120dac: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x120DACu;
    {
        const bool branch_taken_0x120dac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x120dac) {
            ctx->pc = 0x120DB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120DACu;
            // 0x120db0: 0x651823  subu        $v1, $v1, $a1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x120DC4u;
            goto label_120dc4;
        }
    }
    ctx->pc = 0x120DB4u;
    // 0x120db4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x120db4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x120db8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x120db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x120dbc: 0x0  nop
    ctx->pc = 0x120dbcu;
    // NOP
label_120dc0:
    // 0x120dc0: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x120dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_120dc4:
    // 0x120dc4: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x120DC4u;
    {
        const bool branch_taken_0x120dc4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x120dc4) {
            ctx->pc = 0x120DC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120DC4u;
            // 0x120dc8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x120DCCu;
            goto label_120dcc;
        }
    }
    ctx->pc = 0x120DCCu;
label_120dcc:
    // 0x120dcc: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x120dccu;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x120dd0: 0x3164ffff  andi        $a0, $t3, 0xFFFF
    ctx->pc = 0x120dd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x120dd4: 0x1012  mflo        $v0
    ctx->pc = 0x120dd4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x120dd8: 0x1810  mfhi        $v1
    ctx->pc = 0x120dd8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x120ddc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x120ddcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120de0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x120de0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x120de4: 0xc82818  mult        $a1, $a2, $t0
    ctx->pc = 0x120de4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x120de8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x120de8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x120dec: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x120decu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x120df0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x120DF0u;
    {
        const bool branch_taken_0x120df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x120DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120DF0u;
        // 0x120df4: 0x71400  sll         $v0, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120df0) {
            ctx->pc = 0x120E1Cu;
            goto label_120e1c;
        }
    }
    ctx->pc = 0x120DF8u;
    // 0x120df8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x120df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x120dfc: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x120dfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x120e00: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x120E00u;
    {
        const bool branch_taken_0x120e00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x120E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120E00u;
        // 0x120e04: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120e00) {
            ctx->pc = 0x120E18u;
            goto label_120e18;
        }
    }
    ctx->pc = 0x120E08u;
    // 0x120e08: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x120e08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x120e0c: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x120e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x120e10: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x120e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x120e14: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x120e14u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_120e18:
    // 0x120e18: 0x71400  sll         $v0, $a3, 16
    ctx->pc = 0x120e18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_120e1c:
    // 0x120e1c: 0x100000fc  b           . + 4 + (0xFC << 2)
    ctx->pc = 0x120E1Cu;
    {
        const bool branch_taken_0x120e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120E1Cu;
        // 0x120e20: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120e1c) {
            ctx->pc = 0x121210u;
            goto label_121210;
        }
    }
    ctx->pc = 0x120E24u;
    // 0x120e24: 0x0  nop
    ctx->pc = 0x120e24u;
    // NOP
label_120e28:
    // 0x120e28: 0x15200009  bnez        $t1, . + 4 + (0x9 << 2)
    ctx->pc = 0x120E28u;
    {
        const bool branch_taken_0x120e28 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x120E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120E28u;
        // 0x120e2c: 0x49102b  sltu        $v0, $v0, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x120e28) {
            ctx->pc = 0x120E50u;
            goto label_120e50;
        }
    }
    ctx->pc = 0x120E30u;
    // 0x120e30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x120e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x120e34: 0x51200001  beql        $t1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x120E34u;
    {
        const bool branch_taken_0x120e34 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x120e34) {
            ctx->pc = 0x120E38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120E34u;
            // 0x120e38: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x120E3Cu;
            goto label_120e3c;
        }
    }
    ctx->pc = 0x120E3Cu;
label_120e3c:
    // 0x120e3c: 0x48001b  divu        $zero, $v0, $t0
    ctx->pc = 0x120e3cu;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x120e40: 0x1012  mflo        $v0
    ctx->pc = 0x120e40u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x120e44: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x120e44u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120e48: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x120e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x120e4c: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x120e4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_120e50:
    // 0x120e50: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x120E50u;
    {
        const bool branch_taken_0x120e50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x120E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120E50u;
        // 0x120e54: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120e50) {
            ctx->pc = 0x120E68u;
            goto label_120e68;
        }
    }
    ctx->pc = 0x120E58u;
    // 0x120e58: 0x2d220100  sltiu       $v0, $t1, 0x100
    ctx->pc = 0x120e58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x120e5c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x120e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x120e60: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x120E60u;
    {
        const bool branch_taken_0x120e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120E60u;
        // 0x120e64: 0x2200b  movn        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120e60) {
            ctx->pc = 0x120E7Cu;
            goto label_120e7c;
        }
    }
    ctx->pc = 0x120E68u;
label_120e68:
    // 0x120e68: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x120e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x120e6c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x120e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x120e70: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x120e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x120e74: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x120e74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x120e78: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x120e78u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_120e7c:
    // 0x120e7c: 0x891806  srlv        $v1, $t1, $a0
    ctx->pc = 0x120e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 4) & 0x1F));
    // 0x120e80: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x120e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x120e84: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x120e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x120e88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x120e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x120e8c: 0x9042f008  lbu         $v0, -0xFF8($v0)
    ctx->pc = 0x120e8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294963208)));
    // 0x120e90: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x120e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x120e94: 0xa23023  subu        $a2, $a1, $v0
    ctx->pc = 0x120e94u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x120e98: 0x14c00007  bnez        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x120E98u;
    {
        const bool branch_taken_0x120e98 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x120E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120E98u;
        // 0x120e9c: 0xa63823  subu        $a3, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120e98) {
            ctx->pc = 0x120EB8u;
            goto label_120eb8;
        }
    }
    ctx->pc = 0x120EA0u;
    // 0x120ea0: 0x1495023  subu        $t2, $t2, $t1
    ctx->pc = 0x120ea0u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x120ea4: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x120ea4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x120ea8: 0x94402  srl         $t0, $t1, 16
    ctx->pc = 0x120ea8u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x120eac: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x120EACu;
    {
        const bool branch_taken_0x120eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120EACu;
        // 0x120eb0: 0x312cffff  andi        $t4, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x120eac) {
            ctx->pc = 0x120FA0u;
            goto label_120fa0;
        }
    }
    ctx->pc = 0x120EB4u;
    // 0x120eb4: 0x0  nop
    ctx->pc = 0x120eb4u;
    // NOP
label_120eb8:
    // 0x120eb8: 0xca1804  sllv        $v1, $t2, $a2
    ctx->pc = 0x120eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x120ebc: 0xeb1006  srlv        $v0, $t3, $a3
    ctx->pc = 0x120ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 11), GPR_U32(ctx, 7) & 0x1F));
    // 0x120ec0: 0xcb5804  sllv        $t3, $t3, $a2
    ctx->pc = 0x120ec0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 6) & 0x1F));
    // 0x120ec4: 0xea2006  srlv        $a0, $t2, $a3
    ctx->pc = 0x120ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 7) & 0x1F));
    // 0x120ec8: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x120ec8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x120ecc: 0xc94804  sllv        $t1, $t1, $a2
    ctx->pc = 0x120eccu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x120ed0: 0x94402  srl         $t0, $t1, 16
    ctx->pc = 0x120ed0u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x120ed4: 0x88001b  divu        $zero, $a0, $t0
    ctx->pc = 0x120ed4u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x120ed8: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x120ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x120edc: 0x312cffff  andi        $t4, $t1, 0xFFFF
    ctx->pc = 0x120edcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x120ee0: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x120ee0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120ee4: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x120EE4u;
    {
        const bool branch_taken_0x120ee4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x120ee4) {
            ctx->pc = 0x120EE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120EE4u;
            // 0x120ee8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x120EECu;
            goto label_120eec;
        }
    }
    ctx->pc = 0x120EECu;
label_120eec:
    // 0x120eec: 0x1012  mflo        $v0
    ctx->pc = 0x120eecu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x120ef0: 0x1810  mfhi        $v1
    ctx->pc = 0x120ef0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x120ef4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x120ef4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120ef8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x120ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x120efc: 0xec2818  mult        $a1, $a3, $t4
    ctx->pc = 0x120efcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x120f00: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x120f00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x120f04: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x120f04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x120f08: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x120F08u;
    {
        const bool branch_taken_0x120f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x120F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120F08u;
        // 0x120f0c: 0x180682d  daddu       $t5, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120f08) {
            ctx->pc = 0x120F38u;
            goto label_120f38;
        }
    }
    ctx->pc = 0x120F10u;
    // 0x120f10: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x120f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x120f14: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x120f14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x120f18: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x120F18u;
    {
        const bool branch_taken_0x120f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x120F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120F18u;
        // 0x120f1c: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120f18) {
            ctx->pc = 0x120F38u;
            goto label_120f38;
        }
    }
    ctx->pc = 0x120F20u;
    // 0x120f20: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x120f20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x120f24: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x120F24u;
    {
        const bool branch_taken_0x120f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x120f24) {
            ctx->pc = 0x120F28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120F24u;
            // 0x120f28: 0x651823  subu        $v1, $v1, $a1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x120F3Cu;
            goto label_120f3c;
        }
    }
    ctx->pc = 0x120F2Cu;
    // 0x120f2c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x120f2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x120f30: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x120f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x120f34: 0x0  nop
    ctx->pc = 0x120f34u;
    // NOP
label_120f38:
    // 0x120f38: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x120f38u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_120f3c:
    // 0x120f3c: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x120F3Cu;
    {
        const bool branch_taken_0x120f3c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x120f3c) {
            ctx->pc = 0x120F40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120F3Cu;
            // 0x120f40: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x120F44u;
            goto label_120f44;
        }
    }
    ctx->pc = 0x120F44u;
label_120f44:
    // 0x120f44: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x120f44u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x120f48: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x120f48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x120f4c: 0x1012  mflo        $v0
    ctx->pc = 0x120f4cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x120f50: 0x1810  mfhi        $v1
    ctx->pc = 0x120f50u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x120f54: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x120f54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120f58: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x120f58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x120f5c: 0xcd2818  mult        $a1, $a2, $t5
    ctx->pc = 0x120f5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x120f60: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x120f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x120f64: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x120f64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x120f68: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x120F68u;
    {
        const bool branch_taken_0x120f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x120F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120F68u;
        // 0x120f6c: 0x71400  sll         $v0, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120f68) {
            ctx->pc = 0x120F98u;
            goto label_120f98;
        }
    }
    ctx->pc = 0x120F70u;
    // 0x120f70: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x120f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x120f74: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x120f74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x120f78: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x120F78u;
    {
        const bool branch_taken_0x120f78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x120F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120F78u;
        // 0x120f7c: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120f78) {
            ctx->pc = 0x120F94u;
            goto label_120f94;
        }
    }
    ctx->pc = 0x120F80u;
    // 0x120f80: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x120f80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x120f84: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x120F84u;
    {
        const bool branch_taken_0x120f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x120F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120F84u;
        // 0x120f88: 0x71400  sll         $v0, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120f84) {
            ctx->pc = 0x120F98u;
            goto label_120f98;
        }
    }
    ctx->pc = 0x120F8Cu;
    // 0x120f8c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x120f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x120f90: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x120f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_120f94:
    // 0x120f94: 0x71400  sll         $v0, $a3, 16
    ctx->pc = 0x120f94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_120f98:
    // 0x120f98: 0x655023  subu        $t2, $v1, $a1
    ctx->pc = 0x120f98u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x120f9c: 0x466825  or          $t5, $v0, $a2
    ctx->pc = 0x120f9cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_120fa0:
    // 0x120fa0: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x120fa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120fa4: 0x180402d  daddu       $t0, $t4, $zero
    ctx->pc = 0x120fa4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120fa8: 0x146001b  divu        $zero, $t2, $a2
    ctx->pc = 0x120fa8u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
    // 0x120fac: 0xb2402  srl         $a0, $t3, 16
    ctx->pc = 0x120facu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
    // 0x120fb0: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x120FB0u;
    {
        const bool branch_taken_0x120fb0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x120fb0) {
            ctx->pc = 0x120FB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120FB0u;
            // 0x120fb4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x120FB8u;
            goto label_120fb8;
        }
    }
    ctx->pc = 0x120FB8u;
label_120fb8:
    // 0x120fb8: 0x1012  mflo        $v0
    ctx->pc = 0x120fb8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x120fbc: 0x1810  mfhi        $v1
    ctx->pc = 0x120fbcu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x120fc0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x120fc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120fc4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x120fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x120fc8: 0xe82818  mult        $a1, $a3, $t0
    ctx->pc = 0x120fc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x120fcc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x120fccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x120fd0: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x120fd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x120fd4: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x120FD4u;
    {
        const bool branch_taken_0x120fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x120fd4) {
            ctx->pc = 0x120FD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120FD4u;
            // 0x120fd8: 0x651823  subu        $v1, $v1, $a1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x121004u;
            goto label_121004;
        }
    }
    ctx->pc = 0x120FDCu;
    // 0x120fdc: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x120fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x120fe0: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x120fe0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x120fe4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x120FE4u;
    {
        const bool branch_taken_0x120fe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x120FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120FE4u;
        // 0x120fe8: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120fe4) {
            ctx->pc = 0x121000u;
            goto label_121000;
        }
    }
    ctx->pc = 0x120FECu;
    // 0x120fec: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x120fecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x120ff0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x120FF0u;
    {
        const bool branch_taken_0x120ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x120ff0) {
            ctx->pc = 0x120FF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120FF0u;
            // 0x120ff4: 0x651823  subu        $v1, $v1, $a1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x121004u;
            goto label_121004;
        }
    }
    ctx->pc = 0x120FF8u;
    // 0x120ff8: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x120ff8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x120ffc: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x120ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_121000:
    // 0x121000: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x121000u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_121004:
    // 0x121004: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x121004u;
    {
        const bool branch_taken_0x121004 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x121004) {
            ctx->pc = 0x121008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121004u;
            // 0x121008: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12100Cu;
            goto label_12100c;
        }
    }
    ctx->pc = 0x12100Cu;
label_12100c:
    // 0x12100c: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x12100cu;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x121010: 0x3164ffff  andi        $a0, $t3, 0xFFFF
    ctx->pc = 0x121010u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x121014: 0x1012  mflo        $v0
    ctx->pc = 0x121014u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x121018: 0x1810  mfhi        $v1
    ctx->pc = 0x121018u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x12101c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x12101cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121020: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x121020u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x121024: 0xc82818  mult        $a1, $a2, $t0
    ctx->pc = 0x121024u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x121028: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x121028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x12102c: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x12102cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x121030: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x121030u;
    {
        const bool branch_taken_0x121030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121030u;
        // 0x121034: 0x71400  sll         $v0, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121030) {
            ctx->pc = 0x12105Cu;
            goto label_12105c;
        }
    }
    ctx->pc = 0x121038u;
    // 0x121038: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x121038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x12103c: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x12103cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x121040: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x121040u;
    {
        const bool branch_taken_0x121040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x121044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121040u;
        // 0x121044: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121040) {
            ctx->pc = 0x121058u;
            goto label_121058;
        }
    }
    ctx->pc = 0x121048u;
    // 0x121048: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x121048u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x12104c: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x12104cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x121050: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x121050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x121054: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x121054u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_121058:
    // 0x121058: 0x71400  sll         $v0, $a3, 16
    ctx->pc = 0x121058u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_12105c:
    // 0x12105c: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x12105Cu;
    {
        const bool branch_taken_0x12105c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12105Cu;
        // 0x121060: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12105c) {
            ctx->pc = 0x121214u;
            goto label_121214;
        }
    }
    ctx->pc = 0x121064u;
    // 0x121064: 0x0  nop
    ctx->pc = 0x121064u;
    // NOP
label_121068:
    // 0x121068: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x121068u;
    {
        const bool branch_taken_0x121068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x121068) {
            ctx->pc = 0x12106Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121068u;
            // 0x12106c: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x121078u;
            goto label_121078;
        }
    }
    ctx->pc = 0x121070u;
    // 0x121070: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x121070u;
    {
        const bool branch_taken_0x121070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121070u;
        // 0x121074: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121070) {
            ctx->pc = 0x121210u;
            goto label_121210;
        }
    }
    ctx->pc = 0x121078u;
label_121078:
    // 0x121078: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x121078u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x12107c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12107Cu;
    {
        const bool branch_taken_0x12107c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x121080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12107Cu;
        // 0x121080: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12107c) {
            ctx->pc = 0x121098u;
            goto label_121098;
        }
    }
    ctx->pc = 0x121084u;
    // 0x121084: 0x2d020100  sltiu       $v0, $t0, 0x100
    ctx->pc = 0x121084u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x121088: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x121088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x12108c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12108Cu;
    {
        const bool branch_taken_0x12108c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12108Cu;
        // 0x121090: 0x2200b  movn        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12108c) {
            ctx->pc = 0x1210ACu;
            goto label_1210ac;
        }
    }
    ctx->pc = 0x121094u;
    // 0x121094: 0x0  nop
    ctx->pc = 0x121094u;
    // NOP
label_121098:
    // 0x121098: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x121098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x12109c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x12109cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1210a0: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1210a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1210a4: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x1210a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1210a8: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x1210a8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_1210ac:
    // 0x1210ac: 0x881806  srlv        $v1, $t0, $a0
    ctx->pc = 0x1210acu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 4) & 0x1F));
    // 0x1210b0: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1210b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1210b4: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x1210b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x1210b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1210b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1210bc: 0x9042f008  lbu         $v0, -0xFF8($v0)
    ctx->pc = 0x1210bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294963208)));
    // 0x1210c0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1210c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1210c4: 0xa23023  subu        $a2, $a1, $v0
    ctx->pc = 0x1210c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1210c8: 0x14c00009  bnez        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1210C8u;
    {
        const bool branch_taken_0x1210c8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1210CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1210C8u;
        // 0x1210cc: 0xa63823  subu        $a3, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1210c8) {
            ctx->pc = 0x1210F0u;
            goto label_1210f0;
        }
    }
    ctx->pc = 0x1210D0u;
    // 0x1210d0: 0x10a102b  sltu        $v0, $t0, $t2
    ctx->pc = 0x1210d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x1210d4: 0x1440004e  bnez        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x1210D4u;
    {
        const bool branch_taken_0x1210d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1210D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1210D4u;
        // 0x1210d8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1210d4) {
            ctx->pc = 0x121210u;
            goto label_121210;
        }
    }
    ctx->pc = 0x1210DCu;
    // 0x1210dc: 0x169102b  sltu        $v0, $t3, $t1
    ctx->pc = 0x1210dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1210e0: 0x1440004b  bnez        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x1210E0u;
    {
        const bool branch_taken_0x1210e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1210E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1210E0u;
        // 0x1210e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1210e0) {
            ctx->pc = 0x121210u;
            goto label_121210;
        }
    }
    ctx->pc = 0x1210E8u;
    // 0x1210e8: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x1210E8u;
    {
        const bool branch_taken_0x1210e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1210ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1210E8u;
        // 0x1210ec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1210e8) {
            ctx->pc = 0x121210u;
            goto label_121210;
        }
    }
    ctx->pc = 0x1210F0u;
label_1210f0:
    // 0x1210f0: 0xc82004  sllv        $a0, $t0, $a2
    ctx->pc = 0x1210f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x1210f4: 0xeb2806  srlv        $a1, $t3, $a3
    ctx->pc = 0x1210f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 11), GPR_U32(ctx, 7) & 0x1F));
    // 0x1210f8: 0xcb5804  sllv        $t3, $t3, $a2
    ctx->pc = 0x1210f8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 6) & 0x1F));
    // 0x1210fc: 0xe91006  srlv        $v0, $t1, $a3
    ctx->pc = 0x1210fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 7) & 0x1F));
    // 0x121100: 0xc94804  sllv        $t1, $t1, $a2
    ctx->pc = 0x121100u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x121104: 0xca1804  sllv        $v1, $t2, $a2
    ctx->pc = 0x121104u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x121108: 0x824025  or          $t0, $a0, $v0
    ctx->pc = 0x121108u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x12110c: 0xea2006  srlv        $a0, $t2, $a3
    ctx->pc = 0x12110cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 7) & 0x1F));
    // 0x121110: 0x655025  or          $t2, $v1, $a1
    ctx->pc = 0x121110u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x121114: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x121114u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x121118: 0x85001b  divu        $zero, $a0, $a1
    ctx->pc = 0x121118u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x12111c: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x12111cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x121120: 0x310cffff  andi        $t4, $t0, 0xFFFF
    ctx->pc = 0x121120u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x121124: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x121124u;
    {
        const bool branch_taken_0x121124 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x121124) {
            ctx->pc = 0x121128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121124u;
            // 0x121128: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12112Cu;
            goto label_12112c;
        }
    }
    ctx->pc = 0x12112Cu;
label_12112c:
    // 0x12112c: 0x1012  mflo        $v0
    ctx->pc = 0x12112cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x121130: 0x1810  mfhi        $v1
    ctx->pc = 0x121130u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x121134: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x121134u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121138: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x121138u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x12113c: 0xec3018  mult        $a2, $a3, $t4
    ctx->pc = 0x12113cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x121140: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x121140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x121144: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x121144u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x121148: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x121148u;
    {
        const bool branch_taken_0x121148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x121148) {
            ctx->pc = 0x12114Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121148u;
            // 0x12114c: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12117Cu;
            goto label_12117c;
        }
    }
    ctx->pc = 0x121150u;
    // 0x121150: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x121150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x121154: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x121154u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x121158: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x121158u;
    {
        const bool branch_taken_0x121158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12115Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121158u;
        // 0x12115c: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121158) {
            ctx->pc = 0x121178u;
            goto label_121178;
        }
    }
    ctx->pc = 0x121160u;
    // 0x121160: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x121160u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x121164: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x121164u;
    {
        const bool branch_taken_0x121164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x121164) {
            ctx->pc = 0x121168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121164u;
            // 0x121168: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12117Cu;
            goto label_12117c;
        }
    }
    ctx->pc = 0x12116Cu;
    // 0x12116c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x12116cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x121170: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x121170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x121174: 0x0  nop
    ctx->pc = 0x121174u;
    // NOP
label_121178:
    // 0x121178: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x121178u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_12117c:
    // 0x12117c: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12117Cu;
    {
        const bool branch_taken_0x12117c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x12117c) {
            ctx->pc = 0x121180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12117Cu;
            // 0x121180: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x121184u;
            goto label_121184;
        }
    }
    ctx->pc = 0x121184u;
label_121184:
    // 0x121184: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x121184u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x121188: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x121188u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x12118c: 0x1012  mflo        $v0
    ctx->pc = 0x12118cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x121190: 0x1810  mfhi        $v1
    ctx->pc = 0x121190u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x121194: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x121194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121198: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x121198u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x12119c: 0xac3018  mult        $a2, $a1, $t4
    ctx->pc = 0x12119cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1211a0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1211a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1211a4: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x1211a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1211a8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1211A8u;
    {
        const bool branch_taken_0x1211a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1211ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1211A8u;
        // 0x1211ac: 0x71400  sll         $v0, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1211a8) {
            ctx->pc = 0x1211D8u;
            goto label_1211d8;
        }
    }
    ctx->pc = 0x1211B0u;
    // 0x1211b0: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1211b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1211b4: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x1211b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1211b8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1211B8u;
    {
        const bool branch_taken_0x1211b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1211BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1211B8u;
        // 0x1211bc: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1211b8) {
            ctx->pc = 0x1211D4u;
            goto label_1211d4;
        }
    }
    ctx->pc = 0x1211C0u;
    // 0x1211c0: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x1211c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1211c4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1211C4u;
    {
        const bool branch_taken_0x1211c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1211C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1211C4u;
        // 0x1211c8: 0x71400  sll         $v0, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1211c4) {
            ctx->pc = 0x1211D8u;
            goto label_1211d8;
        }
    }
    ctx->pc = 0x1211CCu;
    // 0x1211cc: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1211ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1211d0: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1211d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_1211d4:
    // 0x1211d4: 0x71400  sll         $v0, $a3, 16
    ctx->pc = 0x1211d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_1211d8:
    // 0x1211d8: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1211d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1211dc: 0x453025  or          $a2, $v0, $a1
    ctx->pc = 0x1211dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1211e0: 0xc90019  multu       $a2, $t1
    ctx->pc = 0x1211e0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 6) * (uint64_t)GPR_U32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1211e4: 0x3810  mfhi        $a3
    ctx->pc = 0x1211e4u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x1211e8: 0x2012  mflo        $a0
    ctx->pc = 0x1211e8u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1211ec: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x1211ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1211f0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1211F0u;
    {
        const bool branch_taken_0x1211f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1211f0) {
            ctx->pc = 0x1211F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1211F0u;
            // 0x1211f4: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x121210u;
            goto label_121210;
        }
    }
    ctx->pc = 0x1211F8u;
    // 0x1211f8: 0x14e30006  bne         $a3, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1211F8u;
    {
        const bool branch_taken_0x1211f8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x1211FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1211F8u;
        // 0x1211fc: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1211f8) {
            ctx->pc = 0x121214u;
            goto label_121214;
        }
    }
    ctx->pc = 0x121200u;
    // 0x121200: 0x164102b  sltu        $v0, $t3, $a0
    ctx->pc = 0x121200u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x121204: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x121204u;
    {
        const bool branch_taken_0x121204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x121204) {
            ctx->pc = 0x121214u;
            goto label_121214;
        }
    }
    ctx->pc = 0x12120Cu;
    // 0x12120c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x12120cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_121210:
    // 0x121210: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x121210u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_121214:
    // 0x121214: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x121214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x121218: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x121218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x12121c: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x12121cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x121220: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x121220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x121224: 0x1c37024  and         $t6, $t6, $v1
    ctx->pc = 0x121224u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 3));
    // 0x121228: 0x1c27025  or          $t6, $t6, $v0
    ctx->pc = 0x121228u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 2));
    // 0x12122c: 0xd103c  dsll32      $v0, $t5, 0
    ctx->pc = 0x12122cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) << (32 + 0));
    // 0x121230: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x121230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x121234: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x121234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x121238: 0x1c37024  and         $t6, $t6, $v1
    ctx->pc = 0x121238u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 3));
    // 0x12123c: 0x3e00008  jr          $ra
    ctx->pc = 0x12123Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12123Cu;
        // 0x121240: 0x1c21025  or          $v0, $t6, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12123Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x121244u;
    // 0x121244: 0x0  nop
    ctx->pc = 0x121244u;
    // NOP
    ctx->pc = 0x121248u;
}
