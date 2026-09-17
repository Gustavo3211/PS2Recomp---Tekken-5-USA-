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

// Function: sub_0050EFA8
// Address: 0x50efa8 - 0x50efc8
void sub_0050EFA8_0x50efa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050EFA8_0x50efa8");
#endif

    ctx->pc = 0x50efa8u;

    // 0x50efa8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x50efa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50efac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x50efacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x50efb0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x50efb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x50efb4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x50efb4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x50efb8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x50efb8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x50efbc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x50efbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x50efc0: 0x8142aec  j           func_50ABB0
    ctx->pc = 0x50EFC0u;
    ctx->pc = 0x50EFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50EFC0u;
    // 0x50efc4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x50ABB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50ABB0u, 0x50EFC0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x50EFC8u;
}
