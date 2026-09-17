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

// Function: sub_00327238
// Address: 0x327238 - 0x327420
void sub_00327238_0x327238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327238_0x327238");
#endif

    switch (ctx->pc) {
        case 0x32727cu: goto label_32727c;
        case 0x327338u: goto label_327338;
        case 0x327344u: goto label_327344;
        default: break;
    }

    ctx->pc = 0x327238u;

    // 0x327238: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x327238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32723c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x32723cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x327240: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x327240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x327244: 0x24420d00  addiu       $v0, $v0, 0xD00
    ctx->pc = 0x327244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3328));
    // 0x327248: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x327248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32724c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x32724cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327250: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x327250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x327254: 0x24520068  addiu       $s2, $v0, 0x68
    ctx->pc = 0x327254u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x327258: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x327258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x32725c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x32725cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x327260: 0x245000a0  addiu       $s0, $v0, 0xA0
    ctx->pc = 0x327260u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x327264: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x327264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x327268: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x327268u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x400DA0u));
    // 0x32726c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x32726Cu;
    {
        const bool branch_taken_0x32726c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x327270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32726Cu;
        // 0x327270: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32726c) {
            ctx->pc = 0x327280u;
            goto label_327280;
        }
    }
    ctx->pc = 0x327274u;
    // 0x327274: 0xc0c8b1c  jal         func_322C70
    ctx->pc = 0x327274u;
    SET_GPR_U32(ctx, 31, 0x32727Cu);
    ctx->pc = 0x327278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327274u;
    // 0x327278: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322C70u, 0x327274u, 0x32727Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32727Cu;
label_32727c:
    // 0x32727c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x32727cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_327280:
    // 0x327280: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x327280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x327284: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x327284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x327288: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x327288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x32728c: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x32728Cu;
    {
        const bool branch_taken_0x32728c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x32728c) {
            ctx->pc = 0x327290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32728Cu;
            // 0x327290: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3272A8u;
            goto label_3272a8;
        }
    }
    ctx->pc = 0x327294u;
    // 0x327294: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x327294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x327298: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x327298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x32729c: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x32729cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
    // 0x3272a0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3272A0u;
    {
        const bool branch_taken_0x3272a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3272A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3272A0u;
        // 0x3272a4: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3272a0) {
            ctx->pc = 0x3272B8u;
            goto label_3272b8;
        }
    }
    ctx->pc = 0x3272A8u;
label_3272a8:
    // 0x3272a8: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x3272a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x3272ac: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x3272acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
    // 0x3272b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3272b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3272b4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x3272b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_3272b8:
    // 0x3272b8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3272b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3272bc: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x3272bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3272c0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3272c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3272c4: 0x3c026c05  lui         $v0, 0x6C05
    ctx->pc = 0x3272c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27653 << 16));
    // 0x3272c8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3272c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x3272cc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3272ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3272d0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3272d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3272d4: 0x70642389  pcpyld      $a0, $v1, $a0
    ctx->pc = 0x3272d4u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x3272d8: 0x7e240000  sq          $a0, 0x0($s1)
    ctx->pc = 0x3272d8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 4));
    // 0x3272dc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3272dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3272e0: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x3272e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x3272e4: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x3272e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x3272e8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x3272e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x3272ec: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3272ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3272f0: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x3272F0u;
    {
        const bool branch_taken_0x3272f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3272F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3272F0u;
        // 0x3272f4: 0x26340010  addiu       $s4, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3272f0) {
            ctx->pc = 0x32738Cu;
            goto label_32738c;
        }
    }
    ctx->pc = 0x3272F8u;
    // 0x3272f8: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x3272f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x3272fc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x3272fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x327300: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x327300u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x327304: 0x8c850414  lw          $a1, 0x414($a0)
    ctx->pc = 0x327304u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x400414u));
    // 0x327308: 0x2463cb00  addiu       $v1, $v1, -0x3500
    ctx->pc = 0x327308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953728));
    // 0x32730c: 0x2442cc90  addiu       $v0, $v0, -0x3370
    ctx->pc = 0x32730cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954128));
    // 0x327310: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x327310u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x327314: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x327314u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327318: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x327318u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x32731c: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x32731cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x327320: 0xae450004  sw          $a1, 0x4($s2)
    ctx->pc = 0x327320u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 5));
    // 0x327324: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x327324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x327328: 0x26100480  addiu       $s0, $s0, 0x480
    ctx->pc = 0x327328u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1152));
    // 0x32732c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x32732cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x327330: 0xc0ce5b2  jal         func_3396C8
    ctx->pc = 0x327330u;
    SET_GPR_U32(ctx, 31, 0x327338u);
    ctx->pc = 0x327334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327330u;
    // 0x327334: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3396C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3396C8u, 0x327330u, 0x327338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327338u;
