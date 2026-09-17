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

// Function: sub_0031BE88
// Address: 0x31be88 - 0x31bea8
void sub_0031BE88_0x31be88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031BE88_0x31be88");
#endif

    switch (ctx->pc) {
        case 0x31be9cu: goto label_31be9c;
        default: break;
    }

    ctx->pc = 0x31be88u;

    // 0x31be88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31be88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31be8c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31be8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31be90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31be90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31be94: 0xc0c731c  jal         func_31CC70
    ctx->pc = 0x31BE94u;
    SET_GPR_U32(ctx, 31, 0x31BE9Cu);
    ctx->pc = 0x31BE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BE94u;
    // 0x31be98: 0xafa60004  sw          $a2, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CC70u, 0x31BE94u, 0x31BE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BE9Cu;
label_31be9c:
    // 0x31be9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31be9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31bea0: 0x3e00008  jr          $ra
    ctx->pc = 0x31BEA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31BEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BEA0u;
        // 0x31bea4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31BEA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31BEA8u;
}
