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

// Function: sub_001F9CC0
// Address: 0x1f9cc0 - 0x1f9e18
void sub_001F9CC0_0x1f9cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9CC0_0x1f9cc0");
#endif

    switch (ctx->pc) {
        case 0x1f9d04u: goto label_1f9d04;
        case 0x1f9d58u: goto label_1f9d58;
        default: break;
    }

    ctx->pc = 0x1f9cc0u;

    // 0x1f9cc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f9cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f9cc4: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x1f9cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x1f9cc8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f9cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f9ccc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1f9cccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9cd0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f9cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f9cd4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f9cd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9cd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f9cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f9cdc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f9cdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9ce0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f9ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1f9ce4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f9ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f9ce8: 0x8c6283c0  lw          $v0, -0x7C40($v1)
    ctx->pc = 0x1f9ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x1f9cec: 0x8e500050  lw          $s0, 0x50($s2)
    ctx->pc = 0x1f9cecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x1f9cf0: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x1f9cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x1f9cf4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F9CF4u;
    {
        const bool branch_taken_0x1f9cf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9CF4u;
        // 0x1f9cf8: 0x8e130210  lw          $s3, 0x210($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9cf4) {
            ctx->pc = 0x1F9D0Cu;
            goto label_1f9d0c;
        }
    }
    ctx->pc = 0x1F9CFCu;
    // 0x1f9cfc: 0xc07ebb6  jal         func_1FAED8
    ctx->pc = 0x1F9CFCu;
    SET_GPR_U32(ctx, 31, 0x1F9D04u);
    ctx->pc = 0x1FAED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAED8u, 0x1F9CFCu, 0x1F9D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9D04u;
label_1f9d04:
    // 0x1f9d04: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x1f9d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x1f9d08: 0x2c470001  sltiu       $a3, $v0, 0x1
    ctx->pc = 0x1f9d08u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1f9d0c:
    // 0x1f9d0c: 0x54e00006  bnel        $a3, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F9D0Cu;
    {
        const bool branch_taken_0x1f9d0c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f9d0c) {
            ctx->pc = 0x1F9D10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F9D0Cu;
            // 0x1f9d10: 0x8e050214  lw          $a1, 0x214($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9D28u;
            goto label_1f9d28;
        }
    }
    ctx->pc = 0x1F9D14u;
    // 0x1f9d14: 0x86440040  lh          $a0, 0x40($s2)
    ctx->pc = 0x1f9d14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x1f9d18: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x1f9d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1f9d1c: 0x10830034  beq         $a0, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x1F9D1Cu;
    {
        const bool branch_taken_0x1f9d1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F9D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9D1Cu;
        // 0x1f9d20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9d1c) {
            ctx->pc = 0x1F9DF0u;
            goto label_1f9df0;
        }
    }
    ctx->pc = 0x1F9D24u;
    // 0x1f9d24: 0x8e050214  lw          $a1, 0x214($s0)
    ctx->pc = 0x1f9d24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_1f9d28:
    // 0x1f9d28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f9d28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9d2c: 0x18a0002f  blez        $a1, . + 4 + (0x2F << 2)
    ctx->pc = 0x1F9D2Cu;
    {
        const bool branch_taken_0x1f9d2c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1F9D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9D2Cu;
        // 0x1f9d30: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9d2c) {
            ctx->pc = 0x1F9DECu;
            goto label_1f9dec;
        }
    }
    ctx->pc = 0x1F9D34u;
    // 0x1f9d34: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1f9d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1f9d38: 0x240e0003  addiu       $t6, $zero, 0x3
    ctx->pc = 0x1f9d38u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f9d3c: 0x244d83c0  addiu       $t5, $v0, -0x7C40
    ctx->pc = 0x1f9d3cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935488));
    // 0x1f9d40: 0x240c0005  addiu       $t4, $zero, 0x5
    ctx->pc = 0x1f9d40u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f9d44: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x1f9d44u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f9d48: 0x240a0006  addiu       $t2, $zero, 0x6
    ctx->pc = 0x1f9d48u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1f9d4c: 0x24090007  addiu       $t1, $zero, 0x7
    ctx->pc = 0x1f9d4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f9d50: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x1f9d50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1f9d54: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x1f9d54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_1f9d58:
    // 0x1f9d58: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1f9d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1f9d5c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f9d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f9d60: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1f9d60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1f9d64: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f9d64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f9d68: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x1f9d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f9d6c: 0x94620026  lhu         $v0, 0x26($v1)
    ctx->pc = 0x1f9d6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 38)));
    // 0x1f9d70: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F9D70u;
    {
        const bool branch_taken_0x1f9d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9d70) {
            ctx->pc = 0x1F9DB8u;
            goto label_1f9db8;
        }
    }
    ctx->pc = 0x1F9D78u;
    // 0x1f9d78: 0x504e0019  beql        $v0, $t6, . + 4 + (0x19 << 2)
    ctx->pc = 0x1F9D78u;
    {
        const bool branch_taken_0x1f9d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 14));
        if (branch_taken_0x1f9d78) {
            ctx->pc = 0x1F9D7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F9D78u;
            // 0x1f9d7c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9DE0u;
            goto label_1f9de0;
        }
    }
    ctx->pc = 0x1F9D80u;
    // 0x1f9d80: 0x104c000d  beq         $v0, $t4, . + 4 + (0xD << 2)
    ctx->pc = 0x1F9D80u;
    {
        const bool branch_taken_0x1f9d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 12));
        if (branch_taken_0x1f9d80) {
            ctx->pc = 0x1F9DB8u;
            goto label_1f9db8;
        }
    }
    ctx->pc = 0x1F9D88u;
    // 0x1f9d88: 0x504b0015  beql        $v0, $t3, . + 4 + (0x15 << 2)
    ctx->pc = 0x1F9D88u;
    {
        const bool branch_taken_0x1f9d88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 11));
        if (branch_taken_0x1f9d88) {
            ctx->pc = 0x1F9D8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F9D88u;
            // 0x1f9d8c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9DE0u;
            goto label_1f9de0;
        }
    }
    ctx->pc = 0x1F9D90u;
    // 0x1f9d90: 0x104a0009  beq         $v0, $t2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F9D90u;
    {
        const bool branch_taken_0x1f9d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 10));
        if (branch_taken_0x1f9d90) {
            ctx->pc = 0x1F9DB8u;
            goto label_1f9db8;
        }
    }
    ctx->pc = 0x1F9D98u;
    // 0x1f9d98: 0x50490011  beql        $v0, $t1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F9D98u;
    {
        const bool branch_taken_0x1f9d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        if (branch_taken_0x1f9d98) {
            ctx->pc = 0x1F9D9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F9D98u;
            // 0x1f9d9c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9DE0u;
            goto label_1f9de0;
        }
    }
    ctx->pc = 0x1F9DA0u;
    // 0x1f9da0: 0x5448000f  bnel        $v0, $t0, . + 4 + (0xF << 2)
    ctx->pc = 0x1F9DA0u;
    {
        const bool branch_taken_0x1f9da0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x1f9da0) {
            ctx->pc = 0x1F9DA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F9DA0u;
            // 0x1f9da4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9DE0u;
            goto label_1f9de0;
        }
    }
    ctx->pc = 0x1F9DA8u;
    // 0x1f9da8: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x1f9da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x1f9dac: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x1f9dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x1f9db0: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1F9DB0u;
    {
        const bool branch_taken_0x1f9db0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f9db0) {
            ctx->pc = 0x1F9DB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F9DB0u;
            // 0x1f9db4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9DE0u;
            goto label_1f9de0;
        }
    }
    ctx->pc = 0x1F9DB8u;
