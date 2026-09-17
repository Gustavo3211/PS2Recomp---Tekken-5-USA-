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

// Function: sub_003490B0
// Address: 0x3490b0 - 0x3490d8
void sub_003490B0_0x3490b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003490B0_0x3490b0");
#endif

    ctx->pc = 0x3490b0u;

    // 0x3490b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3490b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3490b4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3490b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3490b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3490b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3490bc: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x3490bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3490c0: 0x2447001e  addiu       $a3, $v0, 0x1E
    ctx->pc = 0x3490c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
    // 0x3490c4: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x3490c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x3490c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3490c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3490cc: 0x80d0136  j           func_3404D8
    ctx->pc = 0x3490CCu;
    ctx->pc = 0x3490D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3490CCu;
    // 0x3490d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3404D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3404D8u, 0x3490CCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3490D4u;
    // 0x3490d4: 0x0  nop
    ctx->pc = 0x3490d4u;
    // NOP
    ctx->pc = 0x3490d8u;
}
