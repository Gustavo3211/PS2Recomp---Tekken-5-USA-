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

// Function: sub_00338AE0
// Address: 0x338ae0 - 0x338b50
void sub_00338AE0_0x338ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00338AE0_0x338ae0");
#endif

    switch (ctx->pc) {
        case 0x338b40u: goto label_338b40;
        default: break;
    }

    ctx->pc = 0x338ae0u;

    // 0x338ae0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x338ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x338ae4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x338ae4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338ae8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x338ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x338aec: 0x2444fe40  addiu       $a0, $v0, -0x1C0
    ctx->pc = 0x338aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966848));
    // 0x338af0: 0x4a006838  vcallms     0xD00
    ctx->pc = 0x338af0u;
    {     ctx->vu0_tpc = 0xD00;     runtime->executeVU0Microprogram(rdram, ctx, 0xD00); }
    // 0x338af4: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x338af4u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x338af8: 0xd89c0000  lqc2        $vf28, 0x0($a0)
    ctx->pc = 0x338af8u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x338afc: 0xd89d0010  lqc2        $vf29, 0x10($a0)
    ctx->pc = 0x338afcu;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x338b00: 0xd89e0020  lqc2        $vf30, 0x20($a0)
    ctx->pc = 0x338b00u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x338b04: 0xd89f0030  lqc2        $vf31, 0x30($a0)
    ctx->pc = 0x338b04u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x338b08: 0xd8980040  lqc2        $vf24, 0x40($a0)
    ctx->pc = 0x338b08u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x338b0c: 0xd8990050  lqc2        $vf25, 0x50($a0)
    ctx->pc = 0x338b0cu;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x338b10: 0xd89a0060  lqc2        $vf26, 0x60($a0)
    ctx->pc = 0x338b10u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x338b14: 0xd89b0070  lqc2        $vf27, 0x70($a0)
    ctx->pc = 0x338b14u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x338b18: 0x4a006438  vcallms     0xC80
    ctx->pc = 0x338b18u;
    {     ctx->vu0_tpc = 0xC80;     runtime->executeVU0Microprogram(rdram, ctx, 0xC80); }
    // 0x338b1c: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x338b1cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x338b20: 0xf85c0000  sqc2        $vf28, 0x0($v0)
    ctx->pc = 0x338b20u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x338b24: 0xf85d0010  sqc2        $vf29, 0x10($v0)
    ctx->pc = 0x338b24u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x338b28: 0xf85e0020  sqc2        $vf30, 0x20($v0)
    ctx->pc = 0x338b28u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x338b2c: 0xf85f0030  sqc2        $vf31, 0x30($v0)
    ctx->pc = 0x338b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x338b30: 0x4a006a38  vcallms     0xD40
    ctx->pc = 0x338b30u;
    {     ctx->vu0_tpc = 0xD40;     runtime->executeVU0Microprogram(rdram, ctx, 0xD40); }
    // 0x338b34: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x338b34u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x338b38: 0xc0ce2ee  jal         func_338BB8
    ctx->pc = 0x338B38u;
    SET_GPR_U32(ctx, 31, 0x338B40u);
    ctx->pc = 0x338B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338B38u;
    // 0x338b3c: 0x24840240  addiu       $a0, $a0, 0x240 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338BB8u, 0x338B38u, 0x338B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338B40u;
label_338b40:
    // 0x338b40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x338b40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x338b44: 0x3e00008  jr          $ra
    ctx->pc = 0x338B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338B44u;
        // 0x338b48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338B44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338B4Cu;
    // 0x338b4c: 0x0  nop
    ctx->pc = 0x338b4cu;
    // NOP
    ctx->pc = 0x338b50u;
}
