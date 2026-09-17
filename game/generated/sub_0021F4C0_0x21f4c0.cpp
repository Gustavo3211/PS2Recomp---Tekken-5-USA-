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

// Function: sub_0021F4C0
// Address: 0x21f4c0 - 0x21f4f0
void sub_0021F4C0_0x21f4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021F4C0_0x21f4c0");
#endif

    switch (ctx->pc) {
        case 0x21f4d0u: goto label_21f4d0;
        case 0x21f4e4u: goto label_21f4e4;
        default: break;
    }

    ctx->pc = 0x21f4c0u;

    // 0x21f4c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21f4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21f4c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21f4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21f4c8: 0xc087cbe  jal         func_21F2F8
    ctx->pc = 0x21F4C8u;
    SET_GPR_U32(ctx, 31, 0x21F4D0u);
    ctx->pc = 0x21F4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F4C8u;
    // 0x21f4cc: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F2F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F2F8u, 0x21F4C8u, 0x21F4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F4D0u;
label_21f4d0:
    // 0x21f4d0: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x21f4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x21f4d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x21f4d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f4d8: 0x34842c01  ori         $a0, $a0, 0x2C01
    ctx->pc = 0x21f4d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)11265);
    // 0x21f4dc: 0xc0c4cfe  jal         func_3133F8
    ctx->pc = 0x21F4DCu;
    SET_GPR_U32(ctx, 31, 0x21F4E4u);
    ctx->pc = 0x21F4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F4DCu;
    // 0x21f4e0: 0xaf82c96c  sw          $v0, -0x3694($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953324), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3133F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3133F8u, 0x21F4DCu, 0x21F4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F4E4u;
label_21f4e4:
    // 0x21f4e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21f4e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f4e8: 0x3e00008  jr          $ra
    ctx->pc = 0x21F4E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F4E8u;
        // 0x21f4ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F4E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F4F0u;
}
