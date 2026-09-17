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

// Function: sub_002D0960
// Address: 0x2d0960 - 0x2d0998
void sub_002D0960_0x2d0960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0960_0x2d0960");
#endif

    switch (ctx->pc) {
        case 0x2d0984u: goto label_2d0984;
        default: break;
    }

    ctx->pc = 0x2d0960u;

    // 0x2d0960: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x2d0960u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x2d0964: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d0964u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d0968: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d0968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d096c: 0x24848e00  addiu       $a0, $a0, -0x7200
    ctx->pc = 0x2d096cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938112));
    // 0x2d0970: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x2d0970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2d0974: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d0974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d0978: 0xaf80cb24  sw          $zero, -0x34DC($gp)
    ctx->pc = 0x2d0978u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953764), GPR_U32(ctx, 0));
    // 0x2d097c: 0xc04a151  jal         func_128544
    ctx->pc = 0x2D097Cu;
    SET_GPR_U32(ctx, 31, 0x2D0984u);
    ctx->pc = 0x2D0980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D097Cu;
    // 0x2d0980: 0xaf80cb28  sw          $zero, -0x34D8($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953768), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x2D097Cu, 0x2D0984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0984u;
label_2d0984:
    // 0x2d0984: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d0984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0988: 0xaf80cb2c  sw          $zero, -0x34D4($gp)
    ctx->pc = 0x2d0988u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953772), GPR_U32(ctx, 0));
    // 0x2d098c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D098Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D098Cu;
        // 0x2d0990: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D098Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0994u;
    // 0x2d0994: 0x0  nop
    ctx->pc = 0x2d0994u;
    // NOP
    ctx->pc = 0x2d0998u;
}
