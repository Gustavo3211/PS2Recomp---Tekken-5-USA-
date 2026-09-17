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

// Function: sub_0036AE28
// Address: 0x36ae28 - 0x36ae78
void sub_0036AE28_0x36ae28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036AE28_0x36ae28");
#endif

    switch (ctx->pc) {
        case 0x36ae4cu: goto label_36ae4c;
        case 0x36ae64u: goto label_36ae64;
        default: break;
    }

    ctx->pc = 0x36ae28u;

    // 0x36ae28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36ae28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36ae2c: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36ae2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36ae30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36ae30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36ae34: 0x24506dc8  addiu       $s0, $v0, 0x6DC8
    ctx->pc = 0x36ae34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 28104));
    // 0x36ae38: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36ae38u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D6DC8u));
    // 0x36ae3c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36AE3Cu;
    {
        const bool branch_taken_0x36ae3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36AE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AE3Cu;
        // 0x36ae40: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ae3c) {
            ctx->pc = 0x36AE64u;
            goto label_36ae64;
        }
    }
    ctx->pc = 0x36AE44u;
    // 0x36ae44: 0xc0dae78  jal         func_36B9E0
    ctx->pc = 0x36AE44u;
    SET_GPR_U32(ctx, 31, 0x36AE4Cu);
    ctx->pc = 0x36B9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36B9E0u, 0x36AE44u, 0x36AE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AE4Cu;
label_36ae4c:
    // 0x36ae4c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36ae4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36ae50: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x36ae50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36ae54: 0x24a59ac0  addiu       $a1, $a1, -0x6540
    ctx->pc = 0x36ae54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941376));
    // 0x36ae58: 0x24c66ec8  addiu       $a2, $a2, 0x6EC8
    ctx->pc = 0x36ae58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28360));
    // 0x36ae5c: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36AE5Cu;
    SET_GPR_U32(ctx, 31, 0x36AE64u);
    ctx->pc = 0x36AE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AE5Cu;
    // 0x36ae60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36AE5Cu, 0x36AE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AE64u;
label_36ae64:
    // 0x36ae64: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36ae64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ae68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36ae68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36ae6c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36ae6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36ae70: 0x3e00008  jr          $ra
    ctx->pc = 0x36AE70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36AE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AE70u;
        // 0x36ae74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36AE70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36AE78u;
}
