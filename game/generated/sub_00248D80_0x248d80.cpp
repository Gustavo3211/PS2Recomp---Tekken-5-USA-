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

// Function: sub_00248D80
// Address: 0x248d80 - 0x248db8
void sub_00248D80_0x248d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248D80_0x248d80");
#endif

    switch (ctx->pc) {
        case 0x248d90u: goto label_248d90;
        default: break;
    }

    ctx->pc = 0x248d80u;

    // 0x248d80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x248d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x248d84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x248d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x248d88: 0xc092240  jal         func_248900
    ctx->pc = 0x248D88u;
    SET_GPR_U32(ctx, 31, 0x248D90u);
    ctx->pc = 0x248D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248D88u;
    // 0x248d8c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248900u, 0x248D88u, 0x248D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248D90u;
label_248d90:
    // 0x248d90: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x248d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x248d94: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x248d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x248d98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x248d98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x248d9c: 0x2c620003  sltiu       $v0, $v1, 0x3
    ctx->pc = 0x248d9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x248da0: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x248da0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x248da4: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x248da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x248da8: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x248da8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x248dac: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x248dacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248db0: 0x3e00008  jr          $ra
    ctx->pc = 0x248DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248DB0u;
        // 0x248db4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248DB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248DB8u;
}
