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

// Function: sub_00249288
// Address: 0x249288 - 0x2492a8
void sub_00249288_0x249288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249288_0x249288");
#endif

    switch (ctx->pc) {
        case 0x24929cu: goto label_24929c;
        default: break;
    }

    ctx->pc = 0x249288u;

    // 0x249288: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x249288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24928c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x24928cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249290: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x249290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x249294: 0xc0921b2  jal         func_2486C8
    ctx->pc = 0x249294u;
    SET_GPR_U32(ctx, 31, 0x24929Cu);
    ctx->pc = 0x249298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249294u;
    // 0x249298: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2486C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2486C8u, 0x249294u, 0x24929Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24929Cu;
label_24929c:
    // 0x24929c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24929cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2492a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2492A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2492A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2492A0u;
        // 0x2492a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2492A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2492A8u;
}
