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

// Function: sub_00330168
// Address: 0x330168 - 0x330238
void sub_00330168_0x330168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00330168_0x330168");
#endif

    ctx->pc = 0x330168u;

    // 0x330168: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x330168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x33016c: 0x244283c0  addiu       $v0, $v0, -0x7C40
    ctx->pc = 0x33016cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935488));
    // 0x330170: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x330170u;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[16])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x1B83C0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x1B83C0u, _value); } while (0);
    // 0x330174: 0xf8510010  sqc2        $vf17, 0x10($v0)
    ctx->pc = 0x330174u;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[17])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x1B83D0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x1B83D0u, _value); } while (0);
    // 0x330178: 0xf8520020  sqc2        $vf18, 0x20($v0)
    ctx->pc = 0x330178u;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[18])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x1B83E0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x1B83E0u, _value); } while (0);
    // 0x33017c: 0xf8530030  sqc2        $vf19, 0x30($v0)
    ctx->pc = 0x33017cu;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[19])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x1B83F0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x1B83F0u, _value); } while (0);
    // 0x330180: 0xf8540040  sqc2        $vf20, 0x40($v0)
    ctx->pc = 0x330180u;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[20])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x1B8400u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x1B8400u, _value); } while (0);
    // 0x330184: 0xf8550050  sqc2        $vf21, 0x50($v0)
    ctx->pc = 0x330184u;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[21])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x1B8410u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x1B8410u, _value); } while (0);
    // 0x330188: 0xf8560060  sqc2        $vf22, 0x60($v0)
    ctx->pc = 0x330188u;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[22])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x1B8420u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x1B8420u, _value); } while (0);
    // 0x33018c: 0xf8570070  sqc2        $vf23, 0x70($v0)
    ctx->pc = 0x33018cu;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[23])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x1B8430u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x1B8430u, _value); } while (0);
    // 0x330190: 0xf8580080  sqc2        $vf24, 0x80($v0)
    ctx->pc = 0x330190u;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[24])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x1B8440u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x1B8440u, _value); } while (0);
    // 0x330194: 0xf8590090  sqc2        $vf25, 0x90($v0)
    ctx->pc = 0x330194u;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[25])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x1B8450u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x1B8450u, _value); } while (0);
    // 0x330198: 0xf85a00a0  sqc2        $vf26, 0xA0($v0)
    ctx->pc = 0x330198u;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[26])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x1B8460u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x1B8460u, _value); } while (0);
    // 0x33019c: 0xf85b00b0  sqc2        $vf27, 0xB0($v0)
    ctx->pc = 0x33019cu;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[27])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x1B8470u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x1B8470u, _value); } while (0);
    // 0x3301a0: 0xf85c00c0  sqc2        $vf28, 0xC0($v0)
    ctx->pc = 0x3301a0u;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[28])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x1B8480u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x1B8480u, _value); } while (0);
    // 0x3301a4: 0xf85d00d0  sqc2        $vf29, 0xD0($v0)
    ctx->pc = 0x3301a4u;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[29])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x1B8490u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x1B8490u, _value); } while (0);
    // 0x3301a8: 0xf85e00e0  sqc2        $vf30, 0xE0($v0)
    ctx->pc = 0x3301a8u;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[30])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x1B84A0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x1B84A0u, _value); } while (0);
    // 0x3301ac: 0xf85f00f0  sqc2        $vf31, 0xF0($v0)
    ctx->pc = 0x3301acu;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[31])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x1B84B0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x1B84B0u, _value); } while (0);
    // 0x3301b0: 0x3c04001c  lui         $a0, 0x1C
    ctx->pc = 0x3301b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28 << 16));
    // 0x3301b4: 0x248484c0  addiu       $a0, $a0, -0x7B40
    ctx->pc = 0x3301b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935744));
    // 0x3301b8: 0x48420800  cfc2.ni     $v0, $vi1
    ctx->pc = 0x3301b8u;
    SET_GPR_U32(ctx, 2, static_cast<uint32_t>(ctx->vi[1]));
    // 0x3301bc: 0x48431000  cfc2.ni     $v1, $vi2
    ctx->pc = 0x3301bcu;
    SET_GPR_U32(ctx, 3, static_cast<uint32_t>(ctx->vi[2]));
    // 0x3301c0: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x3301c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x3301c4: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x3301c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x3301c8: 0x48421800  cfc2.ni     $v0, $vi3
    ctx->pc = 0x3301c8u;
    SET_GPR_U32(ctx, 2, static_cast<uint32_t>(ctx->vi[3]));
    // 0x3301cc: 0x48432000  cfc2.ni     $v1, $vi4
    ctx->pc = 0x3301ccu;
    SET_GPR_U32(ctx, 3, static_cast<uint32_t>(ctx->vi[4]));
    // 0x3301d0: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x3301d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x3301d4: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x3301d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x3301d8: 0x48422800  cfc2.ni     $v0, $vi5
    ctx->pc = 0x3301d8u;
    SET_GPR_U32(ctx, 2, static_cast<uint32_t>(ctx->vi[5]));
    // 0x3301dc: 0x48433000  cfc2.ni     $v1, $vi6
    ctx->pc = 0x3301dcu;
    SET_GPR_U32(ctx, 3, static_cast<uint32_t>(ctx->vi[6]));
    // 0x3301e0: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x3301e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x3301e4: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x3301e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x3301e8: 0x48423800  cfc2.ni     $v0, $vi7
    ctx->pc = 0x3301e8u;
    SET_GPR_U32(ctx, 2, static_cast<uint32_t>(ctx->vi[7]));
    // 0x3301ec: 0x48434000  cfc2.ni     $v1, $vi8
    ctx->pc = 0x3301ecu;
    SET_GPR_U32(ctx, 3, static_cast<uint32_t>(ctx->vi[8]));
    // 0x3301f0: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x3301f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x3301f4: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x3301f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x3301f8: 0x48424800  cfc2.ni     $v0, $vi9
    ctx->pc = 0x3301f8u;
    SET_GPR_U32(ctx, 2, static_cast<uint32_t>(ctx->vi[9]));
    // 0x3301fc: 0x48435000  cfc2.ni     $v1, $vi10
    ctx->pc = 0x3301fcu;
    SET_GPR_U32(ctx, 3, static_cast<uint32_t>(ctx->vi[10]));
    // 0x330200: 0xac820024  sw          $v0, 0x24($a0)
    ctx->pc = 0x330200u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
    // 0x330204: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x330204u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
    // 0x330208: 0x48425800  cfc2.ni     $v0, $vi11
    ctx->pc = 0x330208u;
    SET_GPR_U32(ctx, 2, static_cast<uint32_t>(ctx->vi[11]));
    // 0x33020c: 0x48436000  cfc2.ni     $v1, $vi12
    ctx->pc = 0x33020cu;
    SET_GPR_U32(ctx, 3, static_cast<uint32_t>(ctx->vi[12]));
    // 0x330210: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x330210u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x330214: 0xac830030  sw          $v1, 0x30($a0)
    ctx->pc = 0x330214u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
    // 0x330218: 0x48426800  cfc2.ni     $v0, $vi13
    ctx->pc = 0x330218u;
    SET_GPR_U32(ctx, 2, static_cast<uint32_t>(ctx->vi[13]));
    // 0x33021c: 0x48437000  cfc2.ni     $v1, $vi14
    ctx->pc = 0x33021cu;
    SET_GPR_U32(ctx, 3, static_cast<uint32_t>(ctx->vi[14]));
    // 0x330220: 0xac820034  sw          $v0, 0x34($a0)
    ctx->pc = 0x330220u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 2));
    // 0x330224: 0x48427800  cfc2.ni     $v0, $vi15
    ctx->pc = 0x330224u;
    SET_GPR_U32(ctx, 2, static_cast<uint32_t>(ctx->vi[15]));
    // 0x330228: 0xac830038  sw          $v1, 0x38($a0)
    ctx->pc = 0x330228u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 3));
    // 0x33022c: 0xac82003c  sw          $v0, 0x3C($a0)
    ctx->pc = 0x33022cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 2));
    // 0x330230: 0x3e00008  jr          $ra
    ctx->pc = 0x330230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x330238u;
}
