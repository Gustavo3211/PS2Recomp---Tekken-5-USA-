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

// Function: sub_002DAC48
// Address: 0x2dac48 - 0x2dac90
void sub_002DAC48_0x2dac48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DAC48_0x2dac48");
#endif

    switch (ctx->pc) {
        case 0x2dac70u: goto label_2dac70;
        default: break;
    }

    ctx->pc = 0x2dac48u;

    // 0x2dac48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dac48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dac4c: 0x24040045  addiu       $a0, $zero, 0x45
    ctx->pc = 0x2dac4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x2dac50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2dac50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2dac54: 0x3c100018  lui         $s0, 0x18
    ctx->pc = 0x2dac54u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)24 << 16));
    // 0x2dac58: 0x2610c780  addiu       $s0, $s0, -0x3880
    ctx->pc = 0x2dac58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294952832));
    // 0x2dac5c: 0x2405009e  addiu       $a1, $zero, 0x9E
    ctx->pc = 0x2dac5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
    // 0x2dac60: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2dac60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dac64: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2dac64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2dac68: 0xc089636  jal         func_2258D8
    ctx->pc = 0x2DAC68u;
    SET_GPR_U32(ctx, 31, 0x2DAC70u);
    ctx->pc = 0x2DAC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAC68u;
    // 0x2dac6c: 0x2406009e  addiu       $a2, $zero, 0x9E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2258D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2258D8u, 0x2DAC68u, 0x2DAC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAC70u;
label_2dac70:
    // 0x2dac70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dac70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dac74: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2dac74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2dac78: 0xaf82bbdc  sw          $v0, -0x4424($gp)
    ctx->pc = 0x2dac78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949852), GPR_U32(ctx, 2));
    // 0x2dac7c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2dac7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dac80: 0xaf90bbd0  sw          $s0, -0x4430($gp)
    ctx->pc = 0x2dac80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949840), GPR_U32(ctx, 16));
    // 0x2dac84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2dac84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dac88: 0x3e00008  jr          $ra
    ctx->pc = 0x2DAC88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DAC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAC88u;
        // 0x2dac8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DAC88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DAC90u;
}
