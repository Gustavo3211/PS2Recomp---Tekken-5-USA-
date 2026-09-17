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

// Function: sub_00320C10
// Address: 0x320c10 - 0x320ca0
void sub_00320C10_0x320c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00320C10_0x320c10");
#endif

    switch (ctx->pc) {
        case 0x320c10u: goto label_320c10;
        case 0x320c14u: goto label_320c14;
        case 0x320c18u: goto label_320c18;
        case 0x320c1cu: goto label_320c1c;
        case 0x320c20u: goto label_320c20;
        case 0x320c24u: goto label_320c24;
        case 0x320c28u: goto label_320c28;
        case 0x320c2cu: goto label_320c2c;
        case 0x320c30u: goto label_320c30;
        case 0x320c34u: goto label_320c34;
        case 0x320c38u: goto label_320c38;
        case 0x320c3cu: goto label_320c3c;
        case 0x320c40u: goto label_320c40;
        case 0x320c44u: goto label_320c44;
        case 0x320c48u: goto label_320c48;
        case 0x320c4cu: goto label_320c4c;
        case 0x320c50u: goto label_320c50;
        case 0x320c54u: goto label_320c54;
        case 0x320c58u: goto label_320c58;
        case 0x320c5cu: goto label_320c5c;
        case 0x320c60u: goto label_320c60;
        case 0x320c64u: goto label_320c64;
        case 0x320c68u: goto label_320c68;
        case 0x320c6cu: goto label_320c6c;
        case 0x320c70u: goto label_320c70;
        case 0x320c74u: goto label_320c74;
        case 0x320c78u: goto label_320c78;
        case 0x320c7cu: goto label_320c7c;
        case 0x320c80u: goto label_320c80;
        case 0x320c84u: goto label_320c84;
        case 0x320c88u: goto label_320c88;
        case 0x320c8cu: goto label_320c8c;
        case 0x320c90u: goto label_320c90;
        case 0x320c94u: goto label_320c94;
        case 0x320c98u: goto label_320c98;
        case 0x320c9cu: goto label_320c9c;
        default: break;
    }

    ctx->pc = 0x320c10u;

label_320c10:
    // 0x320c10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x320c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_320c14:
    // 0x320c14: 0x3c080044  lui         $t0, 0x44
    ctx->pc = 0x320c14u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)68 << 16));
label_320c18:
    // 0x320c18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x320c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_320c1c:
    // 0x320c1c: 0x2508d6c0  addiu       $t0, $t0, -0x2940
    ctx->pc = 0x320c1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956736));
label_320c20:
    // 0x320c20: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x320c20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_320c24:
    // 0x320c24: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x320c24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_320c28:
    // 0x320c28: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x320c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_320c2c:
    // 0x320c2c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x320c2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_320c30:
    // 0x320c30: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x320c30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_320c34:
    // 0x320c34: 0x24630078  addiu       $v1, $v1, 0x78
    ctx->pc = 0x320c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
label_320c38:
    // 0x320c38: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x320c38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_320c3c:
    // 0x320c3c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x320c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_320c40:
    // 0x320c40: 0x40f809  jalr        $v0
label_320c44:
    if (ctx->pc == 0x320C44u) {
        ctx->pc = 0x320C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320C40u;
        // 0x320c44: 0x882021  addu        $a0, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320C48u;
        goto label_320c48;
    }
    ctx->pc = 0x320C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x320C48u);
        ctx->pc = 0x320C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320C40u;
        // 0x320c44: 0x882021  addu        $a0, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320C40u, 0x320C48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x320C48u;
label_320c48:
    // 0x320c48: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x320c48u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_320c4c:
    // 0x320c4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x320c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_320c50:
    // 0x320c50: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x320c50u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_320c54:
    // 0x320c54: 0x3e00008  jr          $ra
label_320c58:
    if (ctx->pc == 0x320C58u) {
        ctx->pc = 0x320C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320C54u;
        // 0x320c58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320C5Cu;
        goto label_320c5c;
    }
    ctx->pc = 0x320C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320C54u;
        // 0x320c58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320C54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320C5Cu;
label_320c5c:
    // 0x320c5c: 0x0  nop
    ctx->pc = 0x320c5cu;
    // NOP
label_320c60:
    // 0x320c60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x320c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_320c64:
    // 0x320c64: 0x3c060044  lui         $a2, 0x44
    ctx->pc = 0x320c64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)68 << 16));
label_320c68:
    // 0x320c68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x320c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_320c6c:
    // 0x320c6c: 0x24c6d6c0  addiu       $a2, $a2, -0x2940
    ctx->pc = 0x320c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956736));
label_320c70:
    // 0x320c70: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x320c70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_320c74:
    // 0x320c74: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x320c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_320c78:
    // 0x320c78: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x320c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_320c7c:
    // 0x320c7c: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x320c7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_320c80:
    // 0x320c80: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x320c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_320c84:
    // 0x320c84: 0x40f809  jalr        $v0
label_320c88:
    if (ctx->pc == 0x320C88u) {
        ctx->pc = 0x320C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320C84u;
        // 0x320c88: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320C8Cu;
        goto label_320c8c;
    }
    ctx->pc = 0x320C84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x320C8Cu);
        ctx->pc = 0x320C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320C84u;
        // 0x320c88: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320C84u, 0x320C8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x320C8Cu;
label_320c8c:
    // 0x320c8c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x320c8cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_320c90:
    // 0x320c90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x320c90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_320c94:
    // 0x320c94: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x320c94u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_320c98:
    // 0x320c98: 0x3e00008  jr          $ra
label_320c9c:
    if (ctx->pc == 0x320C9Cu) {
        ctx->pc = 0x320C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320C98u;
        // 0x320c9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320CA0u;
        goto label_fallthrough_0x320c98;
    }
    ctx->pc = 0x320C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320C98u;
        // 0x320c9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320C98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x320c98:
    ctx->pc = 0x320CA0u;
}
