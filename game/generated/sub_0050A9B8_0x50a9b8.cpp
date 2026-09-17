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

// Function: sub_0050A9B8
// Address: 0x50a9b8 - 0x50a9e0
void sub_0050A9B8_0x50a9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050A9B8_0x50a9b8");
#endif

    switch (ctx->pc) {
        case 0x50a9c8u: goto label_50a9c8;
        case 0x50a9d0u: goto label_50a9d0;
        default: break;
    }

    ctx->pc = 0x50a9b8u;

    // 0x50a9b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x50a9b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x50a9bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x50a9bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x50a9c0: 0xc14450e  jal         func_511438
    ctx->pc = 0x50A9C0u;
    SET_GPR_U32(ctx, 31, 0x50A9C8u);
    ctx->pc = 0x511438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x511438u, 0x50A9C0u, 0x50A9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50A9C8u;
label_50a9c8:
    // 0x50a9c8: 0xc144b88  jal         func_512E20
    ctx->pc = 0x50A9C8u;
    SET_GPR_U32(ctx, 31, 0x50A9D0u);
    ctx->pc = 0x512E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512E20u, 0x50A9C8u, 0x50A9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50A9D0u;
label_50a9d0:
    // 0x50a9d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x50a9d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50a9d4: 0x814297c  j           func_50A5F0
    ctx->pc = 0x50A9D4u;
    ctx->pc = 0x50A9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50A9D4u;
    // 0x50a9d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x50A5F0u;
    sub_0050A5F0_0x50a5f0(rdram, ctx, runtime); return;
    ctx->pc = 0x50A9DCu;
    // 0x50a9dc: 0x0  nop
    ctx->pc = 0x50a9dcu;
    // NOP
    ctx->pc = 0x50a9e0u;
}
