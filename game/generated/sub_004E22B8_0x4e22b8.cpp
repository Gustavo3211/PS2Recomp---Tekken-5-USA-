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

// Function: sub_004E22B8
// Address: 0x4e22b8 - 0x4e22d8
void sub_004E22B8_0x4e22b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E22B8_0x4e22b8");
#endif

    ctx->pc = 0x4e22b8u;

    // 0x4e22b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4e22b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e22bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e22bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e22c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e22c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e22c4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e22c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e22c8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4e22c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e22cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4e22ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e22d0: 0x81388f2  j           func_4E23C8
    ctx->pc = 0x4E22D0u;
    ctx->pc = 0x4E22D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E22D0u;
    // 0x4e22d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E23C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E23C8u, 0x4E22D0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4E22D8u;
}
