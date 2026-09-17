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

// Function: sub_004C5938
// Address: 0x4c5938 - 0x4c5948
void sub_004C5938_0x4c5938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C5938_0x4c5938");
#endif

    ctx->pc = 0x4c5938u;

    // 0x4c5938: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4c5938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c593c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x4c593cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c5940: 0x81317f2  j           func_4C5FC8
    ctx->pc = 0x4C5940u;
    ctx->pc = 0x4C5944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C5940u;
    // 0x4c5944: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C5FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C5FC8u, 0x4C5940u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4C5948u;
}
