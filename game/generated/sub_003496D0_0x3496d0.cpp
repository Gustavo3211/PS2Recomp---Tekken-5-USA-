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

// Function: sub_003496D0
// Address: 0x3496d0 - 0x349a78
void sub_003496D0_0x3496d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003496D0_0x3496d0");
#endif

    switch (ctx->pc) {
        case 0x349720u: goto label_349720;
        case 0x3497e0u: goto label_3497e0;
        case 0x3497ecu: goto label_3497ec;
        case 0x3498bcu: goto label_3498bc;
        case 0x349954u: goto label_349954;
        case 0x3499d8u: goto label_3499d8;
        default: break;
    }

    ctx->pc = 0x3496d0u;

    // 0x3496d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3496d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3496d4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3496d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3496d8: 0x3c150040  lui         $s5, 0x40
    ctx->pc = 0x3496d8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
    // 0x3496dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3496dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3496e0: 0x26a30d00  addiu       $v1, $s5, 0xD00
    ctx->pc = 0x3496e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 3328));
    // 0x3496e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3496e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3496e8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3496e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3496ec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3496ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3496f0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3496f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3496f4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3496f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3496f8: 0x24730068  addiu       $s3, $v1, 0x68
    ctx->pc = 0x3496f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 104));
    // 0x3496fc: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x3496fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x349700: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x349700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x349704: 0x247000a0  addiu       $s0, $v1, 0xA0
    ctx->pc = 0x349704u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x349708: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x349708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x34970c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x34970cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x400DA0u));
    // 0x349710: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x349710u;
    {
        const bool branch_taken_0x349710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x349714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349710u;
        // 0x349714: 0xe0b02d  daddu       $s6, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349710) {
            ctx->pc = 0x349724u;
            goto label_349724;
        }
    }
    ctx->pc = 0x349718u;
    // 0x349718: 0xc0c8b1c  jal         func_322C70
    ctx->pc = 0x349718u;
    SET_GPR_U32(ctx, 31, 0x349720u);
    ctx->pc = 0x34971Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349718u;
    // 0x34971c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322C70u, 0x349718u, 0x349720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349720u;
label_349720:
    // 0x349720: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x349720u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_349724:
    // 0x349724: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x349724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x349728: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x349728u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34972c: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x34972cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x349730: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x349730u;
    {
        const bool branch_taken_0x349730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x349730) {
            ctx->pc = 0x349734u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x349730u;
            // 0x349734: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x349750u;
            goto label_349750;
        }
    }
    ctx->pc = 0x349738u;
    // 0x349738: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x349738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x34973c: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x34973cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x349740: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x349740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
    // 0x349744: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x349744u;
    {
        const bool branch_taken_0x349744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x349748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349744u;
        // 0x349748: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349744) {
            ctx->pc = 0x349760u;
            goto label_349760;
        }
    }
    ctx->pc = 0x34974Cu;
    // 0x34974c: 0x0  nop
    ctx->pc = 0x34974cu;
    // NOP
label_349750:
    // 0x349750: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x349750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x349754: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x349754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
    // 0x349758: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x349758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x34975c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x34975cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_349760:
    // 0x349760: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x349760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x349764: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x349764u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x349768: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x349768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x34976c: 0x3c026c05  lui         $v0, 0x6C05
    ctx->pc = 0x34976cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27653 << 16));
    // 0x349770: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x349770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x349774: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x349774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x349778: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x349778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x34977c: 0x70642389  pcpyld      $a0, $v1, $a0
    ctx->pc = 0x34977cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x349780: 0x7e240000  sq          $a0, 0x0($s1)
    ctx->pc = 0x349780u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 4));
    // 0x349784: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x349784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x349788: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x349788u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x34978c: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x34978cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x349790: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x349790u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x349794: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x349794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x349798: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x349798u;
    {
        const bool branch_taken_0x349798 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34979Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349798u;
        // 0x34979c: 0x26340010  addiu       $s4, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349798) {
            ctx->pc = 0x349834u;
            goto label_349834;
        }
    }
    ctx->pc = 0x3497A0u;
    // 0x3497a0: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x3497a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x3497a4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x3497a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x3497a8: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x3497a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x3497ac: 0x8c850414  lw          $a1, 0x414($a0)
    ctx->pc = 0x3497acu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x400414u));
    // 0x3497b0: 0x2463cb00  addiu       $v1, $v1, -0x3500
    ctx->pc = 0x3497b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953728));
    // 0x3497b4: 0x2442cc90  addiu       $v0, $v0, -0x3370
    ctx->pc = 0x3497b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954128));
    // 0x3497b8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3497b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3497bc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3497bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3497c0: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x3497c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x3497c4: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x3497c4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x3497c8: 0xae650004  sw          $a1, 0x4($s3)
    ctx->pc = 0x3497c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 5));
    // 0x3497cc: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x3497ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x3497d0: 0x26100480  addiu       $s0, $s0, 0x480
    ctx->pc = 0x3497d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1152));
    // 0x3497d4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3497d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x3497d8: 0xc0ce5b2  jal         func_3396C8
    ctx->pc = 0x3497D8u;
    SET_GPR_U32(ctx, 31, 0x3497E0u);
    ctx->pc = 0x3497DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3497D8u;
    // 0x3497dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3396C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3396C8u, 0x3497D8u, 0x3497E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3497E0u;
