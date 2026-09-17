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

// Function: sub_002EC9E8
// Address: 0x2ec9e8 - 0x2eca60
void sub_002EC9E8_0x2ec9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EC9E8_0x2ec9e8");
#endif

    switch (ctx->pc) {
        case 0x2ec9fcu: goto label_2ec9fc;
        default: break;
    }

    ctx->pc = 0x2ec9e8u;

    // 0x2ec9e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ec9e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ec9ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ec9ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ec9f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ec9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2ec9f4: 0xc0bb93e  jal         func_2EE4F8
    ctx->pc = 0x2EC9F4u;
    SET_GPR_U32(ctx, 31, 0x2EC9FCu);
    ctx->pc = 0x2EC9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC9F4u;
    // 0x2ec9f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE4F8u, 0x2EC9F4u, 0x2EC9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC9FCu;
label_2ec9fc:
    // 0x2ec9fc: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2ec9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2eca00: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2eca00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2eca04: 0x244207d0  addiu       $v0, $v0, 0x7D0
    ctx->pc = 0x2eca04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2000));
    // 0x2eca08: 0x2463eed0  addiu       $v1, $v1, -0x1130
    ctx->pc = 0x2eca08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962896));
    // 0x2eca0c: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x2eca0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x2eca10: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x2eca10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x2eca14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2eca14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eca18: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2eca18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2eca1c: 0x3e00008  jr          $ra
    ctx->pc = 0x2ECA1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ECA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECA1Cu;
        // 0x2eca20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ECA1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ECA24u;
    // 0x2eca24: 0x0  nop
    ctx->pc = 0x2eca24u;
    // NOP
    // 0x2eca28: 0x248400e8  addiu       $a0, $a0, 0xE8
    ctx->pc = 0x2eca28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 232));
    // 0x2eca2c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2eca2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2eca30: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ECA30u;
    {
        const bool branch_taken_0x2eca30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECA30u;
        // 0x2eca34: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eca30) {
            ctx->pc = 0x2ECA48u;
            goto label_2eca48;
        }
    }
    ctx->pc = 0x2ECA38u;
    // 0x2eca38: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2eca38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2eca3c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2eca3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2eca40: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ECA40u;
    {
        const bool branch_taken_0x2eca40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2eca40) {
            ctx->pc = 0x2ECA54u;
            goto label_2eca54;
        }
    }
    ctx->pc = 0x2ECA48u;
label_2eca48:
    // 0x2eca48: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2eca48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2eca4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2eca4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eca50: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2eca50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_2eca54:
    // 0x2eca54: 0x3e00008  jr          $ra
    ctx->pc = 0x2ECA54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ECA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECA54u;
        // 0x2eca58: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ECA54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ECA5Cu;
    // 0x2eca5c: 0x0  nop
    ctx->pc = 0x2eca5cu;
    // NOP
    ctx->pc = 0x2eca60u;
}
