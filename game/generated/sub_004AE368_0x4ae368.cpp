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

// Function: sub_004AE368
// Address: 0x4ae368 - 0x4ae530
void sub_004AE368_0x4ae368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AE368_0x4ae368");
#endif

    switch (ctx->pc) {
        case 0x4ae45cu: goto label_4ae45c;
        case 0x4ae470u: goto label_4ae470;
        case 0x4ae490u: goto label_4ae490;
        case 0x4ae4c0u: goto label_4ae4c0;
        case 0x4ae4f8u: goto label_4ae4f8;
        default: break;
    }

    ctx->pc = 0x4ae368u;

    // 0x4ae368: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4ae368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4ae36c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ae36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ae370: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4ae370u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4ae374: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4ae374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4ae378: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4ae378u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x4ae37c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4ae37cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4ae380: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4ae380u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4ae384: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4ae384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4ae388: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4ae388u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4ae38c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4ae38cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4ae390: 0x3c140073  lui         $s4, 0x73
    ctx->pc = 0x4ae390u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)115 << 16));
    // 0x4ae394: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4ae394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4ae398: 0x3c15007f  lui         $s5, 0x7F
    ctx->pc = 0x4ae398u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)127 << 16));
    // 0x4ae39c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4ae39cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4ae3a0: 0x3c16007f  lui         $s6, 0x7F
    ctx->pc = 0x4ae3a0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)127 << 16));
    // 0x4ae3a4: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4ae3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4ae3a8: 0x3c17007f  lui         $s7, 0x7F
    ctx->pc = 0x4ae3a8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)127 << 16));
    // 0x4ae3ac: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4ae3acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4ae3b0: 0x2694d680  addiu       $s4, $s4, -0x2980
    ctx->pc = 0x4ae3b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294956672));
    // 0x4ae3b4: 0x26730cec  addiu       $s3, $s3, 0xCEC
    ctx->pc = 0x4ae3b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3308));
    // 0x4ae3b8: 0x26520cf0  addiu       $s2, $s2, 0xCF0
    ctx->pc = 0x4ae3b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3312));
    // 0x4ae3bc: 0x8e83249c  lw          $v1, 0x249C($s4)
    ctx->pc = 0x4ae3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x72FB1Cu));
    // 0x4ae3c0: 0x26f70cf4  addiu       $s7, $s7, 0xCF4
    ctx->pc = 0x4ae3c0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 3316));
    // 0x4ae3c4: 0x8e6a0000  lw          $t2, 0x0($s3)
    ctx->pc = 0x4ae3c4u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x7F0CECu));
    // 0x4ae3c8: 0x26b50d00  addiu       $s5, $s5, 0xD00
    ctx->pc = 0x4ae3c8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 3328));
    // 0x4ae3cc: 0x8e4b0000  lw          $t3, 0x0($s2)
    ctx->pc = 0x4ae3ccu;
    SET_GPR_S32(ctx, 11, (int32_t)FAST_READ32(0x7F0CF0u));
    // 0x4ae3d0: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x4ae3d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x4ae3d4: 0x86842496  lh          $a0, 0x2496($s4)
    ctx->pc = 0x4ae3d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 9366)));
    // 0x4ae3d8: 0x26d60d04  addiu       $s6, $s6, 0xD04
    ctx->pc = 0x4ae3d8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 3332));
    // 0x4ae3dc: 0x8e822498  lw          $v0, 0x2498($s4)
    ctx->pc = 0x4ae3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 9368)));
    // 0x4ae3e0: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4ae3e0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4ae3e4: 0x8ee80000  lw          $t0, 0x0($s7)
    ctx->pc = 0x4ae3e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4ae3e8: 0x912025  or          $a0, $a0, $s1
    ctx->pc = 0x4ae3e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
    // 0x4ae3ec: 0x8ea90000  lw          $t1, 0x0($s5)
    ctx->pc = 0x4ae3ecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4ae3f0: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4ae3f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4ae3f4: 0x8ec70000  lw          $a3, 0x0($s6)
    ctx->pc = 0x4ae3f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4ae3f8: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4ae3f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4ae3fc: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x4ae3fcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x4ae400: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x4ae400u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x4ae404: 0x1445024  and         $t2, $t2, $a0
    ctx->pc = 0x4ae404u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 4));
    // 0x4ae408: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x4ae408u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x4ae40c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ae40cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ae410: 0x3164ffff  andi        $a0, $t3, 0xFFFF
    ctx->pc = 0x4ae410u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x4ae414: 0x3143ffff  andi        $v1, $t2, 0xFFFF
    ctx->pc = 0x4ae414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x4ae418: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4ae418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4ae41c: 0x1314824  and         $t1, $t1, $s1
    ctx->pc = 0x4ae41cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 17));
    // 0x4ae420: 0xf13824  and         $a3, $a3, $s1
    ctx->pc = 0x4ae420u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 17));
    // 0x4ae424: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4ae424u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4ae428: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x4ae428u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x4ae42c: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x4ae42cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x4ae430: 0xe43825  or          $a3, $a3, $a0
    ctx->pc = 0x4ae430u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x4ae434: 0xaee80000  sw          $t0, 0x0($s7)
    ctx->pc = 0x4ae434u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 8));
    // 0x4ae438: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x4ae438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae43c: 0xaea90000  sw          $t1, 0x0($s5)
    ctx->pc = 0x4ae43cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 9));
    // 0x4ae440: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x4ae440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae444: 0xaec70000  sw          $a3, 0x0($s6)
    ctx->pc = 0x4ae444u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 7));
    // 0x4ae448: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4ae448u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae44c: 0xae6a0000  sw          $t2, 0x0($s3)
    ctx->pc = 0x4ae44cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 10));
    // 0x4ae450: 0x26100cf8  addiu       $s0, $s0, 0xCF8
    ctx->pc = 0x4ae450u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3320));
    // 0x4ae454: 0xc12a21e  jal         func_4A8878
    ctx->pc = 0x4AE454u;
    SET_GPR_U32(ctx, 31, 0x4AE45Cu);
    ctx->pc = 0x4AE458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE454u;
    // 0x4ae458: 0xae4b0000  sw          $t3, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8878u, 0x4AE454u, 0x4AE45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE45Cu;
