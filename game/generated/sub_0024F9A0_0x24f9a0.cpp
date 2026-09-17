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

// Function: sub_0024F9A0
// Address: 0x24f9a0 - 0x24fbc8
void sub_0024F9A0_0x24f9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024F9A0_0x24f9a0");
#endif

    ctx->pc = 0x24f9a0u;

    // 0x24f9a0: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x24f9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x24f9a4: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x24f9a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f9a8: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x24f9a8u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24f9ac: 0xd87f0000  lqc2        $vf31, 0x0($v1)
    ctx->pc = 0x24f9acu;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24f9b0: 0x4bdf8428  vadd.xyz    $vf16, $vf16, $vf31
    ctx->pc = 0x24f9b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x24f9b4: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x24f9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x24f9b8: 0xc4a00070  lwc1        $f0, 0x70($a1)
    ctx->pc = 0x24f9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24f9bc: 0xc4a10074  lwc1        $f1, 0x74($a1)
    ctx->pc = 0x24f9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24f9c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24f9c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24f9c4: 0xe4a00070  swc1        $f0, 0x70($a1)
    ctx->pc = 0x24f9c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 112), bits); }
    // 0x24f9c8: 0x8c880118  lw          $t0, 0x118($a0)
    ctx->pc = 0x24f9c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 280)));
    // 0x24f9cc: 0x81743  sra         $v0, $t0, 29
    ctx->pc = 0x24f9ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 29));
    // 0x24f9d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24f9d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24f9d4: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x24F9D4u;
    {
        const bool branch_taken_0x24f9d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f9d4) {
            ctx->pc = 0x24F9D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F9D4u;
            // 0x24f9d8: 0xc4c20010  lwc1        $f2, 0x10($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FA08u;
            goto label_24fa08;
        }
    }
    ctx->pc = 0x24F9DCu;
    // 0x24f9dc: 0xc4c00020  lwc1        $f0, 0x20($a2)
    ctx->pc = 0x24f9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24f9e0: 0xc4a10034  lwc1        $f1, 0x34($a1)
    ctx->pc = 0x24f9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24f9e4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x24f9e4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x24f9e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24f9e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24f9ec: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x24F9ECu;
    {
        const bool branch_taken_0x24f9ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24f9ec) {
            ctx->pc = 0x24F9F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F9ECu;
            // 0x24f9f0: 0xc4c20010  lwc1        $f2, 0x10($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FA08u;
            goto label_24fa08;
        }
    }
    ctx->pc = 0x24F9F4u;
    // 0x24f9f4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x24f9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x24f9f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24f9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24f9fc: 0x1031825  or          $v1, $t0, $v1
    ctx->pc = 0x24f9fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x24fa00: 0x3e00008  jr          $ra
    ctx->pc = 0x24FA00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24FA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FA00u;
        // 0x24fa04: 0xac830118  sw          $v1, 0x118($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 280), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24FA00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24FA08u;
