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

// Function: sub_002523A8
// Address: 0x2523a8 - 0x252530
void sub_002523A8_0x2523a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002523A8_0x2523a8");
#endif

    switch (ctx->pc) {
        case 0x2523e8u: goto label_2523e8;
        case 0x2524fcu: goto label_2524fc;
        default: break;
    }

    ctx->pc = 0x2523a8u;

    // 0x2523a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2523a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2523ac: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2523acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2523b0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2523b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2523b4: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2523b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2523b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2523b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2523bc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2523bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2523c0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2523c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2523c4: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2523c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x2523c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2523c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2523cc: 0x8e220118  lw          $v0, 0x118($s1)
    ctx->pc = 0x2523ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x2523d0: 0x215c3  sra         $v0, $v0, 23
    ctx->pc = 0x2523d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 23));
    // 0x2523d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2523d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2523d8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2523D8u;
    {
        const bool branch_taken_0x2523d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2523DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2523D8u;
        // 0x2523dc: 0x27a50004  addiu       $a1, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2523d8) {
            ctx->pc = 0x25240Cu;
            goto label_25240c;
        }
    }
    ctx->pc = 0x2523E0u;
    // 0x2523e0: 0xc094822  jal         func_252088
    ctx->pc = 0x2523E0u;
    SET_GPR_U32(ctx, 31, 0x2523E8u);
    ctx->pc = 0x252088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252088u, 0x2523E0u, 0x2523E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2523E8u;
label_2523e8:
    // 0x2523e8: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x2523e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x2523ec: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x2523ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2523f0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2523f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2523f4: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2523f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2523f8: 0xe6010010  swc1        $f1, 0x10($s0)
    ctx->pc = 0x2523f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x2523fc: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x2523fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x252400: 0x8e220118  lw          $v0, 0x118($s1)
    ctx->pc = 0x252400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x252404: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x252404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x252408: 0xae220118  sw          $v0, 0x118($s1)
    ctx->pc = 0x252408u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 280), GPR_U32(ctx, 2));
