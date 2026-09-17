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

// Function: sub_002B9438
// Address: 0x2b9438 - 0x2b9470
void sub_002B9438_0x2b9438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B9438_0x2b9438");
#endif

    switch (ctx->pc) {
        case 0x2b9440u: goto label_2b9440;
        default: break;
    }

    ctx->pc = 0x2b9438u;

    // 0x2b9438: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9438u;
        // 0x2b943c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9440u;
label_2b9440:
    // 0x2b9440: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x2b9440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b9444: 0xc78090c8  lwc1        $f0, -0x6F38($gp)
    ctx->pc = 0x2b9444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b9448: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2b9448u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b944c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2B944Cu;
    {
        const bool branch_taken_0x2b944c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B9450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B944Cu;
        // 0x2b9450: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b944c) {
            ctx->pc = 0x2B9468u;
            goto label_2b9468;
        }
    }
    ctx->pc = 0x2B9454u;
    // 0x2b9454: 0xc78090cc  lwc1        $f0, -0x6F34($gp)
    ctx->pc = 0x2b9454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b9458: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2b9458u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b945c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2B945Cu;
    {
        const bool branch_taken_0x2b945c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B9460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B945Cu;
        // 0x2b9460: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b945c) {
            ctx->pc = 0x2B9468u;
            goto label_2b9468;
        }
    }
    ctx->pc = 0x2B9464u;
    // 0x2b9464: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b9464u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b9468:
    // 0x2b9468: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9470u;
}
