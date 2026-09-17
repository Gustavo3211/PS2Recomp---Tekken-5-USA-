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

// Function: sub_002086C8
// Address: 0x2086c8 - 0x208738
void sub_002086C8_0x2086c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002086C8_0x2086c8");
#endif

    switch (ctx->pc) {
        case 0x2086e0u: goto label_2086e0;
        case 0x2086f4u: goto label_2086f4;
        case 0x208708u: goto label_208708;
        case 0x208728u: goto label_208728;
        default: break;
    }

    ctx->pc = 0x2086c8u;

    // 0x2086c8: 0x8f82c8c8  lw          $v0, -0x3738($gp)
    ctx->pc = 0x2086c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953160)));
    // 0x2086cc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2086ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2086d0: 0x18400015  blez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2086D0u;
    {
        const bool branch_taken_0x2086d0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2086D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2086D0u;
        // 0x2086d4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2086d0) {
            ctx->pc = 0x208728u;
            goto label_208728;
        }
    }
    ctx->pc = 0x2086D8u;
    // 0x2086d8: 0xc08215c  jal         func_208570
    ctx->pc = 0x2086D8u;
    SET_GPR_U32(ctx, 31, 0x2086E0u);
    ctx->pc = 0x208570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208570u, 0x2086D8u, 0x2086E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2086E0u;
label_2086e0:
    // 0x2086e0: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x2086e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2086e4: 0x10430011  beq         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2086E4u;
    {
        const bool branch_taken_0x2086e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2086E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2086E4u;
        // 0x2086e8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2086e4) {
            ctx->pc = 0x20872Cu;
            goto label_20872c;
        }
    }
    ctx->pc = 0x2086ECu;
    // 0x2086ec: 0xc08215c  jal         func_208570
    ctx->pc = 0x2086ECu;
    SET_GPR_U32(ctx, 31, 0x2086F4u);
    ctx->pc = 0x208570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208570u, 0x2086ECu, 0x2086F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2086F4u;
label_2086f4:
    // 0x2086f4: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x2086f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2086f8: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2086F8u;
    {
        const bool branch_taken_0x2086f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2086FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2086F8u;
        // 0x2086fc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2086f8) {
            ctx->pc = 0x20872Cu;
            goto label_20872c;
        }
    }
    ctx->pc = 0x208700u;
    // 0x208700: 0xc08215c  jal         func_208570
    ctx->pc = 0x208700u;
    SET_GPR_U32(ctx, 31, 0x208708u);
    ctx->pc = 0x208570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208570u, 0x208700u, 0x208708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208708u;
label_208708:
    // 0x208708: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x208708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x20870c: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x20870Cu;
    {
        const bool branch_taken_0x20870c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x208710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20870Cu;
        // 0x208710: 0x8f82c8c8  lw          $v0, -0x3738($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20870c) {
            ctx->pc = 0x208728u;
            goto label_208728;
        }
    }
    ctx->pc = 0x208714u;
    // 0x208714: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x208714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x208718: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x208718u;
    {
        const bool branch_taken_0x208718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20871Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208718u;
        // 0x20871c: 0xaf82c8c8  sw          $v0, -0x3738($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294953160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208718) {
            ctx->pc = 0x208728u;
            goto label_208728;
        }
    }
    ctx->pc = 0x208720u;
    // 0x208720: 0xc092934  jal         func_24A4D0
    ctx->pc = 0x208720u;
    SET_GPR_U32(ctx, 31, 0x208728u);
    ctx->pc = 0x208724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208720u;
    // 0x208724: 0x2404002f  addiu       $a0, $zero, 0x2F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A4D0u, 0x208720u, 0x208728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208728u;
label_208728:
    // 0x208728: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x208728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20872c:
    // 0x20872c: 0x3e00008  jr          $ra
    ctx->pc = 0x20872Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20872Cu;
        // 0x208730: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20872Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208734u;
    // 0x208734: 0x0  nop
    ctx->pc = 0x208734u;
    // NOP
    ctx->pc = 0x208738u;
}
