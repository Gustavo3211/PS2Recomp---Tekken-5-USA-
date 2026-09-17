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

// Function: sub_00338D70
// Address: 0x338d70 - 0x338dc8
void sub_00338D70_0x338d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00338D70_0x338d70");
#endif

    switch (ctx->pc) {
        case 0x338da0u: goto label_338da0;
        default: break;
    }

    ctx->pc = 0x338d70u;

    // 0x338d70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x338d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x338d74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x338d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x338d78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x338d78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338d7c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x338d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x338d80: 0x4a006838  vcallms     0xD00
    ctx->pc = 0x338d80u;
    {     ctx->vu0_tpc = 0xD00;     runtime->executeVU0Microprogram(rdram, ctx, 0xD00); }
    // 0x338d84: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x338d84u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x338d88: 0xda1cfd80  lqc2        $vf28, -0x280($s0)
    ctx->pc = 0x338d88u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 4294966656)));
    // 0x338d8c: 0xda1dfd90  lqc2        $vf29, -0x270($s0)
    ctx->pc = 0x338d8cu;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 4294966672)));
    // 0x338d90: 0xda1efda0  lqc2        $vf30, -0x260($s0)
    ctx->pc = 0x338d90u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 4294966688)));
    // 0x338d94: 0xda1ffdb0  lqc2        $vf31, -0x250($s0)
    ctx->pc = 0x338d94u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 4294966704)));
    // 0x338d98: 0xc0cb84a  jal         func_32E128
    ctx->pc = 0x338D98u;
    SET_GPR_U32(ctx, 31, 0x338DA0u);
    ctx->pc = 0x32E128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E128u, 0x338D98u, 0x338DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338DA0u;
label_338da0:
    // 0x338da0: 0xfa1c0000  sqc2        $vf28, 0x0($s0)
    ctx->pc = 0x338da0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x338da4: 0xfa1d0010  sqc2        $vf29, 0x10($s0)
    ctx->pc = 0x338da4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x338da8: 0xfa1e0020  sqc2        $vf30, 0x20($s0)
    ctx->pc = 0x338da8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x338dac: 0xfa1f0030  sqc2        $vf31, 0x30($s0)
    ctx->pc = 0x338dacu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x338db0: 0x4a006a38  vcallms     0xD40
    ctx->pc = 0x338db0u;
    {     ctx->vu0_tpc = 0xD40;     runtime->executeVU0Microprogram(rdram, ctx, 0xD40); }
    // 0x338db4: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x338db4u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x338db8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x338db8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x338dbc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x338dbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x338dc0: 0x3e00008  jr          $ra
    ctx->pc = 0x338DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338DC0u;
        // 0x338dc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338DC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338DC8u;
}
