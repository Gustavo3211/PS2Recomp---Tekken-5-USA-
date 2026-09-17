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

// Function: sub_00359198
// Address: 0x359198 - 0x3591f8
void sub_00359198_0x359198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00359198_0x359198");
#endif

    ctx->pc = 0x359198u;

    // 0x359198: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x359198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35919c: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x35919cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x3591a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3591a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3591a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3591a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3591a8: 0x80d8dc0  j           func_363700
    ctx->pc = 0x3591A8u;
    ctx->pc = 0x3591ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3591A8u;
    // 0x3591ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363700u, 0x3591A8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3591B0u;
    // 0x3591b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3591b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3591b4: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x3591b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x3591b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3591b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3591bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3591bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3591c0: 0x80d8dca  j           func_363728
    ctx->pc = 0x3591C0u;
    ctx->pc = 0x3591C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3591C0u;
    // 0x3591c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363728u, 0x3591C0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3591C8u;
    // 0x3591c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3591c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3591cc: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x3591ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x3591d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3591d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3591d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3591d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3591d8: 0x80d8dd4  j           func_363750
    ctx->pc = 0x3591D8u;
    ctx->pc = 0x3591DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3591D8u;
    // 0x3591dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363750u, 0x3591D8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3591E0u;
    // 0x3591e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3591e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3591e4: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x3591e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x3591e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3591e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3591ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3591ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3591f0: 0x80d8dde  j           func_363778
    ctx->pc = 0x3591F0u;
    ctx->pc = 0x3591F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3591F0u;
    // 0x3591f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363778u, 0x3591F0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3591F8u;
}
