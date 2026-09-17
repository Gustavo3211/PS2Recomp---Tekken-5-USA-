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

// Function: sub_00499190
// Address: 0x499190 - 0x4991a0
void sub_00499190_0x499190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00499190_0x499190");
#endif

    ctx->pc = 0x499190u;

    // 0x499190: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x499190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x499194: 0x8126108  j           func_498420
    ctx->pc = 0x499194u;
    ctx->pc = 0x499198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x499194u;
    // 0x499198: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498420u, 0x499194u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x49919Cu;
    // 0x49919c: 0x0  nop
    ctx->pc = 0x49919cu;
    // NOP
    ctx->pc = 0x4991a0u;
}
