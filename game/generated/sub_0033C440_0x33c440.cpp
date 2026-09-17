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

// Function: sub_0033C440
// Address: 0x33c440 - 0x33c458
void sub_0033C440_0x33c440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033C440_0x33c440");
#endif

    ctx->pc = 0x33c440u;

    // 0x33c440: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33c440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33c444: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x33c444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x33c448: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33c448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33c44c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33c44cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33c450: 0x80dd840  j           func_376100
    ctx->pc = 0x33C450u;
    ctx->pc = 0x33C454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C450u;
    // 0x33c454: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x376100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x376100u, 0x33C450u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33C458u;
}
