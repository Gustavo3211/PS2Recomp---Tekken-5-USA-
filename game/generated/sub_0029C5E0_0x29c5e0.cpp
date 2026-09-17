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

// Function: sub_0029C5E0
// Address: 0x29c5e0 - 0x29c630
void sub_0029C5E0_0x29c5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C5E0_0x29c5e0");
#endif

    ctx->pc = 0x29c5e0u;

    // 0x29c5e0: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x29c5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x29c5e4: 0xc7819064  lwc1        $f1, -0x6F9C($gp)
    ctx->pc = 0x29c5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29c5e8: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x29c5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c5ec: 0xc7829068  lwc1        $f2, -0x6F98($gp)
    ctx->pc = 0x29c5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29c5f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x29c5f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29c5f4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x29c5f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x29c5f8: 0x8c830150  lw          $v1, 0x150($a0)
    ctx->pc = 0x29c5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x29c5fc: 0xc46000d4  lwc1        $f0, 0xD4($v1)
    ctx->pc = 0x29c5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c600: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x29c600u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c604: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x29C604u;
    {
        const bool branch_taken_0x29c604 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29c604) {
            ctx->pc = 0x29C628u;
            goto label_29c628;
        }
    }
    ctx->pc = 0x29C60Cu;
    // 0x29c60c: 0x8c6200d0  lw          $v0, 0xD0($v1)
    ctx->pc = 0x29c60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 208)));
    // 0x29c610: 0x3c01c212  lui         $at, 0xC212
    ctx->pc = 0x29c610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49682 << 16));
    // 0x29c614: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29c614u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29c618: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29c618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29c61c: 0xac6200d0  sw          $v0, 0xD0($v1)
    ctx->pc = 0x29c61cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 208), GPR_U32(ctx, 2));
    // 0x29c620: 0x8c830150  lw          $v1, 0x150($a0)
    ctx->pc = 0x29c620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x29c624: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x29c624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
label_29c628:
    // 0x29c628: 0x3e00008  jr          $ra
    ctx->pc = 0x29C628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C630u;
}
