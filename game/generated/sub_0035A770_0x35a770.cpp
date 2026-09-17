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

// Function: sub_0035A770
// Address: 0x35a770 - 0x35a788
void sub_0035A770_0x35a770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035A770_0x35a770");
#endif

    ctx->pc = 0x35a770u;

    // 0x35a770: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35a770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35a774: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x35a774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35a778: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35a778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35a77c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35a77cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a780: 0x80d67ba  j           func_359EE8
    ctx->pc = 0x35A780u;
    ctx->pc = 0x35A784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A780u;
    // 0x35a784: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359EE8u, 0x35A780u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35A788u;
}
