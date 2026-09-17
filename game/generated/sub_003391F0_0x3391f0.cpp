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

// Function: sub_003391F0
// Address: 0x3391f0 - 0x339298
void sub_003391F0_0x3391f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003391F0_0x3391f0");
#endif

    switch (ctx->pc) {
        case 0x339288u: goto label_339288;
        default: break;
    }

    ctx->pc = 0x3391f0u;

    // 0x3391f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3391f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3391f4: 0x2483fc40  addiu       $v1, $a0, -0x3C0
    ctx->pc = 0x3391f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966336));
    // 0x3391f8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3391f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3391fc: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x3391fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339200: 0xd898fc80  lqc2        $vf24, -0x380($a0)
    ctx->pc = 0x339200u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 4294966400)));
    // 0x339204: 0xd899fc90  lqc2        $vf25, -0x370($a0)
    ctx->pc = 0x339204u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 4294966416)));
    // 0x339208: 0xd89afca0  lqc2        $vf26, -0x360($a0)
    ctx->pc = 0x339208u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 4294966432)));
    // 0x33920c: 0xd89bfcb0  lqc2        $vf27, -0x350($a0)
    ctx->pc = 0x33920cu;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 4294966448)));
    // 0x339210: 0xf8580000  sqc2        $vf24, 0x0($v0)
    ctx->pc = 0x339210u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x339214: 0xf8590010  sqc2        $vf25, 0x10($v0)
    ctx->pc = 0x339214u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[25]));
    // 0x339218: 0xf85a0020  sqc2        $vf26, 0x20($v0)
    ctx->pc = 0x339218u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x33921c: 0xf85b0030  sqc2        $vf27, 0x30($v0)
    ctx->pc = 0x33921cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[27]));
    // 0x339220: 0xc7a2003c  lwc1        $f2, 0x3C($sp)
    ctx->pc = 0x339220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x339224: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x339224u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x339228: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x339228u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33922c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x33922Cu;
    {
        const bool branch_taken_0x33922c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x339230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33922Cu;
        // 0x339230: 0xc7a00038  lwc1        $f0, 0x38($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33922c) {
            ctx->pc = 0x339248u;
            goto label_339248;
        }
    }
    ctx->pc = 0x339234u;
    // 0x339234: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x339234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x339238: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x339238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33923c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x33923cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x339240: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x339240u;
    {
        const bool branch_taken_0x339240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339240u;
        // 0x339244: 0x46020840  add.s       $f1, $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x339240) {
            ctx->pc = 0x339254u;
            goto label_339254;
        }
    }
    ctx->pc = 0x339248u;
label_339248:
    // 0x339248: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x339248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33924c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x33924cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x339250: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x339250u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_339254:
    // 0x339254: 0x0  nop
    ctx->pc = 0x339254u;
    // NOP
    // 0x339258: 0x0  nop
    ctx->pc = 0x339258u;
    // NOP
    // 0x33925c: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x33925cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[1];
    // 0x339260: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x339260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x339264: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x339264u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x339268: 0xe7a1004c  swc1        $f1, 0x4C($sp)
    ctx->pc = 0x339268u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x33926c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x33926cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x339270: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x339270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x339274: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x339274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x339278: 0xdbb80040  lqc2        $vf24, 0x40($sp)
    ctx->pc = 0x339278u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33927c: 0xf8980000  sqc2        $vf24, 0x0($a0)
    ctx->pc = 0x33927cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x339280: 0xc0ce4a6  jal         func_339298
    ctx->pc = 0x339280u;
    SET_GPR_U32(ctx, 31, 0x339288u);
    ctx->pc = 0x339284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339280u;
    // 0x339284: 0x246403d0  addiu       $a0, $v1, 0x3D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339298u, 0x339280u, 0x339288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339288u;
label_339288:
    // 0x339288: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x339288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x33928c: 0x3e00008  jr          $ra
    ctx->pc = 0x33928Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33928Cu;
        // 0x339290: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33928Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x339294u;
    // 0x339294: 0x0  nop
    ctx->pc = 0x339294u;
    // NOP
    ctx->pc = 0x339298u;
}
