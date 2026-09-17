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

// Function: sub_004DDCC8
// Address: 0x4ddcc8 - 0x4ddcd8
void sub_004DDCC8_0x4ddcc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DDCC8_0x4ddcc8");
#endif

    ctx->pc = 0x4ddcc8u;

    // 0x4ddcc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ddcc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ddccc: 0x8137770  j           func_4DDDC0
    ctx->pc = 0x4DDCCCu;
    ctx->pc = 0x4DDCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DDCCCu;
    // 0x4ddcd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DDDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DDDC0u, 0x4DDCCCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4DDCD4u;
    // 0x4ddcd4: 0x0  nop
    ctx->pc = 0x4ddcd4u;
    // NOP
    ctx->pc = 0x4ddcd8u;
}