label_327338:
    // 0x327338: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x327338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32733c: 0xc0ce5a2  jal         func_339688
    ctx->pc = 0x32733Cu;
    SET_GPR_U32(ctx, 31, 0x327344u);
    ctx->pc = 0x327340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32733Cu;
    // 0x327340: 0x2625000c  addiu       $a1, $s1, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339688u, 0x32733Cu, 0x327344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327344u;
label_327344:
    // 0x327344: 0x4a006838  vcallms     0xD00
    ctx->pc = 0x327344u;
    {     ctx->vu0_tpc = 0xD00;     runtime->executeVU0Microprogram(rdram, ctx, 0xD00); }
    // 0x327348: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x327348u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x32734c: 0xda180100  lqc2        $vf24, 0x100($s0)
    ctx->pc = 0x32734cu;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x327350: 0xda190110  lqc2        $vf25, 0x110($s0)
    ctx->pc = 0x327350u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x327354: 0xda1a0120  lqc2        $vf26, 0x120($s0)
    ctx->pc = 0x327354u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x327358: 0xda1b0130  lqc2        $vf27, 0x130($s0)
    ctx->pc = 0x327358u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x32735c: 0x4a006438  vcallms     0xC80
    ctx->pc = 0x32735cu;
    {     ctx->vu0_tpc = 0xC80;     runtime->executeVU0Microprogram(rdram, ctx, 0xC80); }
    // 0x327360: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x327360u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x327364: 0xfa3c0010  sqc2        $vf28, 0x10($s1)
    ctx->pc = 0x327364u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x327368: 0xfa3d0020  sqc2        $vf29, 0x20($s1)
    ctx->pc = 0x327368u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x32736c: 0xfa3e0030  sqc2        $vf30, 0x30($s1)
    ctx->pc = 0x32736cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x327370: 0xfa3f0040  sqc2        $vf31, 0x40($s1)
    ctx->pc = 0x327370u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x327374: 0x4a006a38  vcallms     0xD40
    ctx->pc = 0x327374u;
    {     ctx->vu0_tpc = 0xD40;     runtime->executeVU0Microprogram(rdram, ctx, 0xD40); }
    // 0x327378: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x327378u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x32737c: 0x26310050  addiu       $s1, $s1, 0x50
    ctx->pc = 0x32737cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x327380: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x327380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x327384: 0xac510414  sw          $s1, 0x414($v0)
    ctx->pc = 0x327384u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x400414u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x400414u, _value); } while (0);
    // 0x327388: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x327388u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_32738c:
    // 0x32738c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x32738cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x327390: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x327390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x327394: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x327394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x327398: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x327398u;
    {
        const bool branch_taken_0x327398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x327398) {
            ctx->pc = 0x32739Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327398u;
            // 0x32739c: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3273B8u;
            goto label_3273b8;
        }
    }
    ctx->pc = 0x3273A0u;
    // 0x3273a0: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x3273a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x3273a4: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x3273a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x3273a8: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x3273a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
    // 0x3273ac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3273ACu;
    {
        const bool branch_taken_0x3273ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3273B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3273ACu;
        // 0x3273b0: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3273ac) {
            ctx->pc = 0x3273C8u;
            goto label_3273c8;
        }
    }
    ctx->pc = 0x3273B4u;
    // 0x3273b4: 0x0  nop
    ctx->pc = 0x3273b4u;
    // NOP
label_3273b8:
    // 0x3273b8: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x3273b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x3273bc: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x3273bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
    // 0x3273c0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3273c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3273c4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x3273c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_3273c8:
    // 0x3273c8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3273c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3273cc: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x3273ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3273d0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3273d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3273d4: 0x3c036c05  lui         $v1, 0x6C05
    ctx->pc = 0x3273d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27653 << 16));
    // 0x3273d8: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x3273d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x3273dc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3273dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3273e0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3273e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3273e4: 0x70442389  pcpyld      $a0, $v0, $a0
    ctx->pc = 0x3273e4u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x3273e8: 0x7e840000  sq          $a0, 0x0($s4)
    ctx->pc = 0x3273e8u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 4));
    // 0x3273ec: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3273ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3273f0: 0x26820010  addiu       $v0, $s4, 0x10
    ctx->pc = 0x3273f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x3273f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3273f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3273f8: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x3273f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x3273fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3273fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x327400: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x327400u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x327404: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x327404u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x327408: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x327408u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32740c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x32740cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x327410: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x327410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x327414: 0x3e00008  jr          $ra
    ctx->pc = 0x327414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327414u;
        // 0x327418: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32741Cu;
    // 0x32741c: 0x0  nop
    ctx->pc = 0x32741cu;
    // NOP
    ctx->pc = 0x327420u;
}
