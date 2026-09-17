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

// Function: sub_0032A460
// Address: 0x32a460 - 0x32a4c8
void sub_0032A460_0x32a460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032A460_0x32a460");
#endif

    switch (ctx->pc) {
        case 0x32a468u: goto label_32a468;
        case 0x32a470u: goto label_32a470;
        case 0x32a498u: goto label_32a498;
        case 0x32a4a0u: goto label_32a4a0;
        default: break;
    }

    ctx->pc = 0x32a460u;

    // 0x32a460: 0x3e00008  jr          $ra
    ctx->pc = 0x32A460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A460u;
        // 0x32a464: 0x24820010  addiu       $v0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A468u;
label_32a468:
    // 0x32a468: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x32a468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x32a46c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x32a46cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_32a470:
    // 0x32a470: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x32a470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32a474: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x32a474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x32a478: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x32a478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x32a47c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x32a47cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x32a480: 0x0  nop
    ctx->pc = 0x32a480u;
    // NOP
    // 0x32a484: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x32A484u;
    {
        const bool branch_taken_0x32a484 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32A488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A484u;
        // 0x32a488: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a484) {
            ctx->pc = 0x32A470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32a470;
        }
    }
    ctx->pc = 0x32A48Cu;
    // 0x32a48c: 0x3e00008  jr          $ra
    ctx->pc = 0x32A48Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A48Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A494u;
    // 0x32a494: 0x0  nop
    ctx->pc = 0x32a494u;
    // NOP
label_32a498:
    // 0x32a498: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x32a498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x32a49c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x32a49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_32a4a0:
    // 0x32a4a0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x32a4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32a4a4: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x32a4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x32a4a8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x32a4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x32a4ac: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x32a4acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x32a4b0: 0x0  nop
    ctx->pc = 0x32a4b0u;
    // NOP
    // 0x32a4b4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x32A4B4u;
    {
        const bool branch_taken_0x32a4b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32A4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A4B4u;
        // 0x32a4b8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a4b4) {
            ctx->pc = 0x32A4A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32a4a0;
        }
    }
    ctx->pc = 0x32A4BCu;
    // 0x32a4bc: 0x3e00008  jr          $ra
    ctx->pc = 0x32A4BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A4BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A4C4u;
    // 0x32a4c4: 0x0  nop
    ctx->pc = 0x32a4c4u;
    // NOP
    ctx->pc = 0x32a4c8u;
}
