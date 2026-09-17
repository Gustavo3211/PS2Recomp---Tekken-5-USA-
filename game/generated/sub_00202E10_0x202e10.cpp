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

// Function: sub_00202E10
// Address: 0x202e10 - 0x202e60
void sub_00202E10_0x202e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202E10_0x202e10");
#endif

    switch (ctx->pc) {
        case 0x202e28u: goto label_202e28;
        default: break;
    }

    ctx->pc = 0x202e10u;

    // 0x202e10: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x202e10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202e14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x202e14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202e18: 0x24e90002  addiu       $t1, $a3, 0x2
    ctx->pc = 0x202e18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x202e1c: 0x240b07ff  addiu       $t3, $zero, 0x7FF
    ctx->pc = 0x202e1cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
    // 0x202e20: 0x24e80008  addiu       $t0, $a3, 0x8
    ctx->pc = 0x202e20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x202e24: 0x340affff  ori         $t2, $zero, 0xFFFF
    ctx->pc = 0x202e24u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_202e28:
    // 0x202e28: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x202e28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x202e2c: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x202e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x202e30: 0x244201d0  addiu       $v0, $v0, 0x1D0
    ctx->pc = 0x202e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 464));
    // 0x202e34: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x202e34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x202e38: 0x1022821  addu        $a1, $t0, $v0
    ctx->pc = 0x202e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x202e3c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x202e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x202e40: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x202e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x202e44: 0x28c40002  slti        $a0, $a2, 0x2
    ctx->pc = 0x202e44u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x202e48: 0xa46001c0  sh          $zero, 0x1C0($v1)
    ctx->pc = 0x202e48u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 448), (uint16_t)GPR_U32(ctx, 0));
    // 0x202e4c: 0xac4b0000  sw          $t3, 0x0($v0)
    ctx->pc = 0x202e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 11));
    // 0x202e50: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x202E50u;
    {
        const bool branch_taken_0x202e50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x202E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202E50u;
        // 0x202e54: 0xacaa0000  sw          $t2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202e50) {
            ctx->pc = 0x202E28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202e28;
        }
    }
    ctx->pc = 0x202E58u;
    // 0x202e58: 0x3e00008  jr          $ra
    ctx->pc = 0x202E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202E58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202E60u;
}
