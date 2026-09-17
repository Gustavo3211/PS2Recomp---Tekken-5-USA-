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

// Function: sub_00324CF8
// Address: 0x324cf8 - 0x324e30
void sub_00324CF8_0x324cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324CF8_0x324cf8");
#endif

    switch (ctx->pc) {
        case 0x324d48u: goto label_324d48;
        default: break;
    }

    ctx->pc = 0x324cf8u;

    // 0x324cf8: 0x24880400  addiu       $t0, $a0, 0x400
    ctx->pc = 0x324cf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 1024));
    // 0x324cfc: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x324cfcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x324d00: 0x8d030014  lw          $v1, 0x14($t0)
    ctx->pc = 0x324d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x324d04: 0x24870410  addiu       $a3, $a0, 0x410
    ctx->pc = 0x324d04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 1040));
    // 0x324d08: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x324d08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x324d0c: 0x27a90010  addiu       $t1, $sp, 0x10
    ctx->pc = 0x324d0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x324d10: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x324d10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324d14: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x324d14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x324d18: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x324d18u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x324d1c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x324d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x324d20: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x324d20u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324d24: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x324d24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x324d28: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x324d28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324d2c: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x324d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x324d30: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x324d30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x324d34: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x324d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x324d38: 0x1082003a  beq         $a0, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x324D38u;
    {
        const bool branch_taken_0x324d38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x324D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324D38u;
        // 0x324d3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324d38) {
            ctx->pc = 0x324E24u;
            goto label_324e24;
        }
    }
    ctx->pc = 0x324D40u;
    // 0x324d40: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x324d40u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324d44: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x324d44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_324d48:
    // 0x324d48: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x324d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x324d4c: 0x54450030  bnel        $v0, $a1, . + 4 + (0x30 << 2)
    ctx->pc = 0x324D4Cu;
    {
        const bool branch_taken_0x324d4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x324d4c) {
            ctx->pc = 0x324D50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x324D4Cu;
            // 0x324d50: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x324E10u;
            goto label_324e10;
        }
    }
    ctx->pc = 0x324D54u;
    // 0x324d54: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x324d54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x324d58: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x324d58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x324d5c: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x324d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x324d60: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x324d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x324d64: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x324d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x324d68: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x324d68u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x324d6c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x324d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x324d70: 0x54c30005  bnel        $a2, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x324D70u;
    {
        const bool branch_taken_0x324d70 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x324d70) {
            ctx->pc = 0x324D74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x324D70u;
            // 0x324d74: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x324D88u;
            goto label_324d88;
        }
    }
    ctx->pc = 0x324D78u;
    // 0x324d78: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x324d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x324d7c: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x324d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x324d80: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x324D80u;
    {
        const bool branch_taken_0x324d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324D80u;
        // 0x324d84: 0xac670000  sw          $a3, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324d80) {
            ctx->pc = 0x324DB4u;
            goto label_324db4;
        }
    }
    ctx->pc = 0x324D88u;
label_324d88:
    // 0x324d88: 0x14c20005  bne         $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x324D88u;
    {
        const bool branch_taken_0x324d88 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x324D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324D88u;
        // 0x324d8c: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324d88) {
            ctx->pc = 0x324DA0u;
            goto label_324da0;
        }
    }
    ctx->pc = 0x324D90u;
    // 0x324d90: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x324d90u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x324d94: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x324D94u;
    {
        const bool branch_taken_0x324d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324D94u;
        // 0x324d98: 0xac670004  sw          $a3, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324d94) {
            ctx->pc = 0x324DB4u;
            goto label_324db4;
        }
    }
    ctx->pc = 0x324D9Cu;
    // 0x324d9c: 0x0  nop
    ctx->pc = 0x324d9cu;
    // NOP
label_324da0:
    // 0x324da0: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x324da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x324da4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x324da4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x324da8: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x324da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x324dac: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x324dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x324db0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x324db0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_324db4:
    // 0x324db4: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x324db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x324db8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x324db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x324dbc: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x324dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
    // 0x324dc0: 0x8d02000c  lw          $v0, 0xC($t0)
    ctx->pc = 0x324dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x324dc4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x324DC4u;
    {
        const bool branch_taken_0x324dc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x324dc4) {
            ctx->pc = 0x324DC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x324DC4u;
            // 0x324dc8: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x324DD8u;
            goto label_324dd8;
        }
    }
    ctx->pc = 0x324DCCu;
    // 0x324dcc: 0xad060004  sw          $a2, 0x4($t0)
    ctx->pc = 0x324dccu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 6));
    // 0x324dd0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x324DD0u;
    {
        const bool branch_taken_0x324dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324DD0u;
        // 0x324dd4: 0xacc80000  sw          $t0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324dd0) {
            ctx->pc = 0x324DE4u;
            goto label_324de4;
        }
    }
    ctx->pc = 0x324DD8u;
label_324dd8:
    // 0x324dd8: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x324dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x324ddc: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x324ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x324de0: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x324de0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_324de4:
    // 0x324de4: 0xacc80004  sw          $t0, 0x4($a2)
    ctx->pc = 0x324de4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
    // 0x324de8: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x324de8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324dec: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x324decu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    // 0x324df0: 0x8d04000c  lw          $a0, 0xC($t0)
    ctx->pc = 0x324df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x324df4: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x324df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x324df8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x324df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x324dfc: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x324dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x324e00: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x324e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x324e04: 0xad04000c  sw          $a0, 0xC($t0)
    ctx->pc = 0x324e04u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 4));
    // 0x324e08: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x324E08u;
    {
        const bool branch_taken_0x324e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324E08u;
        // 0x324e0c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324e08) {
            ctx->pc = 0x324E24u;
            goto label_324e24;
        }
    }
    ctx->pc = 0x324E10u;
label_324e10:
    // 0x324e10: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x324e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x324e14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x324e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324e18: 0x1443ffcb  bne         $v0, $v1, . + 4 + (-0x35 << 2)
    ctx->pc = 0x324E18u;
    {
        const bool branch_taken_0x324e18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x324E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324E18u;
        // 0x324e1c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324e18) {
            ctx->pc = 0x324D48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_324d48;
        }
    }
    ctx->pc = 0x324E20u;
    // 0x324e20: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x324e20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_324e24:
    // 0x324e24: 0x3e00008  jr          $ra
    ctx->pc = 0x324E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324E24u;
        // 0x324e28: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324E24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324E2Cu;
    // 0x324e2c: 0x0  nop
    ctx->pc = 0x324e2cu;
    // NOP
    ctx->pc = 0x324e30u;
}
