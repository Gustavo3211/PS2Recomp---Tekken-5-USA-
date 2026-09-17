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

// Function: sub_00202C38
// Address: 0x202c38 - 0x202cc0
void sub_00202C38_0x202c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202C38_0x202c38");
#endif

    switch (ctx->pc) {
        case 0x202c60u: goto label_202c60;
        default: break;
    }

    ctx->pc = 0x202c38u;

    // 0x202c38: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x202c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x202c3c: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x202c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x202c40: 0x8c4401f8  lw          $a0, 0x1F8($v0)
    ctx->pc = 0x202c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 504)));
    // 0x202c44: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x202c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x202c48: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x202c48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x202c4c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x202C4Cu;
    {
        const bool branch_taken_0x202c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202C4Cu;
        // 0x202c50: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202c4c) {
            ctx->pc = 0x202C84u;
            goto label_202c84;
        }
    }
    ctx->pc = 0x202C54u;
    // 0x202c54: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x202C54u;
    {
        const bool branch_taken_0x202c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x202c54) {
            ctx->pc = 0x202C78u;
            goto label_202c78;
        }
    }
    ctx->pc = 0x202C5Cu;
    // 0x202c5c: 0x0  nop
    ctx->pc = 0x202c5cu;
    // NOP
label_202c60:
    // 0x202c60: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x202c60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x202c64: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x202c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x202c68: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x202c68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x202c6c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x202C6Cu;
    {
        const bool branch_taken_0x202c6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x202c6c) {
            ctx->pc = 0x202C84u;
            goto label_202c84;
        }
    }
    ctx->pc = 0x202C74u;
    // 0x202c74: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x202c74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_202c78:
    // 0x202c78: 0x54a2fff9  bnel        $a1, $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x202C78u;
    {
        const bool branch_taken_0x202c78 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x202c78) {
            ctx->pc = 0x202C7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202C78u;
            // 0x202c7c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202C60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202c60;
        }
    }
    ctx->pc = 0x202C80u;
    // 0x202c80: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x202c80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_202c84:
    // 0x202c84: 0x3e00008  jr          $ra
    ctx->pc = 0x202C84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202C84u;
        // 0x202c88: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202C84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202C8Cu;
    // 0x202c8c: 0x0  nop
    ctx->pc = 0x202c8cu;
    // NOP
    // 0x202c90: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x202c90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x202c94: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x202c94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x202c98: 0x2c84006b  sltiu       $a0, $a0, 0x6B
    ctx->pc = 0x202c98u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)107) ? 1 : 0);
    // 0x202c9c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x202C9Cu;
    {
        const bool branch_taken_0x202c9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x202c9c) {
            ctx->pc = 0x202CB8u;
            goto label_202cb8;
        }
    }
    ctx->pc = 0x202CA4u;
    // 0x202ca4: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x202ca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x202ca8: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x202ca8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x202cac: 0x3e00008  jr          $ra
    ctx->pc = 0x202CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202CACu;
        // 0x202cb0: 0x9422b5f0  lhu         $v0, -0x4A10($at) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294948336)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202CACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202CB4u;
    // 0x202cb4: 0x0  nop
    ctx->pc = 0x202cb4u;
    // NOP
label_202cb8:
    // 0x202cb8: 0x3e00008  jr          $ra
    ctx->pc = 0x202CB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202CB8u;
        // 0x202cbc: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202CB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202CC0u;
}
