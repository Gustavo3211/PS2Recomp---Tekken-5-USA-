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

// Function: sub_003263B0
// Address: 0x3263b0 - 0x326598
void sub_003263B0_0x3263b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003263B0_0x3263b0");
#endif

    switch (ctx->pc) {
        case 0x3263f4u: goto label_3263f4;
        case 0x3264b0u: goto label_3264b0;
        case 0x3264bcu: goto label_3264bc;
        default: break;
    }

    ctx->pc = 0x3263b0u;

    // 0x3263b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3263b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3263b4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3263b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3263b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3263b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3263bc: 0x24420d00  addiu       $v0, $v0, 0xD00
    ctx->pc = 0x3263bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3328));
    // 0x3263c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3263c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3263c4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3263c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3263c8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3263c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3263cc: 0x24520068  addiu       $s2, $v0, 0x68
    ctx->pc = 0x3263ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x3263d0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3263d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3263d4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3263d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3263d8: 0x245000a0  addiu       $s0, $v0, 0xA0
    ctx->pc = 0x3263d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x3263dc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x3263dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x3263e0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3263e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x400DA0u));
    // 0x3263e4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3263E4u;
    {
        const bool branch_taken_0x3263e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3263E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3263E4u;
        // 0x3263e8: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3263e4) {
            ctx->pc = 0x3263F8u;
            goto label_3263f8;
        }
    }
    ctx->pc = 0x3263ECu;
    // 0x3263ec: 0xc0c8b1c  jal         func_322C70
    ctx->pc = 0x3263ECu;
    SET_GPR_U32(ctx, 31, 0x3263F4u);
    ctx->pc = 0x3263F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3263ECu;
    // 0x3263f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322C70u, 0x3263ECu, 0x3263F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3263F4u;
label_3263f4:
    // 0x3263f4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3263f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_3263f8:
    // 0x3263f8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3263f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3263fc: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x3263fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x326400: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x326400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x326404: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x326404u;
    {
        const bool branch_taken_0x326404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x326404) {
            ctx->pc = 0x326408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x326404u;
            // 0x326408: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x326420u;
            goto label_326420;
        }
    }
    ctx->pc = 0x32640Cu;
    // 0x32640c: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x32640cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x326410: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x326410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x326414: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x326414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
    // 0x326418: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x326418u;
    {
        const bool branch_taken_0x326418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32641Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326418u;
        // 0x32641c: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326418) {
            ctx->pc = 0x326430u;
            goto label_326430;
        }
    }
    ctx->pc = 0x326420u;
label_326420:
    // 0x326420: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x326420u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x326424: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x326424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
    // 0x326428: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x326428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x32642c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x32642cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_326430:
    // 0x326430: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x326430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x326434: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x326434u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x326438: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x326438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x32643c: 0x3c026c05  lui         $v0, 0x6C05
    ctx->pc = 0x32643cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27653 << 16));
    // 0x326440: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x326440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x326444: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x326444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x326448: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x326448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x32644c: 0x70642389  pcpyld      $a0, $v1, $a0
    ctx->pc = 0x32644cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x326450: 0x7e240000  sq          $a0, 0x0($s1)
    ctx->pc = 0x326450u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 4));
    // 0x326454: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x326454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x326458: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x326458u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x32645c: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x32645cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x326460: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x326460u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x326464: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x326464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x326468: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x326468u;
    {
        const bool branch_taken_0x326468 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32646Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326468u;
        // 0x32646c: 0x26340010  addiu       $s4, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326468) {
            ctx->pc = 0x326504u;
            goto label_326504;
        }
    }
    ctx->pc = 0x326470u;
    // 0x326470: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x326470u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x326474: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x326474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x326478: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x326478u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x32647c: 0x8c850414  lw          $a1, 0x414($a0)
    ctx->pc = 0x32647cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x400414u));
    // 0x326480: 0x2463cb00  addiu       $v1, $v1, -0x3500
    ctx->pc = 0x326480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953728));
    // 0x326484: 0x2442cc90  addiu       $v0, $v0, -0x3370
    ctx->pc = 0x326484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954128));
    // 0x326488: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x326488u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32648c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x32648cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326490: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x326490u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x326494: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x326494u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x326498: 0xae450004  sw          $a1, 0x4($s2)
    ctx->pc = 0x326498u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 5));
    // 0x32649c: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x32649cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x3264a0: 0x26100480  addiu       $s0, $s0, 0x480
    ctx->pc = 0x3264a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1152));
    // 0x3264a4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3264a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x3264a8: 0xc0ce5b2  jal         func_3396C8
    ctx->pc = 0x3264A8u;
    SET_GPR_U32(ctx, 31, 0x3264B0u);
    ctx->pc = 0x3264ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3264A8u;
    // 0x3264ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3396C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3396C8u, 0x3264A8u, 0x3264B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3264B0u;
