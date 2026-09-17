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

// Function: sub_002A6C30
// Address: 0x2a6c30 - 0x2a6ce0
void sub_002A6C30_0x2a6c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A6C30_0x2a6c30");
#endif

    switch (ctx->pc) {
        case 0x2a6c30u: goto label_2a6c30;
        case 0x2a6c34u: goto label_2a6c34;
        case 0x2a6c38u: goto label_2a6c38;
        case 0x2a6c3cu: goto label_2a6c3c;
        case 0x2a6c40u: goto label_2a6c40;
        case 0x2a6c44u: goto label_2a6c44;
        case 0x2a6c48u: goto label_2a6c48;
        case 0x2a6c4cu: goto label_2a6c4c;
        case 0x2a6c50u: goto label_2a6c50;
        case 0x2a6c54u: goto label_2a6c54;
        case 0x2a6c58u: goto label_2a6c58;
        case 0x2a6c5cu: goto label_2a6c5c;
        case 0x2a6c60u: goto label_2a6c60;
        case 0x2a6c64u: goto label_2a6c64;
        case 0x2a6c68u: goto label_2a6c68;
        case 0x2a6c6cu: goto label_2a6c6c;
        case 0x2a6c70u: goto label_2a6c70;
        case 0x2a6c74u: goto label_2a6c74;
        case 0x2a6c78u: goto label_2a6c78;
        case 0x2a6c7cu: goto label_2a6c7c;
        case 0x2a6c80u: goto label_2a6c80;
        case 0x2a6c84u: goto label_2a6c84;
        case 0x2a6c88u: goto label_2a6c88;
        case 0x2a6c8cu: goto label_2a6c8c;
        case 0x2a6c90u: goto label_2a6c90;
        case 0x2a6c94u: goto label_2a6c94;
        case 0x2a6c98u: goto label_2a6c98;
        case 0x2a6c9cu: goto label_2a6c9c;
        case 0x2a6ca0u: goto label_2a6ca0;
        case 0x2a6ca4u: goto label_2a6ca4;
        case 0x2a6ca8u: goto label_2a6ca8;
        case 0x2a6cacu: goto label_2a6cac;
        case 0x2a6cb0u: goto label_2a6cb0;
        case 0x2a6cb4u: goto label_2a6cb4;
        case 0x2a6cb8u: goto label_2a6cb8;
        case 0x2a6cbcu: goto label_2a6cbc;
        case 0x2a6cc0u: goto label_2a6cc0;
        case 0x2a6cc4u: goto label_2a6cc4;
        case 0x2a6cc8u: goto label_2a6cc8;
        case 0x2a6cccu: goto label_2a6ccc;
        case 0x2a6cd0u: goto label_2a6cd0;
        case 0x2a6cd4u: goto label_2a6cd4;
        case 0x2a6cd8u: goto label_2a6cd8;
        case 0x2a6cdcu: goto label_2a6cdc;
        default: break;
    }

    ctx->pc = 0x2a6c30u;

label_2a6c30:
    // 0x2a6c30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a6c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2a6c34:
    // 0x2a6c34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a6c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2a6c38:
    // 0x2a6c38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a6c38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a6c3c:
    // 0x2a6c3c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2a6c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_2a6c40:
    // 0x2a6c40: 0x260500e8  addiu       $a1, $s0, 0xE8
    ctx->pc = 0x2a6c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 232));
label_2a6c44:
    // 0x2a6c44: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2a6c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2a6c48:
    // 0x2a6c48: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2a6c4c:
    if (ctx->pc == 0x2A6C4Cu) {
        ctx->pc = 0x2A6C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6C48u;
        // 0x2a6c4c: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6C50u;
        goto label_2a6c50;
    }
    ctx->pc = 0x2A6C48u;
    {
        const bool branch_taken_0x2a6c48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6c48) {
            ctx->pc = 0x2A6C4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A6C48u;
            // 0x2a6c4c: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A6C64u;
            goto label_2a6c64;
        }
    }
    ctx->pc = 0x2A6C50u;
label_2a6c50:
    // 0x2a6c50: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2a6c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2a6c54:
    // 0x2a6c54: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2a6c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2a6c58:
    // 0x2a6c58: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2a6c5c:
    if (ctx->pc == 0x2A6C5Cu) {
        ctx->pc = 0x2A6C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6C58u;
        // 0x2a6c5c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6C60u;
        goto label_2a6c60;
    }
    ctx->pc = 0x2A6C58u;
    {
        const bool branch_taken_0x2a6c58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A6C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6C58u;
        // 0x2a6c5c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6c58) {
            ctx->pc = 0x2A6C6Cu;
            goto label_2a6c6c;
        }
    }
    ctx->pc = 0x2A6C60u;
