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

// Function: sub_00248660
// Address: 0x248660 - 0x248680
void sub_00248660_0x248660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248660_0x248660");
#endif

    switch (ctx->pc) {
        case 0x248670u: goto label_248670;
        default: break;
    }

    ctx->pc = 0x248660u;

    // 0x248660: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x248660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x248664: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x248664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x248668: 0xc09211c  jal         func_248470
    ctx->pc = 0x248668u;
    SET_GPR_U32(ctx, 31, 0x248670u);
    ctx->pc = 0x248470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248470u, 0x248668u, 0x248670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248670u;
label_248670:
    // 0x248670: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x248670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x248674: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x248674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x248678: 0x3e00008  jr          $ra
    ctx->pc = 0x248678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24867Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248678u;
        // 0x24867c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248680u;
}