label_4ae45c:
    // 0x4ae45c: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4ae45cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4ae460: 0x22400  sll         $a0, $v0, 16
    ctx->pc = 0x4ae460u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ae464: 0xa68224a2  sh          $v0, 0x24A2($s4)
    ctx->pc = 0x4ae464u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 9378), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ae468: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4AE468u;
    SET_GPR_U32(ctx, 31, 0x4AE470u);
    ctx->pc = 0x4AE46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE468u;
    // 0x4ae46c: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4AE468u, 0x4AE470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE470u;
label_4ae470:
    // 0x4ae470: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4ae470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ae474: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x4ae474u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4ae478: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4ae478u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4ae47c: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x4ae47cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x4ae480: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4ae480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae484: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4ae484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x4ae488: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4AE488u;
    SET_GPR_U32(ctx, 31, 0x4AE490u);
    ctx->pc = 0x4AE48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE488u;
    // 0x4ae48c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4AE488u, 0x4AE490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE490u;
label_4ae490:
    // 0x4ae490: 0x86a60000  lh          $a2, 0x0($s5)
    ctx->pc = 0x4ae490u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4ae494: 0x86c50000  lh          $a1, 0x0($s6)
    ctx->pc = 0x4ae494u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4ae498: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ae498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae49c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4ae49cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ae4a0: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x4ae4a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4ae4a4: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x4ae4a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4ae4a8: 0x453018  mult        $a2, $v0, $a1
    ctx->pc = 0x4ae4a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x4ae4ac: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x4ae4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x4ae4b0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4ae4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4ae4b4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4ae4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4ae4b8: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4AE4B8u;
    SET_GPR_U32(ctx, 31, 0x4AE4C0u);
    ctx->pc = 0x4AE4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE4B8u;
    // 0x4ae4bc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4AE4B8u, 0x4AE4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE4C0u;
label_4ae4c0:
    // 0x4ae4c0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4ae4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4ae4c4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4ae4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4ae4c8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4ae4c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae4cc: 0x96e50000  lhu         $a1, 0x0($s7)
    ctx->pc = 0x4ae4ccu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4ae4d0: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x4ae4d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x4ae4d4: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x4ae4d4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ae4d8: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4ae4d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4ae4dc: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4ae4dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x4ae4e0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4ae4e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4ae4e4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x4ae4e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae4e8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4ae4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4ae4ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4ae4ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae4f0: 0xc12a21e  jal         func_4A8878
    ctx->pc = 0x4AE4F0u;
    SET_GPR_U32(ctx, 31, 0x4AE4F8u);
    ctx->pc = 0x4AE4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE4F0u;
    // 0x4ae4f4: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8878u, 0x4AE4F0u, 0x4AE4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE4F8u;
label_4ae4f8:
    // 0x4ae4f8: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4ae4f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4ae4fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ae4fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ae500: 0xa68224a0  sh          $v0, 0x24A0($s4)
    ctx->pc = 0x4ae500u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 9376), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ae504: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4ae504u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ae508: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4ae508u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ae50c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4ae50cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4ae510: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4ae510u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ae514: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4ae514u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4ae518: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4ae518u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4ae51c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4ae51cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4ae520: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4ae520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4ae524: 0x3e00008  jr          $ra
    ctx->pc = 0x4AE524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AE528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE524u;
        // 0x4ae528: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AE524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AE52Cu;
    // 0x4ae52c: 0x0  nop
    ctx->pc = 0x4ae52cu;
    // NOP
    ctx->pc = 0x4ae530u;
}
