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

// Function: sub_0025CB20
// Address: 0x25cb20 - 0x25cb90
void sub_0025CB20_0x25cb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025CB20_0x25cb20");
#endif

    ctx->pc = 0x25cb20u;

    // 0x25cb20: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x25cb20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x25cb24: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x25cb24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x25cb28: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25CB28u;
    {
        const bool branch_taken_0x25cb28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CB28u;
        // 0x25cb2c: 0x30830001  andi        $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cb28) {
            ctx->pc = 0x25CB38u;
            goto label_25cb38;
        }
    }
    ctx->pc = 0x25CB30u;
    // 0x25cb30: 0x4a10002  bgez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x25CB30u;
    {
        const bool branch_taken_0x25cb30 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x25cb30) {
            ctx->pc = 0x25CB3Cu;
            goto label_25cb3c;
        }
    }
    ctx->pc = 0x25CB38u;
label_25cb38:
    // 0x25cb38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25cb38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25cb3c:
    // 0x25cb3c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x25CB3Cu;
    {
        const bool branch_taken_0x25cb3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25cb3c) {
            ctx->pc = 0x25CB64u;
            goto label_25cb64;
        }
    }
    ctx->pc = 0x25CB44u;
    // 0x25cb44: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x25cb44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x25cb48: 0x94830006  lhu         $v1, 0x6($a0)
    ctx->pc = 0x25cb48u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x25cb4c: 0x2c460101  sltiu       $a2, $v0, 0x101
    ctx->pc = 0x25cb4cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)257) ? 1 : 0);
    // 0x25cb50: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x25cb50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x25cb54: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25CB54u;
    {
        const bool branch_taken_0x25cb54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25cb54) {
            ctx->pc = 0x25CB64u;
            goto label_25cb64;
        }
    }
    ctx->pc = 0x25CB5Cu;
    // 0x25cb5c: 0x54c00004  bnel        $a2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x25CB5Cu;
    {
        const bool branch_taken_0x25cb5c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x25cb5c) {
            ctx->pc = 0x25CB60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25CB5Cu;
            // 0x25cb60: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25CB70u;
            goto label_25cb70;
        }
    }
    ctx->pc = 0x25CB64u;
label_25cb64:
    // 0x25cb64: 0x3e00008  jr          $ra
    ctx->pc = 0x25CB64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25CB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CB64u;
        // 0x25cb68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25CB64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25CB6Cu;
    // 0x25cb6c: 0x0  nop
    ctx->pc = 0x25cb6cu;
    // NOP
label_25cb70:
    // 0x25cb70: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x25cb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x25cb74: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x25cb74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x25cb78: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x25cb78u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x25cb7c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x25cb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x25cb80: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25cb80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25cb84: 0x3e00008  jr          $ra
    ctx->pc = 0x25CB84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25CB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CB84u;
        // 0x25cb88: 0x94620000  lhu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25CB84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25CB8Cu;
    // 0x25cb8c: 0x0  nop
    ctx->pc = 0x25cb8cu;
    // NOP
    ctx->pc = 0x25cb90u;
}
