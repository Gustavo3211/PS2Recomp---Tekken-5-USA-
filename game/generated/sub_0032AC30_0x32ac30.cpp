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

// Function: sub_0032AC30
// Address: 0x32ac30 - 0x32ac90
void sub_0032AC30_0x32ac30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032AC30_0x32ac30");
#endif

    switch (ctx->pc) {
        case 0x32ac58u: goto label_32ac58;
        default: break;
    }

    ctx->pc = 0x32ac30u;

    // 0x32ac30: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x32ac30u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x32ac34: 0xd8c20010  lqc2        $vf2, 0x10($a2)
    ctx->pc = 0x32ac34u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x32ac38: 0x4a20005f  vminii.w    $vf1, $vf0, $I
    ctx->pc = 0x32ac38u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x32ac3c: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x32ac3cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x32ac40: 0xf8a20010  sqc2        $vf2, 0x10($a1)
    ctx->pc = 0x32ac40u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x32ac44: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x32ac44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ac48: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x32ac48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x32ac4c: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x32ac4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x32ac50: 0x10e0000d  beqz        $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x32AC50u;
    {
        const bool branch_taken_0x32ac50 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AC50u;
        // 0x32ac54: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ac50) {
            ctx->pc = 0x32AC88u;
            goto label_32ac88;
        }
    }
    ctx->pc = 0x32AC58u;
label_32ac58:
    // 0x32ac58: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x32ac58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x32ac5c: 0x4a200054  vminix.w    $vf1, $vf0, $vf0x
    ctx->pc = 0x32ac5cu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x32ac60: 0xd8c20010  lqc2        $vf2, 0x10($a2)
    ctx->pc = 0x32ac60u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x32ac64: 0x4bc1ad68  vadd.xyz    $vf21, $vf21, $vf1
    ctx->pc = 0x32ac64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[21], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x32ac68: 0xf8a20010  sqc2        $vf2, 0x10($a1)
    ctx->pc = 0x32ac68u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x32ac6c: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x32ac6cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x32ac70: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32ac70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32ac74: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x32ac74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x32ac78: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x32ac78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x32ac7c: 0x0  nop
    ctx->pc = 0x32ac7cu;
    // NOP
    // 0x32ac80: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x32AC80u;
    {
        const bool branch_taken_0x32ac80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32AC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AC80u;
        // 0x32ac84: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ac80) {
            ctx->pc = 0x32AC58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32ac58;
        }
    }
    ctx->pc = 0x32AC88u;
label_32ac88:
    // 0x32ac88: 0x3e00008  jr          $ra
    ctx->pc = 0x32AC88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32AC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AC88u;
        // 0x32ac8c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32AC88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32AC90u;
}
