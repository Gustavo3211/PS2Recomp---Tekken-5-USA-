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

// Function: sub_00375B38
// Address: 0x375b38 - 0x375bb8
void sub_00375B38_0x375b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00375B38_0x375b38");
#endif

    switch (ctx->pc) {
        case 0x375b68u: goto label_375b68;
        default: break;
    }

    ctx->pc = 0x375b38u;

    // 0x375b38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x375b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x375b3c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x375b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x375b40: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x375b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x375b44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x375b44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375b48: 0x244223a8  addiu       $v0, $v0, 0x23A8
    ctx->pc = 0x375b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9128));
    // 0x375b4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x375b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x375b50: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x375b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x375b54: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x375b54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375b58: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x375b58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x375b5c: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x375b5cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x375b60: 0xc0cd388  jal         func_334E20
    ctx->pc = 0x375B60u;
    SET_GPR_U32(ctx, 31, 0x375B68u);
    ctx->pc = 0x375B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375B60u;
    // 0x375b64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x334E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334E20u, 0x375B60u, 0x375B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375B68u;
label_375b68:
    // 0x375b68: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x375B68u;
    {
        const bool branch_taken_0x375b68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x375B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375B68u;
        // 0x375b6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375b68) {
            ctx->pc = 0x375B88u;
            goto label_375b88;
        }
    }
    ctx->pc = 0x375B70u;
    // 0x375b70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x375b70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x375b74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x375b74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x375b78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x375b78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x375b7c: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x375B7Cu;
    ctx->pc = 0x375B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375B7Cu;
    // 0x375b80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x375B84u;
    // 0x375b84: 0x0  nop
    ctx->pc = 0x375b84u;
    // NOP
label_375b88:
    // 0x375b88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x375b88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x375b8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x375b8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x375b90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x375b90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x375b94: 0x3e00008  jr          $ra
    ctx->pc = 0x375B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375B94u;
        // 0x375b98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375B94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375B9Cu;
    // 0x375b9c: 0x0  nop
    ctx->pc = 0x375b9cu;
    // NOP
    // 0x375ba0: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x375ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x375ba4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x375ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x375ba8: 0x24632438  addiu       $v1, $v1, 0x2438
    ctx->pc = 0x375ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9272));
    // 0x375bac: 0x3e00008  jr          $ra
    ctx->pc = 0x375BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375BACu;
        // 0x375bb0: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375BACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375BB4u;
    // 0x375bb4: 0x0  nop
    ctx->pc = 0x375bb4u;
    // NOP
    ctx->pc = 0x375bb8u;
}
