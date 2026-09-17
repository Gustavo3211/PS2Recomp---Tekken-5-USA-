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

// Function: sub_0036FDA8
// Address: 0x36fda8 - 0x36fe70
void sub_0036FDA8_0x36fda8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036FDA8_0x36fda8");
#endif

    switch (ctx->pc) {
        case 0x36fdccu: goto label_36fdcc;
        case 0x36fde4u: goto label_36fde4;
        case 0x36fe20u: goto label_36fe20;
        default: break;
    }

    ctx->pc = 0x36fda8u;

    // 0x36fda8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36fda8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36fdac: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36fdacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36fdb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36fdb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36fdb4: 0x245074d0  addiu       $s0, $v0, 0x74D0
    ctx->pc = 0x36fdb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29904));
    // 0x36fdb8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36fdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D74D0u));
    // 0x36fdbc: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36FDBCu;
    {
        const bool branch_taken_0x36fdbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36FDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FDBCu;
        // 0x36fdc0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fdbc) {
            ctx->pc = 0x36FDE4u;
            goto label_36fde4;
        }
    }
    ctx->pc = 0x36FDC4u;
    // 0x36fdc4: 0xc0dc6c2  jal         func_371B08
    ctx->pc = 0x36FDC4u;
    SET_GPR_U32(ctx, 31, 0x36FDCCu);
    ctx->pc = 0x371B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371B08u, 0x36FDC4u, 0x36FDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FDCCu;
label_36fdcc:
    // 0x36fdcc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36fdccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36fdd0: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x36fdd0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36fdd4: 0x24a50960  addiu       $a1, $a1, 0x960
    ctx->pc = 0x36fdd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2400));
    // 0x36fdd8: 0x24c67540  addiu       $a2, $a2, 0x7540
    ctx->pc = 0x36fdd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30016));
    // 0x36fddc: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36FDDCu;
    SET_GPR_U32(ctx, 31, 0x36FDE4u);
    ctx->pc = 0x36FDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FDDCu;
    // 0x36fde0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36FDDCu, 0x36FDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FDE4u;
label_36fde4:
    // 0x36fde4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36fde4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fde8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36fde8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36fdec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36fdecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36fdf0: 0x3e00008  jr          $ra
    ctx->pc = 0x36FDF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36FDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FDF0u;
        // 0x36fdf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36FDF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36FDF8u;
    // 0x36fdf8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x36fdf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fdfc: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x36fdfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x36fe00: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36fe00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36fe04: 0x24c30050  addiu       $v1, $a2, 0x50
    ctx->pc = 0x36fe04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x36fe08: 0x244202d8  addiu       $v0, $v0, 0x2D8
    ctx->pc = 0x36fe08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 728));
    // 0x36fe0c: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x36fe0cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x36fe10: 0x24c20058  addiu       $v0, $a2, 0x58
    ctx->pc = 0x36fe10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 88));
    // 0x36fe14: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x36fe14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x36fe18: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x36fe18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x36fe1c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x36fe1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_36fe20:
    // 0x36fe20: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x36fe20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x36fe24: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x36fe24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x36fe28: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x36fe28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x36fe2c: 0x0  nop
    ctx->pc = 0x36fe2cu;
    // NOP
    // 0x36fe30: 0x0  nop
    ctx->pc = 0x36fe30u;
    // NOP
    // 0x36fe34: 0x1483fffa  bne         $a0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36FE34u;
    {
        const bool branch_taken_0x36fe34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x36FE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FE34u;
        // 0x36fe38: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fe34) {
            ctx->pc = 0x36FE20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36fe20;
        }
    }
    ctx->pc = 0x36FE3Cu;
    // 0x36fe3c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x36fe3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x36fe40: 0x24c20110  addiu       $v0, $a2, 0x110
    ctx->pc = 0x36fe40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 272));
    // 0x36fe44: 0x24c300b8  addiu       $v1, $a2, 0xB8
    ctx->pc = 0x36fe44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 184));
    // 0x36fe48: 0x2484feb0  addiu       $a0, $a0, -0x150
    ctx->pc = 0x36fe48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966960));
    // 0x36fe4c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36fe4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36fe50: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x36fe50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x36fe54: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x36fe54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x36fe58: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x36fe58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x36fe5c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x36fe5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x36fe60: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x36fe60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x36fe64: 0x3e00008  jr          $ra
    ctx->pc = 0x36FE64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36FE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FE64u;
        // 0x36fe68: 0xacc40008  sw          $a0, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36FE64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36FE6Cu;
    // 0x36fe6c: 0x0  nop
    ctx->pc = 0x36fe6cu;
    // NOP
    ctx->pc = 0x36fe70u;
}
