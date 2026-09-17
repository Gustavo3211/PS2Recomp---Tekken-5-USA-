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

// Function: sub_0050A680
// Address: 0x50a680 - 0x50a6b0
void sub_0050A680_0x50a680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050A680_0x50a680");
#endif

    switch (ctx->pc) {
        case 0x50a690u: goto label_50a690;
        case 0x50a698u: goto label_50a698;
        case 0x50a6a0u: goto label_50a6a0;
        default: break;
    }

    ctx->pc = 0x50a680u;

    // 0x50a680: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x50a680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x50a684: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x50a684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x50a688: 0xc1444e4  jal         func_511390
    ctx->pc = 0x50A688u;
    SET_GPR_U32(ctx, 31, 0x50A690u);
    ctx->pc = 0x511390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x511390u, 0x50A688u, 0x50A690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50A690u;
label_50a690:
    // 0x50a690: 0xc144bba  jal         func_512EE8
    ctx->pc = 0x50A690u;
    SET_GPR_U32(ctx, 31, 0x50A698u);
    ctx->pc = 0x512EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512EE8u, 0x50A690u, 0x50A698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50A698u;
label_50a698:
    // 0x50a698: 0xc144432  jal         func_5110C8
    ctx->pc = 0x50A698u;
    SET_GPR_U32(ctx, 31, 0x50A6A0u);
    ctx->pc = 0x50A69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50A698u;
    // 0x50a69c: 0x3c040002  lui         $a0, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5110C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5110C8u, 0x50A698u, 0x50A6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50A6A0u;
label_50a6a0:
    // 0x50a6a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x50a6a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50a6a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x50a6a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50a6a8: 0x8144aa0  j           func_512A80
    ctx->pc = 0x50A6A8u;
    ctx->pc = 0x50A6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50A6A8u;
    // 0x50a6ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512A80u, 0x50A6A8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x50A6B0u;
}
