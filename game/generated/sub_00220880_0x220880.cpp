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

// Function: sub_00220880
// Address: 0x220880 - 0x220d68
void sub_00220880_0x220880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220880_0x220880");
#endif

    switch (ctx->pc) {
        case 0x2208b8u: goto label_2208b8;
        case 0x2208d0u: goto label_2208d0;
        default: break;
    }

    ctx->pc = 0x220880u;

    // 0x220880: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x220880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x220884: 0xffb40140  sd          $s4, 0x140($sp)
    ctx->pc = 0x220884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 20));
    // 0x220888: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x220888u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22088c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x22088cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x220890: 0xffb00120  sd          $s0, 0x120($sp)
    ctx->pc = 0x220890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 16));
    // 0x220894: 0xffb10128  sd          $s1, 0x128($sp)
    ctx->pc = 0x220894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 17));
    // 0x220898: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x220898u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22089c: 0xffb20130  sd          $s2, 0x130($sp)
    ctx->pc = 0x22089cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 18));
    // 0x2208a0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2208a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2208a4: 0xffb30138  sd          $s3, 0x138($sp)
    ctx->pc = 0x2208a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 19));
    // 0x2208a8: 0xffb50148  sd          $s5, 0x148($sp)
    ctx->pc = 0x2208a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 21));
    // 0x2208ac: 0xffbf0150  sd          $ra, 0x150($sp)
    ctx->pc = 0x2208acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 31));
    // 0x2208b0: 0xc08c19c  jal         func_230670
    ctx->pc = 0x2208B0u;
    SET_GPR_U32(ctx, 31, 0x2208B8u);
    ctx->pc = 0x2208B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2208B0u;
    // 0x2208b4: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230670u, 0x2208B0u, 0x2208B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2208B8u;
label_2208b8:
    // 0x2208b8: 0x27b50050  addiu       $s5, $sp, 0x50
    ctx->pc = 0x2208b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2208bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2208bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2208c0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2208c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2208c4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2208c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2208c8: 0xc04a151  jal         func_128544
    ctx->pc = 0x2208C8u;
    SET_GPR_U32(ctx, 31, 0x2208D0u);
    ctx->pc = 0x2208CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2208C8u;
    // 0x2208cc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x2208C8u, 0x2208D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2208D0u;
