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

// Function: sub_00344D80
// Address: 0x344d80 - 0x344d98
void sub_00344D80_0x344d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00344D80_0x344d80");
#endif

    ctx->pc = 0x344d80u;

    // 0x344d80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x344d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344d84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x344d84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x344d88: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x344d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x344d8c: 0x80d13f6  j           func_344FD8
    ctx->pc = 0x344D8Cu;
    ctx->pc = 0x344D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344D8Cu;
    // 0x344d90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344FD8u, 0x344D8Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x344D94u;
    // 0x344d94: 0x0  nop
    ctx->pc = 0x344d94u;
    // NOP
    ctx->pc = 0x344d98u;
}
