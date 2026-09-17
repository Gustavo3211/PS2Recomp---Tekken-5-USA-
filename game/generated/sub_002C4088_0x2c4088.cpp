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

// Function: sub_002C4088
// Address: 0x2c4088 - 0x2c42e0
void sub_002C4088_0x2c4088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4088_0x2c4088");
#endif

    switch (ctx->pc) {
        case 0x2c40c0u: goto label_2c40c0;
        case 0x2c40c8u: goto label_2c40c8;
        case 0x2c40d0u: goto label_2c40d0;
        case 0x2c40d8u: goto label_2c40d8;
        case 0x2c40e8u: goto label_2c40e8;
        case 0x2c40f0u: goto label_2c40f0;
        case 0x2c4164u: goto label_2c4164;
        case 0x2c4180u: goto label_2c4180;
        case 0x2c41a8u: goto label_2c41a8;
        case 0x2c4228u: goto label_2c4228;
        case 0x2c4250u: goto label_2c4250;
        case 0x2c426cu: goto label_2c426c;
        case 0x2c4274u: goto label_2c4274;
        case 0x2c42acu: goto label_2c42ac;
        case 0x2c42b4u: goto label_2c42b4;
        default: break;
    }

    ctx->pc = 0x2c4088u;

    // 0x2c4088: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2c4088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2c408c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2c408cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4090: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x2c4090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x2c4094: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x2c4094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x2c4098: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x2c4098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x2c409c: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x2c409cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x2c40a0: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x2c40a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x2c40a4: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x2c40a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
    // 0x2c40a8: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x2c40a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x2c40ac: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x2c40acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
    // 0x2c40b0: 0xe7b600b0  swc1        $f22, 0xB0($sp)
    ctx->pc = 0x2c40b0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2c40b4: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x2c40b4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2c40b8: 0xc09d480  jal         func_275200
    ctx->pc = 0x2C40B8u;
    SET_GPR_U32(ctx, 31, 0x2C40C0u);
    ctx->pc = 0x2C40BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C40B8u;
    // 0x2c40bc: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x275200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275200u, 0x2C40B8u, 0x2C40C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C40C0u;
label_2c40c0:
    // 0x2c40c0: 0xc07e232  jal         func_1F88C8
    ctx->pc = 0x2C40C0u;
    SET_GPR_U32(ctx, 31, 0x2C40C8u);
    ctx->pc = 0x2C40C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C40C0u;
    // 0x2c40c4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F88C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F88C8u, 0x2C40C0u, 0x2C40C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C40C8u;
label_2c40c8:
    // 0x2c40c8: 0xc09d47a  jal         func_2751E8
    ctx->pc = 0x2C40C8u;
    SET_GPR_U32(ctx, 31, 0x2C40D0u);
    ctx->pc = 0x2C40CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C40C8u;
    // 0x2c40cc: 0x2a82b  sltu        $s5, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2751E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2751E8u, 0x2C40C8u, 0x2C40D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C40D0u;
label_2c40d0:
    // 0x2c40d0: 0xc08eb0a  jal         func_23AC28
    ctx->pc = 0x2C40D0u;
    SET_GPR_U32(ctx, 31, 0x2C40D8u);
    ctx->pc = 0x2C40D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C40D0u;
    // 0x2c40d4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AC28u, 0x2C40D0u, 0x2C40D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C40D8u;
label_2c40d8:
    // 0x2c40d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2c40d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c40dc: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x2c40dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c40e0: 0xc08c19c  jal         func_230670
    ctx->pc = 0x2C40E0u;
    SET_GPR_U32(ctx, 31, 0x2C40E8u);
    ctx->pc = 0x2C40E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C40E0u;
    // 0x2c40e4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230670u, 0x2C40E0u, 0x2C40E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C40E8u;
label_2c40e8:
    // 0x2c40e8: 0xc08c31a  jal         func_230C68
    ctx->pc = 0x2C40E8u;
    SET_GPR_U32(ctx, 31, 0x2C40F0u);
    ctx->pc = 0x2C40ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C40E8u;
    // 0x2c40ec: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230C68u, 0x2C40E8u, 0x2C40F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C40F0u;
