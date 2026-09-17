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

// Function: sub_00338938
// Address: 0x338938 - 0x3389c0
void sub_00338938_0x338938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00338938_0x338938");
#endif

    ctx->pc = 0x338938u;

    // 0x338938: 0x2482ff00  addiu       $v0, $a0, -0x100
    ctx->pc = 0x338938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967040));
    // 0x33893c: 0x4a006838  vcallms     0xD00
    ctx->pc = 0x33893cu;
    {     ctx->vu0_tpc = 0xD00;     runtime->executeVU0Microprogram(rdram, ctx, 0xD00); }
    // 0x338940: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x338940u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x338944: 0xd85c0000  lqc2        $vf28, 0x0($v0)
    ctx->pc = 0x338944u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x338948: 0xd85d0010  lqc2        $vf29, 0x10($v0)
    ctx->pc = 0x338948u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x33894c: 0xd85e0020  lqc2        $vf30, 0x20($v0)
    ctx->pc = 0x33894cu;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x338950: 0xd85f0030  lqc2        $vf31, 0x30($v0)
    ctx->pc = 0x338950u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x338954: 0xd8580040  lqc2        $vf24, 0x40($v0)
    ctx->pc = 0x338954u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x338958: 0xd8590050  lqc2        $vf25, 0x50($v0)
    ctx->pc = 0x338958u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x33895c: 0xd85a0060  lqc2        $vf26, 0x60($v0)
    ctx->pc = 0x33895cu;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x338960: 0xd85b0070  lqc2        $vf27, 0x70($v0)
    ctx->pc = 0x338960u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x338964: 0x4a006438  vcallms     0xC80
    ctx->pc = 0x338964u;
    {     ctx->vu0_tpc = 0xC80;     runtime->executeVU0Microprogram(rdram, ctx, 0xC80); }
    // 0x338968: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x338968u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x33896c: 0xd8580080  lqc2        $vf24, 0x80($v0)
    ctx->pc = 0x33896cu;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x338970: 0xd8590090  lqc2        $vf25, 0x90($v0)
    ctx->pc = 0x338970u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x338974: 0xd85a00a0  lqc2        $vf26, 0xA0($v0)
    ctx->pc = 0x338974u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x338978: 0xd85b00b0  lqc2        $vf27, 0xB0($v0)
    ctx->pc = 0x338978u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x33897c: 0x4a006438  vcallms     0xC80
    ctx->pc = 0x33897cu;
    {     ctx->vu0_tpc = 0xC80;     runtime->executeVU0Microprogram(rdram, ctx, 0xC80); }
    // 0x338980: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x338980u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x338984: 0xd85800c0  lqc2        $vf24, 0xC0($v0)
    ctx->pc = 0x338984u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x338988: 0xd85900d0  lqc2        $vf25, 0xD0($v0)
    ctx->pc = 0x338988u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x33898c: 0xd85a00e0  lqc2        $vf26, 0xE0($v0)
    ctx->pc = 0x33898cu;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 224)));
    // 0x338990: 0xd85b00f0  lqc2        $vf27, 0xF0($v0)
    ctx->pc = 0x338990u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x338994: 0x4a006438  vcallms     0xC80
    ctx->pc = 0x338994u;
    {     ctx->vu0_tpc = 0xC80;     runtime->executeVU0Microprogram(rdram, ctx, 0xC80); }
    // 0x338998: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x338998u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x33899c: 0xf89c0000  sqc2        $vf28, 0x0($a0)
    ctx->pc = 0x33899cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x3389a0: 0xf89d0010  sqc2        $vf29, 0x10($a0)
    ctx->pc = 0x3389a0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x3389a4: 0xf89e0020  sqc2        $vf30, 0x20($a0)
    ctx->pc = 0x3389a4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x3389a8: 0xf89f0030  sqc2        $vf31, 0x30($a0)
    ctx->pc = 0x3389a8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x3389ac: 0x4a006a38  vcallms     0xD40
    ctx->pc = 0x3389acu;
    {     ctx->vu0_tpc = 0xD40;     runtime->executeVU0Microprogram(rdram, ctx, 0xD40); }
    // 0x3389b0: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x3389b0u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x3389b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3389B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3389B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3389BCu;
    // 0x3389bc: 0x0  nop
    ctx->pc = 0x3389bcu;
    // NOP
    ctx->pc = 0x3389c0u;
}