label_3497e0:
    // 0x3497e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3497e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3497e4: 0xc0ce5a2  jal         func_339688
    ctx->pc = 0x3497E4u;
    SET_GPR_U32(ctx, 31, 0x3497ECu);
    ctx->pc = 0x3497E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3497E4u;
    // 0x3497e8: 0x2625000c  addiu       $a1, $s1, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339688u, 0x3497E4u, 0x3497ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3497ECu;
label_3497ec:
    // 0x3497ec: 0x4a006838  vcallms     0xD00
    ctx->pc = 0x3497ecu;
    {     ctx->vu0_tpc = 0xD00;     runtime->executeVU0Microprogram(rdram, ctx, 0xD00); }
    // 0x3497f0: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x3497f0u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x3497f4: 0xda180100  lqc2        $vf24, 0x100($s0)
    ctx->pc = 0x3497f4u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x3497f8: 0xda190110  lqc2        $vf25, 0x110($s0)
    ctx->pc = 0x3497f8u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x3497fc: 0xda1a0120  lqc2        $vf26, 0x120($s0)
    ctx->pc = 0x3497fcu;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x349800: 0xda1b0130  lqc2        $vf27, 0x130($s0)
    ctx->pc = 0x349800u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x349804: 0x4a006438  vcallms     0xC80
    ctx->pc = 0x349804u;
    {     ctx->vu0_tpc = 0xC80;     runtime->executeVU0Microprogram(rdram, ctx, 0xC80); }
    // 0x349808: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x349808u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x34980c: 0xfa3c0010  sqc2        $vf28, 0x10($s1)
    ctx->pc = 0x34980cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x349810: 0xfa3d0020  sqc2        $vf29, 0x20($s1)
    ctx->pc = 0x349810u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x349814: 0xfa3e0030  sqc2        $vf30, 0x30($s1)
    ctx->pc = 0x349814u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x349818: 0xfa3f0040  sqc2        $vf31, 0x40($s1)
    ctx->pc = 0x349818u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x34981c: 0x4a006a38  vcallms     0xD40
    ctx->pc = 0x34981cu;
    {     ctx->vu0_tpc = 0xD40;     runtime->executeVU0Microprogram(rdram, ctx, 0xD40); }
    // 0x349820: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x349820u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x349824: 0x26310050  addiu       $s1, $s1, 0x50
    ctx->pc = 0x349824u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x349828: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x349828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x34982c: 0xac510414  sw          $s1, 0x414($v0)
    ctx->pc = 0x34982cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x400414u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x400414u, _value); } while (0);
    // 0x349830: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x349830u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_349834:
    // 0x349834: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x349834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x349838: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x349838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x34983c: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x34983cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x349840: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x349840u;
    {
        const bool branch_taken_0x349840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x349840) {
            ctx->pc = 0x349844u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x349840u;
            // 0x349844: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x349860u;
            goto label_349860;
        }
    }
    ctx->pc = 0x349848u;
    // 0x349848: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x349848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x34984c: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x34984cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x349850: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x349850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
    // 0x349854: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x349854u;
    {
        const bool branch_taken_0x349854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x349858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349854u;
        // 0x349858: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349854) {
            ctx->pc = 0x349870u;
            goto label_349870;
        }
    }
    ctx->pc = 0x34985Cu;
    // 0x34985c: 0x0  nop
    ctx->pc = 0x34985cu;
    // NOP