label_3264b0:
    // 0x3264b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3264b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3264b4: 0xc0ce5a2  jal         func_339688
    ctx->pc = 0x3264B4u;
    SET_GPR_U32(ctx, 31, 0x3264BCu);
    ctx->pc = 0x3264B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3264B4u;
    // 0x3264b8: 0x2625000c  addiu       $a1, $s1, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339688u, 0x3264B4u, 0x3264BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3264BCu;
label_3264bc:
    // 0x3264bc: 0x4a006838  vcallms     0xD00
    ctx->pc = 0x3264bcu;
    {     ctx->vu0_tpc = 0xD00;     runtime->executeVU0Microprogram(rdram, ctx, 0xD00); }
    // 0x3264c0: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x3264c0u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x3264c4: 0xda180100  lqc2        $vf24, 0x100($s0)
    ctx->pc = 0x3264c4u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x3264c8: 0xda190110  lqc2        $vf25, 0x110($s0)
    ctx->pc = 0x3264c8u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x3264cc: 0xda1a0120  lqc2        $vf26, 0x120($s0)
    ctx->pc = 0x3264ccu;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x3264d0: 0xda1b0130  lqc2        $vf27, 0x130($s0)
    ctx->pc = 0x3264d0u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x3264d4: 0x4a006438  vcallms     0xC80
    ctx->pc = 0x3264d4u;
    {     ctx->vu0_tpc = 0xC80;     runtime->executeVU0Microprogram(rdram, ctx, 0xC80); }
    // 0x3264d8: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x3264d8u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x3264dc: 0xfa3c0010  sqc2        $vf28, 0x10($s1)
    ctx->pc = 0x3264dcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x3264e0: 0xfa3d0020  sqc2        $vf29, 0x20($s1)
    ctx->pc = 0x3264e0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x3264e4: 0xfa3e0030  sqc2        $vf30, 0x30($s1)
    ctx->pc = 0x3264e4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x3264e8: 0xfa3f0040  sqc2        $vf31, 0x40($s1)
    ctx->pc = 0x3264e8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x3264ec: 0x4a006a38  vcallms     0xD40
    ctx->pc = 0x3264ecu;
    {     ctx->vu0_tpc = 0xD40;     runtime->executeVU0Microprogram(rdram, ctx, 0xD40); }
    // 0x3264f0: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x3264f0u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x3264f4: 0x26310050  addiu       $s1, $s1, 0x50
    ctx->pc = 0x3264f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x3264f8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3264f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3264fc: 0xac510414  sw          $s1, 0x414($v0)
    ctx->pc = 0x3264fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x400414u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x400414u, _value); } while (0);
    // 0x326500: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x326500u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_326504:
    // 0x326504: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x326504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x326508: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x326508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x32650c: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x32650cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x326510: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x326510u;
    {
        const bool branch_taken_0x326510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x326510) {
            ctx->pc = 0x326514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x326510u;
            // 0x326514: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x326530u;
            goto label_326530;
        }
    }
    ctx->pc = 0x326518u;
    // 0x326518: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x326518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x32651c: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x32651cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x326520: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x326520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
    // 0x326524: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x326524u;
    {
        const bool branch_taken_0x326524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326524u;
        // 0x326528: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326524) {
            ctx->pc = 0x326540u;
            goto label_326540;
        }
    }
    ctx->pc = 0x32652Cu;
    // 0x32652c: 0x0  nop
    ctx->pc = 0x32652cu;
    // NOP
label_326530:
    // 0x326530: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x326530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x326534: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x326534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
    // 0x326538: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x326538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x32653c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x32653cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_326540:
    // 0x326540: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x326540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x326544: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x326544u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x326548: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x326548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x32654c: 0x3c036c05  lui         $v1, 0x6C05
    ctx->pc = 0x32654cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27653 << 16));
    // 0x326550: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x326550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x326554: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x326554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x326558: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x326558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32655c: 0x70442389  pcpyld      $a0, $v0, $a0
    ctx->pc = 0x32655cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x326560: 0x7e840000  sq          $a0, 0x0($s4)
    ctx->pc = 0x326560u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 4));
    // 0x326564: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x326564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x326568: 0x26820010  addiu       $v0, $s4, 0x10
    ctx->pc = 0x326568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x32656c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32656cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x326570: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x326570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x326574: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x326574u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x326578: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x326578u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x32657c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x32657cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x326580: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x326580u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x326584: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x326584u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x326588: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x326588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x32658c: 0x3e00008  jr          $ra
    ctx->pc = 0x32658Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32658Cu;
        // 0x326590: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32658Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326594u;
    // 0x326594: 0x0  nop
    ctx->pc = 0x326594u;
    // NOP
    ctx->pc = 0x326598u;
}
