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

// Function: sub_004CA3D0
// Address: 0x4ca3d0 - 0x4ca410
void sub_004CA3D0_0x4ca3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CA3D0_0x4ca3d0");
#endif

    ctx->pc = 0x4ca3d0u;

    // 0x4ca3d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ca3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ca3d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ca3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ca3d8: 0x84830168  lh          $v1, 0x168($a0)
    ctx->pc = 0x4ca3d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 360)));
    // 0x4ca3dc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4CA3DCu;
    {
        const bool branch_taken_0x4ca3dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CA3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CA3DCu;
        // 0x4ca3e0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ca3dc) {
            ctx->pc = 0x4CA3F8u;
            goto label_4ca3f8;
        }
    }
    ctx->pc = 0x4CA3E4u;
    // 0x4ca3e4: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4CA3E4u;
    {
        const bool branch_taken_0x4ca3e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4CA3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CA3E4u;
        // 0x4ca3e8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ca3e4) {
            ctx->pc = 0x4CA408u;
            goto label_4ca408;
        }
    }
    ctx->pc = 0x4CA3ECu;
    // 0x4ca3ec: 0x3e00008  jr          $ra
    ctx->pc = 0x4CA3ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CA3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CA3ECu;
        // 0x4ca3f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CA3ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CA3F4u;
    // 0x4ca3f4: 0x0  nop
    ctx->pc = 0x4ca3f4u;
    // NOP
label_4ca3f8:
    // 0x4ca3f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ca3f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ca3fc: 0x8132a70  j           func_4CA9C0
    ctx->pc = 0x4CA3FCu;
    ctx->pc = 0x4CA400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CA3FCu;
    // 0x4ca400: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CA9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CA9C0u, 0x4CA3FCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4CA404u;
    // 0x4ca404: 0x0  nop
    ctx->pc = 0x4ca404u;
    // NOP
label_4ca408:
    // 0x4ca408: 0x8132b24  j           func_4CAC90
    ctx->pc = 0x4CA408u;
    ctx->pc = 0x4CA40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CA408u;
    // 0x4ca40c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CAC90u, 0x4CA408u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4CA410u;
}
