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

// Function: sub_004E22F8
// Address: 0x4e22f8 - 0x4e2318
void sub_004E22F8_0x4e22f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E22F8_0x4e22f8");
#endif

    ctx->pc = 0x4e22f8u;

    // 0x4e22f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4e22f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e22fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e22fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e2300: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e2300u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e2304: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e2304u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e2308: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4e2308u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e230c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4e230cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e2310: 0x8138994  j           func_4E2650
    ctx->pc = 0x4E2310u;
    ctx->pc = 0x4E2314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E2310u;
    // 0x4e2314: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E2650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E2650u, 0x4E2310u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4E2318u;
}
