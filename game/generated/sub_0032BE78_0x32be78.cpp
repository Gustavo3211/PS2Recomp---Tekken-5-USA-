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

// Function: sub_0032BE78
// Address: 0x32be78 - 0x32bf38
void sub_0032BE78_0x32be78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032BE78_0x32be78");
#endif

    ctx->pc = 0x32be78u;

    // 0x32be78: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x32be78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32be7c: 0x4a006838  vcallms     0xD00
    ctx->pc = 0x32be7cu;
    {     ctx->vu0_tpc = 0xD00;     runtime->executeVU0Microprogram(rdram, ctx, 0xD00); }
    // 0x32be80: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x32be80u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x32be84: 0xd8dc0000  lqc2        $vf28, 0x0($a2)
    ctx->pc = 0x32be84u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x32be88: 0xd8dd0010  lqc2        $vf29, 0x10($a2)
    ctx->pc = 0x32be88u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x32be8c: 0xd8de0020  lqc2        $vf30, 0x20($a2)
    ctx->pc = 0x32be8cu;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x32be90: 0xd8df0030  lqc2        $vf31, 0x30($a2)
    ctx->pc = 0x32be90u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x32be94: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x32be94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x32be98: 0x52823  negu        $a1, $a1
    ctx->pc = 0x32be98u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x32be9c: 0x244a0340  addiu       $t2, $v0, 0x340
    ctx->pc = 0x32be9cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 832));
    // 0x32bea0: 0x30a38000  andi        $v1, $a1, 0x8000
    ctx->pc = 0x32bea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x32bea4: 0x24a24000  addiu       $v0, $a1, 0x4000
    ctx->pc = 0x32bea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16384));
    // 0x32bea8: 0x34c00  sll         $t1, $v1, 16
    ctx->pc = 0x32bea8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x32beac: 0x30438000  andi        $v1, $v0, 0x8000
    ctx->pc = 0x32beacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x32beb0: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x32beb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x32beb4: 0x32400  sll         $a0, $v1, 16
    ctx->pc = 0x32beb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x32beb8: 0x30a84000  andi        $t0, $a1, 0x4000
    ctx->pc = 0x32beb8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16384);
    // 0x32bebc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32BEBCu;
    {
        const bool branch_taken_0x32bebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32BEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BEBCu;
        // 0x32bec0: 0x30a33fff  andi        $v1, $a1, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32bebc) {
            ctx->pc = 0x32BECCu;
            goto label_32becc;
        }
    }
    ctx->pc = 0x32BEC4u;
    // 0x32bec4: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x32bec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x32bec8: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x32bec8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_32becc:
    // 0x32becc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x32beccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32bed0: 0x30a53fff  andi        $a1, $a1, 0x3FFF
    ctx->pc = 0x32bed0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
    // 0x32bed4: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x32bed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x32bed8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x32bed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32bedc: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32BEDCu;
    {
        const bool branch_taken_0x32bedc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x32BEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BEDCu;
        // 0x32bee0: 0x643825  or          $a3, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32bedc) {
            ctx->pc = 0x32BEECu;
            goto label_32beec;
        }
    }
    ctx->pc = 0x32BEE4u;
    // 0x32bee4: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x32bee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x32bee8: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x32bee8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_32beec:
    // 0x32beec: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x32beecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x32bef0: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x32bef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x32bef4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x32bef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32bef8: 0x891825  or          $v1, $a0, $t1
    ctx->pc = 0x32bef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 9));
    // 0x32befc: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x32befcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x32bf00: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x32bf00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x32bf04: 0x4be2f1bc  vmulax.xyzw $ACC, $vf30, $vf2x
    ctx->pc = 0x32bf04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32bf08: 0x4be1e8c8  vmaddx.xyzw $vf3, $vf29, $vf1x
    ctx->pc = 0x32bf08u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x32bf0c: 0x4be1f1bc  vmulax.xyzw $ACC, $vf30, $vf1x
    ctx->pc = 0x32bf0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32bf10: 0x4be2ef8c  vmsubx.xyzw $vf30, $vf29, $vf2x
    ctx->pc = 0x32bf10u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x32bf14: 0x4bfd1b3c  vmove.xyzw  $vf29, $vf3
    ctx->pc = 0x32bf14u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x32bf18: 0xf8dc0000  sqc2        $vf28, 0x0($a2)
    ctx->pc = 0x32bf18u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x32bf1c: 0xf8dd0010  sqc2        $vf29, 0x10($a2)
    ctx->pc = 0x32bf1cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x32bf20: 0xf8de0020  sqc2        $vf30, 0x20($a2)
    ctx->pc = 0x32bf20u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x32bf24: 0xf8df0030  sqc2        $vf31, 0x30($a2)
    ctx->pc = 0x32bf24u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x32bf28: 0x4a006a38  vcallms     0xD40
    ctx->pc = 0x32bf28u;
    {     ctx->vu0_tpc = 0xD40;     runtime->executeVU0Microprogram(rdram, ctx, 0xD40); }
    // 0x32bf2c: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x32bf2cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x32bf30: 0x3e00008  jr          $ra
    ctx->pc = 0x32BF30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32BF30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32BF38u;
}
