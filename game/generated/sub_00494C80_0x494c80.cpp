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

// Function: sub_00494C80
// Address: 0x494c80 - 0x494c90
void sub_00494C80_0x494c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00494C80_0x494c80");
#endif

    ctx->pc = 0x494c80u;

    // 0x494c80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x494c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x494c84: 0x812515e  j           func_494578
    ctx->pc = 0x494C84u;
    ctx->pc = 0x494C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x494C84u;
    // 0x494c88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x494578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x494578u, 0x494C84u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x494C8Cu;
    // 0x494c8c: 0x0  nop
    ctx->pc = 0x494c8cu;
    // NOP
    ctx->pc = 0x494c90u;
}
