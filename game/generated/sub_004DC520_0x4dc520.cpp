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

// Function: sub_004DC520
// Address: 0x4dc520 - 0x4dc530
void sub_004DC520_0x4dc520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DC520_0x4dc520");
#endif

    ctx->pc = 0x4dc520u;

    // 0x4dc520: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4dc520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4dc524: 0x8137186  j           func_4DC618
    ctx->pc = 0x4DC524u;
    ctx->pc = 0x4DC528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DC524u;
    // 0x4dc528: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DC618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DC618u, 0x4DC524u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4DC52Cu;
    // 0x4dc52c: 0x0  nop
    ctx->pc = 0x4dc52cu;
    // NOP
    ctx->pc = 0x4dc530u;
}
