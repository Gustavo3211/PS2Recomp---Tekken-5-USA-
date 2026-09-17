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

// Function: sub_0032B010
// Address: 0x32b010 - 0x32b1f8
void sub_0032B010_0x32b010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032B010_0x32b010");
#endif

    switch (ctx->pc) {
        case 0x32b054u: goto label_32b054;
        case 0x32b110u: goto label_32b110;
        case 0x32b11cu: goto label_32b11c;
        default: break;
    }

    ctx->pc = 0x32b010u;

    // 0x32b010: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32b010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32b014: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x32b014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x32b018: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32b018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32b01c: 0x24420d00  addiu       $v0, $v0, 0xD00
    ctx->pc = 0x32b01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3328));
    // 0x32b020: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32b020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32b024: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x32b024u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b028: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x32b028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x32b02c: 0x24520068  addiu       $s2, $v0, 0x68
    ctx->pc = 0x32b02cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x32b030: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x32b030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x32b034: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x32b034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x32b038: 0x245000a0  addiu       $s0, $v0, 0xA0
    ctx->pc = 0x32b038u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x32b03c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x32b03cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x32b040: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x32b040u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x400DA0u));
    // 0x32b044: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x32B044u;
    {
        const bool branch_taken_0x32b044 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B044u;
        // 0x32b048: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b044) {
            ctx->pc = 0x32B058u;
            goto label_32b058;
        }
    }
    ctx->pc = 0x32B04Cu;
    // 0x32b04c: 0xc0c8b1c  jal         func_322C70
    ctx->pc = 0x32B04Cu;
    SET_GPR_U32(ctx, 31, 0x32B054u);
    ctx->pc = 0x32B050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B04Cu;
    // 0x32b050: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322C70u, 0x32B04Cu, 0x32B054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B054u;
label_32b054:
    // 0x32b054: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x32b054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_32b058:
    // 0x32b058: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x32b058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x32b05c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x32b05cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x32b060: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x32b060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x32b064: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x32B064u;
    {
        const bool branch_taken_0x32b064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x32b064) {
            ctx->pc = 0x32B068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32B064u;
            // 0x32b068: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32B080u;
            goto label_32b080;
        }
    }
    ctx->pc = 0x32B06Cu;
    // 0x32b06c: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x32b06cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x32b070: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x32b070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x32b074: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x32b074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
    // 0x32b078: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x32B078u;
    {
        const bool branch_taken_0x32b078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B078u;
        // 0x32b07c: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b078) {
            ctx->pc = 0x32B090u;
            goto label_32b090;
        }
    }
    ctx->pc = 0x32B080u;
label_32b080:
    // 0x32b080: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x32b080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x32b084: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x32b084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
    // 0x32b088: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x32b088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x32b08c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x32b08cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_32b090:
    // 0x32b090: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x32b090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32b094: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x32b094u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32b098: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x32b098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x32b09c: 0x3c026c05  lui         $v0, 0x6C05
    ctx->pc = 0x32b09cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27653 << 16));
    // 0x32b0a0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x32b0a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x32b0a4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32b0a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32b0a8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x32b0a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x32b0ac: 0x70642389  pcpyld      $a0, $v1, $a0
    ctx->pc = 0x32b0acu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x32b0b0: 0x7e240000  sq          $a0, 0x0($s1)
    ctx->pc = 0x32b0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 4));
    // 0x32b0b4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x32b0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x32b0b8: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x32b0b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x32b0bc: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x32b0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x32b0c0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x32b0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x32b0c4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x32b0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x32b0c8: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x32B0C8u;
    {
        const bool branch_taken_0x32b0c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B0C8u;
        // 0x32b0cc: 0x26340010  addiu       $s4, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b0c8) {
            ctx->pc = 0x32B164u;
            goto label_32b164;
        }
    }
    ctx->pc = 0x32B0D0u;
    // 0x32b0d0: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x32b0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x32b0d4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x32b0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x32b0d8: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x32b0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x32b0dc: 0x8c850414  lw          $a1, 0x414($a0)
    ctx->pc = 0x32b0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x400414u));
    // 0x32b0e0: 0x2463cb00  addiu       $v1, $v1, -0x3500
    ctx->pc = 0x32b0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953728));
    // 0x32b0e4: 0x2442cc90  addiu       $v0, $v0, -0x3370
    ctx->pc = 0x32b0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954128));
    // 0x32b0e8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x32b0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32b0ec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x32b0ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b0f0: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x32b0f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x32b0f4: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x32b0f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x32b0f8: 0xae450004  sw          $a1, 0x4($s2)
    ctx->pc = 0x32b0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 5));
    // 0x32b0fc: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x32b0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x32b100: 0x26100480  addiu       $s0, $s0, 0x480
    ctx->pc = 0x32b100u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1152));
    // 0x32b104: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x32b104u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x32b108: 0xc0ce5b2  jal         func_3396C8
    ctx->pc = 0x32B108u;
    SET_GPR_U32(ctx, 31, 0x32B110u);
    ctx->pc = 0x32B10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B108u;
    // 0x32b10c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3396C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3396C8u, 0x32B108u, 0x32B110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B110u;
