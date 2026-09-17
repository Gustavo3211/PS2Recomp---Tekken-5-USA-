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

// Function: sub_004E2298
// Address: 0x4e2298 - 0x4e22b8
void sub_004E2298_0x4e2298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E2298_0x4e2298");
#endif

    ctx->pc = 0x4e2298u;

    // 0x4e2298: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4e2298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e229c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e229cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e22a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e22a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e22a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e22a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e22a8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4e22a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e22ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4e22acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e22b0: 0x81388d4  j           func_4E2350
    ctx->pc = 0x4E22B0u;
    ctx->pc = 0x4E22B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E22B0u;
    // 0x4e22b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E2350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E2350u, 0x4E22B0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4E22B8u;
}