label_24fa08:
    // 0x24fa08: 0xc4a10040  lwc1        $f1, 0x40($a1)
    ctx->pc = 0x24fa08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24fa0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24fa0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24fa10: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x24fa10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x24fa14: 0xc4a30050  lwc1        $f3, 0x50($a1)
    ctx->pc = 0x24fa14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24fa18: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x24fa18u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x24fa1c: 0xe4a10040  swc1        $f1, 0x40($a1)
    ctx->pc = 0x24fa1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 64), bits); }
    // 0x24fa20: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x24fa20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24fa24: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x24fa24u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x24fa28: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x24fa28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24fa2c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x24FA2Cu;
    {
        const bool branch_taken_0x24fa2c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24FA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FA2Cu;
        // 0x24fa30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fa2c) {
            ctx->pc = 0x24FA50u;
            goto label_24fa50;
        }
    }
    ctx->pc = 0x24FA34u;
    // 0x24fa34: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x24fa34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x24fa38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24fa38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24fa3c: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x24fa3cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x24fa40: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x24fa40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24fa44: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x24FA44u;
    {
        const bool branch_taken_0x24fa44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24fa44) {
            ctx->pc = 0x24FA48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FA44u;
            // 0x24fa48: 0x46001886  mov.s       $f2, $f3 (Delay Slot)
            ctx->f[2] = FPU_MOV_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FA50u;
            goto label_24fa50;
        }
    }
    ctx->pc = 0x24FA4Cu;
    // 0x24fa4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24fa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24fa50:
    // 0x24fa50: 0x10e2001d  beq         $a3, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x24FA50u;
    {
        const bool branch_taken_0x24fa50 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x24FA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FA50u;
        // 0x24fa54: 0xe4a20050  swc1        $f2, 0x50($a1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fa50) {
            ctx->pc = 0x24FAC8u;
            goto label_24fac8;
        }
    }
    ctx->pc = 0x24FA58u;
    // 0x24fa58: 0x28e20002  slti        $v0, $a3, 0x2
    ctx->pc = 0x24fa58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x24fa5c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24FA5Cu;
    {
        const bool branch_taken_0x24fa5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FA5Cu;
        // 0x24fa60: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fa5c) {
            ctx->pc = 0x24FA78u;
            goto label_24fa78;
        }
    }
    ctx->pc = 0x24FA64u;
    // 0x24fa64: 0x50e00008  beql        $a3, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x24FA64u;
    {
        const bool branch_taken_0x24fa64 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x24fa64) {
            ctx->pc = 0x24FA68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FA64u;
            // 0x24fa68: 0xc4c1001c  lwc1        $f1, 0x1C($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FA88u;
            goto label_24fa88;
        }
    }
    ctx->pc = 0x24FA6Cu;
    // 0x24fa6c: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x24FA6Cu;
    {
        const bool branch_taken_0x24fa6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FA6Cu;
        // 0x24fa70: 0xc4c00004  lwc1        $f0, 0x4($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fa6c) {
            ctx->pc = 0x24FBA8u;
            goto label_24fba8;
        }
    }
    ctx->pc = 0x24FA74u;
    // 0x24fa74: 0x0  nop
    ctx->pc = 0x24fa74u;
    // NOP
label_24fa78:
    // 0x24fa78: 0x50e20031  beql        $a3, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x24FA78u;
    {
        const bool branch_taken_0x24fa78 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x24fa78) {
            ctx->pc = 0x24FA7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FA78u;
            // 0x24fa7c: 0xc4c0001c  lwc1        $f0, 0x1C($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FB40u;
            goto label_24fb40;
        }
    }
    ctx->pc = 0x24FA80u;
    // 0x24fa80: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x24FA80u;
    {
        const bool branch_taken_0x24fa80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FA80u;
        // 0x24fa84: 0xc4c00004  lwc1        $f0, 0x4($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fa80) {
            ctx->pc = 0x24FBA8u;
            goto label_24fba8;
        }
    }
    ctx->pc = 0x24FA88u;
label_24fa88:
    // 0x24fa88: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x24fa88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24fa8c: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x24fa8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x24fa90: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x24fa90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x24fa94: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24fa94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24fa98: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x24fa98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24fa9c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24fa9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24faa0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x24faa0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x24faa4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x24FAA4u;
    {
        const bool branch_taken_0x24faa4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24FAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FAA4u;
        // 0x24faa8: 0xe4c0001c  swc1        $f0, 0x1C($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24faa4) {
            ctx->pc = 0x24FAC0u;
            goto label_24fac0;
        }
    }
    ctx->pc = 0x24FAACu;
    // 0x24faac: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x24faacu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x24fab0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x24fab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x24fab4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24fab4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24fab8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x24fab8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x24fabc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x24fabcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_24fac0:
    // 0x24fac0: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x24FAC0u;
    {
        const bool branch_taken_0x24fac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FAC0u;
        // 0x24fac4: 0xa4a3006a  sh          $v1, 0x6A($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 106), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fac0) {
            ctx->pc = 0x24FBA4u;
            goto label_24fba4;
        }
    }
    ctx->pc = 0x24FAC8u;
label_24fac8:
    // 0x24fac8: 0xc4c0001c  lwc1        $f0, 0x1C($a2)
    ctx->pc = 0x24fac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24facc: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x24faccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x24fad0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24fad0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24fad4: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24fad4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x24fad8: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x24fad8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x24fadc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x24fadcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24fae0: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x24FAE0u;
    {
        const bool branch_taken_0x24fae0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24fae0) {
            ctx->pc = 0x24FAE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FAE0u;
            // 0x24fae4: 0xa4a3006a  sh          $v1, 0x6A($a1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 5), 106), (uint16_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FB00u;
            goto label_24fb00;
        }
    }
    ctx->pc = 0x24FAE8u;
    // 0x24fae8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x24fae8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x24faec: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x24faecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x24faf0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24faf0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24faf4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x24faf4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x24faf8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x24faf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x24fafc: 0xa4a3006a  sh          $v1, 0x6A($a1)
    ctx->pc = 0x24fafcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 106), (uint16_t)GPR_U32(ctx, 3));
