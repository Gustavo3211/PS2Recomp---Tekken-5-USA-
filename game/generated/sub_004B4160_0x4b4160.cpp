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

// Function: sub_004B4160
// Address: 0x4b4160 - 0x4b4180
void sub_004B4160_0x4b4160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B4160_0x4b4160");
#endif

    ctx->pc = 0x4b4160u;

    // 0x4b4160: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4b4160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4164: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4b4164u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4b4168: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b4168u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b416c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4b416cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b4170: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4b4170u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b4174: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4b4174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b4178: 0x812d426  j           func_4B5098
    ctx->pc = 0x4B4178u;
    ctx->pc = 0x4B417Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B4178u;
    // 0x4b417c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B5098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B5098u, 0x4B4178u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4B4180u;
}