label_2208d0:
    // 0x2208d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2208d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2208d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2208d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2208d8: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x2208d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2208dc: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2208dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2208e0: 0x7a060000  lq          $a2, 0x0($s0)
    ctx->pc = 0x2208e0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2208e4: 0x7a040010  lq          $a0, 0x10($s0)
    ctx->pc = 0x2208e4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2208e8: 0x7a070020  lq          $a3, 0x20($s0)
    ctx->pc = 0x2208e8u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2208ec: 0x48230000  qmfc2.ni    $v1, $vf0
    ctx->pc = 0x2208ecu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2208f0: 0x70862c88  pextlw      $a1, $a0, $a2
    ctx->pc = 0x2208f0u;
    SET_GPR_VEC(ctx, 5, PS2_PEXTLW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
    // 0x2208f4: 0x708624a8  pextuw      $a0, $a0, $a2
    ctx->pc = 0x2208f4u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTUW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
    // 0x2208f8: 0x70671488  pextlw      $v0, $v1, $a3
    ctx->pc = 0x2208f8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 7)));
    // 0x2208fc: 0x70671ca8  pextuw      $v1, $v1, $a3
    ctx->pc = 0x2208fcu;
    SET_GPR_VEC(ctx, 3, PS2_PEXTUW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 7)));
    // 0x220900: 0x70453389  pcpyld      $a2, $v0, $a1
    ctx->pc = 0x220900u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x220904: 0x70a22ba9  pcpyud      $a1, $a1, $v0
    ctx->pc = 0x220904u;
    SET_GPR_VEC(ctx, 5, _mm_unpackhi_epi64(GPR_VEC(ctx, 5), GPR_VEC(ctx, 2)));
    // 0x220908: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x220908u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x22090c: 0xda070030  lqc2        $vf7, 0x30($s0)
    ctx->pc = 0x22090cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x220910: 0x48a62000  qmtc2.ni    $a2, $vf4
    ctx->pc = 0x220910u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x220914: 0x48a52800  qmtc2.ni    $a1, $vf5
    ctx->pc = 0x220914u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x220918: 0x48a33000  qmtc2.ni    $v1, $vf6
    ctx->pc = 0x220918u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x22091c: 0x4bc002bc  vadda.xyz   $ACC, $vf0, $vf0
    ctx->pc = 0x22091cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[0]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x220920: 0x4bc720fc  vmsubax.xyz $ACC, $vf4, $vf7x
    ctx->pc = 0x220920u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x220924: 0x4bc728fd  vmsubay.xyz $ACC, $vf5, $vf7y
    ctx->pc = 0x220924u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x220928: 0x4bc731ce  vmsubz.xyz  $vf7, $vf6, $vf7z
    ctx->pc = 0x220928u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x22092c: 0x7d060000  sq          $a2, 0x0($t0)
    ctx->pc = 0x22092cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 6));
    // 0x220930: 0x7d050010  sq          $a1, 0x10($t0)
    ctx->pc = 0x220930u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 16), GPR_VEC(ctx, 5));
    // 0x220934: 0x7d030020  sq          $v1, 0x20($t0)
    ctx->pc = 0x220934u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 32), GPR_VEC(ctx, 3));
    // 0x220938: 0xf9070030  sqc2        $vf7, 0x30($t0)
    ctx->pc = 0x220938u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x22093c: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x22093cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x220940: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x220940u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220944: 0xda300000  lqc2        $vf16, 0x0($s1)
    ctx->pc = 0x220944u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x220948: 0xd85f0000  lqc2        $vf31, 0x0($v0)
    ctx->pc = 0x220948u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22094c: 0x4bdf842c  vsub.xyz    $vf16, $vf16, $vf31
    ctx->pc = 0x22094cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x220950: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x220950u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x220954: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x220954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x220958: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x220958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22095c: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x22095cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220960: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x220960u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x220964: 0x4601081e  madda.s     $f1, $f1
    ctx->pc = 0x220964u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[1])));
    // 0x220968: 0x4600009c  madd.s      $f2, $f0, $f0
    ctx->pc = 0x220968u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x22096c: 0x46020084  c1          0x20084
    ctx->pc = 0x22096cu;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x220970: 0xc7808474  lwc1        $f0, -0x7B8C($gp)
    ctx->pc = 0x220970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220974: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x220974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x220978: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x220978u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x22097c: 0xc7858478  lwc1        $f5, -0x7B88($gp)
    ctx->pc = 0x22097cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x220980: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x220980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x220984: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x220984u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x220988: 0xc784847c  lwc1        $f4, -0x7B84($gp)
    ctx->pc = 0x220988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x22098c: 0x0  nop
    ctx->pc = 0x22098cu;
    // NOP
    // 0x220990: 0x0  nop
    ctx->pc = 0x220990u;
    // NOP
    // 0x220994: 0x46051843  div.s       $f1, $f3, $f5
    ctx->pc = 0x220994u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[1] = ctx->f[3] / ctx->f[5];
    // 0x220998: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x220998u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x22099c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x22099cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2209a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2209a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2209a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2209a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2209a8: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2209a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2209ac: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x2209acu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2209b0: 0x46032034  c.lt.s      $f4, $f3
    ctx->pc = 0x2209b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2209b4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2209B4u;
    {
        const bool branch_taken_0x2209b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2209B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2209B4u;
        // 0x2209b8: 0xe7a20058  swc1        $f2, 0x58($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2209b4) {
            ctx->pc = 0x2209C8u;
            goto label_2209c8;
        }
    }
    ctx->pc = 0x2209BCu;
    // 0x2209bc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2209BCu;
    {
        const bool branch_taken_0x2209bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2209C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2209BCu;
        // 0x2209c0: 0x460518c1  sub.s       $f3, $f3, $f5 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2209bc) {
            ctx->pc = 0x2209D8u;
            goto label_2209d8;
        }
    }
    ctx->pc = 0x2209C4u;
    // 0x2209c4: 0x0  nop
    ctx->pc = 0x2209c4u;
    // NOP
