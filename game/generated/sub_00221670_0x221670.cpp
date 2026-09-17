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

// Function: sub_00221670
// Address: 0x221670 - 0x221750
void sub_00221670_0x221670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221670_0x221670");
#endif

    ctx->pc = 0x221670u;

    // 0x221670: 0xc4ab0008  lwc1        $f11, 0x8($a1)
    ctx->pc = 0x221670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x221674: 0xc4ec0008  lwc1        $f12, 0x8($a3)
    ctx->pc = 0x221674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x221678: 0xc4a90000  lwc1        $f9, 0x0($a1)
    ctx->pc = 0x221678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x22167c: 0xc4e70000  lwc1        $f7, 0x0($a3)
    ctx->pc = 0x22167cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x221680: 0x460b60c1  sub.s       $f3, $f12, $f11
    ctx->pc = 0x221680u;
    ctx->f[3] = FPU_SUB_S(ctx->f[12], ctx->f[11]);
    // 0x221684: 0xc4c60000  lwc1        $f6, 0x0($a2)
    ctx->pc = 0x221684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x221688: 0x46074881  sub.s       $f2, $f9, $f7
    ctx->pc = 0x221688u;
    ctx->f[2] = FPU_SUB_S(ctx->f[9], ctx->f[7]);
    // 0x22168c: 0xc4c80008  lwc1        $f8, 0x8($a2)
    ctx->pc = 0x22168cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x221690: 0xc50a0008  lwc1        $f10, 0x8($t0)
    ctx->pc = 0x221690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x221694: 0xc5050000  lwc1        $f5, 0x0($t0)
    ctx->pc = 0x221694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x221698: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x221698u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x22169c: 0x460a3102  mul.s       $f4, $f6, $f10
    ctx->pc = 0x22169cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[6], ctx->f[10]);
    // 0x2216a0: 0x46081082  mul.s       $f2, $f2, $f8
    ctx->pc = 0x2216a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
    // 0x2216a4: 0x46054002  mul.s       $f0, $f8, $f5
    ctx->pc = 0x2216a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[5]);
    // 0x2216a8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2216a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2216ac: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x2216acu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x2216b0: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x2216b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2216b4: 0x46013032  c.eq.s      $f6, $f1
    ctx->pc = 0x2216b4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[6], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2216b8: 0x0  nop
    ctx->pc = 0x2216b8u;
    // NOP
    // 0x2216bc: 0x0  nop
    ctx->pc = 0x2216bcu;
    // NOP
    // 0x2216c0: 0x460018c3  div.s       $f3, $f3, $f0
    ctx->pc = 0x2216c0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[0];
    // 0x2216c4: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2216C4u;
    {
        const bool branch_taken_0x2216c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2216C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2216C4u;
        // 0x2216c8: 0x46032842  mul.s       $f1, $f5, $f3 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2216c4) {
            ctx->pc = 0x2216F0u;
            goto label_2216f0;
        }
    }
    ctx->pc = 0x2216CCu;
    // 0x2216cc: 0x46035002  mul.s       $f0, $f10, $f3
    ctx->pc = 0x2216ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[3]);
    // 0x2216d0: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x2216d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x2216d4: 0x460b0001  sub.s       $f0, $f0, $f11
    ctx->pc = 0x2216d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[11]);
    // 0x2216d8: 0x0  nop
    ctx->pc = 0x2216d8u;
    // NOP
    // 0x2216dc: 0x0  nop
    ctx->pc = 0x2216dcu;
    // NOP
    // 0x2216e0: 0x460800c3  div.s       $f3, $f0, $f8
    ctx->pc = 0x2216e0u;
    if (ctx->f[8] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[3] = ctx->f[0] / ctx->f[8];
    // 0x2216e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2216E4u;
    {
        const bool branch_taken_0x2216e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2216E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2216E4u;
        // 0x2216e8: 0x46033002  mul.s       $f0, $f6, $f3 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2216e4) {
            ctx->pc = 0x221708u;
            goto label_221708;
        }
    }
    ctx->pc = 0x2216ECu;
    // 0x2216ec: 0x0  nop
    ctx->pc = 0x2216ecu;
    // NOP
label_2216f0:
    // 0x2216f0: 0x46013800  add.s       $f0, $f7, $f1
    ctx->pc = 0x2216f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[7], ctx->f[1]);
    // 0x2216f4: 0x46090001  sub.s       $f0, $f0, $f9
    ctx->pc = 0x2216f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[9]);
    // 0x2216f8: 0x0  nop
    ctx->pc = 0x2216f8u;
    // NOP
    // 0x2216fc: 0x0  nop
    ctx->pc = 0x2216fcu;
    // NOP
    // 0x221700: 0x460600c3  div.s       $f3, $f0, $f6
    ctx->pc = 0x221700u;
    if (ctx->f[6] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[3] = ctx->f[0] / ctx->f[6];
    // 0x221704: 0x46033002  mul.s       $f0, $f6, $f3
    ctx->pc = 0x221704u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
label_221708:
    // 0x221708: 0xc78284a4  lwc1        $f2, -0x7B5C($gp)
    ctx->pc = 0x221708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22170c: 0x46013840  add.s       $f1, $f7, $f1
    ctx->pc = 0x22170cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[7], ctx->f[1]);
    // 0x221710: 0x46004900  add.s       $f4, $f9, $f0
    ctx->pc = 0x221710u;
    ctx->f[4] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
    // 0x221714: 0x46012041  sub.s       $f1, $f4, $f1
    ctx->pc = 0x221714u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x221718: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x221718u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x22171c: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x22171cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x221720: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x221720u;
    {
        const bool branch_taken_0x221720 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x221724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221720u;
        // 0x221724: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221720) {
            ctx->pc = 0x22172Cu;
            goto label_22172c;
        }
    }
    ctx->pc = 0x221728u;
    // 0x221728: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x221728u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22172c:
    // 0x22172c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x22172Cu;
    {
        const bool branch_taken_0x22172c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x221730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22172Cu;
        // 0x221730: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22172c) {
            ctx->pc = 0x221748u;
            goto label_221748;
        }
    }
    ctx->pc = 0x221734u;
    // 0x221734: 0x46081802  mul.s       $f0, $f3, $f8
    ctx->pc = 0x221734u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[8]);
    // 0x221738: 0xe4840000  swc1        $f4, 0x0($a0)
    ctx->pc = 0x221738u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x22173c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22173cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x221740: 0x46005800  add.s       $f0, $f11, $f0
    ctx->pc = 0x221740u;
    ctx->f[0] = FPU_ADD_S(ctx->f[11], ctx->f[0]);
    // 0x221744: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x221744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_221748:
    // 0x221748: 0x3e00008  jr          $ra
    ctx->pc = 0x221748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221750u;
}
