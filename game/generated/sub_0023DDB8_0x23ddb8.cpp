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

// Function: sub_0023DDB8
// Address: 0x23ddb8 - 0x23e0e0
void sub_0023DDB8_0x23ddb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023DDB8_0x23ddb8");
#endif

    switch (ctx->pc) {
        case 0x23de7cu: goto label_23de7c;
        case 0x23ded8u: goto label_23ded8;
        case 0x23df20u: goto label_23df20;
        case 0x23df28u: goto label_23df28;
        case 0x23df74u: goto label_23df74;
        case 0x23dfa4u: goto label_23dfa4;
        case 0x23e000u: goto label_23e000;
        case 0x23e030u: goto label_23e030;
        case 0x23e044u: goto label_23e044;
        case 0x23e07cu: goto label_23e07c;
        default: break;
    }

    ctx->pc = 0x23ddb8u;

    // 0x23ddb8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x23ddb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x23ddbc: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x23ddbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x23ddc0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x23ddc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23ddc4: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x23ddc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x23ddc8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x23ddc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ddcc: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x23ddccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x23ddd0: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x23ddd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x23ddd4: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x23ddd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x23ddd8: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x23ddd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x23dddc: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x23dddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x23dde0: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x23dde0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x23dde4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x23dde4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x23dde8: 0xe7b800a8  swc1        $f24, 0xA8($sp)
    ctx->pc = 0x23dde8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x23ddec: 0xe7b700a0  swc1        $f23, 0xA0($sp)
    ctx->pc = 0x23ddecu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x23ddf0: 0xe7b60098  swc1        $f22, 0x98($sp)
    ctx->pc = 0x23ddf0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x23ddf4: 0xe7b50090  swc1        $f21, 0x90($sp)
    ctx->pc = 0x23ddf4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x23ddf8: 0xe7b40088  swc1        $f20, 0x88($sp)
    ctx->pc = 0x23ddf8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x23ddfc: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x23ddfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x23de00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23de00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23de04: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x23de04u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x23de08: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x23de08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x23de0c: 0x8e1088d0  lw          $s0, -0x7730($s0)
    ctx->pc = 0x23de0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936784)));
    // 0x23de10: 0x8e030894  lw          $v1, 0x894($s0)
    ctx->pc = 0x23de10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2196)));
    // 0x23de14: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x23de14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x23de18: 0x244407c0  addiu       $a0, $v0, 0x7C0
    ctx->pc = 0x23de18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1984));
    // 0x23de1c: 0x24420220  addiu       $v0, $v0, 0x220
    ctx->pc = 0x23de1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
    // 0x23de20: 0xd8900000  lqc2        $vf16, 0x0($a0)
    ctx->pc = 0x23de20u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23de24: 0xd85f0000  lqc2        $vf31, 0x0($v0)
    ctx->pc = 0x23de24u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23de28: 0x4bff842c  vsub.xyzw   $vf16, $vf16, $vf31
    ctx->pc = 0x23de28u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x23de2c: 0xf8b00000  sqc2        $vf16, 0x0($a1)
    ctx->pc = 0x23de2cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x23de30: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23de30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23de34: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x23de34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x23de38: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x23de38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23de3c: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x23de3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x23de40: 0xe7a3003c  swc1        $f3, 0x3C($sp)
    ctx->pc = 0x23de40u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x23de44: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x23de44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23de48: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x23de48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23de4c: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x23de4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23de50: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x23de50u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x23de54: 0x4602101e  madda.s     $f2, $f2
    ctx->pc = 0x23de54u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[2])));
    // 0x23de58: 0x4600005c  madd.s      $f1, $f0, $f0
    ctx->pc = 0x23de58u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x23de5c: 0x460118d6  rsqrt.s     $f3, $f3, $f1
    ctx->pc = 0x23de5cu;
    ctx->f[3] = 1.0f / sqrtf(ctx->f[3]);
    // 0x23de60: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x23de60u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23de64: 0x4a20042c  vsub.w      $vf16, $vf0, $vf0
    ctx->pc = 0x23de64u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x23de68: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x23de68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x23de6c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x23de6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x23de70: 0x4bc18418  vmulx.xyz   $vf16, $vf16, $vf1x
    ctx->pc = 0x23de70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x23de74: 0xc08f6b6  jal         func_23DAD8
    ctx->pc = 0x23DE74u;
    SET_GPR_U32(ctx, 31, 0x23DE7Cu);
    ctx->pc = 0x23DE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DE74u;
    // 0x23de78: 0xf8500000  sqc2        $vf16, 0x0($v0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23DAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DAD8u, 0x23DE74u, 0x23DE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DE7Cu;