label_2c40f0:
    // 0x2c40f0: 0xda280000  lqc2        $vf8, 0x0($s1)
    ctx->pc = 0x2c40f0u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c40f4: 0xda290010  lqc2        $vf9, 0x10($s1)
    ctx->pc = 0x2c40f4u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2c40f8: 0xda2a0020  lqc2        $vf10, 0x20($s1)
    ctx->pc = 0x2c40f8u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2c40fc: 0xda2b0030  lqc2        $vf11, 0x30($s1)
    ctx->pc = 0x2c40fcu;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2c4100: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2c4100u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c4104: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x2c4104u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2c4108: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x2c4108u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2c410c: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x2c410cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2c4110: 0x4be441bc  vmulax.xyzw $ACC, $vf8, $vf4x
    ctx->pc = 0x2c4110u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2c4114: 0x4be448bd  vmadday.xyzw $ACC, $vf9, $vf4y
    ctx->pc = 0x2c4114u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2c4118: 0x4be450be  vmaddaz.xyzw $ACC, $vf10, $vf4z
    ctx->pc = 0x2c4118u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2c411c: 0x4be4590b  vmaddw.xyzw $vf4, $vf11, $vf4w
    ctx->pc = 0x2c411cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2c4120: 0x4be541bc  vmulax.xyzw $ACC, $vf8, $vf5x
    ctx->pc = 0x2c4120u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2c4124: 0x4be548bd  vmadday.xyzw $ACC, $vf9, $vf5y
    ctx->pc = 0x2c4124u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2c4128: 0x4be550be  vmaddaz.xyzw $ACC, $vf10, $vf5z
    ctx->pc = 0x2c4128u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2c412c: 0x4be5594b  vmaddw.xyzw $vf5, $vf11, $vf5w
    ctx->pc = 0x2c412cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2c4130: 0x4be641bc  vmulax.xyzw $ACC, $vf8, $vf6x
    ctx->pc = 0x2c4130u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2c4134: 0x4be648bd  vmadday.xyzw $ACC, $vf9, $vf6y
    ctx->pc = 0x2c4134u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2c4138: 0x4be650be  vmaddaz.xyzw $ACC, $vf10, $vf6z
    ctx->pc = 0x2c4138u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2c413c: 0x4be6598b  vmaddw.xyzw $vf6, $vf11, $vf6w
    ctx->pc = 0x2c413cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2c4140: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x2c4140u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2c4144: 0x4be748bd  vmadday.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x2c4144u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2c4148: 0x4be750be  vmaddaz.xyzw $ACC, $vf10, $vf7z
    ctx->pc = 0x2c4148u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2c414c: 0x4be759cb  vmaddw.xyzw $vf7, $vf11, $vf7w
    ctx->pc = 0x2c414cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2c4150: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x2c4150u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2c4154: 0xfa050010  sqc2        $vf5, 0x10($s0)
    ctx->pc = 0x2c4154u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2c4158: 0xfa060020  sqc2        $vf6, 0x20($s0)
    ctx->pc = 0x2c4158u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2c415c: 0xc07c4c4  jal         func_1F1310
    ctx->pc = 0x2C415Cu;
    SET_GPR_U32(ctx, 31, 0x2C4164u);
    ctx->pc = 0x2C4160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C415Cu;
    // 0x2c4160: 0xfa070030  sqc2        $vf7, 0x30($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1310u, 0x2C415Cu, 0x2C4164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4164u;
label_2c4164:
    // 0x2c4164: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C4164u;
    {
        const bool branch_taken_0x2c4164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C4168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4164u;
        // 0x2c4168: 0x8f82a530  lw          $v0, -0x5AD0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4164) {
            ctx->pc = 0x2C4178u;
            goto label_2c4178;
        }
    }
    ctx->pc = 0x2C416Cu;
    // 0x2c416c: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x2c416cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x2c4170: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x2C4170u;
    {
        const bool branch_taken_0x2c4170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4170u;
        // 0x2c4174: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4170) {
            ctx->pc = 0x2C42B8u;
            goto label_2c42b8;
        }
    }
    ctx->pc = 0x2C4178u;
label_2c4178:
    // 0x2c4178: 0xc0b0ec4  jal         func_2C3B10
    ctx->pc = 0x2C4178u;
    SET_GPR_U32(ctx, 31, 0x2C4180u);
    ctx->pc = 0x2C3B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3B10u, 0x2C4178u, 0x2C4180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4180u;
label_2c4180:
    // 0x2c4180: 0x1a600031  blez        $s3, . + 4 + (0x31 << 2)
    ctx->pc = 0x2C4180u;
    {
        const bool branch_taken_0x2c4180 = (GPR_S32(ctx, 19) <= 0);
        if (branch_taken_0x2c4180) {
            ctx->pc = 0x2C4248u;
            goto label_2c4248;
        }
    }
    ctx->pc = 0x2C4188u;
    // 0x2c4188: 0xc7969300  lwc1        $f22, -0x6D00($gp)
    ctx->pc = 0x2c4188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2c418c: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x2c418cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2c4190: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c4190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c4194: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2c4194u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2c4198: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x2c4198u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c419c: 0x3c0145fa  lui         $at, 0x45FA
    ctx->pc = 0x2c419cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17914 << 16));
    // 0x2c41a0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2c41a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2c41a4: 0x0  nop
    ctx->pc = 0x2c41a4u;
    // NOP