label_2a6c60:
    // 0x2a6c60: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2a6c60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2a6c64:
    // 0x2a6c64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a6c64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a6c68:
    // 0x2a6c68: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2a6c68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2a6c6c:
    // 0x2a6c6c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2a6c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2a6c70:
    // 0x2a6c70: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a6c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a6c74:
    // 0x2a6c74: 0x24420068  addiu       $v0, $v0, 0x68
    ctx->pc = 0x2a6c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_2a6c78:
    // 0x2a6c78: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2a6c78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2a6c7c:
    // 0x2a6c7c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2a6c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2a6c80:
    // 0x2a6c80: 0x60f809  jalr        $v1
label_2a6c84:
    if (ctx->pc == 0x2A6C84u) {
        ctx->pc = 0x2A6C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6C80u;
        // 0x2a6c84: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6C88u;
        goto label_2a6c88;
    }
    ctx->pc = 0x2A6C80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2A6C88u);
        ctx->pc = 0x2A6C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6C80u;
        // 0x2a6c84: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6C80u, 0x2A6C88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A6C88u;
label_2a6c88:
    // 0x2a6c88: 0x26060110  addiu       $a2, $s0, 0x110
    ctx->pc = 0x2a6c88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
label_2a6c8c:
    // 0x2a6c8c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x2a6c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2a6c90:
    // 0x2a6c90: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2a6c94:
    if (ctx->pc == 0x2A6C94u) {
        ctx->pc = 0x2A6C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6C90u;
        // 0x2a6c94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6C98u;
        goto label_2a6c98;
    }
    ctx->pc = 0x2A6C90u;
    {
        const bool branch_taken_0x2a6c90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6C90u;
        // 0x2a6c94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6c90) {
            ctx->pc = 0x2A6CA8u;
            goto label_2a6ca8;
        }
    }
    ctx->pc = 0x2A6C98u;
label_2a6c98:
    // 0x2a6c98: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2a6c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2a6c9c:
    // 0x2a6c9c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2a6c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_2a6ca0:
    // 0x2a6ca0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2a6ca4:
    if (ctx->pc == 0x2A6CA4u) {
        ctx->pc = 0x2A6CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6CA0u;
        // 0x2a6ca4: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6CA8u;
        goto label_2a6ca8;
    }
    ctx->pc = 0x2A6CA0u;
    {
        const bool branch_taken_0x2a6ca0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A6CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6CA0u;
        // 0x2a6ca4: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6ca0) {
            ctx->pc = 0x2A6CB4u;
            goto label_2a6cb4;
        }
    }
    ctx->pc = 0x2A6CA8u;
label_2a6ca8:
    // 0x2a6ca8: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x2a6ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
label_2a6cac:
    // 0x2a6cac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a6cacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a6cb0:
    // 0x2a6cb0: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2a6cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_2a6cb4:
    // 0x2a6cb4: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x2a6cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_2a6cb8:
    // 0x2a6cb8: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2a6cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_2a6cbc:
    // 0x2a6cbc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2a6cbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2a6cc0:
    // 0x2a6cc0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2a6cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2a6cc4:
    // 0x2a6cc4: 0x60f809  jalr        $v1
label_2a6cc8:
    if (ctx->pc == 0x2A6CC8u) {
        ctx->pc = 0x2A6CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6CC4u;
        // 0x2a6cc8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6CCCu;
        goto label_2a6ccc;
    }
    ctx->pc = 0x2A6CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2A6CCCu);
        ctx->pc = 0x2A6CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6CC4u;
        // 0x2a6cc8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6CC4u, 0x2A6CCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A6CCCu;
label_2a6ccc:
    // 0x2a6ccc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a6cccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a6cd0:
    // 0x2a6cd0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2a6cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2a6cd4:
    // 0x2a6cd4: 0x3e00008  jr          $ra
label_2a6cd8:
    if (ctx->pc == 0x2A6CD8u) {
        ctx->pc = 0x2A6CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6CD4u;
        // 0x2a6cd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6CDCu;
        goto label_2a6cdc;
    }
    ctx->pc = 0x2A6CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6CD4u;
        // 0x2a6cd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6CD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A6CDCu;
label_2a6cdc:
    // 0x2a6cdc: 0x0  nop
    ctx->pc = 0x2a6cdcu;
    // NOP
    ctx->pc = 0x2a6ce0u;
}
