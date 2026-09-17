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

// Function: sub_00244BC8
// Address: 0x244bc8 - 0x244d18
void sub_00244BC8_0x244bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244BC8_0x244bc8");
#endif

    switch (ctx->pc) {
        case 0x244bf4u: goto label_244bf4;
        case 0x244ca0u: goto label_244ca0;
        case 0x244cc0u: goto label_244cc0;
        case 0x244cf0u: goto label_244cf0;
        default: break;
    }

    ctx->pc = 0x244bc8u;

    // 0x244bc8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x244bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x244bcc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x244bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x244bd0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x244bd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244bd4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x244bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x244bd8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x244bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x244bdc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x244bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x244be0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x244be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x244be4: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x244be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x244be8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x244be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x244bec: 0xc0cb7d4  jal         func_32DF50
    ctx->pc = 0x244BECu;
    SET_GPR_U32(ctx, 31, 0x244BF4u);
    ctx->pc = 0x244BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244BECu;
    // 0x244bf0: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF50u, 0x244BECu, 0x244BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244BF4u;
label_244bf4:
    // 0x244bf4: 0x4ae00714  vminix.yzw  $vf28, $vf0, $vf0x
    ctx->pc = 0x244bf4u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x244bf8: 0x4b000713  vmaxw.x     $vf28, $vf0, $vf0w
    ctx->pc = 0x244bf8u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x244bfc: 0x4b600754  vminix.xzw  $vf29, $vf0, $vf0x
    ctx->pc = 0x244bfcu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x244c00: 0x4a800753  vmaxw.y     $vf29, $vf0, $vf0w
    ctx->pc = 0x244c00u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x244c04: 0x4ba00794  vminix.xyw  $vf30, $vf0, $vf0x
    ctx->pc = 0x244c04u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x244c08: 0x4a400793  vmaxw.z     $vf30, $vf0, $vf0w
    ctx->pc = 0x244c08u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x244c0c: 0x4bff033c  vmove.xyzw  $vf31, $vf0
    ctx->pc = 0x244c0cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x244c10: 0x26034000  addiu       $v1, $s0, 0x4000
    ctx->pc = 0x244c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16384));
    // 0x244c14: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x244c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x244c18: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x244C18u;
    {
        const bool branch_taken_0x244c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x244C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244C18u;
        // 0x244c1c: 0x32053fff  andi        $a1, $s0, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x244c18) {
            ctx->pc = 0x244C28u;
            goto label_244c28;
        }
    }
    ctx->pc = 0x244C20u;
    // 0x244c20: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x244c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x244c24: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x244c24u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_244c28:
    // 0x244c28: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x244c28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x244c2c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x244c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x244c30: 0x24880340  addiu       $t0, $a0, 0x340
    ctx->pc = 0x244c30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 832));
    // 0x244c34: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x244c34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x244c38: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x244c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x244c3c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x244c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x244c40: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x244c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x244c44: 0x32054000  andi        $a1, $s0, 0x4000
    ctx->pc = 0x244c44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16384);
    // 0x244c48: 0x32063fff  andi        $a2, $s0, 0x3FFF
    ctx->pc = 0x244c48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16383);
    // 0x244c4c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x244C4Cu;
    {
        const bool branch_taken_0x244c4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x244C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244C4Cu;
        // 0x244c50: 0x833825  or          $a3, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244c4c) {
            ctx->pc = 0x244C5Cu;
            goto label_244c5c;
        }
    }
    ctx->pc = 0x244C54u;
    // 0x244c54: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x244c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x244c58: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x244c58u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_244c5c:
    // 0x244c5c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x244c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x244c60: 0x32048000  andi        $a0, $s0, 0x8000
    ctx->pc = 0x244c60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32768);
    // 0x244c64: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x244c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x244c68: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x244c68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x244c6c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x244c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x244c70: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x244c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x244c74: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x244c74u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x244c78: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x244c78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x244c7c: 0x4be2e1bc  vmulax.xyzw $ACC, $vf28, $vf2x
    ctx->pc = 0x244c7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x244c80: 0x4be1f0c8  vmaddx.xyzw $vf3, $vf30, $vf1x
    ctx->pc = 0x244c80u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x244c84: 0x4be1e1bc  vmulax.xyzw $ACC, $vf28, $vf1x
    ctx->pc = 0x244c84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x244c88: 0x4be2f70c  vmsubx.xyzw $vf28, $vf30, $vf2x
    ctx->pc = 0x244c88u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x244c8c: 0x4bfe1b3c  vmove.xyzw  $vf30, $vf3
    ctx->pc = 0x244c8cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x244c90: 0x26750004  addiu       $s5, $s3, 0x4
    ctx->pc = 0x244c90u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x244c94: 0x26740008  addiu       $s4, $s3, 0x8
    ctx->pc = 0x244c94u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x244c98: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x244c98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244c9c: 0x0  nop
    ctx->pc = 0x244c9cu;
    // NOP
label_244ca0:
    // 0x244ca0: 0x128040  sll         $s0, $s2, 1
    ctx->pc = 0x244ca0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x244ca4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x244ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244ca8: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x244ca8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x244cac: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x244cacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x244cb0: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x244cb0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x244cb4: 0x2708821  addu        $s1, $s3, $s0
    ctx->pc = 0x244cb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x244cb8: 0xc0cbab4  jal         func_32EAD0
    ctx->pc = 0x244CB8u;
    SET_GPR_U32(ctx, 31, 0x244CC0u);
    ctx->pc = 0x244CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244CB8u;
    // 0x244cbc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EAD0u, 0x244CB8u, 0x244CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244CC0u;
label_244cc0:
    // 0x244cc0: 0x2b01821  addu        $v1, $s5, $s0
    ctx->pc = 0x244cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x244cc4: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x244cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x244cc8: 0x2e420003  sltiu       $v0, $s2, 0x3
    ctx->pc = 0x244cc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x244ccc: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x244cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244cd0: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x244cd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x244cd4: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x244cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244cd8: 0xe6220000  swc1        $f2, 0x0($s1)
    ctx->pc = 0x244cd8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x244cdc: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x244cdcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x244ce0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x244CE0u;
    {
        const bool branch_taken_0x244ce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x244CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244CE0u;
        // 0x244ce4: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x244ce0) {
            ctx->pc = 0x244CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_244ca0;
        }
    }
    ctx->pc = 0x244CE8u;
    // 0x244ce8: 0xc0cb7e0  jal         func_32DF80
    ctx->pc = 0x244CE8u;
    SET_GPR_U32(ctx, 31, 0x244CF0u);
    ctx->pc = 0x32DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF80u, 0x244CE8u, 0x244CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244CF0u;
label_244cf0:
    // 0x244cf0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x244cf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x244cf4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x244cf4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x244cf8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x244cf8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x244cfc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x244cfcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244d00: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x244d00u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x244d04: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x244d04u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x244d08: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x244d08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x244d0c: 0x3e00008  jr          $ra
    ctx->pc = 0x244D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D0Cu;
        // 0x244d10: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244D0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244D14u;
    // 0x244d14: 0x0  nop
    ctx->pc = 0x244d14u;
    // NOP
    ctx->pc = 0x244d18u;
}