label_1f9db8:
    // 0x1f9db8: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9DB8u;
    {
        const bool branch_taken_0x1f9db8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9DB8u;
        // 0x1f9dbc: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9db8) {
            ctx->pc = 0x1F9DCCu;
            goto label_1f9dcc;
        }
    }
    ctx->pc = 0x1F9DC0u;
    // 0x1f9dc0: 0x94620028  lhu         $v0, 0x28($v1)
    ctx->pc = 0x1f9dc0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x1f9dc4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F9DC4u;
    {
        const bool branch_taken_0x1f9dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9DC4u;
        // 0x1f9dc8: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9dc4) {
            ctx->pc = 0x1F9DDCu;
            goto label_1f9ddc;
        }
    }
    ctx->pc = 0x1F9DCCu;
label_1f9dcc:
    // 0x1f9dcc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1f9dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1f9dd0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1f9dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1f9dd4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1f9dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1f9dd8: 0x8e050214  lw          $a1, 0x214($s0)
    ctx->pc = 0x1f9dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_1f9ddc:
    // 0x1f9ddc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1f9ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1f9de0:
    // 0x1f9de0: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x1f9de0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1f9de4: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1F9DE4u;
    {
        const bool branch_taken_0x1f9de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9DE4u;
        // 0x1f9de8: 0x61040  sll         $v0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9de4) {
            ctx->pc = 0x1F9D58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f9d58;
        }
    }
    ctx->pc = 0x1F9DECu;
label_1f9dec:
    // 0x1f9dec: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1f9decu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f9df0:
    // 0x1f9df0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f9df0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f9df4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f9df4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f9df8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f9df8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9dfc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f9dfcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f9e00: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f9e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9e04: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9E04u;
        // 0x1f9e08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9E04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9E0Cu;
    // 0x1f9e0c: 0x0  nop
    ctx->pc = 0x1f9e0cu;
    // NOP
    // 0x1f9e10: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9E10u;
        // 0x1f9e14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9E10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9E18u;
}
