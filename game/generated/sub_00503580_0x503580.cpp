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

// Function: sub_00503580
// Address: 0x503580 - 0x5035a8
void sub_00503580_0x503580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00503580_0x503580");
#endif

    switch (ctx->pc) {
        case 0x503590u: goto label_503590;
        default: break;
    }

    ctx->pc = 0x503580u;

    // 0x503580: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x503580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x503584: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x503584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x503588: 0xc122252  jal         func_488948
    ctx->pc = 0x503588u;
    SET_GPR_U32(ctx, 31, 0x503590u);
    ctx->pc = 0x488948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488948u, 0x503588u, 0x503590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x503590u;
label_503590:
    // 0x503590: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x503590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x503594: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x503594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x503598: 0x8c62cfb4  lw          $v0, -0x304C($v1)
    ctx->pc = 0x503598u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x56CFB4u));
    // 0x50359c: 0x3e00008  jr          $ra
    ctx->pc = 0x50359Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5035A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50359Cu;
        // 0x5035a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50359Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x5035A4u;
    // 0x5035a4: 0x0  nop
    ctx->pc = 0x5035a4u;
    // NOP
    ctx->pc = 0x5035a8u;
}
