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

// Function: sub_002A7A18
// Address: 0x2a7a18 - 0x2a7af0
void sub_002A7A18_0x2a7a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A7A18_0x2a7a18");
#endif

    switch (ctx->pc) {
        case 0x2a7a38u: goto label_2a7a38;
        default: break;
    }

    ctx->pc = 0x2a7a18u;

    // 0x2a7a18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a7a18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a7a1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a7a1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7a20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a7a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a7a24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a7a24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7a28: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2a7a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2a7a2c: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x2a7a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2a7a30: 0xc0a9ce6  jal         func_2A7398
    ctx->pc = 0x2A7A30u;
    SET_GPR_U32(ctx, 31, 0x2A7A38u);
    ctx->pc = 0x2A7A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7A30u;
    // 0x2a7a34: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7398u, 0x2A7A30u, 0x2A7A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7A38u;
label_2a7a38:
    // 0x2a7a38: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x2a7a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2a7a3c: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x2a7a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x2a7a40: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x2a7a40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x2a7a44: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2a7a44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2a7a48: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2a7a48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a7a4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a7a4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a7a50: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7A50u;
        // 0x2a7a54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7A50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7A58u;
    // 0x2a7a58: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x2a7a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x2a7a5c: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x2a7a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2a7a60: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a7a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a7a64: 0x8c86003c  lw          $a2, 0x3C($a0)
    ctx->pc = 0x2a7a64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x2a7a68: 0xac820034  sw          $v0, 0x34($a0)
    ctx->pc = 0x2a7a68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 2));
    // 0x2a7a6c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a7a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a7a70: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2a7a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2a7a74: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x2a7a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x2a7a78: 0x8c47000c  lw          $a3, 0xC($v0)
    ctx->pc = 0x2a7a78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2a7a7c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a7a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2a7a80: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x2a7a80u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2a7a84: 0xac830044  sw          $v1, 0x44($a0)
    ctx->pc = 0x2a7a84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 3));
    // 0x2a7a88: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x2a7a88u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2a7a8c: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x2a7a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
    // 0x2a7a90: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7A90u;
        // 0x2a7a94: 0xac86003c  sw          $a2, 0x3C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7A90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7A98u;
    // 0x2a7a98: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7A98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7AA0u;
    // 0x2a7aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7AA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7AA8u;
    // 0x2a7aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7AA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7AB0u;
    // 0x2a7ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7AB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7AB8u;
    // 0x2a7ab8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7AB8u;
        // 0x2a7abc: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7AB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7AC0u;
    // 0x2a7ac0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a7ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a7ac4: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x2a7ac4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2a7ac8: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A7AC8u;
    {
        const bool branch_taken_0x2a7ac8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7AC8u;
        // 0x2a7acc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7ac8) {
            ctx->pc = 0x2A7AE0u;
            goto label_2a7ae0;
        }
    }
    ctx->pc = 0x2A7AD0u;
    // 0x2a7ad0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a7ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a7ad4: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x2A7AD4u;
    ctx->pc = 0x2A7AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7AD4u;
    // 0x2a7ad8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x2A7ADCu;
    // 0x2a7adc: 0x0  nop
    ctx->pc = 0x2a7adcu;
    // NOP
label_2a7ae0:
    // 0x2a7ae0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a7ae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a7ae4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7AE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7AE4u;
        // 0x2a7ae8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7AE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7AECu;
    // 0x2a7aec: 0x0  nop
    ctx->pc = 0x2a7aecu;
    // NOP
    ctx->pc = 0x2a7af0u;
}
