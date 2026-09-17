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

// Function: sub_0021E208
// Address: 0x21e208 - 0x21e228
void sub_0021E208_0x21e208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021E208_0x21e208");
#endif

    ctx->pc = 0x21e208u;

    // 0x21e208: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x21e208u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x21e20c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21e20cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e210: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x21e210u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e214: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x21e214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x21e218: 0x24846d80  addiu       $a0, $a0, 0x6D80
    ctx->pc = 0x21e218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28032));
    // 0x21e21c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x21e21cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21e220: 0x8087726  j           func_21DC98
    ctx->pc = 0x21E220u;
    ctx->pc = 0x21E224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E220u;
    // 0x21e224: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21DC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21DC98u, 0x21E220u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x21E228u;
}
