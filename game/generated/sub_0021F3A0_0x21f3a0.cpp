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

// Function: sub_0021F3A0
// Address: 0x21f3a0 - 0x21f3d0
void sub_0021F3A0_0x21f3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021F3A0_0x21f3a0");
#endif

    switch (ctx->pc) {
        case 0x21f3b0u: goto label_21f3b0;
        case 0x21f3c4u: goto label_21f3c4;
        default: break;
    }

    ctx->pc = 0x21f3a0u;

    // 0x21f3a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21f3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21f3a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21f3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21f3a8: 0xc087cbe  jal         func_21F2F8
    ctx->pc = 0x21F3A8u;
    SET_GPR_U32(ctx, 31, 0x21F3B0u);
    ctx->pc = 0x21F3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F3A8u;
    // 0x21f3ac: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F2F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F2F8u, 0x21F3A8u, 0x21F3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F3B0u;
label_21f3b0:
    // 0x21f3b0: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x21f3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x21f3b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x21f3b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f3b8: 0x34842c02  ori         $a0, $a0, 0x2C02
    ctx->pc = 0x21f3b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)11266);
    // 0x21f3bc: 0xc0c2364  jal         func_308D90
    ctx->pc = 0x21F3BCu;
    SET_GPR_U32(ctx, 31, 0x21F3C4u);
    ctx->pc = 0x21F3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F3BCu;
    // 0x21f3c0: 0xaf82c958  sw          $v0, -0x36A8($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953304), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308D90u, 0x21F3BCu, 0x21F3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F3C4u;
label_21f3c4:
    // 0x21f3c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21f3c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f3c8: 0x3e00008  jr          $ra
    ctx->pc = 0x21F3C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F3C8u;
        // 0x21f3cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F3C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F3D0u;
}
