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

// Function: sub_00276DC0
// Address: 0x276dc0 - 0x276e48
void sub_00276DC0_0x276dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276DC0_0x276dc0");
#endif

    switch (ctx->pc) {
        case 0x276de0u: goto label_276de0;
        case 0x276e10u: goto label_276e10;
        default: break;
    }

    ctx->pc = 0x276dc0u;

    // 0x276dc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x276dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x276dc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x276dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x276dc8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x276dc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276dcc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x276dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x276dd0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x276dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x276dd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x276dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x276dd8: 0xc08afec  jal         func_22BFB0
    ctx->pc = 0x276DD8u;
    SET_GPR_U32(ctx, 31, 0x276DE0u);
    ctx->pc = 0x276DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276DD8u;
    // 0x276ddc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BFB0u, 0x276DD8u, 0x276DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276DE0u;
label_276de0:
    // 0x276de0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x276de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276de4: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x276DE4u;
    {
        const bool branch_taken_0x276de4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x276DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276DE4u;
        // 0x276de8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276de4) {
            ctx->pc = 0x276E34u;
            goto label_276e34;
        }
    }
    ctx->pc = 0x276DECu;
    // 0x276dec: 0x8f83ca70  lw          $v1, -0x3590($gp)
    ctx->pc = 0x276decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953584)));
    // 0x276df0: 0x54620011  bnel        $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x276DF0u;
    {
        const bool branch_taken_0x276df0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x276df0) {
            ctx->pc = 0x276DF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x276DF0u;
            // 0x276df4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x276E38u;
            goto label_276e38;
        }
    }
    ctx->pc = 0x276DF8u;
    // 0x276df8: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x276df8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x276dfc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x276dfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276e00: 0x8f82ca68  lw          $v0, -0x3598($gp)
    ctx->pc = 0x276e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953576)));
    // 0x276e04: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x276e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x276e08: 0x18a0000a  blez        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x276E08u;
    {
        const bool branch_taken_0x276e08 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x276E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276E08u;
        // 0x276e0c: 0x8c43006c  lw          $v1, 0x6C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276e08) {
            ctx->pc = 0x276E34u;
            goto label_276e34;
        }
    }
    ctx->pc = 0x276E10u;
label_276e10:
    // 0x276e10: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x276e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x276e14: 0x14440004  bne         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x276E14u;
    {
        const bool branch_taken_0x276e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x276E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276E14u;
        // 0x276e18: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276e14) {
            ctx->pc = 0x276E28u;
            goto label_276e28;
        }
    }
    ctx->pc = 0x276E1Cu;
    // 0x276e1c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x276e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x276e20: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x276e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x276e24: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x276e24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_276e28:
    // 0x276e28: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x276e28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x276e2c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x276E2Cu;
    {
        const bool branch_taken_0x276e2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x276E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276E2Cu;
        // 0x276e30: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276e2c) {
            ctx->pc = 0x276E10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_276e10;
        }
    }
    ctx->pc = 0x276E34u;
label_276e34:
    // 0x276e34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x276e34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_276e38:
    // 0x276e38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x276e38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x276e3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x276e3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276e40: 0x3e00008  jr          $ra
    ctx->pc = 0x276E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276E40u;
        // 0x276e44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276E40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276E48u;
}
