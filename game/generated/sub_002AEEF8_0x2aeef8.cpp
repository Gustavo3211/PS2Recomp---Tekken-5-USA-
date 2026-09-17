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

// Function: sub_002AEEF8
// Address: 0x2aeef8 - 0x2aef78
void sub_002AEEF8_0x2aeef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AEEF8_0x2aeef8");
#endif

    switch (ctx->pc) {
        case 0x2aef60u: goto label_2aef60;
        default: break;
    }

    ctx->pc = 0x2aeef8u;

    // 0x2aeef8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2aeef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2aeefc: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x2aeefcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aef00: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2aef00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2aef04: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2aef04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2aef08: 0xc4e20018  lwc1        $f2, 0x18($a3)
    ctx->pc = 0x2aef08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2aef0c: 0xc4e1001c  lwc1        $f1, 0x1C($a3)
    ctx->pc = 0x2aef0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aef10: 0xc4e00020  lwc1        $f0, 0x20($a3)
    ctx->pc = 0x2aef10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aef14: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x2aef14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2aef18: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x2aef18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2aef1c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2aef1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2aef20: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2aef20u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2aef24: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x2aef24u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x2aef28: 0x48a81800  qmtc2.ni    $t0, $vf3
    ctx->pc = 0x2aef28u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2aef2c: 0x4be1e1bc  vmulax.xyzw $ACC, $vf28, $vf1x
    ctx->pc = 0x2aef2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2aef30: 0x4be2e8bc  vmaddax.xyzw $ACC, $vf29, $vf2x
    ctx->pc = 0x2aef30u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2aef34: 0x4be3f0bc  vmaddax.xyzw $ACC, $vf30, $vf3x
    ctx->pc = 0x2aef34u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2aef38: 0x4be0ffcb  vmaddw.xyzw $vf31, $vf31, $vf0w
    ctx->pc = 0x2aef38u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2aef3c: 0x8cf00038  lw          $s0, 0x38($a3)
    ctx->pc = 0x2aef3cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x2aef40: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2aef40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aef44: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2aef44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2aef48: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x2aef48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aef4c: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x2aef4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x2aef50: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x2aef50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x2aef54: 0x8c626930  lw          $v0, 0x6930($v1)
    ctx->pc = 0x2aef54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 26928)));
    // 0x2aef58: 0xc0abdf4  jal         func_2AF7D0
    ctx->pc = 0x2AEF58u;
    SET_GPR_U32(ctx, 31, 0x2AEF60u);
    ctx->pc = 0x2AEF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEF58u;
    // 0x2aef5c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF7D0u, 0x2AEF58u, 0x2AEF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEF60u;
label_2aef60:
    // 0x2aef60: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2aef60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2aef64: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2aef64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x2aef68: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2aef68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aef6c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2aef6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aef70: 0x3e00008  jr          $ra
    ctx->pc = 0x2AEF70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AEF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEF70u;
        // 0x2aef74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AEF70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AEF78u;
}
