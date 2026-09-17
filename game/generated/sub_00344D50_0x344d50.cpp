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

// Function: sub_00344D50
// Address: 0x344d50 - 0x344d68
void sub_00344D50_0x344d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00344D50_0x344d50");
#endif

    ctx->pc = 0x344d50u;

    // 0x344d50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x344d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344d54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x344d54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x344d58: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x344d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x344d5c: 0x80d13ca  j           func_344F28
    ctx->pc = 0x344D5Cu;
    ctx->pc = 0x344D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344D5Cu;
    // 0x344d60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344F28u, 0x344D5Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x344D64u;
    // 0x344d64: 0x0  nop
    ctx->pc = 0x344d64u;
    // NOP
    ctx->pc = 0x344d68u;
}
