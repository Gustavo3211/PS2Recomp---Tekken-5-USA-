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

// Function: sub_004B4180
// Address: 0x4b4180 - 0x4b41a0
void sub_004B4180_0x4b4180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B4180_0x4b4180");
#endif

    ctx->pc = 0x4b4180u;

    // 0x4b4180: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4b4180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4184: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4b4184u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4b4188: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b4188u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b418c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4b418cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b4190: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4b4190u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b4194: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4b4194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b4198: 0x812d454  j           func_4B5150
    ctx->pc = 0x4B4198u;
    ctx->pc = 0x4B419Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B4198u;
    // 0x4b419c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B5150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B5150u, 0x4B4198u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4B41A0u;
}
