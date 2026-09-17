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

// Function: sub_0032BFF8
// Address: 0x32bff8 - 0x32c0b8
void sub_0032BFF8_0x32bff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032BFF8_0x32bff8");
#endif

    ctx->pc = 0x32bff8u;

    // 0x32bff8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x32bff8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bffc: 0x4a006838  vcallms     0xD00
    ctx->pc = 0x32bffcu;
    {     ctx->vu0_tpc = 0xD00;     runtime->executeVU0Microprogram(rdram, ctx, 0xD00); }
    // 0x32c000: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x32c000u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x32c004: 0xd8dc0000  lqc2        $vf28, 0x0($a2)
    ctx->pc = 0x32c004u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x32c008: 0xd8dd0010  lqc2        $vf29, 0x10($a2)
    ctx->pc = 0x32c008u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x32c00c: 0xd8de0020  lqc2        $vf30, 0x20($a2)
    ctx->pc = 0x32c00cu;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x32c010: 0xd8df0030  lqc2        $vf31, 0x30($a2)
    ctx->pc = 0x32c010u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x32c014: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x32c014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x32c018: 0x52823  negu        $a1, $a1
    ctx->pc = 0x32c018u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x32c01c: 0x244a0340  addiu       $t2, $v0, 0x340
    ctx->pc = 0x32c01cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 832));
    // 0x32c020: 0x30a38000  andi        $v1, $a1, 0x8000
    ctx->pc = 0x32c020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x32c024: 0x24a24000  addiu       $v0, $a1, 0x4000
    ctx->pc = 0x32c024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16384));
    // 0x32c028: 0x34c00  sll         $t1, $v1, 16
    ctx->pc = 0x32c028u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x32c02c: 0x30438000  andi        $v1, $v0, 0x8000
    ctx->pc = 0x32c02cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x32c030: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x32c030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x32c034: 0x32400  sll         $a0, $v1, 16
    ctx->pc = 0x32c034u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x32c038: 0x30a84000  andi        $t0, $a1, 0x4000
    ctx->pc = 0x32c038u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16384);
    // 0x32c03c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32C03Cu;
    {
        const bool branch_taken_0x32c03c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C03Cu;
        // 0x32c040: 0x30a33fff  andi        $v1, $a1, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c03c) {
            ctx->pc = 0x32C04Cu;
            goto label_32c04c;
        }
    }
    ctx->pc = 0x32C044u;
    // 0x32c044: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x32c044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x32c048: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x32c048u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_32c04c:
    // 0x32c04c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x32c04cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32c050: 0x30a53fff  andi        $a1, $a1, 0x3FFF
    ctx->pc = 0x32c050u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
    // 0x32c054: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x32c054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x32c058: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x32c058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32c05c: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32C05Cu;
    {
        const bool branch_taken_0x32c05c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C05Cu;
        // 0x32c060: 0x643825  or          $a3, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c05c) {
            ctx->pc = 0x32C06Cu;
            goto label_32c06c;
        }
    }
    ctx->pc = 0x32C064u;
    // 0x32c064: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x32c064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x32c068: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x32c068u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_32c06c:
    // 0x32c06c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x32c06cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x32c070: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x32c070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x32c074: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x32c074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32c078: 0x891825  or          $v1, $a0, $t1
    ctx->pc = 0x32c078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 9));
    // 0x32c07c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x32c07cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x32c080: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x32c080u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x32c084: 0x4be2e9bc  vmulax.xyzw $ACC, $vf29, $vf2x
    ctx->pc = 0x32c084u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32c088: 0x4be1e0c8  vmaddx.xyzw $vf3, $vf28, $vf1x
    ctx->pc = 0x32c088u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x32c08c: 0x4be1e9bc  vmulax.xyzw $ACC, $vf29, $vf1x
    ctx->pc = 0x32c08cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32c090: 0x4be2e74c  vmsubx.xyzw $vf29, $vf28, $vf2x
    ctx->pc = 0x32c090u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x32c094: 0x4bfc1b3c  vmove.xyzw  $vf28, $vf3
    ctx->pc = 0x32c094u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x32c098: 0xf8dc0000  sqc2        $vf28, 0x0($a2)
    ctx->pc = 0x32c098u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x32c09c: 0xf8dd0010  sqc2        $vf29, 0x10($a2)
    ctx->pc = 0x32c09cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x32c0a0: 0xf8de0020  sqc2        $vf30, 0x20($a2)
    ctx->pc = 0x32c0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x32c0a4: 0xf8df0030  sqc2        $vf31, 0x30($a2)
    ctx->pc = 0x32c0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x32c0a8: 0x4a006a38  vcallms     0xD40
    ctx->pc = 0x32c0a8u;
    {     ctx->vu0_tpc = 0xD40;     runtime->executeVU0Microprogram(rdram, ctx, 0xD40); }
    // 0x32c0ac: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x32c0acu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x32c0b0: 0x3e00008  jr          $ra
    ctx->pc = 0x32C0B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C0B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32C0B8u;
}
