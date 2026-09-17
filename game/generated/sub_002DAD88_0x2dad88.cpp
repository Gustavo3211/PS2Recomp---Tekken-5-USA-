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

// Function: sub_002DAD88
// Address: 0x2dad88 - 0x2dadd8
void sub_002DAD88_0x2dad88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DAD88_0x2dad88");
#endif

    switch (ctx->pc) {
        case 0x2dad9cu: goto label_2dad9c;
        default: break;
    }

    ctx->pc = 0x2dad88u;

    // 0x2dad88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dad88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dad8c: 0x2784cb58  addiu       $a0, $gp, -0x34A8
    ctx->pc = 0x2dad8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953816));
    // 0x2dad90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dad90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dad94: 0xc0b6b8a  jal         func_2DAE28
    ctx->pc = 0x2DAD94u;
    SET_GPR_U32(ctx, 31, 0x2DAD9Cu);
    ctx->pc = 0x2DAE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAE28u, 0x2DAD94u, 0x2DAD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAD9Cu;
label_2dad9c:
    // 0x2dad9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dad9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dada0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DADA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DADA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DADA0u;
        // 0x2dada4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DADA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DADA8u;
    // 0x2dada8: 0x2784cb58  addiu       $a0, $gp, -0x34A8
    ctx->pc = 0x2dada8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953816));
    // 0x2dadac: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x2dadacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2dadb0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2dadb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2dadb4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2dadb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2dadb8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DADB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DADBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DADB8u;
        // 0x2dadbc: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DADB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DADC0u;
    // 0x2dadc0: 0x2783cb58  addiu       $v1, $gp, -0x34A8
    ctx->pc = 0x2dadc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953816));
    // 0x2dadc4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2dadc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2dadc8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2dadc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2dadcc: 0x3e00008  jr          $ra
    ctx->pc = 0x2DADCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DADD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DADCCu;
        // 0x2dadd0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DADCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DADD4u;
    // 0x2dadd4: 0x0  nop
    ctx->pc = 0x2dadd4u;
    // NOP
    ctx->pc = 0x2dadd8u;
}