label_2209c8:
    // 0x2209c8: 0xc7808480  lwc1        $f0, -0x7B80($gp)
    ctx->pc = 0x2209c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2209cc: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x2209ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2209d0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2209D0u;
    {
        const bool branch_taken_0x2209d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2209d0) {
            ctx->pc = 0x2209D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2209D0u;
            // 0x2209d4: 0x460518c0  add.s       $f3, $f3, $f5 (Delay Slot)
            ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2209D8u;
            goto label_2209d8;
        }
    }
    ctx->pc = 0x2209D8u;
label_2209d8:
    // 0x2209d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2209d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2209dc: 0xc7818484  lwc1        $f1, -0x7B7C($gp)
    ctx->pc = 0x2209dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2209e0: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x2209e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2209e4: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2209E4u;
    {
        const bool branch_taken_0x2209e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2209e4) {
            ctx->pc = 0x2209E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2209E4u;
            // 0x2209e8: 0x460308c1  sub.s       $f3, $f1, $f3 (Delay Slot)
            ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2209F8u;
            goto label_2209f8;
        }
    }
    ctx->pc = 0x2209ECu;
    // 0x2209ec: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x2209ecu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x2209f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2209F0u;
    {
        const bool branch_taken_0x2209f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2209F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2209F0u;
        // 0x2209f4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2209f0) {
            ctx->pc = 0x2209FCu;
            goto label_2209fc;
        }
    }
    ctx->pc = 0x2209F8u;
label_2209f8:
    // 0x2209f8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2209f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2209fc:
    // 0x2209fc: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x2209fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x220a00: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x220a00u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x220a04: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x220a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x220a08: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x220a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x220a0c: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x220a0cu;
    ctx->vu0_vf[29] = _mm_castsi128_ps(FAST_READ128(0x3AB6E0u));
    // 0x220a10: 0x4a3ffb3d  vmr32.w     $vf31, $vf31
    ctx->pc = 0x220a10u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x220a14: 0x4a9f0700  vaddx.y     $vf28, $vf0, $vf31x
    ctx->pc = 0x220a14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x220a18: 0x4b1fffea  vmul.x      $vf31, $vf31, $vf31
    ctx->pc = 0x220a18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x220a1c: 0x4bffef5b  vmulw.xyzw  $vf29, $vf29, $vf31w
    ctx->pc = 0x220a1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x220a20: 0x4bffef58  vmulx.xyzw  $vf29, $vf29, $vf31x
    ctx->pc = 0x220a20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x220a24: 0x4bdfef58  vmulx.xyz   $vf29, $vf29, $vf31x
    ctx->pc = 0x220a24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x220a28: 0x4a9de703  vaddw.y     $vf28, $vf28, $vf29w
    ctx->pc = 0x220a28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x220a2c: 0x4b9fef58  vmulx.xy    $vf29, $vf29, $vf31x
    ctx->pc = 0x220a2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x220a30: 0x4a9de702  vaddz.y     $vf28, $vf28, $vf29z
    ctx->pc = 0x220a30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x220a34: 0x4b1fef58  vmulx.x     $vf29, $vf29, $vf31x
    ctx->pc = 0x220a34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x220a38: 0x4a9de701  vaddy.y     $vf28, $vf28, $vf29y
    ctx->pc = 0x220a38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x220a3c: 0x4a9de700  vaddx.y     $vf28, $vf28, $vf29x
    ctx->pc = 0x220a3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x220a40: 0x4a80003f  vaddaw.y    $ACC, $vf0, $vf0w
    ctx->pc = 0x220a40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x220a44: 0x4a9ce74d  vmsuby.y    $vf29, $vf28, $vf28y
    ctx->pc = 0x220a44u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x220a48: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x220A48u;
    {
        const bool branch_taken_0x220a48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x220A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220A48u;
        // 0x220a4c: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x220a48) {
            ctx->pc = 0x220A60u;
            goto label_220a60;
        }
    }
    ctx->pc = 0x220A50u;
    // 0x220a50: 0x4a0003bf  vwaitq
    ctx->pc = 0x220a50u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x220a54: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x220A54u;
    {
        const bool branch_taken_0x220a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220A54u;
        // 0x220a58: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x220a54) {
            ctx->pc = 0x220A68u;
            goto label_220a68;
        }
    }
    ctx->pc = 0x220A5Cu;
    // 0x220a5c: 0x0  nop
    ctx->pc = 0x220a5cu;
    // NOP