label_32b110:
    // 0x32b110: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32b110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b114: 0xc0ce5a2  jal         func_339688
    ctx->pc = 0x32B114u;
    SET_GPR_U32(ctx, 31, 0x32B11Cu);
    ctx->pc = 0x32B118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B114u;
    // 0x32b118: 0x2625000c  addiu       $a1, $s1, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339688u, 0x32B114u, 0x32B11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B11Cu;
label_32b11c:
    // 0x32b11c: 0x4a006838  vcallms     0xD00
    ctx->pc = 0x32b11cu;
    {     ctx->vu0_tpc = 0xD00;     runtime->executeVU0Microprogram(rdram, ctx, 0xD00); }
    // 0x32b120: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x32b120u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x32b124: 0xda180100  lqc2        $vf24, 0x100($s0)
    ctx->pc = 0x32b124u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x32b128: 0xda190110  lqc2        $vf25, 0x110($s0)
    ctx->pc = 0x32b128u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x32b12c: 0xda1a0120  lqc2        $vf26, 0x120($s0)
    ctx->pc = 0x32b12cu;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x32b130: 0xda1b0130  lqc2        $vf27, 0x130($s0)
    ctx->pc = 0x32b130u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x32b134: 0x4a006438  vcallms     0xC80
    ctx->pc = 0x32b134u;
    {     ctx->vu0_tpc = 0xC80;     runtime->executeVU0Microprogram(rdram, ctx, 0xC80); }
    // 0x32b138: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x32b138u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x32b13c: 0xfa3c0010  sqc2        $vf28, 0x10($s1)
    ctx->pc = 0x32b13cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x32b140: 0xfa3d0020  sqc2        $vf29, 0x20($s1)
    ctx->pc = 0x32b140u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x32b144: 0xfa3e0030  sqc2        $vf30, 0x30($s1)
    ctx->pc = 0x32b144u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x32b148: 0xfa3f0040  sqc2        $vf31, 0x40($s1)
    ctx->pc = 0x32b148u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x32b14c: 0x4a006a38  vcallms     0xD40
    ctx->pc = 0x32b14cu;
    {     ctx->vu0_tpc = 0xD40;     runtime->executeVU0Microprogram(rdram, ctx, 0xD40); }
    // 0x32b150: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x32b150u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x32b154: 0x26310050  addiu       $s1, $s1, 0x50
    ctx->pc = 0x32b154u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x32b158: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x32b158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x32b15c: 0xac510414  sw          $s1, 0x414($v0)
    ctx->pc = 0x32b15cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x400414u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x400414u, _value); } while (0);
    // 0x32b160: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x32b160u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_32b164:
    // 0x32b164: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x32b164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x32b168: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x32b168u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x32b16c: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x32b16cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x32b170: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x32B170u;
    {
        const bool branch_taken_0x32b170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x32b170) {
            ctx->pc = 0x32B174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32B170u;
            // 0x32b174: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32B190u;
            goto label_32b190;
        }
    }
    ctx->pc = 0x32B178u;
    // 0x32b178: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x32b178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x32b17c: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x32b17cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x32b180: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x32b180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
    // 0x32b184: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x32B184u;
    {
        const bool branch_taken_0x32b184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B184u;
        // 0x32b188: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b184) {
            ctx->pc = 0x32B1A0u;
            goto label_32b1a0;
        }
    }
    ctx->pc = 0x32B18Cu;
    // 0x32b18c: 0x0  nop
    ctx->pc = 0x32b18cu;
    // NOP
label_32b190:
    // 0x32b190: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x32b190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x32b194: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x32b194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
    // 0x32b198: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x32b198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x32b19c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x32b19cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_32b1a0:
    // 0x32b1a0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x32b1a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32b1a4: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x32b1a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32b1a8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x32b1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x32b1ac: 0x3c036c05  lui         $v1, 0x6C05
    ctx->pc = 0x32b1acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27653 << 16));
    // 0x32b1b0: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x32b1b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x32b1b4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32b1b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32b1b8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x32b1b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32b1bc: 0x70442389  pcpyld      $a0, $v0, $a0
    ctx->pc = 0x32b1bcu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x32b1c0: 0x7e840000  sq          $a0, 0x0($s4)
    ctx->pc = 0x32b1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 4));
    // 0x32b1c4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x32b1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x32b1c8: 0x26820010  addiu       $v0, $s4, 0x10
    ctx->pc = 0x32b1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x32b1cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32b1ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32b1d0: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x32b1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x32b1d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32b1d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32b1d8: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x32b1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x32b1dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x32b1dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32b1e0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x32b1e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32b1e4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x32b1e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32b1e8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x32b1e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x32b1ec: 0x3e00008  jr          $ra
    ctx->pc = 0x32B1ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32B1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B1ECu;
        // 0x32b1f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B1ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32B1F4u;
    // 0x32b1f4: 0x0  nop
    ctx->pc = 0x32b1f4u;
    // NOP
    ctx->pc = 0x32b1f8u;
}