label_2c41a8:
    // 0x2c41a8: 0x8e430898  lw          $v1, 0x898($s2)
    ctx->pc = 0x2c41a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2200)));
    // 0x2c41ac: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x2c41acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x2c41b0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C41B0u;
    {
        const bool branch_taken_0x2c41b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C41B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C41B0u;
        // 0x2c41b4: 0xa4600072  sh          $zero, 0x72($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 114), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c41b0) {
            ctx->pc = 0x2C41C4u;
            goto label_2c41c4;
        }
    }
    ctx->pc = 0x2C41B8u;
    // 0x2c41b8: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x2c41b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
    // 0x2c41bc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C41BCu;
    {
        const bool branch_taken_0x2c41bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C41C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C41BCu;
        // 0x2c41c0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c41bc) {
            ctx->pc = 0x2C41C8u;
            goto label_2c41c8;
        }
    }
    ctx->pc = 0x2C41C4u;
label_2c41c4:
    // 0x2c41c4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2c41c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c41c8:
    // 0x2c41c8: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2C41C8u;
    {
        const bool branch_taken_0x2c41c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C41CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C41C8u;
        // 0x2c41cc: 0xac640088  sw          $a0, 0x88($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c41c8) {
            ctx->pc = 0x2C423Cu;
            goto label_2c423c;
        }
    }
    ctx->pc = 0x2C41D0u;
    // 0x2c41d0: 0x5280001b  beql        $s4, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x2C41D0u;
    {
        const bool branch_taken_0x2c41d0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c41d0) {
            ctx->pc = 0x2C41D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C41D0u;
            // 0x2c41d4: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4240u;
            goto label_2c4240;
        }
    }
    ctx->pc = 0x2C41D8u;
    // 0x2c41d8: 0x8e500898  lw          $s0, 0x898($s2)
    ctx->pc = 0x2c41d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2200)));
    // 0x2c41dc: 0x9602006e  lhu         $v0, 0x6E($s0)
    ctx->pc = 0x2c41dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 110)));
    // 0x2c41e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c41e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c41e4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2c41e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2c41e8: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x2C41E8u;
    {
        const bool branch_taken_0x2c41e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c41e8) {
            ctx->pc = 0x2C41ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C41E8u;
            // 0x2c41ec: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4240u;
            goto label_2c4240;
        }
    }
    ctx->pc = 0x2C41F0u;
    // 0x2c41f0: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x2c41f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c41f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c41f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c41f8: 0xe7b60054  swc1        $f22, 0x54($sp)
    ctx->pc = 0x2c41f8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2c41fc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c41fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4200: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2c4200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2c4204: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2c4204u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4208: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x2c4208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c420c: 0xe7b5005c  swc1        $f21, 0x5C($sp)
    ctx->pc = 0x2c420cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2c4210: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x2c4210u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2c4214: 0xdfa20050  ld          $v0, 0x50($sp)
    ctx->pc = 0x2c4214u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c4218: 0xdfa30058  ld          $v1, 0x58($sp)
    ctx->pc = 0x2c4218u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2c421c: 0xffa20040  sd          $v0, 0x40($sp)
    ctx->pc = 0x2c421cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 2));
    // 0x2c4220: 0xc08491e  jal         func_212478
    ctx->pc = 0x2C4220u;
    SET_GPR_U32(ctx, 31, 0x2C4228u);
    ctx->pc = 0x2C4224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4220u;
    // 0x2c4224: 0xffa30048  sd          $v1, 0x48($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212478u, 0x2C4220u, 0x2C4228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4228u;
label_2c4228:
    // 0x2c4228: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x2c4228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c422c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2c422cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c4230: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x2C4230u;
    {
        const bool branch_taken_0x2c4230 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c4230) {
            ctx->pc = 0x2C4234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4230u;
            // 0x2c4234: 0xae16008c  sw          $s6, 0x8C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C423Cu;
            goto label_2c423c;
        }
    }
    ctx->pc = 0x2C4238u;
    // 0x2c4238: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x2c4238u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