label_220a60:
    // 0x220a60: 0x4a0003bf  vwaitq
    ctx->pc = 0x220a60u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x220a64: 0x4b000720  vaddq.x     $vf28, $vf0, $Q
    ctx->pc = 0x220a64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_220a68:
    // 0x220a68: 0x4ae0012c  vsub.yzw    $vf4, $vf0, $vf0
    ctx->pc = 0x220a68u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x220a6c: 0x4b20016c  vsub.xw     $vf5, $vf0, $vf0
    ctx->pc = 0x220a6cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x220a70: 0x4b2001ac  vsub.xw     $vf6, $vf0, $vf0
    ctx->pc = 0x220a70u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x220a74: 0x4b000103  vaddw.x     $vf4, $vf0, $vf0w
    ctx->pc = 0x220a74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x220a78: 0x4a9c0168  vadd.y      $vf5, $vf0, $vf28
    ctx->pc = 0x220a78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[28]); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x220a7c: 0x4a9c0184  vsubx.y     $vf6, $vf0, $vf28x
    ctx->pc = 0x220a7cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x220a80: 0x4a5c0140  vaddx.z     $vf5, $vf0, $vf28x
    ctx->pc = 0x220a80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x220a84: 0x4a5c0181  vaddy.z     $vf6, $vf0, $vf28y
    ctx->pc = 0x220a84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x220a88: 0xf8a00030  sqc2        $vf0, 0x30($a1)
    ctx->pc = 0x220a88u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x220a8c: 0xf8a40000  sqc2        $vf4, 0x0($a1)
    ctx->pc = 0x220a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x220a90: 0xf8a50010  sqc2        $vf5, 0x10($a1)
    ctx->pc = 0x220a90u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x220a94: 0xf8a60020  sqc2        $vf6, 0x20($a1)
    ctx->pc = 0x220a94u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x220a98: 0xc7808488  lwc1        $f0, -0x7B78($gp)
    ctx->pc = 0x220a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220a9c: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x220a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x220aa0: 0xc784848c  lwc1        $f4, -0x7B74($gp)
    ctx->pc = 0x220aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x220aa4: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x220aa4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x220aa8: 0xc7838490  lwc1        $f3, -0x7B70($gp)
    ctx->pc = 0x220aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x220aac: 0x0  nop
    ctx->pc = 0x220aacu;
    // NOP
    // 0x220ab0: 0x0  nop
    ctx->pc = 0x220ab0u;
    // NOP
    // 0x220ab4: 0x46041043  div.s       $f1, $f2, $f4
    ctx->pc = 0x220ab4u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[4];
    // 0x220ab8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x220ab8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x220abc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x220abcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x220ac0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x220ac0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x220ac4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x220ac4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x220ac8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x220ac8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x220acc: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x220accu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x220ad0: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x220ad0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x220ad4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x220AD4u;
    {
        const bool branch_taken_0x220ad4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x220AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220AD4u;
        // 0x220ad8: 0x27a300e0  addiu       $v1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220ad4) {
            ctx->pc = 0x220AE8u;
            goto label_220ae8;
        }
    }
    ctx->pc = 0x220ADCu;
    // 0x220adc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x220ADCu;
    {
        const bool branch_taken_0x220adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220ADCu;
        // 0x220ae0: 0x46041081  sub.s       $f2, $f2, $f4 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x220adc) {
            ctx->pc = 0x220AF8u;
            goto label_220af8;
        }
    }
    ctx->pc = 0x220AE4u;
    // 0x220ae4: 0x0  nop
    ctx->pc = 0x220ae4u;
    // NOP
