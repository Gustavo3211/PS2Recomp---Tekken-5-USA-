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

// Function: sub_00240E50
// Address: 0x240e50 - 0x240e88
void sub_00240E50_0x240e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00240E50_0x240e50");
#endif

    switch (ctx->pc) {
        case 0x240e60u: goto label_240e60;
        default: break;
    }

    ctx->pc = 0x240e50u;

    // 0x240e50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x240e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x240e54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x240e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x240e58: 0xc090f96  jal         func_243E58
    ctx->pc = 0x240E58u;
    SET_GPR_U32(ctx, 31, 0x240E60u);
    ctx->pc = 0x243E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E58u, 0x240E58u, 0x240E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240E60u;
label_240e60:
    // 0x240e60: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x240e60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x240e64: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x240E64u;
    {
        const bool branch_taken_0x240e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240E64u;
        // 0x240e68: 0x246436c0  addiu       $a0, $v1, 0x36C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 14016));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240e64) {
            ctx->pc = 0x240E7Cu;
            goto label_240e7c;
        }
    }
    ctx->pc = 0x240E6Cu;
    // 0x240e6c: 0x8c8300d0  lw          $v1, 0xD0($a0)
    ctx->pc = 0x240e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
    // 0x240e70: 0x248200c0  addiu       $v0, $a0, 0xC0
    ctx->pc = 0x240e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    // 0x240e74: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x240e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x240e78: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x240e78u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_240e7c:
    // 0x240e7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x240e7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240e80: 0x3e00008  jr          $ra
    ctx->pc = 0x240E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240E80u;
        // 0x240e84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240E80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240E88u;
}
