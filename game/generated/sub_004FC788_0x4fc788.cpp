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

// Function: sub_004FC788
// Address: 0x4fc788 - 0x4fc868
void sub_004FC788_0x4fc788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004FC788_0x4fc788");
#endif

    switch (ctx->pc) {
        case 0x4fc808u: goto label_4fc808;
        case 0x4fc838u: goto label_4fc838;
        default: break;
    }

    ctx->pc = 0x4fc788u;

    // 0x4fc788: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4fc788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4fc78c: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x4fc78cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x4fc790: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4fc790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4fc794: 0x3c120057  lui         $s2, 0x57
    ctx->pc = 0x4fc794u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)87 << 16));
    // 0x4fc798: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x4fc798u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x4fc79c: 0x2442c748  addiu       $v0, $v0, -0x38B8
    ctx->pc = 0x4fc79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952776));
    // 0x4fc7a0: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x4fc7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x4fc7a4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4fc7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4fc7a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4fc7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4fc7ac: 0x2652cee0  addiu       $s2, $s2, -0x3120
    ctx->pc = 0x4fc7acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294954720));
    // 0x4fc7b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4fc7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4fc7b4: 0x3c133f80  lui         $s3, 0x3F80
    ctx->pc = 0x4fc7b4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)16256 << 16));
    // 0x4fc7b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4fc7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4fc7bc: 0xac62ced8  sw          $v0, -0x3128($v1)
    ctx->pc = 0x4fc7bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x56CED8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x56CED8u, _value); } while (0);
    // 0x4fc7c0: 0xac80cecc  sw          $zero, -0x3134($a0)
    ctx->pc = 0x4fc7c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x56CECCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x56CECCu, _value); } while (0);
    // 0x4fc7c4: 0x7e400000  sq          $zero, 0x0($s2)
    ctx->pc = 0x4fc7c4u;
    do { __m128i _value = (GPR_VEC(ctx, 0)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x56CEE0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x56CEE0u, _value); } while (0);
    // 0x4fc7c8: 0x7e400010  sq          $zero, 0x10($s2)
    ctx->pc = 0x4fc7c8u;
    do { __m128i _value = (GPR_VEC(ctx, 0)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x56CEF0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x56CEF0u, _value); } while (0);
    // 0x4fc7cc: 0x7e400020  sq          $zero, 0x20($s2)
    ctx->pc = 0x4fc7ccu;
    do { __m128i _value = (GPR_VEC(ctx, 0)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x56CF00u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x56CF00u, _value); } while (0);
    // 0x4fc7d0: 0xfa400030  sqc2        $vf0, 0x30($s2)
    ctx->pc = 0x4fc7d0u;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[0])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x56CF10u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x56CF10u, _value); } while (0);
    // 0x4fc7d4: 0x3c110073  lui         $s1, 0x73
    ctx->pc = 0x4fc7d4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
    // 0x4fc7d8: 0xae530000  sw          $s3, 0x0($s2)
    ctx->pc = 0x4fc7d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 19)); ps2TraceGuestWrite(rdram, 0x56CEE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x56CEE0u, _value); } while (0);
    // 0x4fc7dc: 0xae530014  sw          $s3, 0x14($s2)
    ctx->pc = 0x4fc7dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 19)); ps2TraceGuestWrite(rdram, 0x56CEF4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x56CEF4u, _value); } while (0);
    // 0x4fc7e0: 0x2631d680  addiu       $s1, $s1, -0x2980
    ctx->pc = 0x4fc7e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294956672));
    // 0x4fc7e4: 0xae530028  sw          $s3, 0x28($s2)
    ctx->pc = 0x4fc7e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 19)); ps2TraceGuestWrite(rdram, 0x56CF08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x56CF08u, _value); } while (0);
    // 0x4fc7e8: 0x26310044  addiu       $s1, $s1, 0x44
    ctx->pc = 0x4fc7e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    // 0x4fc7ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4fc7ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fc7f0: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x4fc7f0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x4fc7f4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4fc7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x72D6C4u));
    // 0x4fc7f8: 0x2610cf20  addiu       $s0, $s0, -0x30E0
    ctx->pc = 0x4fc7f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294954784));
    // 0x4fc7fc: 0x84860032  lh          $a2, 0x32($a0)
    ctx->pc = 0x4fc7fcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 50)));
    // 0x4fc800: 0xc13f0da  jal         func_4FC368
    ctx->pc = 0x4FC800u;
    SET_GPR_U32(ctx, 31, 0x4FC808u);
    ctx->pc = 0x4FC804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FC800u;
    // 0x4fc804: 0x24840026  addiu       $a0, $a0, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FC368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FC368u, 0x4FC800u, 0x4FC808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FC808u;
label_4fc808:
    // 0x4fc808: 0x7e000000  sq          $zero, 0x0($s0)
    ctx->pc = 0x4fc808u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 0));
    // 0x4fc80c: 0x7e000010  sq          $zero, 0x10($s0)
    ctx->pc = 0x4fc80cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 0));
    // 0x4fc810: 0x7e000020  sq          $zero, 0x20($s0)
    ctx->pc = 0x4fc810u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 0));
    // 0x4fc814: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x4fc814u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x4fc818: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4fc818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4fc81c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4fc81cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fc820: 0xae130028  sw          $s3, 0x28($s0)
    ctx->pc = 0x4fc820u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 19));
    // 0x4fc824: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x4fc824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4fc828: 0xae130000  sw          $s3, 0x0($s0)
    ctx->pc = 0x4fc828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
    // 0x4fc82c: 0x24840006  addiu       $a0, $a0, 0x6
    ctx->pc = 0x4fc82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
    // 0x4fc830: 0xc13f0da  jal         func_4FC368
    ctx->pc = 0x4FC830u;
    SET_GPR_U32(ctx, 31, 0x4FC838u);
    ctx->pc = 0x4FC834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FC830u;
    // 0x4fc834: 0xae130014  sw          $s3, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FC368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FC368u, 0x4FC830u, 0x4FC838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FC838u;
label_4fc838:
    // 0x4fc838: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x4fc838u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x4fc83c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4fc83cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fc840: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4fc840u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4fc844: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4fc844u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fc848: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4fc848u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4fc84c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4fc84cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4fc850: 0x2484cf60  addiu       $a0, $a0, -0x30A0
    ctx->pc = 0x4fc850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954848));
    // 0x4fc854: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4fc854u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4fc858: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4fc858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4fc85c: 0x813f1c4  j           func_4FC710
    ctx->pc = 0x4FC85Cu;
    ctx->pc = 0x4FC860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FC85Cu;
    // 0x4fc860: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FC710u;
    sub_004FC710_0x4fc710(rdram, ctx, runtime); return;
    ctx->pc = 0x4FC864u;
    // 0x4fc864: 0x0  nop
    ctx->pc = 0x4fc864u;
    // NOP
    ctx->pc = 0x4fc868u;
}
