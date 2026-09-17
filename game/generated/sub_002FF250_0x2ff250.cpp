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

// Function: sub_002FF250
// Address: 0x2ff250 - 0x2ff2e0
void sub_002FF250_0x2ff250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FF250_0x2ff250");
#endif

    switch (ctx->pc) {
        case 0x2ff26cu: goto label_2ff26c;
        case 0x2ff288u: goto label_2ff288;
        default: break;
    }

    ctx->pc = 0x2ff250u;

    // 0x2ff250: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ff250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ff254: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2ff254u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff258: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2ff258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2ff25c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ff25cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ff260: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ff260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2ff264: 0xc0bf974  jal         func_2FE5D0
    ctx->pc = 0x2FF264u;
    SET_GPR_U32(ctx, 31, 0x2FF26Cu);
    ctx->pc = 0x2FF268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF264u;
    // 0x2ff268: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE5D0u, 0x2FF264u, 0x2FF26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF26Cu;
label_2ff26c:
    // 0x2ff26c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ff26cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ff270: 0x14430017  bne         $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2FF270u;
    {
        const bool branch_taken_0x2ff270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2FF274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF270u;
        // 0x2ff274: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff270) {
            ctx->pc = 0x2FF2D0u;
            goto label_2ff2d0;
        }
    }
    ctx->pc = 0x2FF278u;
    // 0x2ff278: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x2ff278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2ff27c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2ff27cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff280: 0x31180  sll         $v0, $v1, 6
    ctx->pc = 0x2ff280u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2ff284: 0x0  nop
    ctx->pc = 0x2ff284u;
    // NOP
label_2ff288:
    // 0x2ff288: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2ff288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ff28c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2FF28Cu;
    {
        const bool branch_taken_0x2ff28c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff28c) {
            ctx->pc = 0x2FF290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF28Cu;
            // 0x2ff290: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF2BCu;
            goto label_2ff2bc;
        }
    }
    ctx->pc = 0x2FF294u;
    // 0x2ff294: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x2ff294u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2ff298: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x2ff298u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2ff29c: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x2ff29cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2ff2a0: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x2ff2a0u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2ff2a4: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x2ff2a4u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2ff2a8: 0xf8440030  sqc2        $vf4, 0x30($v0)
    ctx->pc = 0x2ff2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ff2ac: 0xf8450020  sqc2        $vf5, 0x20($v0)
    ctx->pc = 0x2ff2acu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2ff2b0: 0xf8460010  sqc2        $vf6, 0x10($v0)
    ctx->pc = 0x2ff2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2ff2b4: 0xf8470000  sqc2        $vf7, 0x0($v0)
    ctx->pc = 0x2ff2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x2ff2b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2ff2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2ff2bc:
    // 0x2ff2bc: 0x28620014  slti        $v0, $v1, 0x14
    ctx->pc = 0x2ff2bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x2ff2c0: 0x0  nop
    ctx->pc = 0x2ff2c0u;
    // NOP
    // 0x2ff2c4: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2FF2C4u;
    {
        const bool branch_taken_0x2ff2c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FF2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF2C4u;
        // 0x2ff2c8: 0x31180  sll         $v0, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff2c4) {
            ctx->pc = 0x2FF288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ff288;
        }
    }
    ctx->pc = 0x2FF2CCu;
    // 0x2ff2cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ff2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ff2d0:
    // 0x2ff2d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ff2d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ff2d4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ff2d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ff2d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FF2D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FF2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF2D8u;
        // 0x2ff2dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF2D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FF2E0u;
}
