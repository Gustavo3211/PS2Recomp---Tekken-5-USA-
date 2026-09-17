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

// Function: sub_00320B60
// Address: 0x320b60 - 0x320bd0
void sub_00320B60_0x320b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00320B60_0x320b60");
#endif

    switch (ctx->pc) {
        case 0x320b60u: goto label_320b60;
        case 0x320b64u: goto label_320b64;
        case 0x320b68u: goto label_320b68;
        case 0x320b6cu: goto label_320b6c;
        case 0x320b70u: goto label_320b70;
        case 0x320b74u: goto label_320b74;
        case 0x320b78u: goto label_320b78;
        case 0x320b7cu: goto label_320b7c;
        case 0x320b80u: goto label_320b80;
        case 0x320b84u: goto label_320b84;
        case 0x320b88u: goto label_320b88;
        case 0x320b8cu: goto label_320b8c;
        case 0x320b90u: goto label_320b90;
        case 0x320b94u: goto label_320b94;
        case 0x320b98u: goto label_320b98;
        case 0x320b9cu: goto label_320b9c;
        case 0x320ba0u: goto label_320ba0;
        case 0x320ba4u: goto label_320ba4;
        case 0x320ba8u: goto label_320ba8;
        case 0x320bacu: goto label_320bac;
        case 0x320bb0u: goto label_320bb0;
        case 0x320bb4u: goto label_320bb4;
        case 0x320bb8u: goto label_320bb8;
        case 0x320bbcu: goto label_320bbc;
        case 0x320bc0u: goto label_320bc0;
        case 0x320bc4u: goto label_320bc4;
        case 0x320bc8u: goto label_320bc8;
        case 0x320bccu: goto label_320bcc;
        default: break;
    }

    ctx->pc = 0x320b60u;

label_320b60:
    // 0x320b60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x320b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_320b64:
    // 0x320b64: 0x3c060044  lui         $a2, 0x44
    ctx->pc = 0x320b64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)68 << 16));
label_320b68:
    // 0x320b68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x320b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_320b6c:
    // 0x320b6c: 0x24c6d6c0  addiu       $a2, $a2, -0x2940
    ctx->pc = 0x320b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956736));
label_320b70:
    // 0x320b70: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x320b70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_320b74:
    // 0x320b74: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x320b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_320b78:
    // 0x320b78: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x320b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_320b7c:
    // 0x320b7c: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x320b7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_320b80:
    // 0x320b80: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x320b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_320b84:
    // 0x320b84: 0x40f809  jalr        $v0
label_320b88:
    if (ctx->pc == 0x320B88u) {
        ctx->pc = 0x320B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320B84u;
        // 0x320b88: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320B8Cu;
        goto label_320b8c;
    }
    ctx->pc = 0x320B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x320B8Cu);
        ctx->pc = 0x320B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320B84u;
        // 0x320b88: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320B84u, 0x320B8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x320B8Cu;
label_320b8c:
    // 0x320b8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x320b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_320b90:
    // 0x320b90: 0x3e00008  jr          $ra
label_320b94:
    if (ctx->pc == 0x320B94u) {
        ctx->pc = 0x320B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320B90u;
        // 0x320b94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320B98u;
        goto label_320b98;
    }
    ctx->pc = 0x320B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320B90u;
        // 0x320b94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320B90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320B98u;
label_320b98:
    // 0x320b98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x320b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_320b9c:
    // 0x320b9c: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x320b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
label_320ba0:
    // 0x320ba0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x320ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_320ba4:
    // 0x320ba4: 0x2484d6c0  addiu       $a0, $a0, -0x2940
    ctx->pc = 0x320ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956736));
label_320ba8:
    // 0x320ba8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x320ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_320bac:
    // 0x320bac: 0x24630068  addiu       $v1, $v1, 0x68
    ctx->pc = 0x320bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 104));
label_320bb0:
    // 0x320bb0: 0x84650000  lh          $a1, 0x0($v1)
    ctx->pc = 0x320bb0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_320bb4:
    // 0x320bb4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x320bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_320bb8:
    // 0x320bb8: 0x40f809  jalr        $v0
label_320bbc:
    if (ctx->pc == 0x320BBCu) {
        ctx->pc = 0x320BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320BB8u;
        // 0x320bbc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320BC0u;
        goto label_320bc0;
    }
    ctx->pc = 0x320BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x320BC0u);
        ctx->pc = 0x320BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320BB8u;
        // 0x320bbc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320BB8u, 0x320BC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x320BC0u;
label_320bc0:
    // 0x320bc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x320bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_320bc4:
    // 0x320bc4: 0x3e00008  jr          $ra
label_320bc8:
    if (ctx->pc == 0x320BC8u) {
        ctx->pc = 0x320BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320BC4u;
        // 0x320bc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320BCCu;
        goto label_320bcc;
    }
    ctx->pc = 0x320BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320BC4u;
        // 0x320bc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320BC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320BCCu;
label_320bcc:
    // 0x320bcc: 0x0  nop
    ctx->pc = 0x320bccu;
    // NOP
    ctx->pc = 0x320bd0u;
}
