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

// Function: sub_0048F798
// Address: 0x48f798 - 0x48f7d0
void sub_0048F798_0x48f798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048F798_0x48f798");
#endif

    switch (ctx->pc) {
        case 0x48f7a8u: goto label_48f7a8;
        case 0x48f7b0u: goto label_48f7b0;
        case 0x48f7b8u: goto label_48f7b8;
        case 0x48f7c0u: goto label_48f7c0;
        default: break;
    }

    ctx->pc = 0x48f798u;

    // 0x48f798: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48f798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x48f79c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48f79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48f7a0: 0xc123e02  jal         func_48F808
    ctx->pc = 0x48F7A0u;
    SET_GPR_U32(ctx, 31, 0x48F7A8u);
    ctx->pc = 0x48F808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48F808u, 0x48F7A0u, 0x48F7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F7A8u;
label_48f7a8:
    // 0x48f7a8: 0xc123e80  jal         func_48FA00
    ctx->pc = 0x48F7A8u;
    SET_GPR_U32(ctx, 31, 0x48F7B0u);
    ctx->pc = 0x48FA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48FA00u, 0x48F7A8u, 0x48F7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F7B0u;
label_48f7b0:
    // 0x48f7b0: 0xc123e82  jal         func_48FA08
    ctx->pc = 0x48F7B0u;
    SET_GPR_U32(ctx, 31, 0x48F7B8u);
    ctx->pc = 0x48FA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48FA08u, 0x48F7B0u, 0x48F7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F7B8u;
label_48f7b8:
    // 0x48f7b8: 0xc123dfa  jal         func_48F7E8
    ctx->pc = 0x48F7B8u;
    SET_GPR_U32(ctx, 31, 0x48F7C0u);
    ctx->pc = 0x48F7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48F7E8u, 0x48F7B8u, 0x48F7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F7C0u;
label_48f7c0:
    // 0x48f7c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48f7c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48f7c4: 0x813e70a  j           func_4F9C28
    ctx->pc = 0x48F7C4u;
    ctx->pc = 0x48F7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48F7C4u;
    // 0x48f7c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9C28u;
    sub_004F9C28_0x4f9c28(rdram, ctx, runtime); return;
    ctx->pc = 0x48F7CCu;
    // 0x48f7cc: 0x0  nop
    ctx->pc = 0x48f7ccu;
    // NOP
    ctx->pc = 0x48f7d0u;
}
