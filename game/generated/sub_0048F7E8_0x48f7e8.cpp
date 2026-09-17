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

// Function: sub_0048F7E8
// Address: 0x48f7e8 - 0x48f808
void sub_0048F7E8_0x48f7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048F7E8_0x48f7e8");
#endif

    switch (ctx->pc) {
        case 0x48f7f8u: goto label_48f7f8;
        default: break;
    }

    ctx->pc = 0x48f7e8u;

    // 0x48f7e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48f7e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x48f7ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48f7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48f7f0: 0xc13e7c2  jal         func_4F9F08
    ctx->pc = 0x48F7F0u;
    SET_GPR_U32(ctx, 31, 0x48F7F8u);
    ctx->pc = 0x4F9F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9F08u, 0x48F7F0u, 0x48F7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F7F8u;
label_48f7f8:
    // 0x48f7f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48f7f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48f7fc: 0x813e7d0  j           func_4F9F40
    ctx->pc = 0x48F7FCu;
    ctx->pc = 0x48F800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48F7FCu;
    // 0x48f800: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9F40u, 0x48F7FCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x48F804u;
    // 0x48f804: 0x0  nop
    ctx->pc = 0x48f804u;
    // NOP
    ctx->pc = 0x48f808u;
}
