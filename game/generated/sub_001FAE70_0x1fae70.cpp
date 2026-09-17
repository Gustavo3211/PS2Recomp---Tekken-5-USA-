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

// Function: sub_001FAE70
// Address: 0x1fae70 - 0x1fae88
void sub_001FAE70_0x1fae70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FAE70_0x1fae70");
#endif

    ctx->pc = 0x1fae70u;

    // 0x1fae70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fae70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fae74: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1fae74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1fae78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fae78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fae7c: 0x809d3f8  j           func_274FE0
    ctx->pc = 0x1FAE7Cu;
    ctx->pc = 0x1FAE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAE7Cu;
    // 0x1fae80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274FE0u, 0x1FAE7Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1FAE84u;
    // 0x1fae84: 0x0  nop
    ctx->pc = 0x1fae84u;
    // NOP
    ctx->pc = 0x1fae88u;
}
