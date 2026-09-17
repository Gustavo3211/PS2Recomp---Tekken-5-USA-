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

// Function: sub_00230A88
// Address: 0x230a88 - 0x230b20
void sub_00230A88_0x230a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230A88_0x230a88");
#endif

    switch (ctx->pc) {
        case 0x230a9cu: goto label_230a9c;
        case 0x230ac4u: goto label_230ac4;
        case 0x230b10u: goto label_230b10;
        default: break;
    }

    ctx->pc = 0x230a88u;

    // 0x230a88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x230a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x230a8c: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x230a8cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x230a90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x230a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x230a94: 0xc08c218  jal         func_230860
    ctx->pc = 0x230A94u;
    SET_GPR_U32(ctx, 31, 0x230A9Cu);
    ctx->pc = 0x230A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230A94u;
    // 0x230a98: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230860u, 0x230A94u, 0x230A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230A9Cu;
label_230a9c:
    // 0x230a9c: 0x3c014780  lui         $at, 0x4780
    ctx->pc = 0x230a9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18304 << 16));
    // 0x230aa0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x230aa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x230aa4: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x230aa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x230aa8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x230aa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x230aac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x230aacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x230ab0: 0x0  nop
    ctx->pc = 0x230ab0u;
    // NOP
    // 0x230ab4: 0x0  nop
    ctx->pc = 0x230ab4u;
    // NOP
    // 0x230ab8: 0x46020503  div.s       $f20, $f0, $f2
    ctx->pc = 0x230ab8u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[20] = ctx->f[0] / ctx->f[2];
    // 0x230abc: 0xc08c218  jal         func_230860
    ctx->pc = 0x230ABCu;
    SET_GPR_U32(ctx, 31, 0x230AC4u);
    ctx->pc = 0x230AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230ABCu;
    // 0x230ac0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230860u, 0x230ABCu, 0x230AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230AC4u;
label_230ac4:
    // 0x230ac4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x230ac4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x230ac8: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x230ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x230acc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x230accu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x230ad0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x230ad0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x230ad4: 0xc78e8500  lwc1        $f14, -0x7B00($gp)
    ctx->pc = 0x230ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x230ad8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x230AD8u;
    {
        const bool branch_taken_0x230ad8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x230ad8) {
            ctx->pc = 0x230AF0u;
            goto label_230af0;
        }
    }
    ctx->pc = 0x230AE0u;
    // 0x230ae0: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x230ae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x230ae4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x230ae4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230ae8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x230AE8u;
    {
        const bool branch_taken_0x230ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230AE8u;
        // 0x230aec: 0x4600a000  add.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x230ae8) {
            ctx->pc = 0x230AFCu;
            goto label_230afc;
        }
    }
    ctx->pc = 0x230AF0u;
label_230af0:
    // 0x230af0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x230af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x230af4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x230af4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230af8: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x230af8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_230afc:
    // 0x230afc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x230afcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x230b00: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x230b00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x230b04: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x230b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x230b08: 0xc08c5d8  jal         func_231760
    ctx->pc = 0x230B08u;
    SET_GPR_U32(ctx, 31, 0x230B10u);
    ctx->pc = 0x230B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230B08u;
    // 0x230b0c: 0xc44cd11c  lwc1        $f12, -0x2EE4($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x231760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231760u, 0x230B08u, 0x230B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230B10u;
label_230b10:
    // 0x230b10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x230b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x230b14: 0xc7b40008  lwc1        $f20, 0x8($sp)
    ctx->pc = 0x230b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x230b18: 0x3e00008  jr          $ra
    ctx->pc = 0x230B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230B18u;
        // 0x230b1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230B18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230B20u;
}
