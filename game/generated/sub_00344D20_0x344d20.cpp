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

// Function: sub_00344D20
// Address: 0x344d20 - 0x344d38
void sub_00344D20_0x344d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00344D20_0x344d20");
#endif

    ctx->pc = 0x344d20u;

    // 0x344d20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x344d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344d24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x344d24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x344d28: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x344d28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x344d2c: 0x80d1398  j           func_344E60
    ctx->pc = 0x344D2Cu;
    ctx->pc = 0x344D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344D2Cu;
    // 0x344d30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344E60u, 0x344D2Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x344D34u;
    // 0x344d34: 0x0  nop
    ctx->pc = 0x344d34u;
    // NOP
    ctx->pc = 0x344d38u;
}