label_220ae8:
    // 0x220ae8: 0xc7808494  lwc1        $f0, -0x7B6C($gp)
    ctx->pc = 0x220ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220aec: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x220aecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x220af0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x220AF0u;
    {
        const bool branch_taken_0x220af0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x220af0) {
            ctx->pc = 0x220AF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x220AF0u;
            // 0x220af4: 0x46041080  add.s       $f2, $f2, $f4 (Delay Slot)
            ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x220AF8u;
            goto label_220af8;
        }
    }
    ctx->pc = 0x220AF8u;
label_220af8:
    // 0x220af8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x220af8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x220afc: 0xc7818498  lwc1        $f1, -0x7B68($gp)
    ctx->pc = 0x220afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x220b00: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x220b00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x220b04: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x220B04u;
    {
        const bool branch_taken_0x220b04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x220b04) {
            ctx->pc = 0x220B08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x220B04u;
            // 0x220b08: 0x46020881  sub.s       $f2, $f1, $f2 (Delay Slot)
            ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x220B18u;
            goto label_220b18;
        }
    }
    ctx->pc = 0x220B0Cu;
    // 0x220b0c: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x220b0cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x220b10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x220B10u;
    {
        const bool branch_taken_0x220b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220B10u;
        // 0x220b14: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220b10) {
            ctx->pc = 0x220B1Cu;
            goto label_220b1c;
        }
    }
    ctx->pc = 0x220B18u;
label_220b18:
    // 0x220b18: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x220b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_220b1c:
    // 0x220b1c: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x220b1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x220b20: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x220b20u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x220b24: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x220b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x220b28: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x220b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x220b2c: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x220b2cu;
    ctx->vu0_vf[29] = _mm_castsi128_ps(FAST_READ128(0x3AB6E0u));
    // 0x220b30: 0x4a3ffb3d  vmr32.w     $vf31, $vf31
    ctx->pc = 0x220b30u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x220b34: 0x4a9f0700  vaddx.y     $vf28, $vf0, $vf31x
    ctx->pc = 0x220b34u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x220b38: 0x4b1fffea  vmul.x      $vf31, $vf31, $vf31
    ctx->pc = 0x220b38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x220b3c: 0x4bffef5b  vmulw.xyzw  $vf29, $vf29, $vf31w
    ctx->pc = 0x220b3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x220b40: 0x4bffef58  vmulx.xyzw  $vf29, $vf29, $vf31x
    ctx->pc = 0x220b40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x220b44: 0x4bdfef58  vmulx.xyz   $vf29, $vf29, $vf31x
    ctx->pc = 0x220b44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x220b48: 0x4a9de703  vaddw.y     $vf28, $vf28, $vf29w
    ctx->pc = 0x220b48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x220b4c: 0x4b9fef58  vmulx.xy    $vf29, $vf29, $vf31x
    ctx->pc = 0x220b4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x220b50: 0x4a9de702  vaddz.y     $vf28, $vf28, $vf29z
    ctx->pc = 0x220b50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x220b54: 0x4b1fef58  vmulx.x     $vf29, $vf29, $vf31x
    ctx->pc = 0x220b54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x220b58: 0x4a9de701  vaddy.y     $vf28, $vf28, $vf29y
    ctx->pc = 0x220b58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x220b5c: 0x4a9de700  vaddx.y     $vf28, $vf28, $vf29x
    ctx->pc = 0x220b5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x220b60: 0x4a80003f  vaddaw.y    $ACC, $vf0, $vf0w
    ctx->pc = 0x220b60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x220b64: 0x4a9ce74d  vmsuby.y    $vf29, $vf28, $vf28y
    ctx->pc = 0x220b64u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x220b68: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x220B68u;
    {
        const bool branch_taken_0x220b68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x220B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220B68u;
        // 0x220b6c: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x220b68) {
            ctx->pc = 0x220B80u;
            goto label_220b80;
        }
    }
    ctx->pc = 0x220B70u;
    // 0x220b70: 0x4a0003bf  vwaitq
    ctx->pc = 0x220b70u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x220b74: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x220B74u;
    {
        const bool branch_taken_0x220b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220B74u;
        // 0x220b78: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x220b74) {
            ctx->pc = 0x220B88u;
            goto label_220b88;
        }
    }
    ctx->pc = 0x220B7Cu;
    // 0x220b7c: 0x0  nop
    ctx->pc = 0x220b7cu;
    // NOP
