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

// Function: sub_00375E28
// Address: 0x375e28 - 0x375e70
void sub_00375E28_0x375e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00375E28_0x375e28");
#endif

    ctx->pc = 0x375e28u;

    // 0x375e28: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x375e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x375e2c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x375e2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x375e30: 0x244222a0  addiu       $v0, $v0, 0x22A0
    ctx->pc = 0x375e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8864));
    // 0x375e34: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x375e34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x375e38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x375e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x375e3c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x375E3Cu;
    {
        const bool branch_taken_0x375e3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x375E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375E3Cu;
        // 0x375e40: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375e3c) {
            ctx->pc = 0x375E50u;
            goto label_375e50;
        }
    }
    ctx->pc = 0x375E44u;
    // 0x375e44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x375e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x375e48: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x375E48u;
    ctx->pc = 0x375E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375E48u;
    // 0x375e4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x375E50u;
label_375e50:
    // 0x375e50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x375e50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x375e54: 0x3e00008  jr          $ra
    ctx->pc = 0x375E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375E54u;
        // 0x375e58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375E54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375E5Cu;
    // 0x375e5c: 0x0  nop
    ctx->pc = 0x375e5cu;
    // NOP
    // 0x375e60: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x375e60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x375e64: 0x24632550  addiu       $v1, $v1, 0x2550
    ctx->pc = 0x375e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9552));
    // 0x375e68: 0x3e00008  jr          $ra
    ctx->pc = 0x375E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375E68u;
        // 0x375e6c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375E68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375E70u;
}
