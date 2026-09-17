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

// Function: sub_001F95B0
// Address: 0x1f95b0 - 0x1f95f0
void sub_001F95B0_0x1f95b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F95B0_0x1f95b0");
#endif

    switch (ctx->pc) {
        case 0x1f95c4u: goto label_1f95c4;
        case 0x1f95d8u: goto label_1f95d8;
        case 0x1f95e0u: goto label_1f95e0;
        default: break;
    }

    ctx->pc = 0x1f95b0u;

    // 0x1f95b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f95b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f95b4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F95B4u;
    {
        const bool branch_taken_0x1f95b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F95B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F95B4u;
        // 0x1f95b8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f95b4) {
            ctx->pc = 0x1F95D0u;
            goto label_1f95d0;
        }
    }
    ctx->pc = 0x1F95BCu;
    // 0x1f95bc: 0xc092940  jal         func_24A500
    ctx->pc = 0x1F95BCu;
    SET_GPR_U32(ctx, 31, 0x1F95C4u);
    ctx->pc = 0x1F95C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F95BCu;
    // 0x1f95c0: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x1F95BCu, 0x1F95C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F95C4u;
label_1f95c4:
    // 0x1f95c4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F95C4u;
    {
        const bool branch_taken_0x1f95c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f95c4) {
            ctx->pc = 0x1F95D8u;
            goto label_1f95d8;
        }
    }
    ctx->pc = 0x1F95CCu;
    // 0x1f95cc: 0x0  nop
    ctx->pc = 0x1f95ccu;
    // NOP
label_1f95d0:
    // 0x1f95d0: 0xc092940  jal         func_24A500
    ctx->pc = 0x1F95D0u;
    SET_GPR_U32(ctx, 31, 0x1F95D8u);
    ctx->pc = 0x1F95D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F95D0u;
    // 0x1f95d4: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x1F95D0u, 0x1F95D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F95D8u;
label_1f95d8:
    // 0x1f95d8: 0xc07e252  jal         func_1F8948
    ctx->pc = 0x1F95D8u;
    SET_GPR_U32(ctx, 31, 0x1F95E0u);
    ctx->pc = 0x1F95DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F95D8u;
    // 0x1f95dc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8948u, 0x1F95D8u, 0x1F95E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F95E0u;
label_1f95e0:
    // 0x1f95e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f95e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f95e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F95E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F95E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F95E4u;
        // 0x1f95e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F95E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F95ECu;
    // 0x1f95ec: 0x0  nop
    ctx->pc = 0x1f95ecu;
    // NOP
    ctx->pc = 0x1f95f0u;
}
