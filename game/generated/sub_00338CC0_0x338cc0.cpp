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

// Function: sub_00338CC0
// Address: 0x338cc0 - 0x338d18
void sub_00338CC0_0x338cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00338CC0_0x338cc0");
#endif

    switch (ctx->pc) {
        case 0x338cf0u: goto label_338cf0;
        default: break;
    }

    ctx->pc = 0x338cc0u;

    // 0x338cc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x338cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x338cc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x338cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x338cc8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x338cc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338ccc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x338cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x338cd0: 0x4a006838  vcallms     0xD00
    ctx->pc = 0x338cd0u;
    {     ctx->vu0_tpc = 0xD00;     runtime->executeVU0Microprogram(rdram, ctx, 0xD00); }
    // 0x338cd4: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x338cd4u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x338cd8: 0xda1cfd80  lqc2        $vf28, -0x280($s0)
    ctx->pc = 0x338cd8u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 4294966656)));
    // 0x338cdc: 0xda1dfd90  lqc2        $vf29, -0x270($s0)
    ctx->pc = 0x338cdcu;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 4294966672)));
    // 0x338ce0: 0xda1efda0  lqc2        $vf30, -0x260($s0)
    ctx->pc = 0x338ce0u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 4294966688)));
    // 0x338ce4: 0xda1ffdb0  lqc2        $vf31, -0x250($s0)
    ctx->pc = 0x338ce4u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 4294966704)));
    // 0x338ce8: 0xc0cb84a  jal         func_32E128
    ctx->pc = 0x338CE8u;
    SET_GPR_U32(ctx, 31, 0x338CF0u);
    ctx->pc = 0x32E128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E128u, 0x338CE8u, 0x338CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338CF0u;
label_338cf0:
    // 0x338cf0: 0xfa1c0000  sqc2        $vf28, 0x0($s0)
    ctx->pc = 0x338cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x338cf4: 0xfa1d0010  sqc2        $vf29, 0x10($s0)
    ctx->pc = 0x338cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x338cf8: 0xfa1e0020  sqc2        $vf30, 0x20($s0)
    ctx->pc = 0x338cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x338cfc: 0xfa1f0030  sqc2        $vf31, 0x30($s0)
    ctx->pc = 0x338cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x338d00: 0x4a006a38  vcallms     0xD40
    ctx->pc = 0x338d00u;
    {     ctx->vu0_tpc = 0xD40;     runtime->executeVU0Microprogram(rdram, ctx, 0xD40); }
    // 0x338d04: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x338d04u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x338d08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x338d08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x338d0c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x338d0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x338d10: 0x3e00008  jr          $ra
    ctx->pc = 0x338D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338D10u;
        // 0x338d14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338D10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338D18u;
}
