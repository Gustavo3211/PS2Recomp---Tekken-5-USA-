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

// Function: sub_0048CB18
// Address: 0x48cb18 - 0x48cb28
void sub_0048CB18_0x48cb18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048CB18_0x48cb18");
#endif

    ctx->pc = 0x48cb18u;

    // 0x48cb18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48cb18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48cb1c: 0x8123264  j           func_48C990
    ctx->pc = 0x48CB1Cu;
    ctx->pc = 0x48CB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48CB1Cu;
    // 0x48cb20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48C990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C990u, 0x48CB1Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x48CB24u;
    // 0x48cb24: 0x0  nop
    ctx->pc = 0x48cb24u;
    // NOP
    ctx->pc = 0x48cb28u;
}
