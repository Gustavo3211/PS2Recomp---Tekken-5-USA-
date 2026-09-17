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

// Function: sub_00240F58
// Address: 0x240f58 - 0x240f88
void sub_00240F58_0x240f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00240F58_0x240f58");
#endif

    switch (ctx->pc) {
        case 0x240f68u: goto label_240f68;
        default: break;
    }

    ctx->pc = 0x240f58u;

    // 0x240f58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x240f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x240f5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x240f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x240f60: 0xc090f96  jal         func_243E58
    ctx->pc = 0x240F60u;
    SET_GPR_U32(ctx, 31, 0x240F68u);
    ctx->pc = 0x243E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E58u, 0x240F60u, 0x240F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240F68u;
label_240f68:
    // 0x240f68: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x240f68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x240f6c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x240F6Cu;
    {
        const bool branch_taken_0x240f6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240F6Cu;
        // 0x240f70: 0x246336c0  addiu       $v1, $v1, 0x36C0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14016));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240f6c) {
            ctx->pc = 0x240F78u;
            goto label_240f78;
        }
    }
    ctx->pc = 0x240F74u;
    // 0x240f74: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x240f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_240f78:
    // 0x240f78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x240f78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240f7c: 0x3e00008  jr          $ra
    ctx->pc = 0x240F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240F7Cu;
        // 0x240f80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240F7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240F84u;
    // 0x240f84: 0x0  nop
    ctx->pc = 0x240f84u;
    // NOP
    ctx->pc = 0x240f88u;
}
