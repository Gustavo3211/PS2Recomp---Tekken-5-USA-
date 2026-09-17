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

// Function: sub_0021E1C8
// Address: 0x21e1c8 - 0x21e1e8
void sub_0021E1C8_0x21e1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021E1C8_0x21e1c8");
#endif

    ctx->pc = 0x21e1c8u;

    // 0x21e1c8: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x21e1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x21e1cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21e1ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e1d0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x21e1d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e1d4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x21e1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x21e1d8: 0x24846d60  addiu       $a0, $a0, 0x6D60
    ctx->pc = 0x21e1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28000));
    // 0x21e1dc: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x21e1dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21e1e0: 0x8087726  j           func_21DC98
    ctx->pc = 0x21E1E0u;
    ctx->pc = 0x21E1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E1E0u;
    // 0x21e1e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21DC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21DC98u, 0x21E1E0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x21E1E8u;
}
