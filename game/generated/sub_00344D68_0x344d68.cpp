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

// Function: sub_00344D68
// Address: 0x344d68 - 0x344d80
void sub_00344D68_0x344d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00344D68_0x344d68");
#endif

    ctx->pc = 0x344d68u;

    // 0x344d68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x344d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344d6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x344d6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x344d70: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x344d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x344d74: 0x80d13e2  j           func_344F88
    ctx->pc = 0x344D74u;
    ctx->pc = 0x344D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344D74u;
    // 0x344d78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344F88u, 0x344D74u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x344D7Cu;
    // 0x344d7c: 0x0  nop
    ctx->pc = 0x344d7cu;
    // NOP
    ctx->pc = 0x344d80u;
}
