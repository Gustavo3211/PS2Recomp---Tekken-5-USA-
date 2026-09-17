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

// Function: sub_004E75A0
// Address: 0x4e75a0 - 0x4e75c8
void sub_004E75A0_0x4e75a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E75A0_0x4e75a0");
#endif

    ctx->pc = 0x4e75a0u;

    // 0x4e75a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4e75a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e75a4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4e75a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e75a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e75a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e75ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e75acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e75b0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e75b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e75b4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4e75b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e75b8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x4e75b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4e75bc: 0x8139e32  j           func_4E78C8
    ctx->pc = 0x4E75BCu;
    ctx->pc = 0x4E75C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E75BCu;
    // 0x4e75c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E78C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E78C8u, 0x4E75BCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4E75C4u;
    // 0x4e75c4: 0x0  nop
    ctx->pc = 0x4e75c4u;
    // NOP
    ctx->pc = 0x4e75c8u;
}
