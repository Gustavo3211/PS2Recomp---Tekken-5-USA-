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

// Function: sub_002D9C80
// Address: 0x2d9c80 - 0x2d9cb8
void sub_002D9C80_0x2d9c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9C80_0x2d9c80");
#endif

    switch (ctx->pc) {
        case 0x2d9ca0u: goto label_2d9ca0;
        default: break;
    }

    ctx->pc = 0x2d9c80u;

    // 0x2d9c80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d9c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d9c84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d9c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d9c88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d9c88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9c8c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2d9c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2d9c90: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2d9c90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2d9c94: 0xa6000004  sh          $zero, 0x4($s0)
    ctx->pc = 0x2d9c94u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d9c98: 0xc0b6b24  jal         func_2DAC90
    ctx->pc = 0x2D9C98u;
    SET_GPR_U32(ctx, 31, 0x2D9CA0u);
    ctx->pc = 0x2D9C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9C98u;
    // 0x2d9c9c: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAC90u, 0x2D9C98u, 0x2D9CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9CA0u;
label_2d9ca0:
    // 0x2d9ca0: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2d9ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x2d9ca4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2d9ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d9ca8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d9ca8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d9cac: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9CACu;
        // 0x2d9cb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9CACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9CB4u;
    // 0x2d9cb4: 0x0  nop
    ctx->pc = 0x2d9cb4u;
    // NOP
    ctx->pc = 0x2d9cb8u;
}
