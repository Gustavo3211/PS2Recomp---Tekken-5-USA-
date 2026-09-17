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

// Function: sub_0032AFC8
// Address: 0x32afc8 - 0x32b010
void sub_0032AFC8_0x32afc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032AFC8_0x32afc8");
#endif

    switch (ctx->pc) {
        case 0x32aff8u: goto label_32aff8;
        default: break;
    }

    ctx->pc = 0x32afc8u;

    // 0x32afc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32afc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32afcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32afccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32afd0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x32afd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x32afd4: 0x4a6703bc  vdiv        $Q, $vf0w, $vf7x
    ctx->pc = 0x32afd4u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x32afd8: 0x4a0003bf  vwaitq
    ctx->pc = 0x32afd8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x32afdc: 0x4bc0ad5c  vmulq.xyz   $vf21, $vf21, $Q
    ctx->pc = 0x32afdcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[21], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x32afe0: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x32afe0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x32afe4: 0x26100d00  addiu       $s0, $s0, 0xD00
    ctx->pc = 0x32afe4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3328));
    // 0x32afe8: 0x26100068  addiu       $s0, $s0, 0x68
    ctx->pc = 0x32afe8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    // 0x32afec: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x32afecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x400DC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x400DC4u, _value); } while (0);
    // 0x32aff0: 0xc0c89d4  jal         func_322750
    ctx->pc = 0x32AFF0u;
    SET_GPR_U32(ctx, 31, 0x32AFF8u);
    ctx->pc = 0x32AFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AFF0u;
    // 0x32aff4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322750u, 0x32AFF0u, 0x32AFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AFF8u;
label_32aff8:
    // 0x32aff8: 0xc6000054  lwc1        $f0, 0x54($s0)
    ctx->pc = 0x32aff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32affc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x32affcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32b000: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32b000u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32b004: 0x3e00008  jr          $ra
    ctx->pc = 0x32B004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32B008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B004u;
        // 0x32b008: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32B00Cu;
    // 0x32b00c: 0x0  nop
    ctx->pc = 0x32b00cu;
    // NOP
    ctx->pc = 0x32b010u;
}
