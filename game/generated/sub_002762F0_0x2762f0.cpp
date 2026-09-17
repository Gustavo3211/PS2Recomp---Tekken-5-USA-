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

// Function: sub_002762F0
// Address: 0x2762f0 - 0x276348
void sub_002762F0_0x2762f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002762F0_0x2762f0");
#endif

    ctx->pc = 0x2762f0u;

    // 0x2762f0: 0xa48502b0  sh          $a1, 0x2B0($a0)
    ctx->pc = 0x2762f0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 688), (uint16_t)GPR_U32(ctx, 5));
    // 0x2762f4: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x2762f4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2762f8: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2762f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2762fc: 0x8c820898  lw          $v0, 0x898($a0)
    ctx->pc = 0x2762fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2200)));
    // 0x276300: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x276300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276304: 0xc442004c  lwc1        $f2, 0x4C($v0)
    ctx->pc = 0x276304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x276308: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x276308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27630c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x27630cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x276310: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x276310u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x276314: 0x0  nop
    ctx->pc = 0x276314u;
    // NOP
    // 0x276318: 0x0  nop
    ctx->pc = 0x276318u;
    // NOP
    // 0x27631c: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x27631cu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x276320: 0xe48002e8  swc1        $f0, 0x2E8($a0)
    ctx->pc = 0x276320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 744), bits); }
    // 0x276324: 0xc4420050  lwc1        $f2, 0x50($v0)
    ctx->pc = 0x276324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x276328: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x276328u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x27632c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x27632cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x276330: 0x0  nop
    ctx->pc = 0x276330u;
    // NOP
    // 0x276334: 0x0  nop
    ctx->pc = 0x276334u;
    // NOP
    // 0x276338: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x276338u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[3];
    // 0x27633c: 0x3e00008  jr          $ra
    ctx->pc = 0x27633Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27633Cu;
        // 0x276340: 0xe48102ec  swc1        $f1, 0x2EC($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 748), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27633Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276344u;
    // 0x276344: 0x0  nop
    ctx->pc = 0x276344u;
    // NOP
    ctx->pc = 0x276348u;
}
