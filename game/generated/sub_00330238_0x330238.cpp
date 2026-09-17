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

// Function: sub_00330238
// Address: 0x330238 - 0x330308
void sub_00330238_0x330238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00330238_0x330238");
#endif

    ctx->pc = 0x330238u;

    // 0x330238: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x330238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x33023c: 0x244283c0  addiu       $v0, $v0, -0x7C40
    ctx->pc = 0x33023cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935488));
    // 0x330240: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x330240u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(FAST_READ128(0x1B83C0u));
    // 0x330244: 0xd8510010  lqc2        $vf17, 0x10($v0)
    ctx->pc = 0x330244u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(FAST_READ128(0x1B83D0u));
    // 0x330248: 0xd8520020  lqc2        $vf18, 0x20($v0)
    ctx->pc = 0x330248u;
    ctx->vu0_vf[18] = _mm_castsi128_ps(FAST_READ128(0x1B83E0u));
    // 0x33024c: 0xd8530030  lqc2        $vf19, 0x30($v0)
    ctx->pc = 0x33024cu;
    ctx->vu0_vf[19] = _mm_castsi128_ps(FAST_READ128(0x1B83F0u));
    // 0x330250: 0xd8540040  lqc2        $vf20, 0x40($v0)
    ctx->pc = 0x330250u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(FAST_READ128(0x1B8400u));
    // 0x330254: 0xd8550050  lqc2        $vf21, 0x50($v0)
    ctx->pc = 0x330254u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(FAST_READ128(0x1B8410u));
    // 0x330258: 0xd8560060  lqc2        $vf22, 0x60($v0)
    ctx->pc = 0x330258u;
    ctx->vu0_vf[22] = _mm_castsi128_ps(FAST_READ128(0x1B8420u));
    // 0x33025c: 0xd8570070  lqc2        $vf23, 0x70($v0)
    ctx->pc = 0x33025cu;
    ctx->vu0_vf[23] = _mm_castsi128_ps(FAST_READ128(0x1B8430u));
    // 0x330260: 0xd8580080  lqc2        $vf24, 0x80($v0)
    ctx->pc = 0x330260u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(FAST_READ128(0x1B8440u));
    // 0x330264: 0xd8590090  lqc2        $vf25, 0x90($v0)
    ctx->pc = 0x330264u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(FAST_READ128(0x1B8450u));
    // 0x330268: 0xd85a00a0  lqc2        $vf26, 0xA0($v0)
    ctx->pc = 0x330268u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(FAST_READ128(0x1B8460u));
    // 0x33026c: 0xd85b00b0  lqc2        $vf27, 0xB0($v0)
    ctx->pc = 0x33026cu;
    ctx->vu0_vf[27] = _mm_castsi128_ps(FAST_READ128(0x1B8470u));
    // 0x330270: 0xd85c00c0  lqc2        $vf28, 0xC0($v0)
    ctx->pc = 0x330270u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(FAST_READ128(0x1B8480u));
    // 0x330274: 0xd85d00d0  lqc2        $vf29, 0xD0($v0)
    ctx->pc = 0x330274u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(FAST_READ128(0x1B8490u));
    // 0x330278: 0xd85e00e0  lqc2        $vf30, 0xE0($v0)
    ctx->pc = 0x330278u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(FAST_READ128(0x1B84A0u));
    // 0x33027c: 0xd85f00f0  lqc2        $vf31, 0xF0($v0)
    ctx->pc = 0x33027cu;
    ctx->vu0_vf[31] = _mm_castsi128_ps(FAST_READ128(0x1B84B0u));
    // 0x330280: 0x3c04001c  lui         $a0, 0x1C
    ctx->pc = 0x330280u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28 << 16));
    // 0x330284: 0x248484c0  addiu       $a0, $a0, -0x7B40
    ctx->pc = 0x330284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935744));
    // 0x330288: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x330288u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1B84C4u));
    // 0x33028c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x33028cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1B84C8u));
    // 0x330290: 0x48c20800  ctc2.ni     $v0, $vi1
    ctx->pc = 0x330290u;
    ctx->vi[1] = static_cast<uint16_t>(GPR_U32(ctx, 2));
    // 0x330294: 0x48c31000  ctc2.ni     $v1, $vi2
    ctx->pc = 0x330294u;
    ctx->vi[2] = static_cast<uint16_t>(GPR_U32(ctx, 3));
    // 0x330298: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x330298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x33029c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x33029cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3302a0: 0x48c21800  ctc2.ni     $v0, $vi3
    ctx->pc = 0x3302a0u;
    ctx->vi[3] = static_cast<uint16_t>(GPR_U32(ctx, 2));
    // 0x3302a4: 0x48c32000  ctc2.ni     $v1, $vi4
    ctx->pc = 0x3302a4u;
    ctx->vi[4] = static_cast<uint16_t>(GPR_U32(ctx, 3));
    // 0x3302a8: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x3302a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x3302ac: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x3302acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x3302b0: 0x48c22800  ctc2.ni     $v0, $vi5
    ctx->pc = 0x3302b0u;
    ctx->vi[5] = static_cast<uint16_t>(GPR_U32(ctx, 2));
    // 0x3302b4: 0x48c33000  ctc2.ni     $v1, $vi6
    ctx->pc = 0x3302b4u;
    ctx->vi[6] = static_cast<uint16_t>(GPR_U32(ctx, 3));
    // 0x3302b8: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x3302b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x3302bc: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x3302bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x3302c0: 0x48c23800  ctc2.ni     $v0, $vi7
    ctx->pc = 0x3302c0u;
    ctx->vi[7] = static_cast<uint16_t>(GPR_U32(ctx, 2));
    // 0x3302c4: 0x48c34000  ctc2.ni     $v1, $vi8
    ctx->pc = 0x3302c4u;
    ctx->vi[8] = static_cast<uint16_t>(GPR_U32(ctx, 3));
    // 0x3302c8: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x3302c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x3302cc: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x3302ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x3302d0: 0x48c24800  ctc2.ni     $v0, $vi9
    ctx->pc = 0x3302d0u;
    ctx->vi[9] = static_cast<uint16_t>(GPR_U32(ctx, 2));
    // 0x3302d4: 0x48c35000  ctc2.ni     $v1, $vi10
    ctx->pc = 0x3302d4u;
    ctx->vi[10] = static_cast<uint16_t>(GPR_U32(ctx, 3));
    // 0x3302d8: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x3302d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x3302dc: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x3302dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x3302e0: 0x48c25800  ctc2.ni     $v0, $vi11
    ctx->pc = 0x3302e0u;
    ctx->vi[11] = static_cast<uint16_t>(GPR_U32(ctx, 2));
    // 0x3302e4: 0x48c36000  ctc2.ni     $v1, $vi12
    ctx->pc = 0x3302e4u;
    ctx->vi[12] = static_cast<uint16_t>(GPR_U32(ctx, 3));
    // 0x3302e8: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x3302e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x3302ec: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x3302ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x3302f0: 0x48c26800  ctc2.ni     $v0, $vi13
    ctx->pc = 0x3302f0u;
    ctx->vi[13] = static_cast<uint16_t>(GPR_U32(ctx, 2));
    // 0x3302f4: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x3302f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x3302f8: 0x48c37000  ctc2.ni     $v1, $vi14
    ctx->pc = 0x3302f8u;
    ctx->vi[14] = static_cast<uint16_t>(GPR_U32(ctx, 3));
    // 0x3302fc: 0x48c27800  ctc2.ni     $v0, $vi15
    ctx->pc = 0x3302fcu;
    ctx->vi[15] = static_cast<uint16_t>(GPR_U32(ctx, 2));
    // 0x330300: 0x3e00008  jr          $ra
    ctx->pc = 0x330300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x330308u;
}
