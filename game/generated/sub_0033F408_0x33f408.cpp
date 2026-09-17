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

// Function: sub_0033F408
// Address: 0x33f408 - 0x33f470
void sub_0033F408_0x33f408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033F408_0x33f408");
#endif

    switch (ctx->pc) {
        case 0x33f430u: goto label_33f430;
        default: break;
    }

    ctx->pc = 0x33f408u;

    // 0x33f408: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33f408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33f40c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33f40cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33f410: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33f410u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f414: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x33f414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x33f418: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x33f418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x33f41c: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x33f41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x33f420: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33F420u;
    {
        const bool branch_taken_0x33f420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f420) {
            ctx->pc = 0x33F434u;
            goto label_33f434;
        }
    }
    ctx->pc = 0x33F428u;
    // 0x33f428: 0xc0cfd74  jal         func_33F5D0
    ctx->pc = 0x33F428u;
    SET_GPR_U32(ctx, 31, 0x33F430u);
    ctx->pc = 0x33F5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F5D0u, 0x33F428u, 0x33F430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F430u;
label_33f430:
    // 0x33f430: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x33f430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_33f434:
    // 0x33f434: 0x4a940040  vaddx.y     $vf1, $vf0, $vf20x
    ctx->pc = 0x33f434u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[20], ctx->vu0_vf[20], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33f438: 0x4a940081  vaddy.y     $vf2, $vf0, $vf20y
    ctx->pc = 0x33f438u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[20], ctx->vu0_vf[20], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x33f43c: 0x4a9400c2  vaddz.y     $vf3, $vf0, $vf20z
    ctx->pc = 0x33f43cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[20], ctx->vu0_vf[20], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x33f440: 0x4a940103  vaddw.y     $vf4, $vf0, $vf20w
    ctx->pc = 0x33f440u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[20], ctx->vu0_vf[20], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x33f444: 0x4a9509bc  vmulax.y    $ACC, $vf1, $vf21x
    ctx->pc = 0x33f444u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[21], ctx->vu0_vf[21], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x33f448: 0x4a9510bd  vmadday.y   $ACC, $vf2, $vf21y
    ctx->pc = 0x33f448u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[21], ctx->vu0_vf[21], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x33f44c: 0x4a9518be  vmaddaz.y   $ACC, $vf3, $vf21z
    ctx->pc = 0x33f44cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[21], ctx->vu0_vf[21], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x33f450: 0x4a80258b  vmaddw.y    $vf22, $vf4, $vf0w
    ctx->pc = 0x33f450u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x33f454: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x33f454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x33f458: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x33f458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x33f45c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33f45cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33f460: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x33f460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x33f464: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33f464u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33f468: 0x3e00008  jr          $ra
    ctx->pc = 0x33F468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33F46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F468u;
        // 0x33f46c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33F470u;
}
