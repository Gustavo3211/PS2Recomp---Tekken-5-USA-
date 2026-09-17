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

// Function: sub_002B82C8
// Address: 0x2b82c8 - 0x2b8340
void sub_002B82C8_0x2b82c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B82C8_0x2b82c8");
#endif

    ctx->pc = 0x2b82c8u;

    // 0x2b82c8: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x2b82c8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b82cc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2b82ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2b82d0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2b82d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2b82d4: 0x44861800  mtc1        $a2, $f3
    ctx->pc = 0x2b82d4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b82d8: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2b82d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2b82dc: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x2b82dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x2b82e0: 0xe48c0008  swc1        $f12, 0x8($a0)
    ctx->pc = 0x2b82e0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2b82e4: 0xe48d000c  swc1        $f13, 0xC($a0)
    ctx->pc = 0x2b82e4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2b82e8: 0x46026082  mul.s       $f2, $f12, $f2
    ctx->pc = 0x2b82e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x2b82ec: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2b82ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2b82f0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b82f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b82f4: 0x460368c2  mul.s       $f3, $f13, $f3
    ctx->pc = 0x2b82f4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[13], ctx->f[3]);
    // 0x2b82f8: 0xe4820010  swc1        $f2, 0x10($a0)
    ctx->pc = 0x2b82f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2b82fc: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2b82fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2b8300: 0xe4830014  swc1        $f3, 0x14($a0)
    ctx->pc = 0x2b8300u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x2b8304: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x2b8304u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2b8308: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x2b8308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b830c: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x2b830cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x2b8310: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x2b8310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b8314: 0xe481001c  swc1        $f1, 0x1C($a0)
    ctx->pc = 0x2b8314u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x2b8318: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x2b8318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b831c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2b831cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2b8320: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x2b8320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x2b8324: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x2b8324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b8328: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x2b8328u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x2b832c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2b832cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2b8330: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x2b8330u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x2b8334: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8334u;
        // 0x2b8338: 0xe4810024  swc1        $f1, 0x24($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B833Cu;
    // 0x2b833c: 0x0  nop
    ctx->pc = 0x2b833cu;
    // NOP
    ctx->pc = 0x2b8340u;
}
