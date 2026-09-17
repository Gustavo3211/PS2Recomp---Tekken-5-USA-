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

// Function: sub_002D28F0
// Address: 0x2d28f0 - 0x2d29f8
void sub_002D28F0_0x2d28f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D28F0_0x2d28f0");
#endif

    switch (ctx->pc) {
        case 0x2d2914u: goto label_2d2914;
        case 0x2d29d8u: goto label_2d29d8;
        case 0x2d29e0u: goto label_2d29e0;
        default: break;
    }

    ctx->pc = 0x2d28f0u;

    // 0x2d28f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d28f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d28f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d28f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d28f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d28f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d28fc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2d28fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2d2900: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x2d2900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2d2904: 0x50400037  beql        $v0, $zero, . + 4 + (0x37 << 2)
    ctx->pc = 0x2D2904u;
    {
        const bool branch_taken_0x2d2904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2904) {
            ctx->pc = 0x2D2908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2904u;
            // 0x2d2908: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D29E4u;
            goto label_2d29e4;
        }
    }
    ctx->pc = 0x2D290Cu;
    // 0x2d290c: 0xc0cb7d4  jal         func_32DF50
    ctx->pc = 0x2D290Cu;
    SET_GPR_U32(ctx, 31, 0x2D2914u);
    ctx->pc = 0x32DF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF50u, 0x2D290Cu, 0x2D2914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2914u;
label_2d2914:
    // 0x2d2914: 0x4ae00714  vminix.yzw  $vf28, $vf0, $vf0x
    ctx->pc = 0x2d2914u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2d2918: 0x4b000713  vmaxw.x     $vf28, $vf0, $vf0w
    ctx->pc = 0x2d2918u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2d291c: 0x4b600754  vminix.xzw  $vf29, $vf0, $vf0x
    ctx->pc = 0x2d291cu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2d2920: 0x4a800753  vmaxw.y     $vf29, $vf0, $vf0w
    ctx->pc = 0x2d2920u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2d2924: 0x4ba00794  vminix.xyw  $vf30, $vf0, $vf0x
    ctx->pc = 0x2d2924u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x2d2928: 0x4a400793  vmaxw.z     $vf30, $vf0, $vf0w
    ctx->pc = 0x2d2928u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x2d292c: 0x4bff033c  vmove.xyzw  $vf31, $vf0
    ctx->pc = 0x2d292cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2d2930: 0x8e05008c  lw          $a1, 0x8C($s0)
    ctx->pc = 0x2d2930u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x2d2934: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2d2934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2d2938: 0x24490340  addiu       $t1, $v0, 0x340
    ctx->pc = 0x2d2938u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 832));
    // 0x2d293c: 0x24a34000  addiu       $v1, $a1, 0x4000
    ctx->pc = 0x2d293cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16384));
    // 0x2d2940: 0x30a48000  andi        $a0, $a1, 0x8000
    ctx->pc = 0x2d2940u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x2d2944: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x2d2944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2d2948: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x2d2948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2d294c: 0x44400  sll         $t0, $a0, 16
    ctx->pc = 0x2d294cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2d2950: 0x30a43fff  andi        $a0, $a1, 0x3FFF
    ctx->pc = 0x2d2950u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
    // 0x2d2954: 0x23c00  sll         $a3, $v0, 16
    ctx->pc = 0x2d2954u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2d2958: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D2958u;
    {
        const bool branch_taken_0x2d2958 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D295Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2958u;
        // 0x2d295c: 0x30a64000  andi        $a2, $a1, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2958) {
            ctx->pc = 0x2D2968u;
            goto label_2d2968;
        }
    }
    ctx->pc = 0x2D2960u;
    // 0x2d2960: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2d2960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2d2964: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x2d2964u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2d2968:
    // 0x2d2968: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2d2968u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2d296c: 0x30a43fff  andi        $a0, $a1, 0x3FFF
    ctx->pc = 0x2d296cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
    // 0x2d2970: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2d2970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2d2974: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2d2974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d2978: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D2978u;
    {
        const bool branch_taken_0x2d2978 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D297Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2978u;
        // 0x2d297c: 0x672825  or          $a1, $v1, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2978) {
            ctx->pc = 0x2D2988u;
            goto label_2d2988;
        }
    }
    ctx->pc = 0x2D2980u;
    // 0x2d2980: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2d2980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2d2984: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x2d2984u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2d2988:
    // 0x2d2988: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2d2988u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2d298c: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2d298cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2d2990: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2d2990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d2994: 0x881825  or          $v1, $a0, $t0
    ctx->pc = 0x2d2994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x2d2998: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2d2998u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2d299c: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x2d299cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x2d29a0: 0x4be2e1bc  vmulax.xyzw $ACC, $vf28, $vf2x
    ctx->pc = 0x2d29a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2d29a4: 0x4be1f0c8  vmaddx.xyzw $vf3, $vf30, $vf1x
    ctx->pc = 0x2d29a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2d29a8: 0x4be1e1bc  vmulax.xyzw $ACC, $vf28, $vf1x
    ctx->pc = 0x2d29a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2d29ac: 0x4be2f70c  vmsubx.xyzw $vf28, $vf30, $vf2x
    ctx->pc = 0x2d29acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2d29b0: 0x4bfe1b3c  vmove.xyzw  $vf30, $vf3
    ctx->pc = 0x2d29b0u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x2d29b4: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x2d29b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x2d29b8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d29b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d29bc: 0x3c061002  lui         $a2, 0x1002
    ctx->pc = 0x2d29bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4098 << 16));
    // 0x2d29c0: 0x8e05005c  lw          $a1, 0x5C($s0)
    ctx->pc = 0x2d29c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2d29c4: 0x34c6019a  ori         $a2, $a2, 0x19A
    ctx->pc = 0x2d29c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)410);
    // 0x2d29c8: 0x8e0400bc  lw          $a0, 0xBC($s0)
    ctx->pc = 0x2d29c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x2d29cc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2d29ccu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2d29d0: 0xc0c9dda  jal         func_327768
    ctx->pc = 0x2D29D0u;
    SET_GPR_U32(ctx, 31, 0x2D29D8u);
    ctx->pc = 0x2D29D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D29D0u;
    // 0x2d29d4: 0x240712b1  addiu       $a3, $zero, 0x12B1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4785));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327768u, 0x2D29D0u, 0x2D29D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D29D8u;
label_2d29d8:
    // 0x2d29d8: 0xc0cb7e0  jal         func_32DF80
    ctx->pc = 0x2D29D8u;
    SET_GPR_U32(ctx, 31, 0x2D29E0u);
    ctx->pc = 0x32DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF80u, 0x2D29D8u, 0x2D29E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D29E0u;
label_2d29e0:
    // 0x2d29e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d29e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d29e4:
    // 0x2d29e4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2d29e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d29e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D29E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D29ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D29E8u;
        // 0x2d29ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D29E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D29F0u;
    // 0x2d29f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D29F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D29F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D29F8u;
}
