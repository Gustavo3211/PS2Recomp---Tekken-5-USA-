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

// Function: sub_0033BFD0
// Address: 0x33bfd0 - 0x33bfe8
void sub_0033BFD0_0x33bfd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033BFD0_0x33bfd0");
#endif

    ctx->pc = 0x33bfd0u;

    // 0x33bfd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33bfd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33bfd4: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x33bfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x33bfd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33bfd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33bfdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33bfdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33bfe0: 0x80dd80a  j           func_376028
    ctx->pc = 0x33BFE0u;
    ctx->pc = 0x33BFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BFE0u;
    // 0x33bfe4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x376028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x376028u, 0x33BFE0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33BFE8u;
}
