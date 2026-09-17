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

// Function: sub_002F6A60
// Address: 0x2f6a60 - 0x2f6ad0
void sub_002F6A60_0x2f6a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6A60_0x2f6a60");
#endif

    switch (ctx->pc) {
        case 0x2f6a88u: goto label_2f6a88;
        case 0x2f6a98u: goto label_2f6a98;
        default: break;
    }

    ctx->pc = 0x2f6a60u;

    // 0x2f6a60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f6a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f6a64: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f6a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f6a68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f6a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f6a6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f6a6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6a70: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2f6a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2f6a74: 0x8e020120  lw          $v0, 0x120($s0)
    ctx->pc = 0x2f6a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x2f6a78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2f6a78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2f6a7c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2f6a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2f6a80: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2F6A80u;
    SET_GPR_U32(ctx, 31, 0x2F6A88u);
    ctx->pc = 0x2F6A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6A80u;
    // 0x2f6a84: 0x8c440050  lw          $a0, 0x50($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2F6A80u, 0x2F6A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6A88u;
label_2f6a88:
    // 0x2f6a88: 0x8e04011c  lw          $a0, 0x11C($s0)
    ctx->pc = 0x2f6a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x2f6a8c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2f6a8cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2f6a90: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2F6A90u;
    SET_GPR_U32(ctx, 31, 0x2F6A98u);
    ctx->pc = 0x2F6A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6A90u;
    // 0x2f6a94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2F6A90u, 0x2F6A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6A98u;
label_2f6a98:
    // 0x2f6a98: 0x8e020124  lw          $v0, 0x124($s0)
    ctx->pc = 0x2f6a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x2f6a9c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F6A9Cu;
    {
        const bool branch_taken_0x2f6a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6A9Cu;
        // 0x2f6aa0: 0x8e04011c  lw          $a0, 0x11C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6a9c) {
            ctx->pc = 0x2F6AB0u;
            goto label_2f6ab0;
        }
    }
    ctx->pc = 0x2F6AA4u;
    // 0x2f6aa4: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2f6aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2f6aa8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F6AA8u;
    {
        const bool branch_taken_0x2f6aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6AA8u;
        // 0x2f6aac: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6aa8) {
            ctx->pc = 0x2F6ABCu;
            goto label_2f6abc;
        }
    }
    ctx->pc = 0x2F6AB0u;
label_2f6ab0:
    // 0x2f6ab0: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2f6ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2f6ab4: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2f6ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2f6ab8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f6ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f6abc:
    // 0x2f6abc: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f6abcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2f6ac0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f6ac0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f6ac4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2f6ac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f6ac8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6AC8u;
        // 0x2f6acc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6AC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F6AD0u;
}