label_23de7c:
    // 0x23de7c: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x23de7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x23de80: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x23de80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x23de84: 0xc7828778  lwc1        $f2, -0x7888($gp)
    ctx->pc = 0x23de84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23de88: 0x3c170047  lui         $s7, 0x47
    ctx->pc = 0x23de88u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)71 << 16));
    // 0x23de8c: 0x26f7b548  addiu       $s7, $s7, -0x4AB8
    ctx->pc = 0x23de8cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294948168));
    // 0x23de90: 0x2e2b821  addu        $s7, $s7, $v0
    ctx->pc = 0x23de90u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x23de94: 0xc781877c  lwc1        $f1, -0x7884($gp)
    ctx->pc = 0x23de94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23de98: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x23de98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x23de9c: 0xc7858780  lwc1        $f5, -0x7880($gp)
    ctx->pc = 0x23de9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x23dea0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x23dea0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x23dea4: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x23dea4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x23dea8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x23dea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23deac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23deacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23deb0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23deb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x23deb4: 0xc60406c0  lwc1        $f4, 0x6C0($s0)
    ctx->pc = 0x23deb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x23deb8: 0x0  nop
    ctx->pc = 0x23deb8u;
    // NOP
    // 0x23debc: 0x0  nop
    ctx->pc = 0x23debcu;
    // NOP
    // 0x23dec0: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x23dec0u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[3];
    // 0x23dec4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x23dec4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x23dec8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x23dec8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23decc: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x23deccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x23ded0: 0xc08f6b6  jal         func_23DAD8
    ctx->pc = 0x23DED0u;
    SET_GPR_U32(ctx, 31, 0x23DED8u);
    ctx->pc = 0x23DED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DED0u;
    // 0x23ded4: 0x46040d82  mul.s       $f22, $f1, $f4 (Delay Slot)
    ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23DAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DAD8u, 0x23DED0u, 0x23DED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DED8u;
label_23ded8:
    // 0x23ded8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23ded8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23dedc: 0x2c820005  sltiu       $v0, $a0, 0x5
    ctx->pc = 0x23dedcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x23dee0: 0x10400070  beqz        $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x23DEE0u;
    {
        const bool branch_taken_0x23dee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DEE0u;
        // 0x23dee4: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dee0) {
            ctx->pc = 0x23E0A4u;
            goto label_23e0a4;
        }
    }
    ctx->pc = 0x23DEE8u;
    // 0x23dee8: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x23dee8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x23deec: 0x3c110047  lui         $s1, 0x47
    ctx->pc = 0x23deecu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)71 << 16));
    // 0x23def0: 0x2631b610  addiu       $s1, $s1, -0x49F0
    ctx->pc = 0x23def0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294948368));
    // 0x23def4: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x23def4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x23def8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x23def8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x23defc: 0x5464006a  bnel        $v1, $a0, . + 4 + (0x6A << 2)
    ctx->pc = 0x23DEFCu;
    {
        const bool branch_taken_0x23defc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x23defc) {
            ctx->pc = 0x23DF00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DEFCu;
            // 0x23df00: 0xdfb10048  ld          $s1, 0x48($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E0A8u;
            goto label_23e0a8;
        }
    }
    ctx->pc = 0x23DF04u;
    // 0x23df04: 0xc7978784  lwc1        $f23, -0x787C($gp)
    ctx->pc = 0x23df04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x23df08: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x23df08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23df0c: 0xc7988788  lwc1        $f24, -0x7878($gp)
    ctx->pc = 0x23df0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x23df10: 0x24142aaa  addiu       $s4, $zero, 0x2AAA
    ctx->pc = 0x23df10u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 10922));
    // 0x23df14: 0x24167fff  addiu       $s6, $zero, 0x7FFF
    ctx->pc = 0x23df14u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x23df18: 0x3c15ffff  lui         $s5, 0xFFFF
    ctx->pc = 0x23df18u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65535 << 16));
    // 0x23df1c: 0x0  nop
    ctx->pc = 0x23df1cu;
    // NOP
