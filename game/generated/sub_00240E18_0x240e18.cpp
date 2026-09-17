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

// Function: sub_00240E18
// Address: 0x240e18 - 0x240e50
void sub_00240E18_0x240e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00240E18_0x240e18");
#endif

    switch (ctx->pc) {
        case 0x240e28u: goto label_240e28;
        default: break;
    }

    ctx->pc = 0x240e18u;

    // 0x240e18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x240e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x240e1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x240e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x240e20: 0xc090f96  jal         func_243E58
    ctx->pc = 0x240E20u;
    SET_GPR_U32(ctx, 31, 0x240E28u);
    ctx->pc = 0x243E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E58u, 0x240E20u, 0x240E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240E28u;
label_240e28:
    // 0x240e28: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x240e28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x240e2c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x240E2Cu;
    {
        const bool branch_taken_0x240e2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240E2Cu;
        // 0x240e30: 0x246436c0  addiu       $a0, $v1, 0x36C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 14016));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240e2c) {
            ctx->pc = 0x240E44u;
            goto label_240e44;
        }
    }
    ctx->pc = 0x240E34u;
    // 0x240e34: 0x8c8300d0  lw          $v1, 0xD0($a0)
    ctx->pc = 0x240e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
    // 0x240e38: 0x248200b0  addiu       $v0, $a0, 0xB0
    ctx->pc = 0x240e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
    // 0x240e3c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x240e3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x240e40: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x240e40u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_240e44:
    // 0x240e44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x240e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240e48: 0x3e00008  jr          $ra
    ctx->pc = 0x240E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240E48u;
        // 0x240e4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240E48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240E50u;
}
