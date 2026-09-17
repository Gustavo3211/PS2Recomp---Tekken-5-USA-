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

// Function: sub_00243088
// Address: 0x243088 - 0x243110
void sub_00243088_0x243088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243088_0x243088");
#endif

    ctx->pc = 0x243088u;

    // 0x243088: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x243088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x24308c: 0xc7848830  lwc1        $f4, -0x77D0($gp)
    ctx->pc = 0x24308cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x243090: 0xc4425e54  lwc1        $f2, 0x5E54($v0)
    ctx->pc = 0x243090u;
    { uint32_t bits = FAST_READ32(0x165E54u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x243094: 0xc7838834  lwc1        $f3, -0x77CC($gp)
    ctx->pc = 0x243094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x243098: 0x0  nop
    ctx->pc = 0x243098u;
    // NOP
    // 0x24309c: 0x0  nop
    ctx->pc = 0x24309cu;
    // NOP
    // 0x2430a0: 0x46041043  div.s       $f1, $f2, $f4
    ctx->pc = 0x2430a0u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[4];
    // 0x2430a4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2430a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2430a8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2430a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2430ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2430acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2430b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2430b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2430b4: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2430b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2430b8: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2430b8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2430bc: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x2430bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2430c0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2430C0u;
    {
        const bool branch_taken_0x2430c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2430c0) {
            ctx->pc = 0x2430D0u;
            goto label_2430d0;
        }
    }
    ctx->pc = 0x2430C8u;
    // 0x2430c8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2430C8u;
    {
        const bool branch_taken_0x2430c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2430CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2430C8u;
        // 0x2430cc: 0x46041081  sub.s       $f2, $f2, $f4 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2430c8) {
            ctx->pc = 0x2430E0u;
            goto label_2430e0;
        }
    }
    ctx->pc = 0x2430D0u;
label_2430d0:
    // 0x2430d0: 0xc7808838  lwc1        $f0, -0x77C8($gp)
    ctx->pc = 0x2430d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2430d4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2430d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2430d8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2430D8u;
    {
        const bool branch_taken_0x2430d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2430d8) {
            ctx->pc = 0x2430DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2430D8u;
            // 0x2430dc: 0x46041080  add.s       $f2, $f2, $f4 (Delay Slot)
            ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2430E0u;
            goto label_2430e0;
        }
    }
    ctx->pc = 0x2430E0u;
label_2430e0:
    // 0x2430e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2430e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2430e4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2430e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2430e8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2430E8u;
    {
        const bool branch_taken_0x2430e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2430e8) {
            ctx->pc = 0x2430F8u;
            goto label_2430f8;
        }
    }
    ctx->pc = 0x2430F0u;
    // 0x2430f0: 0xc780883c  lwc1        $f0, -0x77C4($gp)
    ctx->pc = 0x2430f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2430f4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2430f4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2430f8:
    // 0x2430f8: 0xc7808840  lwc1        $f0, -0x77C0($gp)
    ctx->pc = 0x2430f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2430fc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2430fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x243100: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x243100u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x243104: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x243104u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x243108: 0x3e00008  jr          $ra
    ctx->pc = 0x243108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x243110u;
}
