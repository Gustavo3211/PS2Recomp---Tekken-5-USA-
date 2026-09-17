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

// Function: sub_0029A338
// Address: 0x29a338 - 0x29a388
void sub_0029A338_0x29a338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A338_0x29a338");
#endif

    ctx->pc = 0x29a338u;

    // 0x29a338: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x29a338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x29a33c: 0xc7819028  lwc1        $f1, -0x6FD8($gp)
    ctx->pc = 0x29a33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a340: 0xc4400104  lwc1        $f0, 0x104($v0)
    ctx->pc = 0x29a340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a344: 0xc782902c  lwc1        $f2, -0x6FD4($gp)
    ctx->pc = 0x29a344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29a348: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x29a348u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29a34c: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x29a34cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x29a350: 0x8c830150  lw          $v1, 0x150($a0)
    ctx->pc = 0x29a350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x29a354: 0xc4600104  lwc1        $f0, 0x104($v1)
    ctx->pc = 0x29a354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a358: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x29a358u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29a35c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x29A35Cu;
    {
        const bool branch_taken_0x29a35c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29a35c) {
            ctx->pc = 0x29A380u;
            goto label_29a380;
        }
    }
    ctx->pc = 0x29A364u;
    // 0x29a364: 0x8c620100  lw          $v0, 0x100($v1)
    ctx->pc = 0x29a364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x29a368: 0x3c01c212  lui         $at, 0xC212
    ctx->pc = 0x29a368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49682 << 16));
    // 0x29a36c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29a36cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29a370: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29a370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29a374: 0xac620100  sw          $v0, 0x100($v1)
    ctx->pc = 0x29a374u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 2));
    // 0x29a378: 0x8c830150  lw          $v1, 0x150($a0)
    ctx->pc = 0x29a378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x29a37c: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x29a37cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
label_29a380:
    // 0x29a380: 0x3e00008  jr          $ra
    ctx->pc = 0x29A380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A388u;
}
