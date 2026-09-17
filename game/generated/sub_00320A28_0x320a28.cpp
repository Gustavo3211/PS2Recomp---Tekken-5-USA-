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

// Function: sub_00320A28
// Address: 0x320a28 - 0x320a98
void sub_00320A28_0x320a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00320A28_0x320a28");
#endif

    switch (ctx->pc) {
        case 0x320a28u: goto label_320a28;
        case 0x320a2cu: goto label_320a2c;
        case 0x320a30u: goto label_320a30;
        case 0x320a34u: goto label_320a34;
        case 0x320a38u: goto label_320a38;
        case 0x320a3cu: goto label_320a3c;
        case 0x320a40u: goto label_320a40;
        case 0x320a44u: goto label_320a44;
        case 0x320a48u: goto label_320a48;
        case 0x320a4cu: goto label_320a4c;
        case 0x320a50u: goto label_320a50;
        case 0x320a54u: goto label_320a54;
        case 0x320a58u: goto label_320a58;
        case 0x320a5cu: goto label_320a5c;
        case 0x320a60u: goto label_320a60;
        case 0x320a64u: goto label_320a64;
        case 0x320a68u: goto label_320a68;
        case 0x320a6cu: goto label_320a6c;
        case 0x320a70u: goto label_320a70;
        case 0x320a74u: goto label_320a74;
        case 0x320a78u: goto label_320a78;
        case 0x320a7cu: goto label_320a7c;
        case 0x320a80u: goto label_320a80;
        case 0x320a84u: goto label_320a84;
        case 0x320a88u: goto label_320a88;
        case 0x320a8cu: goto label_320a8c;
        case 0x320a90u: goto label_320a90;
        case 0x320a94u: goto label_320a94;
        default: break;
    }

    ctx->pc = 0x320a28u;

label_320a28:
    // 0x320a28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x320a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_320a2c:
    // 0x320a2c: 0x3c060044  lui         $a2, 0x44
    ctx->pc = 0x320a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)68 << 16));
label_320a30:
    // 0x320a30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x320a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_320a34:
    // 0x320a34: 0x24c6d6c0  addiu       $a2, $a2, -0x2940
    ctx->pc = 0x320a34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956736));
label_320a38:
    // 0x320a38: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x320a38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_320a3c:
    // 0x320a3c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x320a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_320a40:
    // 0x320a40: 0x24630038  addiu       $v1, $v1, 0x38
    ctx->pc = 0x320a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
label_320a44:
    // 0x320a44: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x320a44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_320a48:
    // 0x320a48: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x320a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_320a4c:
    // 0x320a4c: 0x40f809  jalr        $v0
label_320a50:
    if (ctx->pc == 0x320A50u) {
        ctx->pc = 0x320A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320A4Cu;
        // 0x320a50: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320A54u;
        goto label_320a54;
    }
    ctx->pc = 0x320A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x320A54u);
        ctx->pc = 0x320A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320A4Cu;
        // 0x320a50: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320A4Cu, 0x320A54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x320A54u;
label_320a54:
    // 0x320a54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x320a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_320a58:
    // 0x320a58: 0x3e00008  jr          $ra
label_320a5c:
    if (ctx->pc == 0x320A5Cu) {
        ctx->pc = 0x320A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320A58u;
        // 0x320a5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320A60u;
        goto label_320a60;
    }
    ctx->pc = 0x320A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320A58u;
        // 0x320a5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320A58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320A60u;
label_320a60:
    // 0x320a60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x320a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_320a64:
    // 0x320a64: 0x3c060044  lui         $a2, 0x44
    ctx->pc = 0x320a64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)68 << 16));
label_320a68:
    // 0x320a68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x320a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_320a6c:
    // 0x320a6c: 0x24c6d6c0  addiu       $a2, $a2, -0x2940
    ctx->pc = 0x320a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956736));
label_320a70:
    // 0x320a70: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x320a70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_320a74:
    // 0x320a74: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x320a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_320a78:
    // 0x320a78: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x320a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_320a7c:
    // 0x320a7c: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x320a7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_320a80:
    // 0x320a80: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x320a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_320a84:
    // 0x320a84: 0x40f809  jalr        $v0
label_320a88:
    if (ctx->pc == 0x320A88u) {
        ctx->pc = 0x320A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320A84u;
        // 0x320a88: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320A8Cu;
        goto label_320a8c;
    }
    ctx->pc = 0x320A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x320A8Cu);
        ctx->pc = 0x320A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320A84u;
        // 0x320a88: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320A84u, 0x320A8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x320A8Cu;
label_320a8c:
    // 0x320a8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x320a8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_320a90:
    // 0x320a90: 0x3e00008  jr          $ra
label_320a94:
    if (ctx->pc == 0x320A94u) {
        ctx->pc = 0x320A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320A90u;
        // 0x320a94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320A98u;
        goto label_fallthrough_0x320a90;
    }
    ctx->pc = 0x320A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320A90u;
        // 0x320a94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320A90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x320a90:
    ctx->pc = 0x320A98u;
}
