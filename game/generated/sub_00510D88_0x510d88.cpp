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

// Function: sub_00510D88
// Address: 0x510d88 - 0x510db8
void sub_00510D88_0x510d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00510D88_0x510d88");
#endif

    switch (ctx->pc) {
        case 0x510d98u: goto label_510d98;
        default: break;
    }

    ctx->pc = 0x510d88u;

    // 0x510d88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x510d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x510d8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x510d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x510d90: 0xc124620  jal         func_491880
    ctx->pc = 0x510D90u;
    SET_GPR_U32(ctx, 31, 0x510D98u);
    ctx->pc = 0x491880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491880u, 0x510D90u, 0x510D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x510D98u;
label_510d98:
    // 0x510d98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x510d98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x510d9c: 0x24031234  addiu       $v1, $zero, 0x1234
    ctx->pc = 0x510d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4660));
    // 0x510da0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x510da0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x510da4: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x510da4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x510da8: 0xa423e80a  sh          $v1, -0x17F6($at)
    ctx->pc = 0x510da8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294961162), (uint16_t)GPR_U32(ctx, 3));
    // 0x510dac: 0x3e00008  jr          $ra
    ctx->pc = 0x510DACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x510DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x510DACu;
        // 0x510db0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x510DACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x510DB4u;
    // 0x510db4: 0x0  nop
    ctx->pc = 0x510db4u;
    // NOP
    ctx->pc = 0x510db8u;
}
