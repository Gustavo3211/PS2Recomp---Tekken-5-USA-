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

// Function: sub_002FFE38
// Address: 0x2ffe38 - 0x300120
void sub_002FFE38_0x2ffe38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FFE38_0x2ffe38");
#endif

    switch (ctx->pc) {
        case 0x2ffe88u: goto label_2ffe88;
        case 0x2fff4cu: goto label_2fff4c;
        case 0x2fff70u: goto label_2fff70;
        case 0x300098u: goto label_300098;
        case 0x3000b8u: goto label_3000b8;
        case 0x300104u: goto label_300104;
        default: break;
    }

    ctx->pc = 0x2ffe38u;

    // 0x2ffe38: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2ffe38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2ffe3c: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x2ffe3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x2ffe40: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2ffe40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffe44: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x2ffe44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x2ffe48: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ffe48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffe4c: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x2ffe4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x2ffe50: 0x124000ac  beqz        $s2, . + 4 + (0xAC << 2)
    ctx->pc = 0x2FFE50u;
    {
        const bool branch_taken_0x2ffe50 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFE50u;
        // 0x2ffe54: 0xffbf0098  sd          $ra, 0x98($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffe50) {
            ctx->pc = 0x300104u;
            goto label_300104;
        }
    }
    ctx->pc = 0x2FFE58u;
    // 0x2ffe58: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x2ffe58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x2ffe5c: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x2ffe5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2ffe60: 0x8e420894  lw          $v0, 0x894($s2)
    ctx->pc = 0x2ffe60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2196)));
    // 0x2ffe64: 0x94640002  lhu         $a0, 0x2($v1)
    ctx->pc = 0x2ffe64u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2ffe68: 0x8c46001c  lw          $a2, 0x1C($v0)
    ctx->pc = 0x2ffe68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2ffe6c: 0x14850086  bne         $a0, $a1, . + 4 + (0x86 << 2)
    ctx->pc = 0x2FFE6Cu;
    {
        const bool branch_taken_0x2ffe6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x2FFE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFE6Cu;
        // 0x2ffe70: 0x8e30003c  lw          $s0, 0x3C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffe6c) {
            ctx->pc = 0x300088u;
            goto label_300088;
        }
    }
    ctx->pc = 0x2FFE74u;
    // 0x2ffe74: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2ffe74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2ffe78: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ffe78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffe7c: 0x24481df0  addiu       $t0, $v0, 0x1DF0
    ctx->pc = 0x2ffe7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 7664));
    // 0x2ffe80: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x2ffe80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2ffe84: 0x0  nop
    ctx->pc = 0x2ffe84u;
    // NOP
label_2ffe88:
    // 0x2ffe88: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2ffe88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2ffe8c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2ffe8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ffe90: 0x460000c  bltz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2FFE90u;
    {
        const bool branch_taken_0x2ffe90 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2FFE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFE90u;
        // 0x2ffe94: 0x31180  sll         $v0, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffe90) {
            ctx->pc = 0x2FFEC4u;
            goto label_2ffec4;
        }
    }
    ctx->pc = 0x2FFE98u;
    // 0x2ffe98: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x2ffe98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2ffe9c: 0x2022821  addu        $a1, $s0, $v0
    ctx->pc = 0x2ffe9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2ffea0: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x2ffea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2ffea4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2ffea4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2ffea8: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x2ffea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2ffeac: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x2ffeacu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ffeb0: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x2ffeb0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x2ffeb4: 0x78830010  lq          $v1, 0x10($a0)
    ctx->pc = 0x2ffeb4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2ffeb8: 0x7ca30010  sq          $v1, 0x10($a1)
    ctx->pc = 0x2ffeb8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 3));
    // 0x2ffebc: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x2ffebcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2ffec0: 0x7ca20020  sq          $v0, 0x20($a1)
    ctx->pc = 0x2ffec0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 2));
