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

// Function: sub_00327168
// Address: 0x327168 - 0x3271f0
void sub_00327168_0x327168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327168_0x327168");
#endif

    switch (ctx->pc) {
        case 0x3271b0u: goto label_3271b0;
        default: break;
    }

    ctx->pc = 0x327168u;

    // 0x327168: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x327168u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x32716c: 0x4be00093  vmaxw.xyzw  $vf2, $vf0, $vf0w
    ctx->pc = 0x32716cu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x327170: 0xd8c30020  lqc2        $vf3, 0x20($a2)
    ctx->pc = 0x327170u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x327174: 0xd8c40030  lqc2        $vf4, 0x30($a2)
    ctx->pc = 0x327174u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x327178: 0x4a20005f  vminii.w    $vf1, $vf0, $I
    ctx->pc = 0x327178u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x32717c: 0xd8c60050  lqc2        $vf6, 0x50($a2)
    ctx->pc = 0x32717cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x327180: 0x4a20011f  vminii.w    $vf4, $vf0, $I
    ctx->pc = 0x327180u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x327184: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x327184u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x327188: 0xf8a20010  sqc2        $vf2, 0x10($a1)
    ctx->pc = 0x327188u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x32718c: 0xf8a30020  sqc2        $vf3, 0x20($a1)
    ctx->pc = 0x32718cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x327190: 0xf8a40030  sqc2        $vf4, 0x30($a1)
    ctx->pc = 0x327190u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x327194: 0xf8a20040  sqc2        $vf2, 0x40($a1)
    ctx->pc = 0x327194u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 64), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x327198: 0xf8a60050  sqc2        $vf6, 0x50($a1)
    ctx->pc = 0x327198u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 80), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x32719c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x32719cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3271a0: 0x24e7fffe  addiu       $a3, $a3, -0x2
    ctx->pc = 0x3271a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967294));
    // 0x3271a4: 0x24c60060  addiu       $a2, $a2, 0x60
    ctx->pc = 0x3271a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
    // 0x3271a8: 0x10e0000e  beqz        $a3, . + 4 + (0xE << 2)
    ctx->pc = 0x3271A8u;
    {
        const bool branch_taken_0x3271a8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3271ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3271A8u;
        // 0x3271ac: 0x24a50060  addiu       $a1, $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3271a8) {
            ctx->pc = 0x3271E4u;
            goto label_3271e4;
        }
    }
    ctx->pc = 0x3271B0u;
label_3271b0:
    // 0x3271b0: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x3271b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3271b4: 0xd8c30020  lqc2        $vf3, 0x20($a2)
    ctx->pc = 0x3271b4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x3271b8: 0x4bc1ad68  vadd.xyz    $vf21, $vf21, $vf1
    ctx->pc = 0x3271b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[21], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x3271bc: 0x4a200054  vminix.w    $vf1, $vf0, $vf0x
    ctx->pc = 0x3271bcu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3271c0: 0xf8a20010  sqc2        $vf2, 0x10($a1)
    ctx->pc = 0x3271c0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x3271c4: 0xf8a30020  sqc2        $vf3, 0x20($a1)
    ctx->pc = 0x3271c4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x3271c8: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x3271c8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3271cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3271ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3271d0: 0x24c60030  addiu       $a2, $a2, 0x30
    ctx->pc = 0x3271d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x3271d4: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x3271d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3271d8: 0x0  nop
    ctx->pc = 0x3271d8u;
    // NOP
    // 0x3271dc: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x3271DCu;
    {
        const bool branch_taken_0x3271dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3271E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3271DCu;
        // 0x3271e0: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3271dc) {
            ctx->pc = 0x3271B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3271b0;
        }
    }
    ctx->pc = 0x3271E4u;
label_3271e4:
    // 0x3271e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3271E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3271E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3271E4u;
        // 0x3271e8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3271E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3271ECu;
    // 0x3271ec: 0x0  nop
    ctx->pc = 0x3271ecu;
    // NOP
    ctx->pc = 0x3271f0u;
}
