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

// Function: sub_00338B50
// Address: 0x338b50 - 0x338bb8
void sub_00338B50_0x338b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00338B50_0x338b50");
#endif

    switch (ctx->pc) {
        case 0x338bacu: goto label_338bac;
        default: break;
    }

    ctx->pc = 0x338b50u;

    // 0x338b50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x338b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x338b54: 0x2482fe00  addiu       $v0, $a0, -0x200
    ctx->pc = 0x338b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966784));
    // 0x338b58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x338b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x338b5c: 0x4a006838  vcallms     0xD00
    ctx->pc = 0x338b5cu;
    {     ctx->vu0_tpc = 0xD00;     runtime->executeVU0Microprogram(rdram, ctx, 0xD00); }
    // 0x338b60: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x338b60u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x338b64: 0xd89cfe80  lqc2        $vf28, -0x180($a0)
    ctx->pc = 0x338b64u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 4294966912)));
    // 0x338b68: 0xd89dfe90  lqc2        $vf29, -0x170($a0)
    ctx->pc = 0x338b68u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 4294966928)));
    // 0x338b6c: 0xd89efea0  lqc2        $vf30, -0x160($a0)
    ctx->pc = 0x338b6cu;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 4294966944)));
    // 0x338b70: 0xd89ffeb0  lqc2        $vf31, -0x150($a0)
    ctx->pc = 0x338b70u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 4294966960)));
    // 0x338b74: 0xd85800c0  lqc2        $vf24, 0xC0($v0)
    ctx->pc = 0x338b74u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x338b78: 0xd85900d0  lqc2        $vf25, 0xD0($v0)
    ctx->pc = 0x338b78u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x338b7c: 0xd85a00e0  lqc2        $vf26, 0xE0($v0)
    ctx->pc = 0x338b7cu;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 224)));
    // 0x338b80: 0xd85b00f0  lqc2        $vf27, 0xF0($v0)
    ctx->pc = 0x338b80u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x338b84: 0x4a006438  vcallms     0xC80
    ctx->pc = 0x338b84u;
    {     ctx->vu0_tpc = 0xC80;     runtime->executeVU0Microprogram(rdram, ctx, 0xC80); }
    // 0x338b88: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x338b88u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x338b8c: 0xf89c0000  sqc2        $vf28, 0x0($a0)
    ctx->pc = 0x338b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x338b90: 0xf89d0010  sqc2        $vf29, 0x10($a0)
    ctx->pc = 0x338b90u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x338b94: 0xf89e0020  sqc2        $vf30, 0x20($a0)
    ctx->pc = 0x338b94u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x338b98: 0xf89f0030  sqc2        $vf31, 0x30($a0)
    ctx->pc = 0x338b98u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x338b9c: 0x4a006a38  vcallms     0xD40
    ctx->pc = 0x338b9cu;
    {     ctx->vu0_tpc = 0xD40;     runtime->executeVU0Microprogram(rdram, ctx, 0xD40); }
    // 0x338ba0: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x338ba0u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x338ba4: 0xc0ce2ee  jal         func_338BB8
    ctx->pc = 0x338BA4u;
    SET_GPR_U32(ctx, 31, 0x338BACu);
    ctx->pc = 0x338BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338BA4u;
    // 0x338ba8: 0x24440240  addiu       $a0, $v0, 0x240 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338BB8u, 0x338BA4u, 0x338BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338BACu;
label_338bac:
    // 0x338bac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x338bacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x338bb0: 0x3e00008  jr          $ra
    ctx->pc = 0x338BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338BB0u;
        // 0x338bb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338BB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338BB8u;
}