label_23df20:
    // 0x23df20: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x23DF20u;
    SET_GPR_U32(ctx, 31, 0x23DF28u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x23DF20u, 0x23DF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DF28u;
label_23df28:
    // 0x23df28: 0x2741818  mult        $v1, $s3, $s4
    ctx->pc = 0x23df28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x23df2c: 0x54001a  div         $zero, $v0, $s4
    ctx->pc = 0x23df2cu;
    { int32_t divisor = GPR_S32(ctx, 20);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x23df30: 0xc780878c  lwc1        $f0, -0x7874($gp)
    ctx->pc = 0x23df30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23df34: 0x2010  mfhi        $a0
    ctx->pc = 0x23df34u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x23df38: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x23df38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x23df3c: 0x24638000  addiu       $v1, $v1, -0x8000
    ctx->pc = 0x23df3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x23df40: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x23df40u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x23df44: 0x2d0102a  slt         $v0, $s6, $s0
    ctx->pc = 0x23df44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x23df48: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23DF48u;
    {
        const bool branch_taken_0x23df48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF48u;
        // 0x23df4c: 0x4600b502  mul.s       $f20, $f22, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23df48) {
            ctx->pc = 0x23DF60u;
            goto label_23df60;
        }
    }
    ctx->pc = 0x23DF50u;
    // 0x23df50: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x23df50u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23df54: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23DF54u;
    {
        const bool branch_taken_0x23df54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF54u;
        // 0x23df58: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23df54) {
            ctx->pc = 0x23DF6Cu;
            goto label_23df6c;
        }
    }
    ctx->pc = 0x23DF5Cu;
    // 0x23df5c: 0x0  nop
    ctx->pc = 0x23df5cu;
    // NOP
label_23df60:
    // 0x23df60: 0x2151021  addu        $v0, $s0, $s5
    ctx->pc = 0x23df60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x23df64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23df64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23df68: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23df68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_23df6c:
    // 0x23df6c: 0xc04746c  jal         func_11D1B0
    ctx->pc = 0x23DF6Cu;
    SET_GPR_U32(ctx, 31, 0x23DF74u);
    ctx->pc = 0x23DF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DF6Cu;
    // 0x23df70: 0x46170302  mul.s       $f12, $f0, $f23 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D1B0u, 0x23DF6Cu, 0x23DF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DF74u;
label_23df74:
    // 0x23df74: 0x2d0102a  slt         $v0, $s6, $s0
    ctx->pc = 0x23df74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x23df78: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23DF78u;
    {
        const bool branch_taken_0x23df78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF78u;
        // 0x23df7c: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23df78) {
            ctx->pc = 0x23DF90u;
            goto label_23df90;
        }
    }
    ctx->pc = 0x23DF80u;
    // 0x23df80: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x23df80u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23df84: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23DF84u;
    {
        const bool branch_taken_0x23df84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF84u;
        // 0x23df88: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23df84) {
            ctx->pc = 0x23DF9Cu;
            goto label_23df9c;
        }
    }
    ctx->pc = 0x23DF8Cu;
    // 0x23df8c: 0x0  nop
    ctx->pc = 0x23df8cu;
    // NOP
