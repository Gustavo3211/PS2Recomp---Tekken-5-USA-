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

// Function: sub_0029A388
// Address: 0x29a388 - 0x29a3d8
void sub_0029A388_0x29a388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A388_0x29a388");
#endif

    ctx->pc = 0x29a388u;

    // 0x29a388: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x29a388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x29a38c: 0xc7819030  lwc1        $f1, -0x6FD0($gp)
    ctx->pc = 0x29a38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a390: 0xc4400104  lwc1        $f0, 0x104($v0)
    ctx->pc = 0x29a390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a394: 0xc7829034  lwc1        $f2, -0x6FCC($gp)
    ctx->pc = 0x29a394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29a398: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x29a398u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29a39c: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x29a39cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x29a3a0: 0x8c830150  lw          $v1, 0x150($a0)
    ctx->pc = 0x29a3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x29a3a4: 0xc4600104  lwc1        $f0, 0x104($v1)
    ctx->pc = 0x29a3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a3a8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x29a3a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29a3ac: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x29A3ACu;
    {
        const bool branch_taken_0x29a3ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29a3ac) {
            ctx->pc = 0x29A3D0u;
            goto label_29a3d0;
        }
    }
    ctx->pc = 0x29A3B4u;
    // 0x29a3b4: 0x8c620100  lw          $v0, 0x100($v1)
    ctx->pc = 0x29a3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x29a3b8: 0x3c014212  lui         $at, 0x4212
    ctx->pc = 0x29a3b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16914 << 16));
    // 0x29a3bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29a3bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29a3c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x29a3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x29a3c4: 0xac620100  sw          $v0, 0x100($v1)
    ctx->pc = 0x29a3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 2));
    // 0x29a3c8: 0x8c830150  lw          $v1, 0x150($a0)
    ctx->pc = 0x29a3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x29a3cc: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x29a3ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
label_29a3d0:
    // 0x29a3d0: 0x3e00008  jr          $ra
    ctx->pc = 0x29A3D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A3D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A3D8u;
}
