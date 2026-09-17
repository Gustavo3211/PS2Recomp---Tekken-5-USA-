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

// Function: sub_00511558
// Address: 0x511558 - 0x511598
void sub_00511558_0x511558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00511558_0x511558");
#endif

    ctx->pc = 0x511558u;

    // 0x511558: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x511558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x51155c: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x51155cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x511560: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x511560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x511564: 0x2463c6d0  addiu       $v1, $v1, -0x3930
    ctx->pc = 0x511564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952656));
    // 0x511568: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x511568u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x51156c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x51156cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x511570: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x511570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x511574: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x511574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x511578: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x511578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x51157c: 0x84460002  lh          $a2, 0x2($v0)
    ctx->pc = 0x51157cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x511580: 0x24480004  addiu       $t0, $v0, 0x4
    ctx->pc = 0x511580u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x511584: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x511584u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x511588: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x511588u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x51158c: 0x8144526  j           func_511498
    ctx->pc = 0x51158Cu;
    ctx->pc = 0x511590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x51158Cu;
    // 0x511590: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x511498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x511498u, 0x51158Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x511594u;
    // 0x511594: 0x0  nop
    ctx->pc = 0x511594u;
    // NOP
    ctx->pc = 0x511598u;
}
