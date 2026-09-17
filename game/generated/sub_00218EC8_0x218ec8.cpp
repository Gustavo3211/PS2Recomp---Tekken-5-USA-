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

// Function: sub_00218EC8
// Address: 0x218ec8 - 0x218fa8
void sub_00218EC8_0x218ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218EC8_0x218ec8");
#endif

    ctx->pc = 0x218ec8u;

    // 0x218ec8: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x218ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x218ecc: 0x2c830050  sltiu       $v1, $a0, 0x50
    ctx->pc = 0x218eccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)80) ? 1 : 0);
    // 0x218ed0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x218ED0u;
    {
        const bool branch_taken_0x218ed0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x218ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218ED0u;
        // 0x218ed4: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218ed0) {
            ctx->pc = 0x218EE8u;
            goto label_218ee8;
        }
    }
    ctx->pc = 0x218ED8u;
    // 0x218ed8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x218ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x218edc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x218EDCu;
    {
        const bool branch_taken_0x218edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218EDCu;
        // 0x218ee0: 0x24425b68  addiu       $v0, $v0, 0x5B68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218edc) {
            ctx->pc = 0x218EF8u;
            goto label_218ef8;
        }
    }
    ctx->pc = 0x218EE4u;
    // 0x218ee4: 0x0  nop
    ctx->pc = 0x218ee4u;
    // NOP
label_218ee8:
    // 0x218ee8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x218ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x218eec: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x218eecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
    // 0x218ef0: 0x24215b68  addiu       $at, $at, 0x5B68
    ctx->pc = 0x218ef0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 23400));
    // 0x218ef4: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x218ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_218ef8:
    // 0x218ef8: 0x3e00008  jr          $ra
    ctx->pc = 0x218EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218EF8u;
        // 0x218efc: 0x84420000  lh          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218EF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218F00u;
    // 0x218f00: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x218f00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x218f04: 0x2c830050  sltiu       $v1, $a0, 0x50
    ctx->pc = 0x218f04u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)80) ? 1 : 0);
    // 0x218f08: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x218F08u;
    {
        const bool branch_taken_0x218f08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x218F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218F08u;
        // 0x218f0c: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218f08) {
            ctx->pc = 0x218F20u;
            goto label_218f20;
        }
    }
    ctx->pc = 0x218F10u;
    // 0x218f10: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x218f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x218f14: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x218F14u;
    {
        const bool branch_taken_0x218f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218F14u;
        // 0x218f18: 0x24425b68  addiu       $v0, $v0, 0x5B68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218f14) {
            ctx->pc = 0x218F30u;
            goto label_218f30;
        }
    }
    ctx->pc = 0x218F1Cu;
    // 0x218f1c: 0x0  nop
    ctx->pc = 0x218f1cu;
    // NOP
label_218f20:
    // 0x218f20: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x218f20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x218f24: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x218f24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
    // 0x218f28: 0x24215b68  addiu       $at, $at, 0x5B68
    ctx->pc = 0x218f28u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 23400));
    // 0x218f2c: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x218f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_218f30:
    // 0x218f30: 0x3e00008  jr          $ra
    ctx->pc = 0x218F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218F30u;
        // 0x218f34: 0x8c420008  lw          $v0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218F30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218F38u;
    // 0x218f38: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x218f38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x218f3c: 0x2c830050  sltiu       $v1, $a0, 0x50
    ctx->pc = 0x218f3cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)80) ? 1 : 0);
    // 0x218f40: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x218F40u;
    {
        const bool branch_taken_0x218f40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x218F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218F40u;
        // 0x218f44: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218f40) {
            ctx->pc = 0x218F58u;
            goto label_218f58;
        }
    }
    ctx->pc = 0x218F48u;
    // 0x218f48: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x218f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x218f4c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x218F4Cu;
    {
        const bool branch_taken_0x218f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218F4Cu;
        // 0x218f50: 0x24425b68  addiu       $v0, $v0, 0x5B68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218f4c) {
            ctx->pc = 0x218F68u;
            goto label_218f68;
        }
    }
    ctx->pc = 0x218F54u;
    // 0x218f54: 0x0  nop
    ctx->pc = 0x218f54u;
    // NOP
label_218f58:
    // 0x218f58: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x218f58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x218f5c: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x218f5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
    // 0x218f60: 0x24215b68  addiu       $at, $at, 0x5B68
    ctx->pc = 0x218f60u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 23400));
    // 0x218f64: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x218f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_218f68:
    // 0x218f68: 0x3e00008  jr          $ra
    ctx->pc = 0x218F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218F68u;
        // 0x218f6c: 0x8c42000c  lw          $v0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218F68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218F70u;
    // 0x218f70: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x218f70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x218f74: 0x2c830050  sltiu       $v1, $a0, 0x50
    ctx->pc = 0x218f74u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)80) ? 1 : 0);
    // 0x218f78: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x218F78u;
    {
        const bool branch_taken_0x218f78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x218F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218F78u;
        // 0x218f7c: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218f78) {
            ctx->pc = 0x218F90u;
            goto label_218f90;
        }
    }
    ctx->pc = 0x218F80u;
    // 0x218f80: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x218f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x218f84: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x218F84u;
    {
        const bool branch_taken_0x218f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218F84u;
        // 0x218f88: 0x24425b68  addiu       $v0, $v0, 0x5B68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218f84) {
            ctx->pc = 0x218FA0u;
            goto label_218fa0;
        }
    }
    ctx->pc = 0x218F8Cu;
    // 0x218f8c: 0x0  nop
    ctx->pc = 0x218f8cu;
    // NOP
label_218f90:
    // 0x218f90: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x218f90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x218f94: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x218f94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
    // 0x218f98: 0x24215b68  addiu       $at, $at, 0x5B68
    ctx->pc = 0x218f98u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 23400));
    // 0x218f9c: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x218f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_218fa0:
    // 0x218fa0: 0x3e00008  jr          $ra
    ctx->pc = 0x218FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218FA0u;
        // 0x218fa4: 0x8c420010  lw          $v0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218FA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218FA8u;
}