label_2ffec4:
    // 0x2ffec4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2ffec4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2ffec8: 0x28e20016  slti        $v0, $a3, 0x16
    ctx->pc = 0x2ffec8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x2ffecc: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2FFECCu;
    {
        const bool branch_taken_0x2ffecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FFED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFECCu;
        // 0x2ffed0: 0x71080  sll         $v0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffecc) {
            ctx->pc = 0x2FFE88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ffe88;
        }
    }
    ctx->pc = 0x2FFED4u;
    // 0x2ffed4: 0x24c40090  addiu       $a0, $a2, 0x90
    ctx->pc = 0x2ffed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
    // 0x2ffed8: 0x24c30120  addiu       $v1, $a2, 0x120
    ctx->pc = 0x2ffed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 288));
    // 0x2ffedc: 0x26020040  addiu       $v0, $s0, 0x40
    ctx->pc = 0x2ffedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x2ffee0: 0xd8680000  lqc2        $vf8, 0x0($v1)
    ctx->pc = 0x2ffee0u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ffee4: 0xd8690010  lqc2        $vf9, 0x10($v1)
    ctx->pc = 0x2ffee4u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2ffee8: 0xd86a0020  lqc2        $vf10, 0x20($v1)
    ctx->pc = 0x2ffee8u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2ffeec: 0xd88c0000  lqc2        $vf12, 0x0($a0)
    ctx->pc = 0x2ffeecu;
    ctx->vu0_vf[12] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ffef0: 0xd88d0010  lqc2        $vf13, 0x10($a0)
    ctx->pc = 0x2ffef0u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2ffef4: 0xd88e0020  lqc2        $vf14, 0x20($a0)
    ctx->pc = 0x2ffef4u;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2ffef8: 0xd88f0030  lqc2        $vf15, 0x30($a0)
    ctx->pc = 0x2ffef8u;
    ctx->vu0_vf[15] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2ffefc: 0x4be861bc  vmulax.xyzw $ACC, $vf12, $vf8x
    ctx->pc = 0x2ffefcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2fff00: 0x4be868bd  vmadday.xyzw $ACC, $vf13, $vf8y
    ctx->pc = 0x2fff00u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2fff04: 0x4be870be  vmaddaz.xyzw $ACC, $vf14, $vf8z
    ctx->pc = 0x2fff04u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[14], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2fff08: 0x4be87a0b  vmaddw.xyzw $vf8, $vf15, $vf8w
    ctx->pc = 0x2fff08u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[15], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x2fff0c: 0x4be961bc  vmulax.xyzw $ACC, $vf12, $vf9x
    ctx->pc = 0x2fff0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2fff10: 0x4be968bd  vmadday.xyzw $ACC, $vf13, $vf9y
    ctx->pc = 0x2fff10u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2fff14: 0x4be970be  vmaddaz.xyzw $ACC, $vf14, $vf9z
    ctx->pc = 0x2fff14u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[14], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2fff18: 0x4be97a4b  vmaddw.xyzw $vf9, $vf15, $vf9w
    ctx->pc = 0x2fff18u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[15], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x2fff1c: 0x4bea61bc  vmulax.xyzw $ACC, $vf12, $vf10x
    ctx->pc = 0x2fff1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2fff20: 0x4bea68bd  vmadday.xyzw $ACC, $vf13, $vf10y
    ctx->pc = 0x2fff20u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2fff24: 0x4bea70be  vmaddaz.xyzw $ACC, $vf14, $vf10z
    ctx->pc = 0x2fff24u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[14], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2fff28: 0x4bea7a8b  vmaddw.xyzw $vf10, $vf15, $vf10w
    ctx->pc = 0x2fff28u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[15], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x2fff2c: 0xf8480000  sqc2        $vf8, 0x0($v0)
    ctx->pc = 0x2fff2cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x2fff30: 0xf8490010  sqc2        $vf9, 0x10($v0)
    ctx->pc = 0x2fff30u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x2fff34: 0xf84a0020  sqc2        $vf10, 0x20($v0)
    ctx->pc = 0x2fff34u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x2fff38: 0xf8400030  sqc2        $vf0, 0x30($v0)
    ctx->pc = 0x2fff38u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2fff3c: 0x260400c0  addiu       $a0, $s0, 0xC0
    ctx->pc = 0x2fff3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x2fff40: 0x24c60240  addiu       $a2, $a2, 0x240
    ctx->pc = 0x2fff40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 576));
    // 0x2fff44: 0xc096ee8  jal         func_25BBA0
    ctx->pc = 0x2FFF44u;
    SET_GPR_U32(ctx, 31, 0x2FFF4Cu);
    ctx->pc = 0x2FFF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFF44u;
    // 0x2fff48: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BBA0u, 0x2FFF44u, 0x2FFF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFF4Cu;
