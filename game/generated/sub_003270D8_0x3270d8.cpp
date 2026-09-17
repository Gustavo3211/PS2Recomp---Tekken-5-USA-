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

// Function: sub_003270D8
// Address: 0x3270d8 - 0x327168
void sub_003270D8_0x3270d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003270D8_0x3270d8");
#endif

    switch (ctx->pc) {
        case 0x327128u: goto label_327128;
        default: break;
    }

    ctx->pc = 0x3270d8u;

    // 0x3270d8: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x3270d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3270dc: 0xd8c20010  lqc2        $vf2, 0x10($a2)
    ctx->pc = 0x3270dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x3270e0: 0xd8c30020  lqc2        $vf3, 0x20($a2)
    ctx->pc = 0x3270e0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x3270e4: 0xd8c40030  lqc2        $vf4, 0x30($a2)
    ctx->pc = 0x3270e4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x3270e8: 0x4a20005f  vminii.w    $vf1, $vf0, $I
    ctx->pc = 0x3270e8u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3270ec: 0xd8c50040  lqc2        $vf5, 0x40($a2)
    ctx->pc = 0x3270ecu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x3270f0: 0xd8c60050  lqc2        $vf6, 0x50($a2)
    ctx->pc = 0x3270f0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x3270f4: 0x4a20011f  vminii.w    $vf4, $vf0, $I
    ctx->pc = 0x3270f4u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x3270f8: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x3270f8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3270fc: 0xf8a20010  sqc2        $vf2, 0x10($a1)
    ctx->pc = 0x3270fcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x327100: 0xf8a30020  sqc2        $vf3, 0x20($a1)
    ctx->pc = 0x327100u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x327104: 0xf8a40030  sqc2        $vf4, 0x30($a1)
    ctx->pc = 0x327104u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x327108: 0xf8a50040  sqc2        $vf5, 0x40($a1)
    ctx->pc = 0x327108u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 64), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x32710c: 0xf8a60050  sqc2        $vf6, 0x50($a1)
    ctx->pc = 0x32710cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 80), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x327110: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x327110u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327114: 0x24e7fffe  addiu       $a3, $a3, -0x2
    ctx->pc = 0x327114u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967294));
    // 0x327118: 0x24c60060  addiu       $a2, $a2, 0x60
    ctx->pc = 0x327118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
    // 0x32711c: 0x10e00010  beqz        $a3, . + 4 + (0x10 << 2)
    ctx->pc = 0x32711Cu;
    {
        const bool branch_taken_0x32711c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x327120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32711Cu;
        // 0x327120: 0x24a50060  addiu       $a1, $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32711c) {
            ctx->pc = 0x327160u;
            goto label_327160;
        }
    }
    ctx->pc = 0x327124u;
    // 0x327124: 0x0  nop
    ctx->pc = 0x327124u;
    // NOP
label_327128:
    // 0x327128: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x327128u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x32712c: 0xd8c20010  lqc2        $vf2, 0x10($a2)
    ctx->pc = 0x32712cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x327130: 0xd8c30020  lqc2        $vf3, 0x20($a2)
    ctx->pc = 0x327130u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x327134: 0x4bc1ad68  vadd.xyz    $vf21, $vf21, $vf1
    ctx->pc = 0x327134u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[21], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x327138: 0x4a200054  vminix.w    $vf1, $vf0, $vf0x
    ctx->pc = 0x327138u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x32713c: 0xf8a20010  sqc2        $vf2, 0x10($a1)
    ctx->pc = 0x32713cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x327140: 0xf8a30020  sqc2        $vf3, 0x20($a1)
    ctx->pc = 0x327140u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x327144: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x327144u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x327148: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x327148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32714c: 0x24c60030  addiu       $a2, $a2, 0x30
    ctx->pc = 0x32714cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x327150: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x327150u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x327154: 0x0  nop
    ctx->pc = 0x327154u;
    // NOP
    // 0x327158: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x327158u;
    {
        const bool branch_taken_0x327158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32715Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327158u;
        // 0x32715c: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327158) {
            ctx->pc = 0x327128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_327128;
        }
    }
    ctx->pc = 0x327160u;
label_327160:
    // 0x327160: 0x3e00008  jr          $ra
    ctx->pc = 0x327160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327160u;
        // 0x327164: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327168u;
}
