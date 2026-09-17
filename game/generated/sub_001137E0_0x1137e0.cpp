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

// Function: sub_001137E0
// Address: 0x1137e0 - 0x113850
void sub_001137E0_0x1137e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001137E0_0x1137e0");
#endif

    switch (ctx->pc) {
        case 0x113820u: goto label_113820;
        case 0x113838u: goto label_113838;
        default: break;
    }

    ctx->pc = 0x1137e0u;

    // 0x1137e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1137e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1137e4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1137e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1137e8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1137e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1137ec: 0x3c100013  lui         $s0, 0x13
    ctx->pc = 0x1137ecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)19 << 16));
    // 0x1137f0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1137f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1137f4: 0x8e0211a0  lw          $v0, 0x11A0($s0)
    ctx->pc = 0x1137f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1311A0u));
    // 0x1137f8: 0x14430012  bne         $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1137F8u;
    {
        const bool branch_taken_0x1137f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1137FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1137F8u;
        // 0x1137fc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1137f8) {
            ctx->pc = 0x113844u;
            goto label_113844;
        }
    }
    ctx->pc = 0x113800u;
    // 0x113800: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x113800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x113804: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x113804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x113808: 0x2442e1b0  addiu       $v0, $v0, -0x1E50
    ctx->pc = 0x113808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959536));
    // 0x11380c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x11380cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x113810: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x113810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x113814: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x113814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113818: 0xc043ce8  jal         func_10F3A0
    ctx->pc = 0x113818u;
    SET_GPR_U32(ctx, 31, 0x113820u);
    ctx->pc = 0x11381Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113818u;
    // 0x11381c: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3A0u, 0x113818u, 0x113820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113820u;
label_113820:
    // 0x113820: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x113820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x113824: 0xae0211a0  sw          $v0, 0x11A0($s0)
    ctx->pc = 0x113824u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4512), GPR_U32(ctx, 2));
    // 0x113828: 0x2463e1c0  addiu       $v1, $v1, -0x1E40
    ctx->pc = 0x113828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959552));
    // 0x11382c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11382cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113830: 0xc043ce8  jal         func_10F3A0
    ctx->pc = 0x113830u;
    SET_GPR_U32(ctx, 31, 0x113838u);
    ctx->pc = 0x113834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113830u;
    // 0x113834: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3A0u, 0x113830u, 0x113838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113838u;
label_113838:
    // 0x113838: 0x3c030013  lui         $v1, 0x13
    ctx->pc = 0x113838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
    // 0x11383c: 0xac6211a4  sw          $v0, 0x11A4($v1)
    ctx->pc = 0x11383cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1311A4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1311A4u, _value); } while (0);
    // 0x113840: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x113840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_113844:
    // 0x113844: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x113844u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x113848: 0x3e00008  jr          $ra
    ctx->pc = 0x113848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11384Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113848u;
        // 0x11384c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113850u;
}