label_2fff4c:
    // 0x2fff4c: 0x86430040  lh          $v1, 0x40($s2)
    ctx->pc = 0x2fff4cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x2fff50: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x2fff50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x2fff54: 0x5062004d  beql        $v1, $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x2FFF54u;
    {
        const bool branch_taken_0x2fff54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2fff54) {
            ctx->pc = 0x2FFF58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FFF54u;
            // 0x2fff58: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30008Cu;
            goto label_30008c;
        }
    }
    ctx->pc = 0x2FFF5Cu;
    // 0x2fff5c: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x2fff5cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fff60: 0x262d0008  addiu       $t5, $s1, 0x8
    ctx->pc = 0x2fff60u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2fff64: 0x3a0502d  daddu       $t2, $sp, $zero
    ctx->pc = 0x2fff64u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fff68: 0x27ab0040  addiu       $t3, $sp, 0x40
    ctx->pc = 0x2fff68u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2fff6c: 0xc1080  sll         $v0, $t4, 2
    ctx->pc = 0x2fff6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
label_2fff70:
    // 0x2fff70: 0x4d1021  addu        $v0, $v0, $t5
    ctx->pc = 0x2fff70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x2fff74: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x2fff74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x2fff78: 0x50400040  beql        $v0, $zero, . + 4 + (0x40 << 2)
    ctx->pc = 0x2FFF78u;
    {
        const bool branch_taken_0x2fff78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fff78) {
            ctx->pc = 0x2FFF7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FFF78u;
            // 0x2fff7c: 0x258c0001  addiu       $t4, $t4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30007Cu;
            goto label_30007c;
        }
    }
    ctx->pc = 0x2FFF80u;
    // 0x2fff80: 0x8c480008  lw          $t0, 0x8($v0)
    ctx->pc = 0x2fff80u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2fff84: 0x8c490004  lw          $t1, 0x4($v0)
    ctx->pc = 0x2fff84u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2fff88: 0x79060000  lq          $a2, 0x0($t0)
    ctx->pc = 0x2fff88u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2fff8c: 0x79040010  lq          $a0, 0x10($t0)
    ctx->pc = 0x2fff8cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x2fff90: 0x79070020  lq          $a3, 0x20($t0)
    ctx->pc = 0x2fff90u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x2fff94: 0x48230000  qmfc2.ni    $v1, $vf0
    ctx->pc = 0x2fff94u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2fff98: 0x70862c88  pextlw      $a1, $a0, $a2
    ctx->pc = 0x2fff98u;
    SET_GPR_VEC(ctx, 5, PS2_PEXTLW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
    // 0x2fff9c: 0x708624a8  pextuw      $a0, $a0, $a2
    ctx->pc = 0x2fff9cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTUW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
    // 0x2fffa0: 0x70671488  pextlw      $v0, $v1, $a3
    ctx->pc = 0x2fffa0u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 7)));
    // 0x2fffa4: 0x70671ca8  pextuw      $v1, $v1, $a3
    ctx->pc = 0x2fffa4u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTUW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 7)));
    // 0x2fffa8: 0x70453389  pcpyld      $a2, $v0, $a1
    ctx->pc = 0x2fffa8u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x2fffac: 0x70a22ba9  pcpyud      $a1, $a1, $v0
    ctx->pc = 0x2fffacu;
    SET_GPR_VEC(ctx, 5, _mm_unpackhi_epi64(GPR_VEC(ctx, 5), GPR_VEC(ctx, 2)));
    // 0x2fffb0: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x2fffb0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x2fffb4: 0xd9070030  lqc2        $vf7, 0x30($t0)
    ctx->pc = 0x2fffb4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x2fffb8: 0x48a62000  qmtc2.ni    $a2, $vf4
    ctx->pc = 0x2fffb8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x2fffbc: 0x48a52800  qmtc2.ni    $a1, $vf5
    ctx->pc = 0x2fffbcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x2fffc0: 0x48a33000  qmtc2.ni    $v1, $vf6
    ctx->pc = 0x2fffc0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2fffc4: 0x4bc002bc  vadda.xyz   $ACC, $vf0, $vf0
    ctx->pc = 0x2fffc4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[0]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2fffc8: 0x4bc720fc  vmsubax.xyz $ACC, $vf4, $vf7x
    ctx->pc = 0x2fffc8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2fffcc: 0x4bc728fd  vmsubay.xyz $ACC, $vf5, $vf7y
    ctx->pc = 0x2fffccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2fffd0: 0x4bc731ce  vmsubz.xyz  $vf7, $vf6, $vf7z
    ctx->pc = 0x2fffd0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2fffd4: 0x7d460000  sq          $a2, 0x0($t2)
    ctx->pc = 0x2fffd4u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 6));
    // 0x2fffd8: 0x7d450010  sq          $a1, 0x10($t2)
    ctx->pc = 0x2fffd8u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 16), GPR_VEC(ctx, 5));
    // 0x2fffdc: 0x7d430020  sq          $v1, 0x20($t2)
    ctx->pc = 0x2fffdcu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 32), GPR_VEC(ctx, 3));
    // 0x2fffe0: 0xf9470030  sqc2        $vf7, 0x30($t2)
    ctx->pc = 0x2fffe0u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x2fffe4: 0xd9480000  lqc2        $vf8, 0x0($t2)
    ctx->pc = 0x2fffe4u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2fffe8: 0xd9490010  lqc2        $vf9, 0x10($t2)
    ctx->pc = 0x2fffe8u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x2fffec: 0xd94a0020  lqc2        $vf10, 0x20($t2)
    ctx->pc = 0x2fffecu;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 32)));
    // 0x2ffff0: 0xd94b0030  lqc2        $vf11, 0x30($t2)
    ctx->pc = 0x2ffff0u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 48)));
    // 0x2ffff4: 0xd9240000  lqc2        $vf4, 0x0($t1)
    ctx->pc = 0x2ffff4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2ffff8: 0xd9250010  lqc2        $vf5, 0x10($t1)
    ctx->pc = 0x2ffff8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x2ffffc: 0xd9260020  lqc2        $vf6, 0x20($t1)
    ctx->pc = 0x2ffffcu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x300000: 0xd9270030  lqc2        $vf7, 0x30($t1)
    ctx->pc = 0x300000u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 48)));
    // 0x300004: 0x4be441bc  vmulax.xyzw $ACC, $vf8, $vf4x
    ctx->pc = 0x300004u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x300008: 0x4be448bd  vmadday.xyzw $ACC, $vf9, $vf4y
    ctx->pc = 0x300008u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x30000c: 0x4be450be  vmaddaz.xyzw $ACC, $vf10, $vf4z
    ctx->pc = 0x30000cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x300010: 0x4be4590b  vmaddw.xyzw $vf4, $vf11, $vf4w
    ctx->pc = 0x300010u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x300014: 0x4be541bc  vmulax.xyzw $ACC, $vf8, $vf5x
    ctx->pc = 0x300014u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x300018: 0x4be548bd  vmadday.xyzw $ACC, $vf9, $vf5y
    ctx->pc = 0x300018u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x30001c: 0x4be550be  vmaddaz.xyzw $ACC, $vf10, $vf5z
    ctx->pc = 0x30001cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x300020: 0x4be5594b  vmaddw.xyzw $vf5, $vf11, $vf5w
    ctx->pc = 0x300020u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x300024: 0x4be641bc  vmulax.xyzw $ACC, $vf8, $vf6x
    ctx->pc = 0x300024u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x300028: 0x4be648bd  vmadday.xyzw $ACC, $vf9, $vf6y
    ctx->pc = 0x300028u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x30002c: 0x4be650be  vmaddaz.xyzw $ACC, $vf10, $vf6z
    ctx->pc = 0x30002cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x300030: 0x4be6598b  vmaddw.xyzw $vf6, $vf11, $vf6w
    ctx->pc = 0x300030u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x300034: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x300034u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x300038: 0x4be748bd  vmadday.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x300038u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x30003c: 0x4be750be  vmaddaz.xyzw $ACC, $vf10, $vf7z
    ctx->pc = 0x30003cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x300040: 0x4be759cb  vmaddw.xyzw $vf7, $vf11, $vf7w
    ctx->pc = 0x300040u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x300044: 0xf9640000  sqc2        $vf4, 0x0($t3)
    ctx->pc = 0x300044u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x300048: 0xf9650010  sqc2        $vf5, 0x10($t3)
    ctx->pc = 0x300048u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x30004c: 0xf9660020  sqc2        $vf6, 0x20($t3)
    ctx->pc = 0x30004cu;
    WRITE128(ADD32(GPR_U32(ctx, 11), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x300050: 0xf9670030  sqc2        $vf7, 0x30($t3)
    ctx->pc = 0x300050u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x300054: 0xc2180  sll         $a0, $t4, 6
    ctx->pc = 0x300054u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), 6));
    // 0x300058: 0x79630000  lq          $v1, 0x0($t3)
    ctx->pc = 0x300058u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x30005c: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x30005cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x300060: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x300060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x300064: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x300064u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x300068: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x300068u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30006c: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x30006cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x300070: 0x7ba30060  lq          $v1, 0x60($sp)
    ctx->pc = 0x300070u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x300074: 0x7c830020  sq          $v1, 0x20($a0)
    ctx->pc = 0x300074u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 3));
    // 0x300078: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x300078u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_30007c:
    // 0x30007c: 0x29820004  slti        $v0, $t4, 0x4
    ctx->pc = 0x30007cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x300080: 0x1440ffbb  bnez        $v0, . + 4 + (-0x45 << 2)
    ctx->pc = 0x300080u;
    {
        const bool branch_taken_0x300080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x300084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300080u;
        // 0x300084: 0xc1080  sll         $v0, $t4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300080) {
            ctx->pc = 0x2FFF70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fff70;
        }
    }
    ctx->pc = 0x300088u;
