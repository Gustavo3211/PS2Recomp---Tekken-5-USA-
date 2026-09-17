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

// Function: sub_0032BE30
// Address: 0x32be30 - 0x32be78
void sub_0032BE30_0x32be30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032BE30_0x32be30");
#endif

    switch (ctx->pc) {
        case 0x32be50u: goto label_32be50;
        default: break;
    }

    ctx->pc = 0x32be30u;

    // 0x32be30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32be30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32be34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32be34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32be38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32be38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32be3c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x32be3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x32be40: 0x4a006838  vcallms     0xD00
    ctx->pc = 0x32be40u;
    {     ctx->vu0_tpc = 0xD00;     runtime->executeVU0Microprogram(rdram, ctx, 0xD00); }
    // 0x32be44: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x32be44u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x32be48: 0xc0cb82a  jal         func_32E0A8
    ctx->pc = 0x32BE48u;
    SET_GPR_U32(ctx, 31, 0x32BE50u);
    ctx->pc = 0x32BE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BE48u;
    // 0x32be4c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E0A8u, 0x32BE48u, 0x32BE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BE50u;
label_32be50:
    // 0x32be50: 0xfa1c0000  sqc2        $vf28, 0x0($s0)
    ctx->pc = 0x32be50u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x32be54: 0xfa1d0010  sqc2        $vf29, 0x10($s0)
    ctx->pc = 0x32be54u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x32be58: 0xfa1e0020  sqc2        $vf30, 0x20($s0)
    ctx->pc = 0x32be58u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x32be5c: 0xfa1f0030  sqc2        $vf31, 0x30($s0)
    ctx->pc = 0x32be5cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x32be60: 0x4a006a38  vcallms     0xD40
    ctx->pc = 0x32be60u;
    {     ctx->vu0_tpc = 0xD40;     runtime->executeVU0Microprogram(rdram, ctx, 0xD40); }
    // 0x32be64: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x32be64u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x32be68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32be68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32be6c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x32be6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32be70: 0x3e00008  jr          $ra
    ctx->pc = 0x32BE70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32BE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BE70u;
        // 0x32be74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32BE70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32BE78u;
}