label_220b80:
    // 0x220b80: 0x4a0003bf  vwaitq
    ctx->pc = 0x220b80u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x220b84: 0x4b000720  vaddq.x     $vf28, $vf0, $Q
    ctx->pc = 0x220b84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_220b88:
    // 0x220b88: 0x4aa0012c  vsub.yw     $vf4, $vf0, $vf0
    ctx->pc = 0x220b88u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, -1, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x220b8c: 0x4b60016c  vsub.xzw    $vf5, $vf0, $vf0
    ctx->pc = 0x220b8cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x220b90: 0x4aa001ac  vsub.yw     $vf6, $vf0, $vf0
    ctx->pc = 0x220b90u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, -1, 0); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x220b94: 0x4a800143  vaddw.y     $vf5, $vf0, $vf0w
    ctx->pc = 0x220b94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x220b98: 0x4a5c0181  vaddy.z     $vf6, $vf0, $vf28y
    ctx->pc = 0x220b98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x220b9c: 0x4a5c0104  vsubx.z     $vf4, $vf0, $vf28x
    ctx->pc = 0x220b9cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x220ba0: 0x4b1c01a8  vadd.x      $vf6, $vf0, $vf28
    ctx->pc = 0x220ba0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[28]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x220ba4: 0x4b1c0101  vaddy.x     $vf4, $vf0, $vf28y
    ctx->pc = 0x220ba4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x220ba8: 0xf8600030  sqc2        $vf0, 0x30($v1)
    ctx->pc = 0x220ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x220bac: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x220bacu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x220bb0: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x220bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x220bb4: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x220bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x220bb8: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x220bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x220bbc: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x220bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x220bc0: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x220bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x220bc4: 0x7c400010  sq          $zero, 0x10($v0)
    ctx->pc = 0x220bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 0));
    // 0x220bc8: 0x7c400020  sq          $zero, 0x20($v0)
    ctx->pc = 0x220bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), GPR_VEC(ctx, 0));
    // 0x220bcc: 0xf8400030  sqc2        $vf0, 0x30($v0)
    ctx->pc = 0x220bccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x220bd0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x220bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x220bd4: 0xafa40088  sw          $a0, 0x88($sp)
    ctx->pc = 0x220bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 4));
    // 0x220bd8: 0xafa40074  sw          $a0, 0x74($sp)
    ctx->pc = 0x220bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 4));
    // 0x220bdc: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x220bdcu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x220be0: 0xd8490010  lqc2        $vf9, 0x10($v0)
    ctx->pc = 0x220be0u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x220be4: 0xd84a0020  lqc2        $vf10, 0x20($v0)
    ctx->pc = 0x220be4u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x220be8: 0xd84b0030  lqc2        $vf11, 0x30($v0)
    ctx->pc = 0x220be8u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x220bec: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x220becu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x220bf0: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x220bf0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x220bf4: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x220bf4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x220bf8: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x220bf8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x220bfc: 0x4be441bc  vmulax.xyzw $ACC, $vf8, $vf4x
    ctx->pc = 0x220bfcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x220c00: 0x4be448bd  vmadday.xyzw $ACC, $vf9, $vf4y
    ctx->pc = 0x220c00u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x220c04: 0x4be450be  vmaddaz.xyzw $ACC, $vf10, $vf4z
    ctx->pc = 0x220c04u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x220c08: 0x4be4590b  vmaddw.xyzw $vf4, $vf11, $vf4w
    ctx->pc = 0x220c08u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x220c0c: 0x4be541bc  vmulax.xyzw $ACC, $vf8, $vf5x
    ctx->pc = 0x220c0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x220c10: 0x4be548bd  vmadday.xyzw $ACC, $vf9, $vf5y
    ctx->pc = 0x220c10u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x220c14: 0x4be550be  vmaddaz.xyzw $ACC, $vf10, $vf5z
    ctx->pc = 0x220c14u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x220c18: 0x4be5594b  vmaddw.xyzw $vf5, $vf11, $vf5w
    ctx->pc = 0x220c18u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x220c1c: 0x4be641bc  vmulax.xyzw $ACC, $vf8, $vf6x
    ctx->pc = 0x220c1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x220c20: 0x4be648bd  vmadday.xyzw $ACC, $vf9, $vf6y
    ctx->pc = 0x220c20u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x220c24: 0x4be650be  vmaddaz.xyzw $ACC, $vf10, $vf6z
    ctx->pc = 0x220c24u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x220c28: 0x4be6598b  vmaddw.xyzw $vf6, $vf11, $vf6w
    ctx->pc = 0x220c28u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x220c2c: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x220c2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x220c30: 0x4be748bd  vmadday.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x220c30u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x220c34: 0x4be750be  vmaddaz.xyzw $ACC, $vf10, $vf7z
    ctx->pc = 0x220c34u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x220c38: 0x4be759cb  vmaddw.xyzw $vf7, $vf11, $vf7w
    ctx->pc = 0x220c38u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x220c3c: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x220c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x220c40: 0xf8450010  sqc2        $vf5, 0x10($v0)
    ctx->pc = 0x220c40u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x220c44: 0xf8460020  sqc2        $vf6, 0x20($v0)
    ctx->pc = 0x220c44u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x220c48: 0xf8470030  sqc2        $vf7, 0x30($v0)
    ctx->pc = 0x220c48u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x220c4c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x220c4cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220c50: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x220c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x220c54: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x220c54u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x220c58: 0xd8490010  lqc2        $vf9, 0x10($v0)
    ctx->pc = 0x220c58u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x220c5c: 0xd84a0020  lqc2        $vf10, 0x20($v0)
    ctx->pc = 0x220c5cu;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x220c60: 0xd84b0030  lqc2        $vf11, 0x30($v0)
    ctx->pc = 0x220c60u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x220c64: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x220c64u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x220c68: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x220c68u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x220c6c: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x220c6cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x220c70: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x220c70u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x220c74: 0x4be441bc  vmulax.xyzw $ACC, $vf8, $vf4x
    ctx->pc = 0x220c74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x220c78: 0x4be448bd  vmadday.xyzw $ACC, $vf9, $vf4y
    ctx->pc = 0x220c78u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x220c7c: 0x4be450be  vmaddaz.xyzw $ACC, $vf10, $vf4z
    ctx->pc = 0x220c7cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x220c80: 0x4be4590b  vmaddw.xyzw $vf4, $vf11, $vf4w
    ctx->pc = 0x220c80u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x220c84: 0x4be541bc  vmulax.xyzw $ACC, $vf8, $vf5x
    ctx->pc = 0x220c84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x220c88: 0x4be548bd  vmadday.xyzw $ACC, $vf9, $vf5y
    ctx->pc = 0x220c88u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x220c8c: 0x4be550be  vmaddaz.xyzw $ACC, $vf10, $vf5z
    ctx->pc = 0x220c8cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x220c90: 0x4be5594b  vmaddw.xyzw $vf5, $vf11, $vf5w
    ctx->pc = 0x220c90u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x220c94: 0x4be641bc  vmulax.xyzw $ACC, $vf8, $vf6x
    ctx->pc = 0x220c94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x220c98: 0x4be648bd  vmadday.xyzw $ACC, $vf9, $vf6y
    ctx->pc = 0x220c98u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x220c9c: 0x4be650be  vmaddaz.xyzw $ACC, $vf10, $vf6z
    ctx->pc = 0x220c9cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x220ca0: 0x4be6598b  vmaddw.xyzw $vf6, $vf11, $vf6w
    ctx->pc = 0x220ca0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x220ca4: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x220ca4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x220ca8: 0x4be748bd  vmadday.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x220ca8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x220cac: 0x4be750be  vmaddaz.xyzw $ACC, $vf10, $vf7z
    ctx->pc = 0x220cacu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x220cb0: 0x4be759cb  vmaddw.xyzw $vf7, $vf11, $vf7w
    ctx->pc = 0x220cb0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x220cb4: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x220cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x220cb8: 0xf8450010  sqc2        $vf5, 0x10($v0)
    ctx->pc = 0x220cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x220cbc: 0xf8460020  sqc2        $vf6, 0x20($v0)
    ctx->pc = 0x220cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x220cc0: 0xf8470030  sqc2        $vf7, 0x30($v0)
    ctx->pc = 0x220cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x220cc4: 0x2a0182d  daddu       $v1, $s5, $zero
    ctx->pc = 0x220cc4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220cc8: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x220cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x220ccc: 0xd8700000  lqc2        $vf16, 0x0($v1)
    ctx->pc = 0x220cccu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x220cd0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x220cd0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x220cd4: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x220cd4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x220cd8: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x220cd8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x220cdc: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x220cdcu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x220ce0: 0x4bd021bc  vmulax.xyz  $ACC, $vf4, $vf16x
    ctx->pc = 0x220ce0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x220ce4: 0x4bd028bd  vmadday.xyz $ACC, $vf5, $vf16y
    ctx->pc = 0x220ce4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x220ce8: 0x4bd030be  vmaddaz.xyz $ACC, $vf6, $vf16z
    ctx->pc = 0x220ce8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x220cec: 0x4bc03c0b  vmaddw.xyz  $vf16, $vf7, $vf0w
    ctx->pc = 0x220cecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x220cf0: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x220cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x220cf4: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x220cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x220cf8: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x220cf8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220cfc: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x220cfcu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x220d00: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x220d00u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x220d04: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x220d04u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x220d08: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x220d08u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x220d0c: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x220d0cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x220d10: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x220d10u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x220d14: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x220d14u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x220d18: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x220d18u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x220d1c: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x220d1cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x220d20: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x220d20u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x220d24: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x220d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220d28: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x220d28u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220d2c: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x220d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x220d30: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x220d30u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x220d34: 0xd87f0000  lqc2        $vf31, 0x0($v1)
    ctx->pc = 0x220d34u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x220d38: 0x4bdf842c  vsub.xyz    $vf16, $vf16, $vf31
    ctx->pc = 0x220d38u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x220d3c: 0xf8900000  sqc2        $vf16, 0x0($a0)
    ctx->pc = 0x220d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x220d40: 0xdfb00120  ld          $s0, 0x120($sp)
    ctx->pc = 0x220d40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x220d44: 0xdfb10128  ld          $s1, 0x128($sp)
    ctx->pc = 0x220d44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x220d48: 0xdfb20130  ld          $s2, 0x130($sp)
    ctx->pc = 0x220d48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x220d4c: 0xdfb30138  ld          $s3, 0x138($sp)
    ctx->pc = 0x220d4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x220d50: 0xdfb40140  ld          $s4, 0x140($sp)
    ctx->pc = 0x220d50u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x220d54: 0xdfb50148  ld          $s5, 0x148($sp)
    ctx->pc = 0x220d54u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x220d58: 0xdfbf0150  ld          $ra, 0x150($sp)
    ctx->pc = 0x220d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x220d5c: 0x3e00008  jr          $ra
    ctx->pc = 0x220D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220D5Cu;
        // 0x220d60: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220D5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x220D64u;
    // 0x220d64: 0x0  nop
    ctx->pc = 0x220d64u;
    // NOP
    ctx->pc = 0x220d68u;
}
