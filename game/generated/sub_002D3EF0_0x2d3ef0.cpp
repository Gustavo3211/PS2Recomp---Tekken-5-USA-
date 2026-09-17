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

// Function: sub_002D3EF0
// Address: 0x2d3ef0 - 0x2d4118
void sub_002D3EF0_0x2d3ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D3EF0_0x2d3ef0");
#endif

    switch (ctx->pc) {
        case 0x2d3f14u: goto label_2d3f14;
        case 0x2d40d8u: goto label_2d40d8;
        case 0x2d40e0u: goto label_2d40e0;
        default: break;
    }

    ctx->pc = 0x2d3ef0u;

    // 0x2d3ef0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d3ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d3ef4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d3ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d3ef8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d3ef8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3efc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2d3efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2d3f00: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x2d3f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2d3f04: 0x50400077  beql        $v0, $zero, . + 4 + (0x77 << 2)
    ctx->pc = 0x2D3F04u;
    {
        const bool branch_taken_0x2d3f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3f04) {
            ctx->pc = 0x2D3F08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D3F04u;
            // 0x2d3f08: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D40E4u;
            goto label_2d40e4;
        }
    }
    ctx->pc = 0x2D3F0Cu;
    // 0x2d3f0c: 0xc0cb7d4  jal         func_32DF50
    ctx->pc = 0x2D3F0Cu;
    SET_GPR_U32(ctx, 31, 0x2D3F14u);
    ctx->pc = 0x32DF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF50u, 0x2D3F0Cu, 0x2D3F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3F14u;
