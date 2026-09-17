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

// Function: sub_004CE518
// Address: 0x4ce518 - 0x4ce530
void sub_004CE518_0x4ce518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CE518_0x4ce518");
#endif

    ctx->pc = 0x4ce518u;

    // 0x4ce518: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ce518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ce51c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ce51cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ce520: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4ce520u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ce524: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4ce524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ce528: 0x8133b0c  j           func_4CEC30
    ctx->pc = 0x4CE528u;
    ctx->pc = 0x4CE52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CE528u;
    // 0x4ce52c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CEC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CEC30u, 0x4CE528u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4CE530u;
}
