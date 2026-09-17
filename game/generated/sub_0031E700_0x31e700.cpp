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

// Function: sub_0031E700
// Address: 0x31e700 - 0x31e738
void sub_0031E700_0x31e700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031E700_0x31e700");
#endif

    switch (ctx->pc) {
        case 0x31e700u: goto label_31e700;
        case 0x31e704u: goto label_31e704;
        case 0x31e708u: goto label_31e708;
        case 0x31e70cu: goto label_31e70c;
        case 0x31e710u: goto label_31e710;
        case 0x31e714u: goto label_31e714;
        case 0x31e718u: goto label_31e718;
        case 0x31e71cu: goto label_31e71c;
        case 0x31e720u: goto label_31e720;
        case 0x31e724u: goto label_31e724;
        case 0x31e728u: goto label_31e728;
        case 0x31e72cu: goto label_31e72c;
        case 0x31e730u: goto label_31e730;
        case 0x31e734u: goto label_31e734;
        default: break;
    }

    ctx->pc = 0x31e700u;

label_31e700:
    // 0x31e700: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31e700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_31e704:
    // 0x31e704: 0x2486000c  addiu       $a2, $a0, 0xC
    ctx->pc = 0x31e704u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_31e708:
    // 0x31e708: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31e708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_31e70c:
    // 0x31e70c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x31e70cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31e710:
    // 0x31e710: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x31e710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_31e714:
    // 0x31e714: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x31e714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_31e718:
    // 0x31e718: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x31e718u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_31e71c:
    // 0x31e71c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x31e71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_31e720:
    // 0x31e720: 0x60f809  jalr        $v1
label_31e724:
    if (ctx->pc == 0x31E724u) {
        ctx->pc = 0x31E724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E720u;
        // 0x31e724: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E728u;
        goto label_31e728;
    }
    ctx->pc = 0x31E720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x31E728u);
        ctx->pc = 0x31E724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E720u;
        // 0x31e724: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E720u, 0x31E728u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31E728u;
label_31e728:
    // 0x31e728: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31e728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31e72c:
    // 0x31e72c: 0x3e00008  jr          $ra
label_31e730:
    if (ctx->pc == 0x31E730u) {
        ctx->pc = 0x31E730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E72Cu;
        // 0x31e730: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E734u;
        goto label_31e734;
    }
    ctx->pc = 0x31E72Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E72Cu;
        // 0x31e730: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E72Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E734u;
label_31e734:
    // 0x31e734: 0x0  nop
    ctx->pc = 0x31e734u;
    // NOP
    ctx->pc = 0x31e738u;
}
