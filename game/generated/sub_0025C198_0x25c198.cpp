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

// Function: sub_0025C198
// Address: 0x25c198 - 0x25c210
void sub_0025C198_0x25c198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025C198_0x25c198");
#endif

    switch (ctx->pc) {
        case 0x25c1c8u: goto label_25c1c8;
        default: break;
    }

    ctx->pc = 0x25c198u;

    // 0x25c198: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x25c198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x25c19c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25c19cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25c1a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25c1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25c1a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25c1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25c1a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25c1a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c1ac: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x25c1acu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x25c1b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x25c1b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x25c1b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x25c1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x25c1b8: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x25c1b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c1bc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x25c1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x25c1c0: 0xc0474d0  jal         func_11D340
    ctx->pc = 0x25C1C0u;
    SET_GPR_U32(ctx, 31, 0x25C1C8u);
    ctx->pc = 0x25C1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C1C0u;
    // 0x25c1c4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D340u, 0x25C1C0u, 0x25C1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C1C8u;
label_25c1c8:
    // 0x25c1c8: 0xda300000  lqc2        $vf16, 0x0($s1)
    ctx->pc = 0x25c1c8u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x25c1cc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x25c1ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x25c1d0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x25c1d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x25c1d4: 0x4bc18418  vmulx.xyz   $vf16, $vf16, $vf1x
    ctx->pc = 0x25c1d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x25c1d8: 0xfa100000  sqc2        $vf16, 0x0($s0)
    ctx->pc = 0x25c1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x25c1dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25c1dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25c1e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25c1e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25c1e4: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x25c1e4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x25c1e8: 0x4600001d  msub.s      $f0, $f0, $f0
    ctx->pc = 0x25c1e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x25c1ec: 0x46000004  c1          0x4
    ctx->pc = 0x25c1ecu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x25c1f0: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x25c1f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x25c1f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25c1f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25c1f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x25c1f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25c1fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x25c1fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25c200: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x25c200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25c204: 0x3e00008  jr          $ra
    ctx->pc = 0x25C204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C204u;
        // 0x25c208: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25C20Cu;
    // 0x25c20c: 0x0  nop
    ctx->pc = 0x25c20cu;
    // NOP
    ctx->pc = 0x25c210u;
}
