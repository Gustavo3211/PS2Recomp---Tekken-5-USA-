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

// Function: sub_00212918
// Address: 0x212918 - 0x212988
void sub_00212918_0x212918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212918_0x212918");
#endif

    switch (ctx->pc) {
        case 0x21293cu: goto label_21293c;
        default: break;
    }

    ctx->pc = 0x212918u;

    // 0x212918: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x212918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21291c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21291cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x212920: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x212920u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212924: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x212924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x212928: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x212928u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21292c: 0xd8a50010  lqc2        $vf5, 0x10($a1)
    ctx->pc = 0x21292cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x212930: 0xd8a60020  lqc2        $vf6, 0x20($a1)
    ctx->pc = 0x212930u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x212934: 0xc08473a  jal         func_211CE8
    ctx->pc = 0x212934u;
    SET_GPR_U32(ctx, 31, 0x21293Cu);
    ctx->pc = 0x212938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212934u;
    // 0x212938: 0xd8a70030  lqc2        $vf7, 0x30($a1) (Delay Slot)
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211CE8u, 0x212934u, 0x21293Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21293Cu;
label_21293c:
    // 0x21293c: 0x4a5c0700  vaddx.z     $vf28, $vf0, $vf28x
    ctx->pc = 0x21293cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x212940: 0x4a9c0744  vsubx.y     $vf29, $vf0, $vf28x
    ctx->pc = 0x212940u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x212944: 0x4a5c0741  vaddy.z     $vf29, $vf0, $vf28y
    ctx->pc = 0x212944u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x212948: 0x4ac4e1bd  vmulay.yz   $ACC, $vf28, $vf4y
    ctx->pc = 0x212948u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, 0))); }
    // 0x21294c: 0x4ac4e90a  vmaddz.yz   $vf4, $vf29, $vf4z
    ctx->pc = 0x21294cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x212950: 0x4ac5e1bd  vmulay.yz   $ACC, $vf28, $vf5y
    ctx->pc = 0x212950u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, 0))); }
    // 0x212954: 0x4ac5e94a  vmaddz.yz   $vf5, $vf29, $vf5z
    ctx->pc = 0x212954u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x212958: 0x4ac6e1bd  vmulay.yz   $ACC, $vf28, $vf6y
    ctx->pc = 0x212958u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, 0))); }
    // 0x21295c: 0x4ac6e98a  vmaddz.yz   $vf6, $vf29, $vf6z
    ctx->pc = 0x21295cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x212960: 0x4ac7e1bd  vmulay.yz   $ACC, $vf28, $vf7y
    ctx->pc = 0x212960u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, 0))); }
    // 0x212964: 0x4ac7e9ca  vmaddz.yz   $vf7, $vf29, $vf7z
    ctx->pc = 0x212964u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x212968: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x212968u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x21296c: 0xfa050010  sqc2        $vf5, 0x10($s0)
    ctx->pc = 0x21296cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x212970: 0xfa060020  sqc2        $vf6, 0x20($s0)
    ctx->pc = 0x212970u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x212974: 0xfa070030  sqc2        $vf7, 0x30($s0)
    ctx->pc = 0x212974u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x212978: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x212978u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21297c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21297cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x212980: 0x3e00008  jr          $ra
    ctx->pc = 0x212980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212980u;
        // 0x212984: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212988u;
}
