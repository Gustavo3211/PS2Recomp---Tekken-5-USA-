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

// Function: sub_004E75F0
// Address: 0x4e75f0 - 0x4e7618
void sub_004E75F0_0x4e75f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E75F0_0x4e75f0");
#endif

    ctx->pc = 0x4e75f0u;

    // 0x4e75f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4e75f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e75f4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4e75f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e75f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e75f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e75fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e75fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e7600: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e7600u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e7604: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4e7604u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e7608: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x4e7608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4e760c: 0x8139f6a  j           func_4E7DA8
    ctx->pc = 0x4E760Cu;
    ctx->pc = 0x4E7610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E760Cu;
    // 0x4e7610: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E7DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E7DA8u, 0x4E760Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4E7614u;
    // 0x4e7614: 0x0  nop
    ctx->pc = 0x4e7614u;
    // NOP
    ctx->pc = 0x4e7618u;
}
