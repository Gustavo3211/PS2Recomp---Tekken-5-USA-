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

// Function: sub_00499180
// Address: 0x499180 - 0x499190
void sub_00499180_0x499180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00499180_0x499180");
#endif

    ctx->pc = 0x499180u;

    // 0x499180: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x499180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x499184: 0x81260f0  j           func_4983C0
    ctx->pc = 0x499184u;
    ctx->pc = 0x499188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x499184u;
    // 0x499188: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4983C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4983C0u, 0x499184u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x49918Cu;
    // 0x49918c: 0x0  nop
    ctx->pc = 0x49918cu;
    // NOP
    ctx->pc = 0x499190u;
}
