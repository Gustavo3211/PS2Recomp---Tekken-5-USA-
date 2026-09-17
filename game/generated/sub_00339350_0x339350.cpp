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

// Function: sub_00339350
// Address: 0x339350 - 0x3393e0
void sub_00339350_0x339350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00339350_0x339350");
#endif

    ctx->pc = 0x339350u;

    // 0x339350: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x339350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x339354: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x339354u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339358: 0xd898fc60  lqc2        $vf24, -0x3A0($a0)
    ctx->pc = 0x339358u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 4294966368)));
    // 0x33935c: 0xd899fc70  lqc2        $vf25, -0x390($a0)
    ctx->pc = 0x33935cu;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 4294966384)));
    // 0x339360: 0xd89afc80  lqc2        $vf26, -0x380($a0)
    ctx->pc = 0x339360u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 4294966400)));
    // 0x339364: 0xd89bfc90  lqc2        $vf27, -0x370($a0)
    ctx->pc = 0x339364u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 4294966416)));
    // 0x339368: 0xf8580000  sqc2        $vf24, 0x0($v0)
    ctx->pc = 0x339368u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x33936c: 0xf8590010  sqc2        $vf25, 0x10($v0)
    ctx->pc = 0x33936cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[25]));
    // 0x339370: 0xf85a0020  sqc2        $vf26, 0x20($v0)
    ctx->pc = 0x339370u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x339374: 0xf85b0030  sqc2        $vf27, 0x30($v0)
    ctx->pc = 0x339374u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[27]));
    // 0x339378: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x339378u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33937c: 0xc7a2003c  lwc1        $f2, 0x3C($sp)
    ctx->pc = 0x33937cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x339380: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x339380u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x339384: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x339384u;
    {
        const bool branch_taken_0x339384 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x339388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339384u;
        // 0x339388: 0xc7a00038  lwc1        $f0, 0x38($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x339384) {
            ctx->pc = 0x3393A0u;
            goto label_3393a0;
        }
    }
    ctx->pc = 0x33938Cu;
    // 0x33938c: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x33938cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x339390: 0xc7a2002c  lwc1        $f2, 0x2C($sp)
    ctx->pc = 0x339390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x339394: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x339394u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x339398: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x339398u;
    {
        const bool branch_taken_0x339398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33939Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339398u;
        // 0x33939c: 0x46020841  sub.s       $f1, $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x339398) {
            ctx->pc = 0x3393A8u;
            goto label_3393a8;
        }
    }
    ctx->pc = 0x3393A0u;
label_3393a0:
    // 0x3393a0: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x3393a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3393a4: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x3393a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_3393a8:
    // 0x3393a8: 0x0  nop
    ctx->pc = 0x3393a8u;
    // NOP
    // 0x3393ac: 0x0  nop
    ctx->pc = 0x3393acu;
    // NOP
    // 0x3393b0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3393b0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x3393b4: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x3393b4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x3393b8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3393b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x3393bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3393bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3393c0: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x3393c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x3393c4: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x3393c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x3393c8: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x3393c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x3393cc: 0xe7a1004c  swc1        $f1, 0x4C($sp)
    ctx->pc = 0x3393ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x3393d0: 0xdbb80040  lqc2        $vf24, 0x40($sp)
    ctx->pc = 0x3393d0u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3393d4: 0xf8980000  sqc2        $vf24, 0x0($a0)
    ctx->pc = 0x3393d4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x3393d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3393D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3393DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3393D8u;
        // 0x3393dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3393D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3393E0u;
}
