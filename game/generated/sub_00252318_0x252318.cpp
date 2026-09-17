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

// Function: sub_00252318
// Address: 0x252318 - 0x2523a8
void sub_00252318_0x252318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252318_0x252318");
#endif

    ctx->pc = 0x252318u;

    // 0x252318: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x252318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25231c: 0xc4a10040  lwc1        $f1, 0x40($a1)
    ctx->pc = 0x25231cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252320: 0x84a2004e  lh          $v0, 0x4E($a1)
    ctx->pc = 0x252320u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 78)));
    // 0x252324: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x252324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x252328: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x252328u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x25232c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x25232cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x252330: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x252330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252334: 0xe4800034  swc1        $f0, 0x34($a0)
    ctx->pc = 0x252334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x252338: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x252338u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x25233c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x25233cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252340: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x252340u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x252344: 0xe4800038  swc1        $f0, 0x38($a0)
    ctx->pc = 0x252344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x252348: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x252348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25234c: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x25234cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x252350: 0xe4810040  swc1        $f1, 0x40($a0)
    ctx->pc = 0x252350u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x252354: 0xc4a20038  lwc1        $f2, 0x38($a1)
    ctx->pc = 0x252354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x252358: 0xc4a00030  lwc1        $f0, 0x30($a1)
    ctx->pc = 0x252358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25235c: 0x46031140  add.s       $f5, $f2, $f3
    ctx->pc = 0x25235cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x252360: 0xc4a10034  lwc1        $f1, 0x34($a1)
    ctx->pc = 0x252360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252364: 0x46030100  add.s       $f4, $f0, $f3
    ctx->pc = 0x252364u;
    ctx->f[4] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x252368: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x252368u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x25236c: 0xe4810028  swc1        $f1, 0x28($a0)
    ctx->pc = 0x25236cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x252370: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x252370u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x252374: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x252374u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x252378: 0xe485002c  swc1        $f5, 0x2C($a0)
    ctx->pc = 0x252378u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x25237c: 0xe4840024  swc1        $f4, 0x24($a0)
    ctx->pc = 0x25237cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x252380: 0xe4820014  swc1        $f2, 0x14($a0)
    ctx->pc = 0x252380u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x252384: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x252384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x252388: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x252388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x25238c: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x25238cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x252390: 0xe484000c  swc1        $f4, 0xC($a0)
    ctx->pc = 0x252390u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x252394: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x252394u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x252398: 0xe481001c  swc1        $f1, 0x1C($a0)
    ctx->pc = 0x252398u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x25239c: 0x3e00008  jr          $ra
    ctx->pc = 0x25239Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2523A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25239Cu;
        // 0x2523a0: 0xe4850020  swc1        $f5, 0x20($a0) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25239Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2523A4u;
    // 0x2523a4: 0x0  nop
    ctx->pc = 0x2523a4u;
    // NOP
    ctx->pc = 0x2523a8u;
}