label_23df90:
    // 0x23df90: 0x2151021  addu        $v0, $s0, $s5
    ctx->pc = 0x23df90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x23df94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23df94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23df98: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23df98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_23df9c:
    // 0x23df9c: 0xc0474d0  jal         func_11D340
    ctx->pc = 0x23DF9Cu;
    SET_GPR_U32(ctx, 31, 0x23DFA4u);
    ctx->pc = 0x23DFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DF9Cu;
    // 0x23dfa0: 0x46170302  mul.s       $f12, $f0, $f23 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D340u, 0x23DF9Cu, 0x23DFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DFA4u;
label_23dfa4:
    // 0x23dfa4: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x23dfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x23dfa8: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x23dfa8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x23dfac: 0xc7a30038  lwc1        $f3, 0x38($sp)
    ctx->pc = 0x23dfacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23dfb0: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x23dfb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23dfb4: 0xc6550040  lwc1        $f21, 0x40($s2)
    ctx->pc = 0x23dfb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x23dfb8: 0x4680ad60  cvt.s.w     $f21, $f21
    ctx->pc = 0x23dfb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[21], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x23dfbc: 0x46141942  mul.s       $f5, $f3, $f20
    ctx->pc = 0x23dfbcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x23dfc0: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x23dfc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x23dfc4: 0x46140d02  mul.s       $f20, $f1, $f20
    ctx->pc = 0x23dfc4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x23dfc8: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x23dfc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23dfcc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x23dfccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x23dfd0: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x23dfd0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x23dfd4: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x23dfd4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x23dfd8: 0x4616ad42  mul.s       $f21, $f21, $f22
    ctx->pc = 0x23dfd8u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[22]);
    // 0x23dfdc: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x23dfdcu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x23dfe0: 0x4603a501  sub.s       $f20, $f20, $f3
    ctx->pc = 0x23dfe0u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[3]);
    // 0x23dfe4: 0x46042900  add.s       $f4, $f5, $f4
    ctx->pc = 0x23dfe4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x23dfe8: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x23dfe8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x23dfec: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x23dfecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23dff0: 0xe7a50010  swc1        $f5, 0x10($sp)
    ctx->pc = 0x23dff0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x23dff4: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x23dff4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x23dff8: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x23DFF8u;
    SET_GPR_U32(ctx, 31, 0x23E000u);
    ctx->pc = 0x23DFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DFF8u;
    // 0x23dffc: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x23DFF8u, 0x23E000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E000u;
label_23e000:
    // 0x23e000: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23e000u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e004: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23e004u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x23e008: 0x46180003  div.s       $f0, $f0, $f24
    ctx->pc = 0x23e008u;
    if (ctx->f[24] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[24];
    // 0x23e00c: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x23e00cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x23e010: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x23e010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x23e014: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x23e014u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x23e018: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x23e018u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x23e01c: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23E01Cu;
    {
        const bool branch_taken_0x23e01c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x23E020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E01Cu;
        // 0x23e020: 0xe7b50014  swc1        $f21, 0x14($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e01c) {
            ctx->pc = 0x23E030u;
            goto label_23e030;
        }
    }
    ctx->pc = 0x23E024u;
    // 0x23e024: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x23e024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e028: 0xc094e68  jal         func_2539A0
    ctx->pc = 0x23E028u;
    SET_GPR_U32(ctx, 31, 0x23E030u);
    ctx->pc = 0x23E02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E028u;
    // 0x23e02c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2539A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2539A0u, 0x23E028u, 0x23E030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E030u;
