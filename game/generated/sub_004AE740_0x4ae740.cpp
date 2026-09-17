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

// Function: sub_004AE740
// Address: 0x4ae740 - 0x4ae8a0
void sub_004AE740_0x4ae740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AE740_0x4ae740");
#endif

    switch (ctx->pc) {
        case 0x4ae774u: goto label_4ae774;
        case 0x4ae7e4u: goto label_4ae7e4;
        case 0x4ae7ecu: goto label_4ae7ec;
        case 0x4ae7f4u: goto label_4ae7f4;
        default: break;
    }

    ctx->pc = 0x4ae740u;

    // 0x4ae740: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4ae740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4ae744: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4ae744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4ae748: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4ae748u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae74c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ae74cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ae750: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4ae750u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4ae754: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4ae754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4ae758: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4ae758u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4ae75c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4ae75cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4ae760: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4ae760u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4ae764: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4ae764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4ae768: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x4ae768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x4ae76c: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4AE76Cu;
    SET_GPR_U32(ctx, 31, 0x4AE774u);
    ctx->pc = 0x4AE770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE76Cu;
    // 0x4ae770: 0x26100cf8  addiu       $s0, $s0, 0xCF8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4AE76Cu, 0x4AE774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE774u;
label_4ae774:
    // 0x4ae774: 0x26690010  addiu       $t1, $s3, 0x10
    ctx->pc = 0x4ae774u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x4ae778: 0x26680014  addiu       $t0, $s3, 0x14
    ctx->pc = 0x4ae778u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x4ae77c: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x4ae77cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4ae780: 0x26520cfc  addiu       $s2, $s2, 0xCFC
    ctx->pc = 0x4ae780u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3324));
    // 0x4ae784: 0x26670018  addiu       $a3, $s3, 0x18
    ctx->pc = 0x4ae784u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x4ae788: 0x26310d00  addiu       $s1, $s1, 0xD00
    ctx->pc = 0x4ae788u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3328));
    // 0x4ae78c: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x4ae78cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x4ae790: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4ae790u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae794: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ae794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae798: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x4ae798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4ae79c: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x4ae79cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x4ae7a0: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4ae7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4ae7a4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4ae7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4ae7a8: 0x8e620124  lw          $v0, 0x124($s3)
    ctx->pc = 0x4ae7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 292)));
    // 0x4ae7ac: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4ae7acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4ae7b0: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x4ae7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x4ae7b4: 0x8e620128  lw          $v0, 0x128($s3)
    ctx->pc = 0x4ae7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 296)));
    // 0x4ae7b8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4ae7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4ae7bc: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x4ae7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x4ae7c0: 0x8e62012c  lw          $v0, 0x12C($s3)
    ctx->pc = 0x4ae7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 300)));
    // 0x4ae7c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4ae7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4ae7c8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4ae7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4ae7cc: 0xad260000  sw          $a2, 0x0($t1)
    ctx->pc = 0x4ae7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 6));
    // 0x4ae7d0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4ae7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4ae7d4: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x4ae7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x4ae7d8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4ae7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ae7dc: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4AE7DCu;
    SET_GPR_U32(ctx, 31, 0x4AE7E4u);
    ctx->pc = 0x4AE7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE7DCu;
    // 0x4ae7e0: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4AE7DCu, 0x4AE7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE7E4u;
label_4ae7e4:
    // 0x4ae7e4: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4AE7E4u;
    SET_GPR_U32(ctx, 31, 0x4AE7ECu);
    ctx->pc = 0x4AE7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE7E4u;
    // 0x4ae7e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4AE7E4u, 0x4AE7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE7ECu;
label_4ae7ec:
    // 0x4ae7ec: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4AE7ECu;
    SET_GPR_U32(ctx, 31, 0x4AE7F4u);
    ctx->pc = 0x4AE7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE7ECu;
    // 0x4ae7f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4AE7ECu, 0x4AE7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE7F4u;
label_4ae7f4:
    // 0x4ae7f4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4ae7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ae7f8: 0x86860052  lh          $a2, 0x52($s4)
    ctx->pc = 0x4ae7f8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 82)));
    // 0x4ae7fc: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4ae7fcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4ae800: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4ae800u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ae804: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ae804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ae808: 0x86450000  lh          $a1, 0x0($s2)
    ctx->pc = 0x4ae808u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4ae80c: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x4ae80cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4ae810: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4ae810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4ae814: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4ae814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4ae818: 0x86270000  lh          $a3, 0x0($s1)
    ctx->pc = 0x4ae818u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ae81c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ae81cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ae820: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4ae820u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4ae824: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4ae824u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4ae828: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x4ae828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4ae82c: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x4ae82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x4ae830: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x4ae830u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ae834: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x4ae834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x4ae838: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4ae838u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ae83c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ae83cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ae840: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4ae840u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4ae844: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x4ae844u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4ae848: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ae848u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ae84c: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x4ae84cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x4ae850: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x4ae850u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x4ae854: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x4ae854u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x4ae858: 0x8e820058  lw          $v0, 0x58($s4)
    ctx->pc = 0x4ae858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
    // 0x4ae85c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4ae85cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ae860: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x4ae860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x4ae864: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ae864u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ae868: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x4ae868u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4ae86c: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x4ae86cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x4ae870: 0xc73024  and         $a2, $a2, $a3
    ctx->pc = 0x4ae870u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x4ae874: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x4ae874u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x4ae878: 0xa6630130  sh          $v1, 0x130($s3)
    ctx->pc = 0x4ae878u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 304), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ae87c: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4ae87cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4ae880: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4ae880u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ae884: 0xa6620132  sh          $v0, 0x132($s3)
    ctx->pc = 0x4ae884u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 306), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ae888: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x4ae888u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ae88c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4ae88cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ae890: 0xa6630134  sh          $v1, 0x134($s3)
    ctx->pc = 0x4ae890u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 308), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ae894: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4ae894u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4ae898: 0x3e00008  jr          $ra
    ctx->pc = 0x4AE898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AE89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE898u;
        // 0x4ae89c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AE898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AE8A0u;
}
