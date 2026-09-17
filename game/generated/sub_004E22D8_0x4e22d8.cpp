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

// Function: sub_004E22D8
// Address: 0x4e22d8 - 0x4e22f8
void sub_004E22D8_0x4e22d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E22D8_0x4e22d8");
#endif

    ctx->pc = 0x4e22d8u;

    // 0x4e22d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4e22d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e22dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e22dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e22e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e22e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e22e4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e22e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e22e8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4e22e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e22ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4e22ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e22f0: 0x813897e  j           func_4E25F8
    ctx->pc = 0x4E22F0u;
    ctx->pc = 0x4E22F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E22F0u;
    // 0x4e22f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E25F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E25F8u, 0x4E22F0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4E22F8u;
}