label_23e030:
    // 0x23e030: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x23e030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x23e034: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23E034u;
    {
        const bool branch_taken_0x23e034 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x23E038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E034u;
        // 0x23e038: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e034) {
            ctx->pc = 0x23E044u;
            goto label_23e044;
        }
    }
    ctx->pc = 0x23E03Cu;
    // 0x23e03c: 0xc094e68  jal         func_2539A0
    ctx->pc = 0x23E03Cu;
    SET_GPR_U32(ctx, 31, 0x23E044u);
    ctx->pc = 0x23E040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E03Cu;
    // 0x23e040: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2539A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2539A0u, 0x23E03Cu, 0x23E044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E044u;
label_23e044:
    // 0x23e044: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x23e044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x23e048: 0x442000d  bltzl       $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x23E048u;
    {
        const bool branch_taken_0x23e048 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x23e048) {
            ctx->pc = 0x23E04Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E048u;
            // 0x23e04c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E080u;
            goto label_23e080;
        }
    }
    ctx->pc = 0x23E050u;
    // 0x23e050: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x23e050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x23e054: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x23e054u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x23e058: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x23E058u;
    {
        const bool branch_taken_0x23e058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e058) {
            ctx->pc = 0x23E05Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E058u;
            // 0x23e05c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E080u;
            goto label_23e080;
        }
    }
    ctx->pc = 0x23E060u;
    // 0x23e060: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x23e060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23e064: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x23e064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e068: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x23e068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x23e06c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x23e06cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23e070: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x23e070u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x23e074: 0xc094e68  jal         func_2539A0
    ctx->pc = 0x23E074u;
    SET_GPR_U32(ctx, 31, 0x23E07Cu);
    ctx->pc = 0x23E078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E074u;
    // 0x23e078: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2539A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2539A0u, 0x23E074u, 0x23E07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E07Cu;
label_23e07c:
    // 0x23e07c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x23e07cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_23e080:
    // 0x23e080: 0x2a620006  slti        $v0, $s3, 0x6
    ctx->pc = 0x23e080u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x23e084: 0x1440ffa6  bnez        $v0, . + 4 + (-0x5A << 2)
    ctx->pc = 0x23E084u;
    {
        const bool branch_taken_0x23e084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e084) {
            ctx->pc = 0x23DF20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23df20;
        }
    }
    ctx->pc = 0x23E08Cu;
    // 0x23e08c: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x23e08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x23e090: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x23e090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x23e094: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x23e094u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x23e098: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23E098u;
    {
        const bool branch_taken_0x23e098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e098) {
            ctx->pc = 0x23E09Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E098u;
            // 0x23e09c: 0xa640003c  sh          $zero, 0x3C($s2) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 18), 60), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E0A0u;
            goto label_23e0a0;
        }
    }
    ctx->pc = 0x23E0A0u;
label_23e0a0:
    // 0x23e0a0: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x23e0a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23e0a4:
    // 0x23e0a4: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x23e0a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_23e0a8:
    // 0x23e0a8: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x23e0a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23e0ac: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x23e0acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x23e0b0: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x23e0b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23e0b4: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x23e0b4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23e0b8: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x23e0b8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x23e0bc: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x23e0bcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23e0c0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x23e0c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x23e0c4: 0xc7b800a8  lwc1        $f24, 0xA8($sp)
    ctx->pc = 0x23e0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x23e0c8: 0xc7b700a0  lwc1        $f23, 0xA0($sp)
    ctx->pc = 0x23e0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x23e0cc: 0xc7b60098  lwc1        $f22, 0x98($sp)
    ctx->pc = 0x23e0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x23e0d0: 0xc7b50090  lwc1        $f21, 0x90($sp)
    ctx->pc = 0x23e0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x23e0d4: 0xc7b40088  lwc1        $f20, 0x88($sp)
    ctx->pc = 0x23e0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23e0d8: 0x3e00008  jr          $ra
    ctx->pc = 0x23E0D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E0D8u;
        // 0x23e0dc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E0D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23E0E0u;
}
