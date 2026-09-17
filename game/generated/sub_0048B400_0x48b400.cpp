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

// Function: sub_0048B400
// Address: 0x48b400 - 0x48b410
void sub_0048B400_0x48b400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048B400_0x48b400");
#endif

    ctx->pc = 0x48b400u;

    // 0x48b400: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x48b400u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48b404: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x48b404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x48b408: 0x8124530  j           func_4914C0
    ctx->pc = 0x48B408u;
    ctx->pc = 0x48B40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48B408u;
    // 0x48b40c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4914C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4914C0u, 0x48B408u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x48B410u;
}