label_2d3f14:
    // 0x2d3f14: 0x4ae00714  vminix.yzw  $vf28, $vf0, $vf0x
    ctx->pc = 0x2d3f14u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2d3f18: 0x4b000713  vmaxw.x     $vf28, $vf0, $vf0w
    ctx->pc = 0x2d3f18u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2d3f1c: 0x4b600754  vminix.xzw  $vf29, $vf0, $vf0x
    ctx->pc = 0x2d3f1cu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2d3f20: 0x4a800753  vmaxw.y     $vf29, $vf0, $vf0w
    ctx->pc = 0x2d3f20u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2d3f24: 0x4ba00794  vminix.xyw  $vf30, $vf0, $vf0x
    ctx->pc = 0x2d3f24u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x2d3f28: 0x4a400793  vmaxw.z     $vf30, $vf0, $vf0w
    ctx->pc = 0x2d3f28u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x2d3f2c: 0x4bff033c  vmove.xyzw  $vf31, $vf0
    ctx->pc = 0x2d3f2cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2d3f30: 0x8e07008c  lw          $a3, 0x8C($s0)
    ctx->pc = 0x2d3f30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x2d3f34: 0x24e34000  addiu       $v1, $a3, 0x4000
    ctx->pc = 0x2d3f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 16384));
    // 0x2d3f38: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x2d3f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2d3f3c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D3F3Cu;
    {
        const bool branch_taken_0x2d3f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3F3Cu;
        // 0x2d3f40: 0x30e43fff  andi        $a0, $a3, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3f3c) {
            ctx->pc = 0x2D3F4Cu;
            goto label_2d3f4c;
        }
    }
    ctx->pc = 0x2D3F44u;
    // 0x2d3f44: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2d3f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2d3f48: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x2d3f48u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2d3f4c:
    // 0x2d3f4c: 0x3c0a003f  lui         $t2, 0x3F
    ctx->pc = 0x2d3f4cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)63 << 16));
    // 0x2d3f50: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2d3f50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2d3f54: 0x25490340  addiu       $t1, $t2, 0x340
    ctx->pc = 0x2d3f54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 832));
    // 0x2d3f58: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2d3f58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2d3f5c: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2d3f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2d3f60: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2d3f60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2d3f64: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2d3f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d3f68: 0x30e54000  andi        $a1, $a3, 0x4000
    ctx->pc = 0x2d3f68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16384);
    // 0x2d3f6c: 0x30e63fff  andi        $a2, $a3, 0x3FFF
    ctx->pc = 0x2d3f6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16383);
    // 0x2d3f70: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D3F70u;
    {
        const bool branch_taken_0x2d3f70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3F70u;
        // 0x2d3f74: 0x834025  or          $t0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3f70) {
            ctx->pc = 0x2D3F80u;
            goto label_2d3f80;
        }
    }
    ctx->pc = 0x2D3F78u;
    // 0x2d3f78: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2d3f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2d3f7c: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x2d3f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2d3f80:
    // 0x2d3f80: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2d3f80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2d3f84: 0x30e48000  andi        $a0, $a3, 0x8000
    ctx->pc = 0x2d3f84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32768);
    // 0x2d3f88: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2d3f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2d3f8c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2d3f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2d3f90: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2d3f90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d3f94: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x2d3f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2d3f98: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2d3f98u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2d3f9c: 0x48a80800  qmtc2.ni    $t0, $vf1
    ctx->pc = 0x2d3f9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2d3fa0: 0x4be2e1bc  vmulax.xyzw $ACC, $vf28, $vf2x
    ctx->pc = 0x2d3fa0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2d3fa4: 0x4be1f0c8  vmaddx.xyzw $vf3, $vf30, $vf1x
    ctx->pc = 0x2d3fa4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2d3fa8: 0x4be1e1bc  vmulax.xyzw $ACC, $vf28, $vf1x
    ctx->pc = 0x2d3fa8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2d3fac: 0x4be2f70c  vmsubx.xyzw $vf28, $vf30, $vf2x
    ctx->pc = 0x2d3facu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2d3fb0: 0x4bfe1b3c  vmove.xyzw  $vf30, $vf3
    ctx->pc = 0x2d3fb0u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x2d3fb4: 0x8e060088  lw          $a2, 0x88($s0)
    ctx->pc = 0x2d3fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x2d3fb8: 0x24c34000  addiu       $v1, $a2, 0x4000
    ctx->pc = 0x2d3fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16384));
    // 0x2d3fbc: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x2d3fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2d3fc0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D3FC0u;
    {
        const bool branch_taken_0x2d3fc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3FC0u;
        // 0x2d3fc4: 0x30c43fff  andi        $a0, $a2, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3fc0) {
            ctx->pc = 0x2D3FD0u;
            goto label_2d3fd0;
        }
    }
    ctx->pc = 0x2D3FC8u;
    // 0x2d3fc8: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2d3fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2d3fcc: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x2d3fccu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2d3fd0:
    // 0x2d3fd0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2d3fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2d3fd4: 0x25480340  addiu       $t0, $t2, 0x340
    ctx->pc = 0x2d3fd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), 832));
    // 0x2d3fd8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2d3fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2d3fdc: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2d3fdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2d3fe0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2d3fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d3fe4: 0x30c24000  andi        $v0, $a2, 0x4000
    ctx->pc = 0x2d3fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16384);
    // 0x2d3fe8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2d3fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2d3fec: 0x30c53fff  andi        $a1, $a2, 0x3FFF
    ctx->pc = 0x2d3fecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
    // 0x2d3ff0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D3FF0u;
    {
        const bool branch_taken_0x2d3ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3FF0u;
        // 0x2d3ff4: 0x833825  or          $a3, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3ff0) {
            ctx->pc = 0x2D4000u;
            goto label_2d4000;
        }
    }
    ctx->pc = 0x2D3FF8u;
    // 0x2d3ff8: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2d3ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2d3ffc: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x2d3ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2d4000:
    // 0x2d4000: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2d4000u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2d4004: 0x30c48000  andi        $a0, $a2, 0x8000
    ctx->pc = 0x2d4004u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
    // 0x2d4008: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2d4008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2d400c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2d400cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2d4010: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2d4010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d4014: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x2d4014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2d4018: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2d4018u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2d401c: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x2d401cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x2d4020: 0x4be2f1bc  vmulax.xyzw $ACC, $vf30, $vf2x
    ctx->pc = 0x2d4020u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2d4024: 0x4be1e8c8  vmaddx.xyzw $vf3, $vf29, $vf1x
    ctx->pc = 0x2d4024u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2d4028: 0x4be1f1bc  vmulax.xyzw $ACC, $vf30, $vf1x
    ctx->pc = 0x2d4028u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2d402c: 0x4be2ef8c  vmsubx.xyzw $vf30, $vf29, $vf2x
    ctx->pc = 0x2d402cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x2d4030: 0x4bfd1b3c  vmove.xyzw  $vf29, $vf3
    ctx->pc = 0x2d4030u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x2d4034: 0x8e060090  lw          $a2, 0x90($s0)
    ctx->pc = 0x2d4034u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x2d4038: 0x24c34000  addiu       $v1, $a2, 0x4000
    ctx->pc = 0x2d4038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16384));
    // 0x2d403c: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x2d403cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2d4040: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D4040u;
    {
        const bool branch_taken_0x2d4040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4040u;
        // 0x2d4044: 0x30c43fff  andi        $a0, $a2, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4040) {
            ctx->pc = 0x2D4050u;
            goto label_2d4050;
        }
    }
    ctx->pc = 0x2D4048u;
    // 0x2d4048: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2d4048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2d404c: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x2d404cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2d4050:
    // 0x2d4050: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2d4050u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2d4054: 0x25480340  addiu       $t0, $t2, 0x340
    ctx->pc = 0x2d4054u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), 832));
    // 0x2d4058: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2d4058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2d405c: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2d405cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2d4060: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2d4060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d4064: 0x30c24000  andi        $v0, $a2, 0x4000
    ctx->pc = 0x2d4064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16384);
    // 0x2d4068: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2d4068u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2d406c: 0x30c53fff  andi        $a1, $a2, 0x3FFF
    ctx->pc = 0x2d406cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
    // 0x2d4070: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D4070u;
    {
        const bool branch_taken_0x2d4070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4070u;
        // 0x2d4074: 0x833825  or          $a3, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4070) {
            ctx->pc = 0x2D4080u;
            goto label_2d4080;
        }
    }
    ctx->pc = 0x2D4078u;
    // 0x2d4078: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2d4078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2d407c: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x2d407cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2d4080:
    // 0x2d4080: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2d4080u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2d4084: 0x30c48000  andi        $a0, $a2, 0x8000
    ctx->pc = 0x2d4084u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
    // 0x2d4088: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2d4088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2d408c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2d408cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2d4090: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2d4090u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d4094: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x2d4094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2d4098: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2d4098u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2d409c: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x2d409cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x2d40a0: 0x4be2e9bc  vmulax.xyzw $ACC, $vf29, $vf2x
    ctx->pc = 0x2d40a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2d40a4: 0x4be1e0c8  vmaddx.xyzw $vf3, $vf28, $vf1x
    ctx->pc = 0x2d40a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2d40a8: 0x4be1e9bc  vmulax.xyzw $ACC, $vf29, $vf1x
    ctx->pc = 0x2d40a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2d40ac: 0x4be2e74c  vmsubx.xyzw $vf29, $vf28, $vf2x
    ctx->pc = 0x2d40acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2d40b0: 0x4bfc1b3c  vmove.xyzw  $vf28, $vf3
    ctx->pc = 0x2d40b0u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x2d40b4: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x2d40b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x2d40b8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d40b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d40bc: 0x3c061002  lui         $a2, 0x1002
    ctx->pc = 0x2d40bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4098 << 16));
    // 0x2d40c0: 0x8e05005c  lw          $a1, 0x5C($s0)
    ctx->pc = 0x2d40c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2d40c4: 0x34c601c3  ori         $a2, $a2, 0x1C3
    ctx->pc = 0x2d40c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)451);
    // 0x2d40c8: 0x8e0400bc  lw          $a0, 0xBC($s0)
    ctx->pc = 0x2d40c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x2d40cc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2d40ccu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2d40d0: 0xc0ca0ce  jal         func_328338
    ctx->pc = 0x2D40D0u;
    SET_GPR_U32(ctx, 31, 0x2D40D8u);
    ctx->pc = 0x2D40D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D40D0u;
    // 0x2d40d4: 0x240718b1  addiu       $a3, $zero, 0x18B1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6321));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328338u, 0x2D40D0u, 0x2D40D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D40D8u;
label_2d40d8:
    // 0x2d40d8: 0xc0cb7e0  jal         func_32DF80
    ctx->pc = 0x2D40D8u;
    SET_GPR_U32(ctx, 31, 0x2D40E0u);
    ctx->pc = 0x32DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF80u, 0x2D40D8u, 0x2D40E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D40E0u;
label_2d40e0:
    // 0x2d40e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d40e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d40e4:
    // 0x2d40e4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2d40e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d40e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D40E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D40ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D40E8u;
        // 0x2d40ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D40E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D40F0u;
    // 0x2d40f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D40F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D40F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D40F8u;
    // 0x2d40f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D40F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D40F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4100u;
    // 0x2d4100: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4108u;
    // 0x2d4108: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4110u;
    // 0x2d4110: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4118u;
}