label_25240c:
    // 0x25240c: 0x4ae00714  vminix.yzw  $vf28, $vf0, $vf0x
    ctx->pc = 0x25240cu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x252410: 0x4b000713  vmaxw.x     $vf28, $vf0, $vf0w
    ctx->pc = 0x252410u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x252414: 0x4b600754  vminix.xzw  $vf29, $vf0, $vf0x
    ctx->pc = 0x252414u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x252418: 0x4a800753  vmaxw.y     $vf29, $vf0, $vf0w
    ctx->pc = 0x252418u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25241c: 0x4ba00794  vminix.xyw  $vf30, $vf0, $vf0x
    ctx->pc = 0x25241cu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x252420: 0x4a400793  vmaxw.z     $vf30, $vf0, $vf0w
    ctx->pc = 0x252420u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x252424: 0x4bff033c  vmove.xyzw  $vf31, $vf0
    ctx->pc = 0x252424u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x252428: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x252428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25242c: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x25242cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x252430: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x252430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252434: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x252434u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x252438: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x252438u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x25243c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x25243cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x252440: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x252440u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x252444: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x252444u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x252448: 0x48a41800  qmtc2.ni    $a0, $vf3
    ctx->pc = 0x252448u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x25244c: 0x4be1e1bc  vmulax.xyzw $ACC, $vf28, $vf1x
    ctx->pc = 0x25244cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x252450: 0x4be2e8bc  vmaddax.xyzw $ACC, $vf29, $vf2x
    ctx->pc = 0x252450u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x252454: 0x4be3f0bc  vmaddax.xyzw $ACC, $vf30, $vf3x
    ctx->pc = 0x252454u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x252458: 0x4be0ffcb  vmaddw.xyzw $vf31, $vf31, $vf0w
    ctx->pc = 0x252458u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x25245c: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x25245cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252460: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x252460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x252464: 0xc78089b0  lwc1        $f0, -0x7650($gp)
    ctx->pc = 0x252464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252468: 0x24490340  addiu       $t1, $v0, 0x340
    ctx->pc = 0x252468u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 832));
    // 0x25246c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x25246cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x252470: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x252470u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x252474: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x252474u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x252478: 0x24a34000  addiu       $v1, $a1, 0x4000
    ctx->pc = 0x252478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16384));
    // 0x25247c: 0x30a48000  andi        $a0, $a1, 0x8000
    ctx->pc = 0x25247cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x252480: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x252480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x252484: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x252484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x252488: 0x44400  sll         $t0, $a0, 16
    ctx->pc = 0x252488u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x25248c: 0x30a43fff  andi        $a0, $a1, 0x3FFF
    ctx->pc = 0x25248cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
    // 0x252490: 0x23c00  sll         $a3, $v0, 16
    ctx->pc = 0x252490u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x252494: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x252494u;
    {
        const bool branch_taken_0x252494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x252498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252494u;
        // 0x252498: 0x30a64000  andi        $a2, $a1, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x252494) {
            ctx->pc = 0x2524A4u;
            goto label_2524a4;
        }
    }
    ctx->pc = 0x25249Cu;
    // 0x25249c: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x25249cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2524a0: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x2524a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2524a4:
    // 0x2524a4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2524a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2524a8: 0x30a43fff  andi        $a0, $a1, 0x3FFF
    ctx->pc = 0x2524a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
    // 0x2524ac: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2524acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2524b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2524b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2524b4: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2524B4u;
    {
        const bool branch_taken_0x2524b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2524B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2524B4u;
        // 0x2524b8: 0x672825  or          $a1, $v1, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2524b4) {
            ctx->pc = 0x2524C4u;
            goto label_2524c4;
        }
    }
    ctx->pc = 0x2524BCu;
    // 0x2524bc: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2524bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2524c0: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x2524c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2524c4:
    // 0x2524c4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2524c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2524c8: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2524c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2524cc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2524ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2524d0: 0x881825  or          $v1, $a0, $t0
    ctx->pc = 0x2524d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x2524d4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2524d4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2524d8: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x2524d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x2524dc: 0x4be2e1bc  vmulax.xyzw $ACC, $vf28, $vf2x
    ctx->pc = 0x2524dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2524e0: 0x4be1f0c8  vmaddx.xyzw $vf3, $vf30, $vf1x
    ctx->pc = 0x2524e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2524e4: 0x4be1e1bc  vmulax.xyzw $ACC, $vf28, $vf1x
    ctx->pc = 0x2524e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2524e8: 0x4be2f70c  vmsubx.xyzw $vf28, $vf30, $vf2x
    ctx->pc = 0x2524e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2524ec: 0x4bfe1b3c  vmove.xyzw  $vf30, $vf3
    ctx->pc = 0x2524ecu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x2524f0: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x2524f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2524f4: 0xc0cbab4  jal         func_32EAD0
    ctx->pc = 0x2524F4u;
    SET_GPR_U32(ctx, 31, 0x2524FCu);
    ctx->pc = 0x2524F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2524F4u;
    // 0x2524f8: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EAD0u, 0x2524F4u, 0x2524FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2524FCu;
label_2524fc:
    // 0x2524fc: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x2524fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252500: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x252500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x252504: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x252504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252508: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x252508u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25250c: 0xe6410000  swc1        $f1, 0x0($s2)
    ctx->pc = 0x25250cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x252510: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x252510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x252514: 0xe6420004  swc1        $f2, 0x4($s2)
    ctx->pc = 0x252514u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x252518: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x252518u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x25251c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x25251cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x252520: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x252520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x252524: 0x3e00008  jr          $ra
    ctx->pc = 0x252524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252524u;
        // 0x252528: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25252Cu;
    // 0x25252c: 0x0  nop
    ctx->pc = 0x25252cu;
    // NOP
    ctx->pc = 0x252530u;
}