label_300088:
    // 0x300088: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x300088u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_30008c:
    // 0x30008c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30008cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300090: 0xc0bf994  jal         func_2FE650
    ctx->pc = 0x300090u;
    SET_GPR_U32(ctx, 31, 0x300098u);
    ctx->pc = 0x300094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300090u;
    // 0x300094: 0x264506e0  addiu       $a1, $s2, 0x6E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE650u, 0x300090u, 0x300098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300098u;
label_300098:
    // 0x300098: 0x86430040  lh          $v1, 0x40($s2)
    ctx->pc = 0x300098u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x30009c: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x30009cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x3000a0: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3000A0u;
    {
        const bool branch_taken_0x3000a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3000a0) {
            ctx->pc = 0x3000FCu;
            goto label_3000fc;
        }
    }
    ctx->pc = 0x3000A8u;
    // 0x3000a8: 0x8e280040  lw          $t0, 0x40($s1)
    ctx->pc = 0x3000a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x3000ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3000acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3000b0: 0x26270008  addiu       $a3, $s1, 0x8
    ctx->pc = 0x3000b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x3000b4: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x3000b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_3000b8:
    // 0x3000b8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x3000b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x3000bc: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x3000bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x3000c0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3000C0u;
    {
        const bool branch_taken_0x3000c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3000C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3000C0u;
        // 0x3000c4: 0x62180  sll         $a0, $a2, 6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3000c0) {
            ctx->pc = 0x3000ECu;
            goto label_3000ec;
        }
    }
    ctx->pc = 0x3000C8u;
    // 0x3000c8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x3000c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3000cc: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x3000ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x3000d0: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x3000d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3000d4: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x3000d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x3000d8: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x3000d8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x3000dc: 0x78a30010  lq          $v1, 0x10($a1)
    ctx->pc = 0x3000dcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3000e0: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x3000e0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x3000e4: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x3000e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x3000e8: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x3000e8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
label_3000ec:
    // 0x3000ec: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3000ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3000f0: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x3000f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3000f4: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x3000F4u;
    {
        const bool branch_taken_0x3000f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3000F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3000F4u;
        // 0x3000f8: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3000f4) {
            ctx->pc = 0x3000B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3000b8;
        }
    }
    ctx->pc = 0x3000FCu;
label_3000fc:
    // 0x3000fc: 0xc0bfa9e  jal         func_2FEA78
    ctx->pc = 0x3000FCu;
    SET_GPR_U32(ctx, 31, 0x300104u);
    ctx->pc = 0x300100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3000FCu;
    // 0x300100: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEA78u, 0x3000FCu, 0x300104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300104u;
label_300104:
    // 0x300104: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x300104u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x300108: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x300108u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x30010c: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x30010cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x300110: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x300110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x300114: 0x3e00008  jr          $ra
    ctx->pc = 0x300114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x300118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300114u;
        // 0x300118: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30011Cu;
    // 0x30011c: 0x0  nop
    ctx->pc = 0x30011cu;
    // NOP
    ctx->pc = 0x300120u;
}
