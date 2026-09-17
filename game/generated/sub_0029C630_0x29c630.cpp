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

// Function: sub_0029C630
// Address: 0x29c630 - 0x29c680
void sub_0029C630_0x29c630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C630_0x29c630");
#endif

    ctx->pc = 0x29c630u;

    // 0x29c630: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x29c630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x29c634: 0xc781906c  lwc1        $f1, -0x6F94($gp)
    ctx->pc = 0x29c634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29c638: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x29c638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c63c: 0xc7829070  lwc1        $f2, -0x6F90($gp)
    ctx->pc = 0x29c63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29c640: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x29c640u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29c644: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x29c644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x29c648: 0x8c830150  lw          $v1, 0x150($a0)
    ctx->pc = 0x29c648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x29c64c: 0xc46000d4  lwc1        $f0, 0xD4($v1)
    ctx->pc = 0x29c64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c650: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x29c650u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c654: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x29C654u;
    {
        const bool branch_taken_0x29c654 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29c654) {
            ctx->pc = 0x29C678u;
            goto label_29c678;
        }
    }
    ctx->pc = 0x29C65Cu;
    // 0x29c65c: 0x8c6200d0  lw          $v0, 0xD0($v1)
    ctx->pc = 0x29c65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 208)));
    // 0x29c660: 0x3c014212  lui         $at, 0x4212
    ctx->pc = 0x29c660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16914 << 16));
    // 0x29c664: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29c664u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29c668: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x29c668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x29c66c: 0xac6200d0  sw          $v0, 0xD0($v1)
    ctx->pc = 0x29c66cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 208), GPR_U32(ctx, 2));
    // 0x29c670: 0x8c830150  lw          $v1, 0x150($a0)
    ctx->pc = 0x29c670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x29c674: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x29c674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
label_29c678:
    // 0x29c678: 0x3e00008  jr          $ra
    ctx->pc = 0x29C678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C680u;
}