label_24fb00:
    // 0x24fb00: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24fb00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24fb04: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24fb04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24fb08: 0xc4c0001c  lwc1        $f0, 0x1C($a2)
    ctx->pc = 0x24fb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24fb0c: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x24fb0cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24fb10: 0xe4c2001c  swc1        $f2, 0x1C($a2)
    ctx->pc = 0x24fb10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 28), bits); }
    // 0x24fb14: 0x84a2006c  lh          $v0, 0x6C($a1)
    ctx->pc = 0x24fb14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 108)));
    // 0x24fb18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24fb18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24fb1c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24fb1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24fb20: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24fb20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24fb24: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x24fb24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24fb28: 0x4502001f  bc1fl       . + 4 + (0x1F << 2)
    ctx->pc = 0x24FB28u;
    {
        const bool branch_taken_0x24fb28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24fb28) {
            ctx->pc = 0x24FB2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FB28u;
            // 0x24fb2c: 0xc4c00004  lwc1        $f0, 0x4($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FBA8u;
            goto label_24fba8;
        }
    }
    ctx->pc = 0x24FB30u;
    // 0x24fb30: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x24fb30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x24fb34: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x24FB34u;
    {
        const bool branch_taken_0x24fb34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FB34u;
        // 0x24fb38: 0xe4c0001c  swc1        $f0, 0x1C($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fb34) {
            ctx->pc = 0x24FBA4u;
            goto label_24fba4;
        }
    }
    ctx->pc = 0x24FB3Cu;
    // 0x24fb3c: 0x0  nop
    ctx->pc = 0x24fb3cu;
    // NOP
label_24fb40:
    // 0x24fb40: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x24fb40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x24fb44: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24fb44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24fb48: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24fb48u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x24fb4c: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x24fb4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x24fb50: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x24fb50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24fb54: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x24FB54u;
    {
        const bool branch_taken_0x24fb54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24fb54) {
            ctx->pc = 0x24FB58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FB54u;
            // 0x24fb58: 0xa4a3006a  sh          $v1, 0x6A($a1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 5), 106), (uint16_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FB74u;
            goto label_24fb74;
        }
    }
    ctx->pc = 0x24FB5Cu;
    // 0x24fb5c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x24fb5cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x24fb60: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x24fb60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x24fb64: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24fb64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24fb68: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x24fb68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x24fb6c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x24fb6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x24fb70: 0xa4a3006a  sh          $v1, 0x6A($a1)
    ctx->pc = 0x24fb70u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 106), (uint16_t)GPR_U32(ctx, 3));
label_24fb74:
    // 0x24fb74: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24fb74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24fb78: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24fb78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24fb7c: 0xc4c0001c  lwc1        $f0, 0x1C($a2)
    ctx->pc = 0x24fb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24fb80: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24fb80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24fb84: 0xe4c0001c  swc1        $f0, 0x1C($a2)
    ctx->pc = 0x24fb84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 28), bits); }
    // 0x24fb88: 0x84a2006c  lh          $v0, 0x6C($a1)
    ctx->pc = 0x24fb88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 108)));
    // 0x24fb8c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x24fb8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x24fb90: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x24fb90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x24fb94: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x24fb94u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x24fb98: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x24fb98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24fb9c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x24FB9Cu;
    {
        const bool branch_taken_0x24fb9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24fb9c) {
            ctx->pc = 0x24FBA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FB9Cu;
            // 0x24fba0: 0xe4c2001c  swc1        $f2, 0x1C($a2) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 28), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FBA4u;
            goto label_24fba4;
        }
    }
    ctx->pc = 0x24FBA4u;
label_24fba4:
    // 0x24fba4: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x24fba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24fba8:
    // 0x24fba8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24fba8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fbac: 0xc4c10020  lwc1        $f1, 0x20($a2)
    ctx->pc = 0x24fbacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24fbb0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x24fbb0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x24fbb4: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x24fbb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x24fbb8: 0x94a30064  lhu         $v1, 0x64($a1)
    ctx->pc = 0x24fbb8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 100)));
    // 0x24fbbc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x24fbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x24fbc0: 0x3e00008  jr          $ra
    ctx->pc = 0x24FBC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24FBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FBC0u;
        // 0x24fbc4: 0xa4a30064  sh          $v1, 0x64($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 100), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24FBC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24FBC8u;
}
