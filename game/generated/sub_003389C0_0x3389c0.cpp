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

// Function: sub_003389C0
// Address: 0x3389c0 - 0x338a30
void sub_003389C0_0x3389c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003389C0_0x3389c0");
#endif

    ctx->pc = 0x3389c0u;

    // 0x3389c0: 0x2482fec0  addiu       $v0, $a0, -0x140
    ctx->pc = 0x3389c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966976));
    // 0x3389c4: 0x4a006838  vcallms     0xD00
    ctx->pc = 0x3389c4u;
    {     ctx->vu0_tpc = 0xD00;     runtime->executeVU0Microprogram(rdram, ctx, 0xD00); }
    // 0x3389c8: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x3389c8u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x3389cc: 0xd89cff00  lqc2        $vf28, -0x100($a0)
    ctx->pc = 0x3389ccu;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 4294967040)));
    // 0x3389d0: 0xd89dff10  lqc2        $vf29, -0xF0($a0)
    ctx->pc = 0x3389d0u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 4294967056)));
    // 0x3389d4: 0xd89eff20  lqc2        $vf30, -0xE0($a0)
    ctx->pc = 0x3389d4u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 4294967072)));
    // 0x3389d8: 0xd89fff30  lqc2        $vf31, -0xD0($a0)
    ctx->pc = 0x3389d8u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 4294967088)));
    // 0x3389dc: 0xd8580080  lqc2        $vf24, 0x80($v0)
    ctx->pc = 0x3389dcu;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x3389e0: 0xd8590090  lqc2        $vf25, 0x90($v0)
    ctx->pc = 0x3389e0u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x3389e4: 0xd85a00a0  lqc2        $vf26, 0xA0($v0)
    ctx->pc = 0x3389e4u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x3389e8: 0xd85b00b0  lqc2        $vf27, 0xB0($v0)
    ctx->pc = 0x3389e8u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x3389ec: 0x4a006438  vcallms     0xC80
    ctx->pc = 0x3389ecu;
    {     ctx->vu0_tpc = 0xC80;     runtime->executeVU0Microprogram(rdram, ctx, 0xC80); }
    // 0x3389f0: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x3389f0u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x3389f4: 0xd85800c0  lqc2        $vf24, 0xC0($v0)
    ctx->pc = 0x3389f4u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x3389f8: 0xd85900d0  lqc2        $vf25, 0xD0($v0)
    ctx->pc = 0x3389f8u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x3389fc: 0xd85a00e0  lqc2        $vf26, 0xE0($v0)
    ctx->pc = 0x3389fcu;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 224)));
    // 0x338a00: 0xd85b00f0  lqc2        $vf27, 0xF0($v0)
    ctx->pc = 0x338a00u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x338a04: 0x4a006438  vcallms     0xC80
    ctx->pc = 0x338a04u;
    {     ctx->vu0_tpc = 0xC80;     runtime->executeVU0Microprogram(rdram, ctx, 0xC80); }
    // 0x338a08: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x338a08u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x338a0c: 0xf89c0000  sqc2        $vf28, 0x0($a0)
    ctx->pc = 0x338a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x338a10: 0xf89d0010  sqc2        $vf29, 0x10($a0)
    ctx->pc = 0x338a10u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x338a14: 0xf89e0020  sqc2        $vf30, 0x20($a0)
    ctx->pc = 0x338a14u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x338a18: 0xf89f0030  sqc2        $vf31, 0x30($a0)
    ctx->pc = 0x338a18u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x338a1c: 0x4a006a38  vcallms     0xD40
    ctx->pc = 0x338a1cu;
    {     ctx->vu0_tpc = 0xD40;     runtime->executeVU0Microprogram(rdram, ctx, 0xD40); }
    // 0x338a20: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x338a20u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x338a24: 0x3e00008  jr          $ra
    ctx->pc = 0x338A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338A24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338A2Cu;
    // 0x338a2c: 0x0  nop
    ctx->pc = 0x338a2cu;
    // NOP
    ctx->pc = 0x338a30u;
}
