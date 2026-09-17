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

// Function: sub_0023C4D8
// Address: 0x23c4d8 - 0x23c538
void sub_0023C4D8_0x23c4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023C4D8_0x23c4d8");
#endif

    ctx->pc = 0x23c4d8u;

    // 0x23c4d8: 0x460e6301  sub.s       $f12, $f12, $f14
    ctx->pc = 0x23c4d8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[14]);
    // 0x23c4dc: 0xc780875c  lwc1        $f0, -0x78A4($gp)
    ctx->pc = 0x23c4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23c4e0: 0x460f6b41  sub.s       $f13, $f13, $f15
    ctx->pc = 0x23c4e0u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[15]);
    // 0x23c4e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23c4e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23c4e8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x23c4e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x23c4ec: 0x460c6302  mul.s       $f12, $f12, $f12
    ctx->pc = 0x23c4ecu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x23c4f0: 0x460d6b42  mul.s       $f13, $f13, $f13
    ctx->pc = 0x23c4f0u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x23c4f4: 0x460d6040  add.s       $f1, $f12, $f13
    ctx->pc = 0x23c4f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[13]);
    // 0x23c4f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23c4f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23c4fc: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x23C4FCu;
    {
        const bool branch_taken_0x23c4fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23c4fc) {
            ctx->pc = 0x23C52Cu;
            goto label_23c52c;
        }
    }
    ctx->pc = 0x23C504u;
    // 0x23c504: 0xc7808760  lwc1        $f0, -0x78A0($gp)
    ctx->pc = 0x23c504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23c508: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x23c508u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x23c50c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x23c50cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23c510: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x23C510u;
    {
        const bool branch_taken_0x23c510 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23c510) {
            ctx->pc = 0x23C52Cu;
            goto label_23c52c;
        }
    }
    ctx->pc = 0x23C518u;
    // 0x23c518: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x23c518u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x23c51c: 0xc7808764  lwc1        $f0, -0x789C($gp)
    ctx->pc = 0x23c51cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23c520: 0x0  nop
    ctx->pc = 0x23c520u;
    // NOP
    // 0x23c524: 0x0  nop
    ctx->pc = 0x23c524u;
    // NOP
    // 0x23c528: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x23c528u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[2] = ctx->f[1] / ctx->f[0];
label_23c52c:
    // 0x23c52c: 0x3e00008  jr          $ra
    ctx->pc = 0x23C52Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C52Cu;
        // 0x23c530: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C52Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C534u;
    // 0x23c534: 0x0  nop
    ctx->pc = 0x23c534u;
    // NOP
    ctx->pc = 0x23c538u;
}