label_2c423c:
    // 0x2c423c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x2c423cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_2c4240:
    // 0x2c4240: 0x1e60ffd9  bgtz        $s3, . + 4 + (-0x27 << 2)
    ctx->pc = 0x2C4240u;
    {
        const bool branch_taken_0x2c4240 = (GPR_S32(ctx, 19) > 0);
        ctx->pc = 0x2C4244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4240u;
        // 0x2c4244: 0x265208d0  addiu       $s2, $s2, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4240) {
            ctx->pc = 0x2C41A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c41a8;
        }
    }
    ctx->pc = 0x2C4248u;
label_2c4248:
    // 0x2c4248: 0xc0b192a  jal         func_2C64A8
    ctx->pc = 0x2C4248u;
    SET_GPR_U32(ctx, 31, 0x2C4250u);
    ctx->pc = 0x2C424Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4248u;
    // 0x2c424c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C64A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C64A8u, 0x2C4248u, 0x2C4250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4250u;
label_2c4250:
    // 0x2c4250: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2c4250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2c4254: 0x8c44885c  lw          $a0, -0x77A4($v0)
    ctx->pc = 0x2c4254u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A885Cu));
    // 0x2c4258: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2c4258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2c425c: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C425Cu;
    {
        const bool branch_taken_0x2c425c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c425c) {
            ctx->pc = 0x2C426Cu;
            goto label_2c426c;
        }
    }
    ctx->pc = 0x2C4264u;
    // 0x2c4264: 0xc0b0f84  jal         func_2C3E10
    ctx->pc = 0x2C4264u;
    SET_GPR_U32(ctx, 31, 0x2C426Cu);
    ctx->pc = 0x2C3E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E10u, 0x2C4264u, 0x2C426Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C426Cu;
label_2c426c:
    // 0x2c426c: 0xc0b10ba  jal         func_2C42E8
    ctx->pc = 0x2C426Cu;
    SET_GPR_U32(ctx, 31, 0x2C4274u);
    ctx->pc = 0x2C4270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C426Cu;
    // 0x2c4270: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C42E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C42E8u, 0x2C426Cu, 0x2C4274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4274u;
label_2c4274:
    // 0x2c4274: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2c4274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2c4278: 0x244323b0  addiu       $v1, $v0, 0x23B0
    ctx->pc = 0x2c4278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 9136));
    // 0x2c427c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x2c427cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3B23B4u));
    // 0x2c4280: 0x24620080  addiu       $v0, $v1, 0x80
    ctx->pc = 0x2c4280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x2c4284: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C4284u;
    {
        const bool branch_taken_0x2c4284 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C4288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4284u;
        // 0x2c4288: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4284) {
            ctx->pc = 0x2C4298u;
            goto label_2c4298;
        }
    }
    ctx->pc = 0x2C428Cu;
    // 0x2c428c: 0x246200b8  addiu       $v0, $v1, 0xB8
    ctx->pc = 0x2c428cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 184));
    // 0x2c4290: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C4290u;
    {
        const bool branch_taken_0x2c4290 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c4290) {
            ctx->pc = 0x2C429Cu;
            goto label_2c429c;
        }
    }
    ctx->pc = 0x2C4298u;
label_2c4298:
    // 0x2c4298: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c4298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c429c:
    // 0x2c429c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C429Cu;
    {
        const bool branch_taken_0x2c429c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c429c) {
            ctx->pc = 0x2C42ACu;
            goto label_2c42ac;
        }
    }
    ctx->pc = 0x2C42A4u;
    // 0x2c42a4: 0xc0b0e7e  jal         func_2C39F8
    ctx->pc = 0x2C42A4u;
    SET_GPR_U32(ctx, 31, 0x2C42ACu);
    ctx->pc = 0x2C39F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39F8u, 0x2C42A4u, 0x2C42ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C42ACu;
label_2c42ac:
    // 0x2c42ac: 0xc0b0fae  jal         func_2C3EB8
    ctx->pc = 0x2C42ACu;
    SET_GPR_U32(ctx, 31, 0x2C42B4u);
    ctx->pc = 0x2C3EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3EB8u, 0x2C42ACu, 0x2C42B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C42B4u;
label_2c42b4:
    // 0x2c42b4: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x2c42b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2c42b8:
    // 0x2c42b8: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x2c42b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c42bc: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x2c42bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c42c0: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x2c42c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c42c4: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x2c42c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c42c8: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x2c42c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c42cc: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x2c42ccu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c42d0: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x2c42d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2c42d4: 0xc7b600b0  lwc1        $f22, 0xB0($sp)
    ctx->pc = 0x2c42d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2c42d8: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x2c42d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2c42dc: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x2c42dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->pc = 0x2c42e0u;
}