label_349860:
    // 0x349860: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x349860u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x349864: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x349864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
    // 0x349868: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x349868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x34986c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x34986cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_349870:
    // 0x349870: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x349870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x349874: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x349874u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x349878: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x349878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x34987c: 0x3c026c05  lui         $v0, 0x6C05
    ctx->pc = 0x34987cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27653 << 16));
    // 0x349880: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x349880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x349884: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x349884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x349888: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x349888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x34988c: 0x70642389  pcpyld      $a0, $v1, $a0
    ctx->pc = 0x34988cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x349890: 0x7e840000  sq          $a0, 0x0($s4)
    ctx->pc = 0x349890u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 4));
    // 0x349894: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x349894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x349898: 0x26a20d00  addiu       $v0, $s5, 0xD00
    ctx->pc = 0x349898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 3328));
    // 0x34989c: 0x245000c8  addiu       $s0, $v0, 0xC8
    ctx->pc = 0x34989cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
    // 0x3498a0: 0x24840005  addiu       $a0, $a0, 0x5
    ctx->pc = 0x3498a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5));
    // 0x3498a4: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x3498a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x3498a8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3498a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3498ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3498ACu;
    {
        const bool branch_taken_0x3498ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3498B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3498ACu;
        // 0x3498b0: 0x26910010  addiu       $s1, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3498ac) {
            ctx->pc = 0x3498C0u;
            goto label_3498c0;
        }
    }
    ctx->pc = 0x3498B4u;
    // 0x3498b4: 0xc0cfd96  jal         func_33F658
    ctx->pc = 0x3498B4u;
    SET_GPR_U32(ctx, 31, 0x3498BCu);
    ctx->pc = 0x3498B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3498B4u;
    // 0x3498b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F658u, 0x3498B4u, 0x3498BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3498BCu;
label_3498bc:
    // 0x3498bc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3498bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_3498c0:
    // 0x3498c0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x3498c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3498c4: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x3498c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x3498c8: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x3498c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3498cc: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3498CCu;
    {
        const bool branch_taken_0x3498cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3498cc) {
            ctx->pc = 0x3498D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3498CCu;
            // 0x3498d0: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3498E8u;
            goto label_3498e8;
        }
    }
    ctx->pc = 0x3498D4u;
    // 0x3498d4: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x3498d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x3498d8: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x3498d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x3498dc: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x3498dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x3498e0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3498E0u;
    {
        const bool branch_taken_0x3498e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3498E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3498E0u;
        // 0x3498e4: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3498e0) {
            ctx->pc = 0x3498F8u;
            goto label_3498f8;
        }
    }
    ctx->pc = 0x3498E8u;
label_3498e8:
    // 0x3498e8: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x3498e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x3498ec: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x3498ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x3498f0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3498f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3498f4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x3498f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_3498f8:
    // 0x3498f8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3498f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3498fc: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x3498fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x349900: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x349900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x349904: 0x3c026c03  lui         $v0, 0x6C03
    ctx->pc = 0x349904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27651 << 16));
    // 0x349908: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x349908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x34990c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x34990cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x349910: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x349910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x349914: 0x70642389  pcpyld      $a0, $v1, $a0
    ctx->pc = 0x349914u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x349918: 0x7e240000  sq          $a0, 0x0($s1)
    ctx->pc = 0x349918u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 4));
    // 0x34991c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x34991cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x349920: 0x26330010  addiu       $s3, $s1, 0x10
    ctx->pc = 0x349920u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x349924: 0x32c30002  andi        $v1, $s6, 0x2
    ctx->pc = 0x349924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)2);
    // 0x349928: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x349928u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34992c: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x34992cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x349930: 0x10600046  beqz        $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x349930u;
    {
        const bool branch_taken_0x349930 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x349934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349930u;
        // 0x349934: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349930) {
            ctx->pc = 0x349A4Cu;
            goto label_349a4c;
        }
    }
    ctx->pc = 0x349938u;
    // 0x349938: 0x26a30d00  addiu       $v1, $s5, 0xD00
    ctx->pc = 0x349938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 3328));
    // 0x34993c: 0x24700090  addiu       $s0, $v1, 0x90
    ctx->pc = 0x34993cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x349940: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x349940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x349944: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x349944u;
    {
        const bool branch_taken_0x349944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x349948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349944u;
        // 0x349948: 0x24710068  addiu       $s1, $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349944) {
            ctx->pc = 0x349958u;
            goto label_349958;
        }
    }
    ctx->pc = 0x34994Cu;
    // 0x34994c: 0xc0c8ae2  jal         func_322B88
    ctx->pc = 0x34994Cu;
    SET_GPR_U32(ctx, 31, 0x349954u);
    ctx->pc = 0x349950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34994Cu;
    // 0x349950: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322B88u, 0x34994Cu, 0x349954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349954u;
