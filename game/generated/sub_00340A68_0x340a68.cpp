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

// Function: sub_00340A68
// Address: 0x340a68 - 0x340ad0
void sub_00340A68_0x340a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00340A68_0x340a68");
#endif

    switch (ctx->pc) {
        case 0x340a68u: goto label_340a68;
        case 0x340a6cu: goto label_340a6c;
        case 0x340a70u: goto label_340a70;
        case 0x340a74u: goto label_340a74;
        case 0x340a78u: goto label_340a78;
        case 0x340a7cu: goto label_340a7c;
        case 0x340a80u: goto label_340a80;
        case 0x340a84u: goto label_340a84;
        case 0x340a88u: goto label_340a88;
        case 0x340a8cu: goto label_340a8c;
        case 0x340a90u: goto label_340a90;
        case 0x340a94u: goto label_340a94;
        case 0x340a98u: goto label_340a98;
        case 0x340a9cu: goto label_340a9c;
        case 0x340aa0u: goto label_340aa0;
        case 0x340aa4u: goto label_340aa4;
        case 0x340aa8u: goto label_340aa8;
        case 0x340aacu: goto label_340aac;
        case 0x340ab0u: goto label_340ab0;
        case 0x340ab4u: goto label_340ab4;
        case 0x340ab8u: goto label_340ab8;
        case 0x340abcu: goto label_340abc;
        case 0x340ac0u: goto label_340ac0;
        case 0x340ac4u: goto label_340ac4;
        case 0x340ac8u: goto label_340ac8;
        case 0x340accu: goto label_340acc;
        default: break;
    }

    ctx->pc = 0x340a68u;

label_340a68:
    // 0x340a68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x340a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_340a6c:
    // 0x340a6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x340a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_340a70:
    // 0x340a70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x340a70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_340a74:
    // 0x340a74: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x340a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_340a78:
    // 0x340a78: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x340a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_340a7c:
    // 0x340a7c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x340a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_340a80:
    // 0x340a80: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_340a84:
    if (ctx->pc == 0x340A84u) {
        ctx->pc = 0x340A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340A80u;
        // 0x340a84: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340A88u;
        goto label_340a88;
    }
    ctx->pc = 0x340A80u;
    {
        const bool branch_taken_0x340a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x340a80) {
            ctx->pc = 0x340A84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x340A80u;
            // 0x340a84: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x340AC4u;
            goto label_340ac4;
        }
    }
    ctx->pc = 0x340A88u;
label_340a88:
    // 0x340a88: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x340a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_340a8c:
    // 0x340a8c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x340a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_340a90:
    // 0x340a90: 0x40f809  jalr        $v0
label_340a94:
    if (ctx->pc == 0x340A94u) {
        ctx->pc = 0x340A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340A90u;
        // 0x340a94: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340A98u;
        goto label_340a98;
    }
    ctx->pc = 0x340A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x340A98u);
        ctx->pc = 0x340A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340A90u;
        // 0x340a94: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340A90u, 0x340A98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x340A98u;
label_340a98:
    // 0x340a98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x340a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_340a9c:
    // 0x340a9c: 0x4800008  bltz        $a0, . + 4 + (0x8 << 2)
label_340aa0:
    if (ctx->pc == 0x340AA0u) {
        ctx->pc = 0x340AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340A9Cu;
        // 0x340aa0: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340AA4u;
        goto label_340aa4;
    }
    ctx->pc = 0x340A9Cu;
    {
        const bool branch_taken_0x340a9c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x340AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340A9Cu;
        // 0x340aa0: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340a9c) {
            ctx->pc = 0x340AC0u;
            goto label_340ac0;
        }
    }
    ctx->pc = 0x340AA4u;
label_340aa4:
    // 0x340aa4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x340aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_340aa8:
    // 0x340aa8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x340aa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_340aac:
    // 0x340aac: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
label_340ab0:
    if (ctx->pc == 0x340AB0u) {
        ctx->pc = 0x340AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340AACu;
        // 0x340ab0: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340AB4u;
        goto label_340ab4;
    }
    ctx->pc = 0x340AACu;
    {
        const bool branch_taken_0x340aac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x340AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340AACu;
        // 0x340ab0: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340aac) {
            ctx->pc = 0x340AC0u;
            goto label_340ac0;
        }
    }
    ctx->pc = 0x340AB4u;
label_340ab4:
    // 0x340ab4: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x340ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_340ab8:
    // 0x340ab8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x340ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_340abc:
    // 0x340abc: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x340abcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_340ac0:
    // 0x340ac0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x340ac0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_340ac4:
    // 0x340ac4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x340ac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_340ac8:
    // 0x340ac8: 0x3e00008  jr          $ra
label_340acc:
    if (ctx->pc == 0x340ACCu) {
        ctx->pc = 0x340ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340AC8u;
        // 0x340acc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340AD0u;
        goto label_fallthrough_0x340ac8;
    }
    ctx->pc = 0x340AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x340ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340AC8u;
        // 0x340acc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340AC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x340ac8:
    ctx->pc = 0x340AD0u;
}
