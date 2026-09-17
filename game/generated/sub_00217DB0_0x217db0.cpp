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

// Function: sub_00217DB0
// Address: 0x217db0 - 0x217e28
void sub_00217DB0_0x217db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217DB0_0x217db0");
#endif

    switch (ctx->pc) {
        case 0x217dc0u: goto label_217dc0;
        case 0x217ddcu: goto label_217ddc;
        case 0x217e10u: goto label_217e10;
        default: break;
    }

    ctx->pc = 0x217db0u;

    // 0x217db0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x217db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x217db4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x217db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x217db8: 0xc0902ee  jal         func_240BB8
    ctx->pc = 0x217DB8u;
    SET_GPR_U32(ctx, 31, 0x217DC0u);
    ctx->pc = 0x240BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240BB8u, 0x217DB8u, 0x217DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217DC0u;
label_217dc0:
    // 0x217dc0: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x217dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x217dc4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x217dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x217dc8: 0x248437e0  addiu       $a0, $a0, 0x37E0
    ctx->pc = 0x217dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    // 0x217dcc: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x217DCCu;
    {
        const bool branch_taken_0x217dcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x217DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217DCCu;
        // 0x217dd0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217dcc) {
            ctx->pc = 0x217E14u;
            goto label_217e14;
        }
    }
    ctx->pc = 0x217DD4u;
    // 0x217dd4: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x217DD4u;
    SET_GPR_U32(ctx, 31, 0x217DDCu);
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x217DD4u, 0x217DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217DDCu;
label_217ddc:
    // 0x217ddc: 0x24450058  addiu       $a1, $v0, 0x58
    ctx->pc = 0x217ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x217de0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x217de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x217de4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x217DE4u;
    {
        const bool branch_taken_0x217de4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x217de4) {
            ctx->pc = 0x217DE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217DE4u;
            // 0x217de8: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217E00u;
            goto label_217e00;
        }
    }
    ctx->pc = 0x217DECu;
    // 0x217dec: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x217decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x217df0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x217df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x217df4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x217DF4u;
    {
        const bool branch_taken_0x217df4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x217df4) {
            ctx->pc = 0x217E08u;
            goto label_217e08;
        }
    }
    ctx->pc = 0x217DFCu;
    // 0x217dfc: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x217dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_217e00:
    // 0x217e00: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x217e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217e04: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x217e04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_217e08:
    // 0x217e08: 0xc090212  jal         func_240848
    ctx->pc = 0x217E08u;
    SET_GPR_U32(ctx, 31, 0x217E10u);
    ctx->pc = 0x240848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240848u, 0x217E08u, 0x217E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217E10u;
label_217e10:
    // 0x217e10: 0x284319f1  slti        $v1, $v0, 0x19F1
    ctx->pc = 0x217e10u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6641) ? 1 : 0);
label_217e14:
    // 0x217e14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x217e14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217e18: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x217e18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217e1c: 0x3e00008  jr          $ra
    ctx->pc = 0x217E1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217E1Cu;
        // 0x217e20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217E1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217E24u;
    // 0x217e24: 0x0  nop
    ctx->pc = 0x217e24u;
    // NOP
    ctx->pc = 0x217e28u;
}
