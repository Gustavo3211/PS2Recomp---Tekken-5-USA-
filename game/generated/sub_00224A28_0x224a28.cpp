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

// Function: sub_00224A28
// Address: 0x224a28 - 0x224ab0
void sub_00224A28_0x224a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224A28_0x224a28");
#endif

    switch (ctx->pc) {
        case 0x224a40u: goto label_224a40;
        case 0x224a80u: goto label_224a80;
        default: break;
    }

    ctx->pc = 0x224a28u;

    // 0x224a28: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x224a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x224a2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x224a2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224a30: 0x24476154  addiu       $a3, $v0, 0x6154
    ctx->pc = 0x224a30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 24916));
    // 0x224a34: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x224a34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x224a38: 0x24e90008  addiu       $t1, $a3, 0x8
    ctx->pc = 0x224a38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x224a3c: 0x0  nop
    ctx->pc = 0x224a3cu;
    // NOP
label_224a40:
    // 0x224a40: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x224a40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x224a44: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x224a44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x224a48: 0x472821  addu        $a1, $v0, $a3
    ctx->pc = 0x224a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x224a4c: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x224a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x224a50: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x224a50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224a54: 0x28c40002  slti        $a0, $a2, 0x2
    ctx->pc = 0x224a54u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x224a58: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x224a58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x224a5c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x224a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x224a60: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x224A60u;
    {
        const bool branch_taken_0x224a60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x224A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224A60u;
        // 0x224a64: 0xaca80010  sw          $t0, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224a60) {
            ctx->pc = 0x224A40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_224a40;
        }
    }
    ctx->pc = 0x224A68u;
    // 0x224a68: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x224a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x224a6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x224a6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224a70: 0x24476174  addiu       $a3, $v0, 0x6174
    ctx->pc = 0x224a70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 24948));
    // 0x224a74: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x224a74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x224a78: 0x24e90008  addiu       $t1, $a3, 0x8
    ctx->pc = 0x224a78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x224a7c: 0x0  nop
    ctx->pc = 0x224a7cu;
    // NOP
label_224a80:
    // 0x224a80: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x224a80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x224a84: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x224a84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x224a88: 0x472821  addu        $a1, $v0, $a3
    ctx->pc = 0x224a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x224a8c: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x224a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x224a90: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x224a90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224a94: 0x28c40002  slti        $a0, $a2, 0x2
    ctx->pc = 0x224a94u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x224a98: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x224a98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x224a9c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x224a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x224aa0: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x224AA0u;
    {
        const bool branch_taken_0x224aa0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x224AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224AA0u;
        // 0x224aa4: 0xaca80010  sw          $t0, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224aa0) {
            ctx->pc = 0x224A80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_224a80;
        }
    }
    ctx->pc = 0x224AA8u;
    // 0x224aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x224AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224AA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224AB0u;
}