label_349954:
    // 0x349954: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x349954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_349958:
    // 0x349958: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x349958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x34995c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34995cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x349960: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x349960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x349964: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x349964u;
    {
        const bool branch_taken_0x349964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x349964) {
            ctx->pc = 0x349968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x349964u;
            // 0x349968: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x349980u;
            goto label_349980;
        }
    }
    ctx->pc = 0x34996Cu;
    // 0x34996c: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x34996cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x349970: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x349970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x349974: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x349974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
    // 0x349978: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x349978u;
    {
        const bool branch_taken_0x349978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34997Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349978u;
        // 0x34997c: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349978) {
            ctx->pc = 0x349990u;
            goto label_349990;
        }
    }
    ctx->pc = 0x349980u;
label_349980:
    // 0x349980: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x349980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x349984: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x349984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
    // 0x349988: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x349988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x34998c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x34998cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_349990:
    // 0x349990: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x349990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x349994: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x349994u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x349998: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x349998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x34999c: 0x3c026c05  lui         $v0, 0x6C05
    ctx->pc = 0x34999cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27653 << 16));
    // 0x3499a0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3499a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x3499a4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3499a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3499a8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3499a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3499ac: 0x70642389  pcpyld      $a0, $v1, $a0
    ctx->pc = 0x3499acu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x3499b0: 0x7e640000  sq          $a0, 0x0($s3)
    ctx->pc = 0x3499b0u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 4));
    // 0x3499b4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3499b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3499b8: 0x26300030  addiu       $s0, $s1, 0x30
    ctx->pc = 0x3499b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x3499bc: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x3499bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x3499c0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3499c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x3499c4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3499c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3499c8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3499C8u;
    {
        const bool branch_taken_0x3499c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3499CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3499C8u;
        // 0x3499cc: 0x26710010  addiu       $s1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3499c8) {
            ctx->pc = 0x3499DCu;
            goto label_3499dc;
        }
    }
    ctx->pc = 0x3499D0u;
    // 0x3499d0: 0xc0c8b02  jal         func_322C08
    ctx->pc = 0x3499D0u;
    SET_GPR_U32(ctx, 31, 0x3499D8u);
    ctx->pc = 0x3499D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3499D0u;
    // 0x3499d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322C08u, 0x3499D0u, 0x3499D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3499D8u;
label_3499d8:
    // 0x3499d8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3499d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_3499dc:
    // 0x3499dc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3499dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3499e0: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x3499e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x3499e4: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x3499e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3499e8: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3499E8u;
    {
        const bool branch_taken_0x3499e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3499e8) {
            ctx->pc = 0x3499ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3499E8u;
            // 0x3499ec: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x349A08u;
            goto label_349a08;
        }
    }
    ctx->pc = 0x3499F0u;
    // 0x3499f0: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x3499f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x3499f4: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x3499f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x3499f8: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x3499f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
    // 0x3499fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3499FCu;
    {
        const bool branch_taken_0x3499fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x349A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3499FCu;
        // 0x349a00: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3499fc) {
            ctx->pc = 0x349A18u;
            goto label_349a18;
        }
    }
    ctx->pc = 0x349A04u;
    // 0x349a04: 0x0  nop
    ctx->pc = 0x349a04u;
    // NOP
label_349a08:
    // 0x349a08: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x349a08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x349a0c: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x349a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
    // 0x349a10: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x349a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x349a14: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x349a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_349a18:
    // 0x349a18: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x349a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x349a1c: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x349a1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x349a20: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x349a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x349a24: 0x3c036c05  lui         $v1, 0x6C05
    ctx->pc = 0x349a24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27653 << 16));
    // 0x349a28: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x349a28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x349a2c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x349a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x349a30: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x349a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x349a34: 0x70442389  pcpyld      $a0, $v0, $a0
    ctx->pc = 0x349a34u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x349a38: 0x7e240000  sq          $a0, 0x0($s1)
    ctx->pc = 0x349a38u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 4));
    // 0x349a3c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x349a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x349a40: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x349a40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x349a44: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x349a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x349a48: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x349a48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_349a4c:
    // 0x349a4c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x349a4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349a50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x349a50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x349a54: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x349a54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x349a58: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x349a58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x349a5c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x349a5cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x349a60: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x349a60u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x349a64: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x349a64u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x349a68: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x349a68u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x349a6c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x349a6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349a70: 0x3e00008  jr          $ra
    ctx->pc = 0x349A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349A70u;
        // 0x349a74: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349A70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349A78u;
}
