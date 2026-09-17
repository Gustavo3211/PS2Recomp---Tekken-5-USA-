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

// Function: sub_0050AAA0
// Address: 0x50aaa0 - 0x50aab8
void sub_0050AAA0_0x50aaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050AAA0_0x50aaa0");
#endif

    ctx->pc = 0x50aaa0u;

    // 0x50aaa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x50aaa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x50aaa4: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x50aaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x50aaa8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x50aaa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x50aaac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x50aaacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50aab0: 0x8142688  j           func_509A20
    ctx->pc = 0x50AAB0u;
    ctx->pc = 0x50AAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50AAB0u;
    // 0x50aab4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x509A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x509A20u, 0x50AAB0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x50AAB8u;
}
