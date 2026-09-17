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

// Function: entry_1297f8
// Address: 0x1297f8 - 0x12a710
void entry_1297f8_0x12a710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1297f8_0x12a710");
#endif

    switch (ctx->pc) {
        case 0x129840u: goto label_129840;
        case 0x1298a8u: goto label_1298a8;
        case 0x1298f0u: goto label_1298f0;
        case 0x129980u: goto label_129980;
        case 0x1299d0u: goto label_1299d0;
        case 0x1299f0u: goto label_1299f0;
        case 0x129b28u: goto label_129b28;
        case 0x129b74u: goto label_129b74;
        case 0x129c28u: goto label_129c28;
        case 0x129c48u: goto label_129c48;
        case 0x129c78u: goto label_129c78;
        case 0x129c8cu: goto label_129c8c;
        case 0x129ca4u: goto label_129ca4;
        case 0x129cb4u: goto label_129cb4;
        case 0x129cc4u: goto label_129cc4;
        case 0x129cfcu: goto label_129cfc;
        case 0x129d1cu: goto label_129d1c;
        case 0x129d58u: goto label_129d58;
        case 0x129d74u: goto label_129d74;
        case 0x129dc8u: goto label_129dc8;
        case 0x129e58u: goto label_129e58;
        case 0x129e90u: goto label_129e90;
        case 0x129eacu: goto label_129eac;
        case 0x129ef4u: goto label_129ef4;
        case 0x129f08u: goto label_129f08;
        case 0x129f20u: goto label_129f20;
        case 0x129f30u: goto label_129f30;
        case 0x129f40u: goto label_129f40;
        case 0x129f48u: goto label_129f48;
        case 0x129f4cu: goto label_129f4c;
        case 0x129f68u: goto label_129f68;
        case 0x129f74u: goto label_129f74;
        case 0x129f84u: goto label_129f84;
        case 0x129fa8u: goto label_129fa8;
        case 0x129fb8u: goto label_129fb8;
        case 0x129fc4u: goto label_129fc4;
        case 0x129fd4u: goto label_129fd4;
        case 0x129fe8u: goto label_129fe8;
        case 0x12a0c0u: goto label_12a0c0;
        case 0x12a0d0u: goto label_12a0d0;
        case 0x12a0e4u: goto label_12a0e4;
        case 0x12a100u: goto label_12a100;
        case 0x12a118u: goto label_12a118;
        case 0x12a18cu: goto label_12a18c;
        case 0x12a1bcu: goto label_12a1bc;
        case 0x12a1d0u: goto label_12a1d0;
        case 0x12a1f0u: goto label_12a1f0;
        case 0x12a210u: goto label_12a210;
        case 0x12a224u: goto label_12a224;
        case 0x12a26cu: goto label_12a26c;
        case 0x12a27cu: goto label_12a27c;
        case 0x12a28cu: goto label_12a28c;
        case 0x12a328u: goto label_12a328;
        case 0x12a344u: goto label_12a344;
        case 0x12a350u: goto label_12a350;
        case 0x12a358u: goto label_12a358;
        case 0x12a374u: goto label_12a374;
        case 0x12a384u: goto label_12a384;
        case 0x12a394u: goto label_12a394;
        case 0x12a3a4u: goto label_12a3a4;
        case 0x12a3d4u: goto label_12a3d4;
        case 0x12a3dcu: goto label_12a3dc;
        case 0x12a3ecu: goto label_12a3ec;
        case 0x12a420u: goto label_12a420;
        case 0x12a43cu: goto label_12a43c;
        case 0x12a464u: goto label_12a464;
        case 0x12a478u: goto label_12a478;
        case 0x12a484u: goto label_12a484;
        case 0x12a490u: goto label_12a490;
        case 0x12a49cu: goto label_12a49c;
        case 0x12a4acu: goto label_12a4ac;
        case 0x12a4ccu: goto label_12a4cc;
        case 0x12a4e0u: goto label_12a4e0;
        case 0x12a4f0u: goto label_12a4f0;
        case 0x12a598u: goto label_12a598;
        case 0x12a5acu: goto label_12a5ac;
        case 0x12a5bcu: goto label_12a5bc;
        case 0x12a5d4u: goto label_12a5d4;
        case 0x12a5ecu: goto label_12a5ec;
        case 0x12a604u: goto label_12a604;
        case 0x12a620u: goto label_12a620;
        case 0x12a634u: goto label_12a634;
        case 0x12a64cu: goto label_12a64c;
        case 0x12a680u: goto label_12a680;
        case 0x12a68cu: goto label_12a68c;
        case 0x12a698u: goto label_12a698;
        case 0x12a6a4u: goto label_12a6a4;
        case 0x12a6b0u: goto label_12a6b0;
        case 0x12a6dcu: goto label_12a6dc;
        default: break;
    }

    ctx->pc = 0x1297f8u;

    // 0x1297f8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1297f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1297fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1297fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129800: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x129800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x129804: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x129804u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129808: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x129808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x12980c: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x12980cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x129810: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x129810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x129814: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x129814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
    // 0x129818: 0xffb70088  sd          $s7, 0x88($sp)
    ctx->pc = 0x129818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 23));
    // 0x12981c: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x12981cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
    // 0x129820: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x129820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x129824: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x129824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x129828: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x129828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x12982c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x12982cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129830: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x129830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x129834: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x129834u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129838: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x129838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x12983c: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x12983cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_129840:
    // 0x129840: 0x82c30000  lb          $v1, 0x0($s6)
    ctx->pc = 0x129840u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x129844: 0x2c62002e  sltiu       $v0, $v1, 0x2E
    ctx->pc = 0x129844u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)46) ? 1 : 0);
    // 0x129848: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x129848u;
    {
        const bool branch_taken_0x129848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12984Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129848u;
        // 0x12984c: 0x92c40000  lbu         $a0, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129848) {
            ctx->pc = 0x129890u;
            goto label_129890;
        }
    }
    ctx->pc = 0x129850u;
    // 0x129850: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x129850u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x129854: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x129854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x129858: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x129858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12985c: 0x8c63f600  lw          $v1, -0xA00($v1)
    ctx->pc = 0x12985cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294964736)));
    // 0x129860: 0x600008  jr          $v1
    ctx->pc = 0x129860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x129868u: goto label_129868;
            case 0x129870u: goto label_129870;
            case 0x129888u: goto label_129888;
            case 0x129890u: goto label_129890;
            case 0x129BECu: goto label_129bec;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129860u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x129868u;
label_129868:
    // 0x129868: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x129868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12986c: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x12986cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_129870:
    // 0x129870: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x129870u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x129874: 0x82c20000  lb          $v0, 0x0($s6)
    ctx->pc = 0x129874u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x129878: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x129878u;
    {
        const bool branch_taken_0x129878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12987Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129878u;
        // 0x12987c: 0x92c40000  lbu         $a0, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129878) {
            ctx->pc = 0x129890u;
            goto label_129890;
        }
    }
    ctx->pc = 0x129880u;
    // 0x129880: 0x1000038b  b           . + 4 + (0x38B << 2)
    ctx->pc = 0x129880u;
    {
        const bool branch_taken_0x129880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129880u;
        // 0x129884: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129880) {
            ctx->pc = 0x12A6B0u;
            goto label_12a6b0;
        }
    }
    ctx->pc = 0x129888u;
label_129888:
    // 0x129888: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x129888u;
    {
        const bool branch_taken_0x129888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12988Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129888u;
        // 0x12988c: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129888) {
            ctx->pc = 0x129840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129840;
        }
    }
    ctx->pc = 0x129890u;
label_129890:
    // 0x129890: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x129890u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x129894: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x129894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x129898: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x129898u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x12989c: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x12989Cu;
    {
        const bool branch_taken_0x12989c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1298A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12989Cu;
        // 0x1298a0: 0x41600  sll         $v0, $a0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12989c) {
            ctx->pc = 0x1298CCu;
            goto label_1298cc;
        }
    }
    ctx->pc = 0x1298A4u;
    // 0x1298a4: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1298a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1298a8:
    // 0x1298a8: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1298a8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1298ac: 0x82c20000  lb          $v0, 0x0($s6)
    ctx->pc = 0x1298acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1298b0: 0x0  nop
    ctx->pc = 0x1298b0u;
    // NOP
    // 0x1298b4: 0x0  nop
    ctx->pc = 0x1298b4u;
    // NOP
    // 0x1298b8: 0x0  nop
    ctx->pc = 0x1298b8u;
    // NOP
    // 0x1298bc: 0x1043fffa  beq         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1298BCu;
    {
        const bool branch_taken_0x1298bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1298C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1298BCu;
        // 0x1298c0: 0x92c40000  lbu         $a0, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1298bc) {
            ctx->pc = 0x1298A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1298a8;
        }
    }
    ctx->pc = 0x1298C4u;
    // 0x1298c4: 0x1040037a  beqz        $v0, . + 4 + (0x37A << 2)
    ctx->pc = 0x1298C4u;
    {
        const bool branch_taken_0x1298c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1298C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1298C4u;
        // 0x1298c8: 0x41600  sll         $v0, $a0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1298c4) {
            ctx->pc = 0x12A6B0u;
            goto label_12a6b0;
        }
    }
    ctx->pc = 0x1298CCu;
label_1298cc:
    // 0x1298cc: 0xafb60018  sw          $s6, 0x18($sp)
    ctx->pc = 0x1298ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 22));
    // 0x1298d0: 0x22603  sra         $a0, $v0, 24
    ctx->pc = 0x1298d0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
    // 0x1298d4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1298d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1298d8: 0x28820030  slti        $v0, $a0, 0x30
    ctx->pc = 0x1298d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x1298dc: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x1298dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x1298e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1298e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1298e4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1298E4u;
    {
        const bool branch_taken_0x1298e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1298E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1298E4u;
        // 0x1298e8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1298e4) {
            ctx->pc = 0x129944u;
            goto label_129944;
        }
    }
    ctx->pc = 0x1298ECu;
    // 0x1298ec: 0x0  nop
    ctx->pc = 0x1298ecu;
    // NOP
label_1298f0:
    // 0x1298f0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1298F0u;
    {
        const bool branch_taken_0x1298f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1298F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1298F0u;
        // 0x1298f4: 0x2a420010  slti        $v0, $s2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1298f0) {
            ctx->pc = 0x129918u;
            goto label_129918;
        }
    }
    ctx->pc = 0x1298F8u;
    // 0x1298f8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1298f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1298fc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1298fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x129900: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x129900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x129904: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x129904u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x129908: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x129908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x12990c: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x12990cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x129910: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x129910u;
    {
        const bool branch_taken_0x129910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129910u;
        // 0x129914: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129910) {
            ctx->pc = 0x129934u;
            goto label_129934;
        }
    }
    ctx->pc = 0x129918u;
label_129918:
    // 0x129918: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x129918u;
    {
        const bool branch_taken_0x129918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x129918) {
            ctx->pc = 0x12991Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129918u;
            // 0x12991c: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129938u;
            goto label_129938;
        }
    }
    ctx->pc = 0x129920u;
    // 0x129920: 0x1110b8  dsll        $v0, $s1, 2
    ctx->pc = 0x129920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << 2);
    // 0x129924: 0x51102d  daddu       $v0, $v0, $s1
    ctx->pc = 0x129924u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 17));
    // 0x129928: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x129928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x12992c: 0x82102d  daddu       $v0, $a0, $v0
    ctx->pc = 0x12992cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
    // 0x129930: 0x6451ffd0  daddiu      $s1, $v0, -0x30
    ctx->pc = 0x129930u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967248);
label_129934:
    // 0x129934: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x129934u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_129938:
    // 0x129938: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x129938u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x12993c: 0x82c40000  lb          $a0, 0x0($s6)
    ctx->pc = 0x12993cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x129940: 0x28820030  slti        $v0, $a0, 0x30
    ctx->pc = 0x129940u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
label_129944:
    // 0x129944: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x129944u;
    {
        const bool branch_taken_0x129944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129944u;
        // 0x129948: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129944) {
            ctx->pc = 0x12995Cu;
            goto label_12995c;
        }
    }
    ctx->pc = 0x12994Cu;
    // 0x12994c: 0x2882003a  slti        $v0, $a0, 0x3A
    ctx->pc = 0x12994cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x129950: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x129950u;
    {
        const bool branch_taken_0x129950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129950u;
        // 0x129954: 0x2a420009  slti        $v0, $s2, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x129950) {
            ctx->pc = 0x1298F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1298f0;
        }
    }
    ctx->pc = 0x129958u;
    // 0x129958: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x129958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_12995c:
    // 0x12995c: 0x14820051  bne         $a0, $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x12995Cu;
    {
        const bool branch_taken_0x12995c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x129960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12995Cu;
        // 0x129960: 0x240b82d  daddu       $s7, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12995c) {
            ctx->pc = 0x129AA4u;
            goto label_129aa4;
        }
    }
    ctx->pc = 0x129964u;
    // 0x129964: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x129964u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x129968: 0x16400015  bnez        $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x129968u;
    {
        const bool branch_taken_0x129968 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x12996Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129968u;
        // 0x12996c: 0x82c40000  lb          $a0, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129968) {
            ctx->pc = 0x1299C0u;
            goto label_1299c0;
        }
    }
    ctx->pc = 0x129970u;
    // 0x129970: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x129970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x129974: 0x5482000a  bnel        $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x129974u;
    {
        const bool branch_taken_0x129974 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x129974) {
            ctx->pc = 0x129978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129974u;
            // 0x129978: 0x2482ffcf  addiu       $v0, $a0, -0x31 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1299A0u;
            goto label_1299a0;
        }
    }
    ctx->pc = 0x12997Cu;
    // 0x12997c: 0x0  nop
    ctx->pc = 0x12997cu;
    // NOP
label_129980:
    // 0x129980: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x129980u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x129984: 0x82c40000  lb          $a0, 0x0($s6)
    ctx->pc = 0x129984u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x129988: 0x0  nop
    ctx->pc = 0x129988u;
    // NOP
    // 0x12998c: 0x0  nop
    ctx->pc = 0x12998cu;
    // NOP
    // 0x129990: 0x0  nop
    ctx->pc = 0x129990u;
    // NOP
    // 0x129994: 0x1082fffa  beq         $a0, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x129994u;
    {
        const bool branch_taken_0x129994 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x129998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129994u;
        // 0x129998: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129994) {
            ctx->pc = 0x129980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129980;
        }
    }
    ctx->pc = 0x12999Cu;
    // 0x12999c: 0x2482ffcf  addiu       $v0, $a0, -0x31
    ctx->pc = 0x12999cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
label_1299a0:
    // 0x1299a0: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x1299a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x1299a4: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x1299A4u;
    {
        const bool branch_taken_0x1299a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1299A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1299A4u;
        // 0x1299a8: 0x24020065  addiu       $v0, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1299a4) {
            ctx->pc = 0x129AA8u;
            goto label_129aa8;
        }
    }
    ctx->pc = 0x1299ACu;
    // 0x1299ac: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1299acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1299b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1299b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1299b4: 0x2486ffd0  addiu       $a2, $a0, -0x30
    ctx->pc = 0x1299b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x1299b8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1299B8u;
    {
        const bool branch_taken_0x1299b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1299BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1299B8u;
        // 0x1299bc: 0xafb60018  sw          $s6, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1299b8) {
            ctx->pc = 0x1299D0u;
            goto label_1299d0;
        }
    }
    ctx->pc = 0x1299C0u;
label_1299c0:
    // 0x1299c0: 0x2486ffd0  addiu       $a2, $a0, -0x30
    ctx->pc = 0x1299c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x1299c4: 0x2cc2000a  sltiu       $v0, $a2, 0xA
    ctx->pc = 0x1299c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1299c8: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x1299C8u;
    {
        const bool branch_taken_0x1299c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1299CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1299C8u;
        // 0x1299cc: 0x24020065  addiu       $v0, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1299c8) {
            ctx->pc = 0x129AA8u;
            goto label_129aa8;
        }
    }
    ctx->pc = 0x1299D0u;
label_1299d0:
    // 0x1299d0: 0x10c0002d  beqz        $a2, . + 4 + (0x2D << 2)
    ctx->pc = 0x1299D0u;
    {
        const bool branch_taken_0x1299d0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1299D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1299D0u;
        // 0x1299d4: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1299d0) {
            ctx->pc = 0x129A88u;
            goto label_129a88;
        }
    }
    ctx->pc = 0x1299D8u;
    // 0x1299d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1299d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1299dc: 0x87102a  slt         $v0, $a0, $a3
    ctx->pc = 0x1299dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1299e0: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1299E0u;
    {
        const bool branch_taken_0x1299e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1299E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1299E0u;
        // 0x1299e4: 0x1074021  addu        $t0, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1299e0) {
            ctx->pc = 0x129A3Cu;
            goto label_129a3c;
        }
    }
    ctx->pc = 0x1299E8u;
    // 0x1299e8: 0x24e4ffff  addiu       $a0, $a3, -0x1
    ctx->pc = 0x1299e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1299ec: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1299ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1299f0:
    // 0x1299f0: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x1299f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1299f4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1299F4u;
    {
        const bool branch_taken_0x1299f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1299F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1299F4u;
        // 0x1299f8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1299f4) {
            ctx->pc = 0x129A18u;
            goto label_129a18;
        }
    }
    ctx->pc = 0x1299FCu;
    // 0x1299fc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1299fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x129a00: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x129a00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x129a04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x129a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x129a08: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x129a08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x129a0c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x129A0Cu;
    {
        const bool branch_taken_0x129a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129A0Cu;
        // 0x129a10: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129a0c) {
            ctx->pc = 0x129A30u;
            goto label_129a30;
        }
    }
    ctx->pc = 0x129A14u;
    // 0x129a14: 0x0  nop
    ctx->pc = 0x129a14u;
    // NOP
label_129a18:
    // 0x129a18: 0x2a420011  slti        $v0, $s2, 0x11
    ctx->pc = 0x129a18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x129a1c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x129A1Cu;
    {
        const bool branch_taken_0x129a1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x129a1c) {
            ctx->pc = 0x129A20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129A1Cu;
            // 0x129a20: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129A34u;
            goto label_129a34;
        }
    }
    ctx->pc = 0x129A24u;
    // 0x129a24: 0x1110b8  dsll        $v0, $s1, 2
    ctx->pc = 0x129a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << 2);
    // 0x129a28: 0x51102d  daddu       $v0, $v0, $s1
    ctx->pc = 0x129a28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 17));
    // 0x129a2c: 0x28878  dsll        $s1, $v0, 1
    ctx->pc = 0x129a2cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << 1);
label_129a30:
    // 0x129a30: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x129a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_129a34:
    // 0x129a34: 0x1480ffee  bnez        $a0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x129A34u;
    {
        const bool branch_taken_0x129a34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x129A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129A34u;
        // 0x129a38: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129a34) {
            ctx->pc = 0x1299F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1299f0;
        }
    }
    ctx->pc = 0x129A3Cu;
label_129a3c:
    // 0x129a3c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x129a3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129a40: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x129a40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x129a44: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x129A44u;
    {
        const bool branch_taken_0x129a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129A44u;
        // 0x129a48: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129a44) {
            ctx->pc = 0x129A68u;
            goto label_129a68;
        }
    }
    ctx->pc = 0x129A4Cu;
    // 0x129a4c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x129a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x129a50: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x129a50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x129a54: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x129a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x129a58: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x129a58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x129a5c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x129a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x129a60: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x129A60u;
    {
        const bool branch_taken_0x129a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129A60u;
        // 0x129a64: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129a60) {
            ctx->pc = 0x129A84u;
            goto label_129a84;
        }
    }
    ctx->pc = 0x129A68u;
label_129a68:
    // 0x129a68: 0x2a420011  slti        $v0, $s2, 0x11
    ctx->pc = 0x129a68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x129a6c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x129A6Cu;
    {
        const bool branch_taken_0x129a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129A6Cu;
        // 0x129a70: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129a6c) {
            ctx->pc = 0x129A88u;
            goto label_129a88;
        }
    }
    ctx->pc = 0x129A74u;
    // 0x129a74: 0x1110b8  dsll        $v0, $s1, 2
    ctx->pc = 0x129a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << 2);
    // 0x129a78: 0x51102d  daddu       $v0, $v0, $s1
    ctx->pc = 0x129a78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 17));
    // 0x129a7c: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x129a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x129a80: 0xc2882d  daddu       $s1, $a2, $v0
    ctx->pc = 0x129a80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 2));
label_129a84:
    // 0x129a84: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x129a84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_129a88:
    // 0x129a88: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x129a88u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x129a8c: 0x82c40000  lb          $a0, 0x0($s6)
    ctx->pc = 0x129a8cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x129a90: 0x2482ffd0  addiu       $v0, $a0, -0x30
    ctx->pc = 0x129a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x129a94: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x129a94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129a98: 0x2cc3000a  sltiu       $v1, $a2, 0xA
    ctx->pc = 0x129a98u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x129a9c: 0x1460ffcc  bnez        $v1, . + 4 + (-0x34 << 2)
    ctx->pc = 0x129A9Cu;
    {
        const bool branch_taken_0x129a9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x129a9c) {
            ctx->pc = 0x1299D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1299d0;
        }
    }
    ctx->pc = 0x129AA4u;
label_129aa4:
    // 0x129aa4: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x129aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
label_129aa8:
    // 0x129aa8: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x129AA8u;
    {
        const bool branch_taken_0x129aa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x129AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129AA8u;
        // 0x129aac: 0xffa00010  sd          $zero, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129aa8) {
            ctx->pc = 0x129ABCu;
            goto label_129abc;
        }
    }
    ctx->pc = 0x129AB0u;
    // 0x129ab0: 0x24020045  addiu       $v0, $zero, 0x45
    ctx->pc = 0x129ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x129ab4: 0x14820047  bne         $a0, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x129AB4u;
    {
        const bool branch_taken_0x129ab4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x129ab4) {
            ctx->pc = 0x129BD4u;
            goto label_129bd4;
        }
    }
    ctx->pc = 0x129ABCu;
label_129abc:
    // 0x129abc: 0x56400006  bnel        $s2, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x129ABCu;
    {
        const bool branch_taken_0x129abc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x129abc) {
            ctx->pc = 0x129AC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129ABCu;
            // 0x129ac0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129AD8u;
            goto label_129ad8;
        }
    }
    ctx->pc = 0x129AC4u;
    // 0x129ac4: 0x54e00004  bnel        $a3, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x129AC4u;
    {
        const bool branch_taken_0x129ac4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x129ac4) {
            ctx->pc = 0x129AC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129AC4u;
            // 0x129ac8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129AD8u;
            goto label_129ad8;
        }
    }
    ctx->pc = 0x129ACCu;
    // 0x129acc: 0x514002f8  beql        $t2, $zero, . + 4 + (0x2F8 << 2)
    ctx->pc = 0x129ACCu;
    {
        const bool branch_taken_0x129acc = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x129acc) {
            ctx->pc = 0x129AD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129ACCu;
            // 0x129ad0: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12A6B0u;
            goto label_12a6b0;
        }
    }
    ctx->pc = 0x129AD4u;
    // 0x129ad4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x129ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_129ad8:
    // 0x129ad8: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x129ad8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x129adc: 0x82c40000  lb          $a0, 0x0($s6)
    ctx->pc = 0x129adcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x129ae0: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x129ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x129ae4: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x129AE4u;
    {
        const bool branch_taken_0x129ae4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x129AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129AE4u;
        // 0x129ae8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129ae4) {
            ctx->pc = 0x129AFCu;
            goto label_129afc;
        }
    }
    ctx->pc = 0x129AECu;
    // 0x129aec: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x129aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x129af0: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x129AF0u;
    {
        const bool branch_taken_0x129af0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x129AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129AF0u;
        // 0x129af4: 0x2482ffd0  addiu       $v0, $a0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129af0) {
            ctx->pc = 0x129B08u;
            goto label_129b08;
        }
    }
    ctx->pc = 0x129AF8u;
    // 0x129af8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x129af8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_129afc:
    // 0x129afc: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x129afcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x129b00: 0x82c40000  lb          $a0, 0x0($s6)
    ctx->pc = 0x129b00u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x129b04: 0x2482ffd0  addiu       $v0, $a0, -0x30
    ctx->pc = 0x129b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
label_129b08:
    // 0x129b08: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x129b08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x129b0c: 0x50400031  beql        $v0, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x129B0Cu;
    {
        const bool branch_taken_0x129b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x129b0c) {
            ctx->pc = 0x129B10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129B0Cu;
            // 0x129b10: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129BD4u;
            goto label_129bd4;
        }
    }
    ctx->pc = 0x129B14u;
    // 0x129b14: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x129b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x129b18: 0x5482000b  bnel        $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x129B18u;
    {
        const bool branch_taken_0x129b18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x129b18) {
            ctx->pc = 0x129B1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129B18u;
            // 0x129b1c: 0x2482ffcf  addiu       $v0, $a0, -0x31 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129B48u;
            goto label_129b48;
        }
    }
    ctx->pc = 0x129B20u;
    // 0x129b20: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x129b20u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x129b24: 0x0  nop
    ctx->pc = 0x129b24u;
    // NOP
label_129b28:
    // 0x129b28: 0x82c40000  lb          $a0, 0x0($s6)
    ctx->pc = 0x129b28u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x129b2c: 0x0  nop
    ctx->pc = 0x129b2cu;
    // NOP
    // 0x129b30: 0x0  nop
    ctx->pc = 0x129b30u;
    // NOP
    // 0x129b34: 0x0  nop
    ctx->pc = 0x129b34u;
    // NOP
    // 0x129b38: 0x0  nop
    ctx->pc = 0x129b38u;
    // NOP
    // 0x129b3c: 0x5082fffa  beql        $a0, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x129B3Cu;
    {
        const bool branch_taken_0x129b3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x129b3c) {
            ctx->pc = 0x129B40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129B3Cu;
            // 0x129b40: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129B28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129b28;
        }
    }
    ctx->pc = 0x129B44u;
    // 0x129b44: 0x2482ffcf  addiu       $v0, $a0, -0x31
    ctx->pc = 0x129b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
label_129b48:
    // 0x129b48: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x129b48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x129b4c: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x129B4Cu;
    {
        const bool branch_taken_0x129b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x129b4c) {
            ctx->pc = 0x129B50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129B4Cu;
            // 0x129b50: 0xffa00010  sd          $zero, 0x10($sp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129BD4u;
            goto label_129bd4;
        }
    }
    ctx->pc = 0x129B54u;
    // 0x129b54: 0x2484ffd0  addiu       $a0, $a0, -0x30
    ctx->pc = 0x129b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x129b58: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x129b58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129b5c: 0xffa40010  sd          $a0, 0x10($sp)
    ctx->pc = 0x129b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
    // 0x129b60: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x129b60u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x129b64: 0x82c40000  lb          $a0, 0x0($s6)
    ctx->pc = 0x129b64u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x129b68: 0x28820030  slti        $v0, $a0, 0x30
    ctx->pc = 0x129b68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x129b6c: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x129B6Cu;
    {
        const bool branch_taken_0x129b6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x129b6c) {
            ctx->pc = 0x129B70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129B6Cu;
            // 0x129b70: 0xdfa40010  ld          $a0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129BB0u;
            goto label_129bb0;
        }
    }
    ctx->pc = 0x129B74u;
label_129b74:
    // 0x129b74: 0x2882003a  slti        $v0, $a0, 0x3A
    ctx->pc = 0x129b74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x129b78: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x129B78u;
    {
        const bool branch_taken_0x129b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x129b78) {
            ctx->pc = 0x129B7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129B78u;
            // 0x129b7c: 0xdfa40010  ld          $a0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129BB0u;
            goto label_129bb0;
        }
    }
    ctx->pc = 0x129B80u;
    // 0x129b80: 0xdfa30010  ld          $v1, 0x10($sp)
    ctx->pc = 0x129b80u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x129b84: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x129b84u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x129b88: 0x310b8  dsll        $v0, $v1, 2
    ctx->pc = 0x129b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 2);
    // 0x129b8c: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x129b8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x129b90: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x129b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x129b94: 0x82102d  daddu       $v0, $a0, $v0
    ctx->pc = 0x129b94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
    // 0x129b98: 0x82c40000  lb          $a0, 0x0($s6)
    ctx->pc = 0x129b98u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x129b9c: 0x6442ffd0  daddiu      $v0, $v0, -0x30
    ctx->pc = 0x129b9cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967248);
    // 0x129ba0: 0x28830030  slti        $v1, $a0, 0x30
    ctx->pc = 0x129ba0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x129ba4: 0x1060fff3  beqz        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x129BA4u;
    {
        const bool branch_taken_0x129ba4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x129BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129BA4u;
        // 0x129ba8: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129ba4) {
            ctx->pc = 0x129B74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129b74;
        }
    }
    ctx->pc = 0x129BACu;
    // 0x129bac: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x129bacu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_129bb0:
    // 0x129bb0: 0x2c61023  subu        $v0, $s6, $a2
    ctx->pc = 0x129bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 6)));
    // 0x129bb4: 0x3c030098  lui         $v1, 0x98
    ctx->pc = 0x129bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)152 << 16));
    // 0x129bb8: 0x3463967f  ori         $v1, $v1, 0x967F
    ctx->pc = 0x129bb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)38527);
    // 0x129bbc: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x129bbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x129bc0: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x129bc0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x129bc4: 0x11200003  beqz        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x129BC4u;
    {
        const bool branch_taken_0x129bc4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x129BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129BC4u;
        // 0x129bc8: 0xffa40010  sd          $a0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129bc4) {
            ctx->pc = 0x129BD4u;
            goto label_129bd4;
        }
    }
    ctx->pc = 0x129BCCu;
    // 0x129bcc: 0x4202f  dsubu       $a0, $zero, $a0
    ctx->pc = 0x129bccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) - GPR_U64(ctx, 4));
    // 0x129bd0: 0xffa40010  sd          $a0, 0x10($sp)
    ctx->pc = 0x129bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
label_129bd4:
    // 0x129bd4: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x129BD4u;
    {
        const bool branch_taken_0x129bd4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x129BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129BD4u;
        // 0x129bd8: 0xdfa20010  ld          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129bd4) {
            ctx->pc = 0x129BF8u;
            goto label_129bf8;
        }
    }
    ctx->pc = 0x129BDCu;
    // 0x129bdc: 0x14e002b5  bnez        $a3, . + 4 + (0x2B5 << 2)
    ctx->pc = 0x129BDCu;
    {
        const bool branch_taken_0x129bdc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x129BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129BDCu;
        // 0x129be0: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129bdc) {
            ctx->pc = 0x12A6B4u;
            goto label_12a6b4;
        }
    }
    ctx->pc = 0x129BE4u;
    // 0x129be4: 0x154002b3  bnez        $t2, . + 4 + (0x2B3 << 2)
    ctx->pc = 0x129BE4u;
    {
        const bool branch_taken_0x129be4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x129be4) {
            ctx->pc = 0x12A6B4u;
            goto label_12a6b4;
        }
    }
    ctx->pc = 0x129BECu;
label_129bec:
    // 0x129bec: 0x100002b0  b           . + 4 + (0x2B0 << 2)
    ctx->pc = 0x129BECu;
    {
        const bool branch_taken_0x129bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129BECu;
        // 0x129bf0: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129bec) {
            ctx->pc = 0x12A6B0u;
            goto label_12a6b0;
        }
    }
    ctx->pc = 0x129BF4u;
    // 0x129bf4: 0x0  nop
    ctx->pc = 0x129bf4u;
    // NOP
label_129bf8:
    // 0x129bf8: 0x24140010  addiu       $s4, $zero, 0x10
    ctx->pc = 0x129bf8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x129bfc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x129bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x129c00: 0x257b80a  movz        $s7, $s2, $s7
    ctx->pc = 0x129c00u;
    if (GPR_U64(ctx, 23) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 18));
    // 0x129c04: 0x48102f  dsubu       $v0, $v0, $t0
    ctx->pc = 0x129c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 8));
    // 0x129c08: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x129c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x129c0c: 0x2a420011  slti        $v0, $s2, 0x11
    ctx->pc = 0x129c0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x129c10: 0x242a00b  movn        $s4, $s2, $v0
    ctx->pc = 0x129c10u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 18));
    // 0x129c14: 0xdfa30010  ld          $v1, 0x10($sp)
    ctx->pc = 0x129c14u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x129c18: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x129c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x129c1c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x129c1cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x129c20: 0xc048dc6  jal         func_123718
    ctx->pc = 0x129C20u;
    SET_GPR_U32(ctx, 31, 0x129C28u);
    ctx->pc = 0x129C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129C20u;
    // 0x129c24: 0xafa30048  sw          $v1, 0x48($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123718u, 0x129C20u, 0x129C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129C28u;
label_129c28:
    // 0x129c28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x129c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129c2c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x129c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x129c30: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x129C30u;
    {
        const bool branch_taken_0x129c30 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x129C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129C30u;
        // 0x129c34: 0x8fb00048  lw          $s0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129c30) {
            ctx->pc = 0x129C4Cu;
            goto label_129c4c;
        }
    }
    ctx->pc = 0x129C38u;
    // 0x129c38: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x129c38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x129c3c: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x129c3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x129c40: 0xc048c90  jal         func_123240
    ctx->pc = 0x129C40u;
    SET_GPR_U32(ctx, 31, 0x129C48u);
    ctx->pc = 0x123240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123240u, 0x129C40u, 0x129C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129C48u;
label_129c48:
    // 0x129c48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x129c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_129c4c:
    // 0x129c4c: 0x2a82000a  slti        $v0, $s4, 0xA
    ctx->pc = 0x129c4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x129c50: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x129c50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129c54: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x129C54u;
    {
        const bool branch_taken_0x129c54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129C54u;
        // 0x129c58: 0x2541023  subu        $v0, $s2, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129c54) {
            ctx->pc = 0x129CCCu;
            goto label_129ccc;
        }
    }
    ctx->pc = 0x129C5Cu;
    // 0x129c5c: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x129c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x129c60: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x129c60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129c64: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x129c64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x129c68: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x129c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x129c6c: 0xdc84f948  ld          $a0, -0x6B8($a0)
    ctx->pc = 0x129c6cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 4294965576)));
    // 0x129c70: 0xc048cc0  jal         func_123300
    ctx->pc = 0x129C70u;
    SET_GPR_U32(ctx, 31, 0x129C78u);
    ctx->pc = 0x123300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123300u, 0x129C70u, 0x129C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129C78u;
label_129c78:
    // 0x129c78: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x129c78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129c7c: 0x6220006  bltzl       $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x129C7Cu;
    {
        const bool branch_taken_0x129c7c = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x129c7c) {
            ctx->pc = 0x129C80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129C7Cu;
            // 0x129c80: 0x11107a  dsrl        $v0, $s1, 1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) >> 1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x129C98u;
            goto label_129c98;
        }
    }
    ctx->pc = 0x129C84u;
    // 0x129c84: 0xc049c20  jal         func_127080
    ctx->pc = 0x129C84u;
    SET_GPR_U32(ctx, 31, 0x129C8Cu);
    ctx->pc = 0x129C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129C84u;
    // 0x129c88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127080u, 0x129C84u, 0x129C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129C8Cu;
label_129c8c:
    // 0x129c8c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x129C8Cu;
    {
        const bool branch_taken_0x129c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x129c8c) {
            ctx->pc = 0x129CB4u;
            goto label_129cb4;
        }
    }
    ctx->pc = 0x129C94u;
    // 0x129c94: 0x0  nop
    ctx->pc = 0x129c94u;
    // NOP
label_129c98:
    // 0x129c98: 0x32240001  andi        $a0, $s1, 0x1
    ctx->pc = 0x129c98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x129c9c: 0xc049c20  jal         func_127080
    ctx->pc = 0x129C9Cu;
    SET_GPR_U32(ctx, 31, 0x129CA4u);
    ctx->pc = 0x129CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129C9Cu;
    // 0x129ca0: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127080u, 0x129C9Cu, 0x129CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129CA4u;
label_129ca4:
    // 0x129ca4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x129ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129ca8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x129ca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129cac: 0xc048c90  jal         func_123240
    ctx->pc = 0x129CACu;
    SET_GPR_U32(ctx, 31, 0x129CB4u);
    ctx->pc = 0x123240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123240u, 0x129CACu, 0x129CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129CB4u;
label_129cb4:
    // 0x129cb4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x129cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129cb8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x129cb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129cbc: 0xc048c90  jal         func_123240
    ctx->pc = 0x129CBCu;
    SET_GPR_U32(ctx, 31, 0x129CC4u);
    ctx->pc = 0x123240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123240u, 0x129CBCu, 0x129CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129CC4u;
label_129cc4:
    // 0x129cc4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x129cc4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129cc8: 0x2541023  subu        $v0, $s2, $s4
    ctx->pc = 0x129cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
label_129ccc:
    // 0x129ccc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x129cccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x129cd0: 0x1a000055  blez        $s0, . + 4 + (0x55 << 2)
    ctx->pc = 0x129CD0u;
    {
        const bool branch_taken_0x129cd0 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x129CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129CD0u;
        // 0x129cd4: 0xafa00038  sw          $zero, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129cd0) {
            ctx->pc = 0x129E28u;
            goto label_129e28;
        }
    }
    ctx->pc = 0x129CD8u;
    // 0x129cd8: 0x3204000f  andi        $a0, $s0, 0xF
    ctx->pc = 0x129cd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x129cdc: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x129CDCu;
    {
        const bool branch_taken_0x129cdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x129CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129CDCu;
        // 0x129ce0: 0x410c0  sll         $v0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129cdc) {
            ctx->pc = 0x129D00u;
            goto label_129d00;
        }
    }
    ctx->pc = 0x129CE4u;
    // 0x129ce4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x129ce4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129ce8: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x129ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x129cec: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x129cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x129cf0: 0xdc84f990  ld          $a0, -0x670($a0)
    ctx->pc = 0x129cf0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 4294965648)));
    // 0x129cf4: 0xc048cc0  jal         func_123300
    ctx->pc = 0x129CF4u;
    SET_GPR_U32(ctx, 31, 0x129CFCu);
    ctx->pc = 0x123300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123300u, 0x129CF4u, 0x129CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129CFCu;
label_129cfc:
    // 0x129cfc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x129cfcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_129d00:
    // 0x129d00: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x129d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x129d04: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x129d04u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x129d08: 0x120000a1  beqz        $s0, . + 4 + (0xA1 << 2)
    ctx->pc = 0x129D08u;
    {
        const bool branch_taken_0x129d08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x129D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129D08u;
        // 0x129d0c: 0x2a020135  slti        $v0, $s0, 0x135 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)309) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x129d08) {
            ctx->pc = 0x129F90u;
            goto label_129f90;
        }
    }
    ctx->pc = 0x129D10u;
    // 0x129d10: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x129D10u;
    {
        const bool branch_taken_0x129d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x129d10) {
            ctx->pc = 0x129D14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129D10u;
            // 0x129d14: 0x108103  sra         $s0, $s0, 4 (Delay Slot)
            SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129D40u;
            goto label_129d40;
        }
    }
    ctx->pc = 0x129D18u;
    // 0x129d18: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x129d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_129d1c:
    // 0x129d1c: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x129d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x129d20: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x129d20u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x129d24: 0xdc73faa8  ld          $s3, -0x558($v1)
    ctx->pc = 0x129d24u;
    SET_GPR_U64(ctx, 19, FAST_READ64(0x14FAA8u));
    // 0x129d28: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x129d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x129d2c: 0x10600261  beqz        $v1, . + 4 + (0x261 << 2)
    ctx->pc = 0x129D2Cu;
    {
        const bool branch_taken_0x129d2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x129D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129D2Cu;
        // 0x129d30: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129d2c) {
            ctx->pc = 0x12A6B4u;
            goto label_12a6b4;
        }
    }
    ctx->pc = 0x129D34u;
    // 0x129d34: 0x10000250  b           . + 4 + (0x250 << 2)
    ctx->pc = 0x129D34u;
    {
        const bool branch_taken_0x129d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129D34u;
        // 0x129d38: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129d34) {
            ctx->pc = 0x12A678u;
            goto label_12a678;
        }
    }
    ctx->pc = 0x129D3Cu;
    // 0x129d3c: 0x0  nop
    ctx->pc = 0x129d3cu;
    // NOP
label_129d40:
    // 0x129d40: 0x12000093  beqz        $s0, . + 4 + (0x93 << 2)
    ctx->pc = 0x129D40u;
    {
        const bool branch_taken_0x129d40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x129D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129D40u;
        // 0x129d44: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x129d40) {
            ctx->pc = 0x129F90u;
            goto label_129f90;
        }
    }
    ctx->pc = 0x129D48u;
    // 0x129d48: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x129D48u;
    {
        const bool branch_taken_0x129d48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129D48u;
        // 0x129d4c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129d48) {
            ctx->pc = 0x129D90u;
            goto label_129d90;
        }
    }
    ctx->pc = 0x129D50u;
    // 0x129d50: 0x3c150015  lui         $s5, 0x15
    ctx->pc = 0x129d50u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)21 << 16));
    // 0x129d54: 0x26b1fa58  addiu       $s1, $s5, -0x5A8
    ctx->pc = 0x129d54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 4294965848));
label_129d58:
    // 0x129d58: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x129d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x129d5c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x129D5Cu;
    {
        const bool branch_taken_0x129d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129D5Cu;
        // 0x129d60: 0x108043  sra         $s0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129d5c) {
            ctx->pc = 0x129D78u;
            goto label_129d78;
        }
    }
    ctx->pc = 0x129D64u;
    // 0x129d64: 0xde240000  ld          $a0, 0x0($s1)
    ctx->pc = 0x129d64u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x129d68: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x129d68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129d6c: 0xc048cc0  jal         func_123300
    ctx->pc = 0x129D6Cu;
    SET_GPR_U32(ctx, 31, 0x129D74u);
    ctx->pc = 0x123300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123300u, 0x129D6Cu, 0x129D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129D74u;
label_129d74:
    // 0x129d74: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x129d74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_129d78:
    // 0x129d78: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x129d78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x129d7c: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x129d7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x129d80: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x129D80u;
    {
        const bool branch_taken_0x129d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129D80u;
        // 0x129d84: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129d80) {
            ctx->pc = 0x129D58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129d58;
        }
    }
    ctx->pc = 0x129D88u;
    // 0x129d88: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x129D88u;
    {
        const bool branch_taken_0x129d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129D88u;
        // 0x129d8c: 0x26a4fa58  addiu       $a0, $s5, -0x5A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294965848));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129d88) {
            ctx->pc = 0x129D98u;
            goto label_129d98;
        }
    }
    ctx->pc = 0x129D90u;
label_129d90:
    // 0x129d90: 0x3c150015  lui         $s5, 0x15
    ctx->pc = 0x129d90u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)21 << 16));
    // 0x129d94: 0x26a4fa58  addiu       $a0, $s5, -0x5A8
    ctx->pc = 0x129d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294965848));
label_129d98:
    // 0x129d98: 0x13283f  dsra32      $a1, $s3, 0
    ctx->pc = 0x129d98u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x129d9c: 0x3c02fcb0  lui         $v0, 0xFCB0
    ctx->pc = 0x129d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64688 << 16));
    // 0x129da0: 0x1418c0  sll         $v1, $s4, 3
    ctx->pc = 0x129da0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x129da4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x129da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x129da8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x129da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x129dac: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x129dacu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x129db0: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x129db0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x129db4: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x129db4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x129db8: 0x2709824  and         $s3, $s3, $s0
    ctx->pc = 0x129db8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 16));
    // 0x129dbc: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x129dbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x129dc0: 0xc048cc0  jal         func_123300
    ctx->pc = 0x129DC0u;
    SET_GPR_U32(ctx, 31, 0x129DC8u);
    ctx->pc = 0x129DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129DC0u;
    // 0x129dc4: 0x2652825  or          $a1, $s3, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123300u, 0x129DC0u, 0x129DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129DC8u;
label_129dc8:
    // 0x129dc8: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x129dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x129dcc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x129dccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129dd0: 0x3c027ca0  lui         $v0, 0x7CA0
    ctx->pc = 0x129dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31904 << 16));
    // 0x129dd4: 0x13203f  dsra32      $a0, $s3, 0
    ctx->pc = 0x129dd4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x129dd8: 0x838824  and         $s1, $a0, $v1
    ctx->pc = 0x129dd8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x129ddc: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x129ddcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x129de0: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x129DE0u;
    {
        const bool branch_taken_0x129de0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129DE0u;
        // 0x129de4: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129de0) {
            ctx->pc = 0x129D1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129d1c;
        }
    }
    ctx->pc = 0x129DE8u;
    // 0x129de8: 0x3c027c90  lui         $v0, 0x7C90
    ctx->pc = 0x129de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31888 << 16));
    // 0x129dec: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x129decu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x129df0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x129DF0u;
    {
        const bool branch_taken_0x129df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129DF0u;
        // 0x129df4: 0x2709824  and         $s3, $s3, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129df0) {
            ctx->pc = 0x129E10u;
            goto label_129e10;
        }
    }
    ctx->pc = 0x129DF8u;
    // 0x129df8: 0x3c027fef  lui         $v0, 0x7FEF
    ctx->pc = 0x129df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32751 << 16));
    // 0x129dfc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x129dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x129e00: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x129e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x129e04: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x129e04u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x129e08: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x129E08u;
    {
        const bool branch_taken_0x129e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129E08u;
        // 0x129e0c: 0x2709825  or          $s3, $s3, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129e08) {
            ctx->pc = 0x129F90u;
            goto label_129f90;
        }
    }
    ctx->pc = 0x129E10u;
label_129e10:
    // 0x129e10: 0x3c020350  lui         $v0, 0x350
    ctx->pc = 0x129e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)848 << 16));
    // 0x129e14: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x129e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x129e18: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x129e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x129e1c: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x129E1Cu;
    {
        const bool branch_taken_0x129e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129E1Cu;
        // 0x129e20: 0x2629825  or          $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129e1c) {
            ctx->pc = 0x129F90u;
            goto label_129f90;
        }
    }
    ctx->pc = 0x129E24u;
    // 0x129e24: 0x0  nop
    ctx->pc = 0x129e24u;
    // NOP
label_129e28:
    // 0x129e28: 0x601005a  bgez        $s0, . + 4 + (0x5A << 2)
    ctx->pc = 0x129E28u;
    {
        const bool branch_taken_0x129e28 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x129E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129E28u;
        // 0x129e2c: 0x8fa50018  lw          $a1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129e28) {
            ctx->pc = 0x129F94u;
            goto label_129f94;
        }
    }
    ctx->pc = 0x129E30u;
    // 0x129e30: 0x108023  negu        $s0, $s0
    ctx->pc = 0x129e30u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
    // 0x129e34: 0x3204000f  andi        $a0, $s0, 0xF
    ctx->pc = 0x129e34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x129e38: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x129E38u;
    {
        const bool branch_taken_0x129e38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x129E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129E38u;
        // 0x129e3c: 0x410c0  sll         $v0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129e38) {
            ctx->pc = 0x129E5Cu;
            goto label_129e5c;
        }
    }
    ctx->pc = 0x129E40u;
    // 0x129e40: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x129e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129e44: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x129e44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x129e48: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x129e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x129e4c: 0xdca5f990  ld          $a1, -0x670($a1)
    ctx->pc = 0x129e4cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 5), 4294965648)));
    // 0x129e50: 0xc048d62  jal         func_123588
    ctx->pc = 0x129E50u;
    SET_GPR_U32(ctx, 31, 0x129E58u);
    ctx->pc = 0x123588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123588u, 0x129E50u, 0x129E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129E58u;
label_129e58:
    // 0x129e58: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x129e58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_129e5c:
    // 0x129e5c: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x129e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x129e60: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x129e60u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x129e64: 0x1200004a  beqz        $s0, . + 4 + (0x4A << 2)
    ctx->pc = 0x129E64u;
    {
        const bool branch_taken_0x129e64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x129E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129E64u;
        // 0x129e68: 0x108103  sra         $s0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129e64) {
            ctx->pc = 0x129F90u;
            goto label_129f90;
        }
    }
    ctx->pc = 0x129E6Cu;
    // 0x129e6c: 0x2a020020  slti        $v0, $s0, 0x20
    ctx->pc = 0x129e6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x129e70: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x129E70u;
    {
        const bool branch_taken_0x129e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129E70u;
        // 0x129e74: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129e70) {
            ctx->pc = 0x129F4Cu;
            goto label_129f4c;
        }
    }
    ctx->pc = 0x129E78u;
    // 0x129e78: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x129e78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x129e7c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x129E7Cu;
    {
        const bool branch_taken_0x129e7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129E7Cu;
        // 0x129e80: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129e7c) {
            ctx->pc = 0x129EC8u;
            goto label_129ec8;
        }
    }
    ctx->pc = 0x129E84u;
    // 0x129e84: 0x3c150015  lui         $s5, 0x15
    ctx->pc = 0x129e84u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)21 << 16));
    // 0x129e88: 0x26b1fa80  addiu       $s1, $s5, -0x580
    ctx->pc = 0x129e88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 4294965888));
    // 0x129e8c: 0x0  nop
    ctx->pc = 0x129e8cu;
    // NOP
label_129e90:
    // 0x129e90: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x129e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x129e94: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x129E94u;
    {
        const bool branch_taken_0x129e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129E94u;
        // 0x129e98: 0x108043  sra         $s0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129e94) {
            ctx->pc = 0x129EB0u;
            goto label_129eb0;
        }
    }
    ctx->pc = 0x129E9Cu;
    // 0x129e9c: 0xde240000  ld          $a0, 0x0($s1)
    ctx->pc = 0x129e9cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x129ea0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x129ea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129ea4: 0xc048cc0  jal         func_123300
    ctx->pc = 0x129EA4u;
    SET_GPR_U32(ctx, 31, 0x129EACu);
    ctx->pc = 0x123300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123300u, 0x129EA4u, 0x129EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129EACu;
label_129eac:
    // 0x129eac: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x129eacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_129eb0:
    // 0x129eb0: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x129eb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x129eb4: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x129eb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x129eb8: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x129EB8u;
    {
        const bool branch_taken_0x129eb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129EB8u;
        // 0x129ebc: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129eb8) {
            ctx->pc = 0x129E90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129e90;
        }
    }
    ctx->pc = 0x129EC0u;
    // 0x129ec0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x129EC0u;
    {
        const bool branch_taken_0x129ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129EC0u;
        // 0x129ec4: 0x26a2fa80  addiu       $v0, $s5, -0x580 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294965888));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129ec0) {
            ctx->pc = 0x129ED0u;
            goto label_129ed0;
        }
    }
    ctx->pc = 0x129EC8u;
label_129ec8:
    // 0x129ec8: 0x3c150015  lui         $s5, 0x15
    ctx->pc = 0x129ec8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)21 << 16));
    // 0x129ecc: 0x26a2fa80  addiu       $v0, $s5, -0x580
    ctx->pc = 0x129eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294965888));
label_129ed0:
    // 0x129ed0: 0x1418c0  sll         $v1, $s4, 3
    ctx->pc = 0x129ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x129ed4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x129ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x129ed8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x129ed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129edc: 0xdc700000  ld          $s0, 0x0($v1)
    ctx->pc = 0x129edcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x129ee0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x129ee0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129ee4: 0x260a02d  daddu       $s4, $s3, $zero
    ctx->pc = 0x129ee4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129ee8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x129ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129eec: 0xc048cc0  jal         func_123300
    ctx->pc = 0x129EECu;
    SET_GPR_U32(ctx, 31, 0x129EF4u);
    ctx->pc = 0x123300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123300u, 0x129EECu, 0x129EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129EF4u;
label_129ef4:
    // 0x129ef4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x129ef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129ef8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x129ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129efc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x129efcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129f00: 0xc048db2  jal         func_1236C8
    ctx->pc = 0x129F00u;
    SET_GPR_U32(ctx, 31, 0x129F08u);
    ctx->pc = 0x1236C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1236C8u, 0x129F00u, 0x129F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129F08u;
label_129f08:
    // 0x129f08: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x129F08u;
    {
        const bool branch_taken_0x129f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129F08u;
        // 0x129f0c: 0x8fa50018  lw          $a1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129f08) {
            ctx->pc = 0x129F94u;
            goto label_129f94;
        }
    }
    ctx->pc = 0x129F10u;
    // 0x129f10: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x129f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129f14: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x129f14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129f18: 0xc048c90  jal         func_123240
    ctx->pc = 0x129F18u;
    SET_GPR_U32(ctx, 31, 0x129F20u);
    ctx->pc = 0x123240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123240u, 0x129F18u, 0x129F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129F20u;
label_129f20:
    // 0x129f20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x129f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129f24: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x129f24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129f28: 0xc048cc0  jal         func_123300
    ctx->pc = 0x129F28u;
    SET_GPR_U32(ctx, 31, 0x129F30u);
    ctx->pc = 0x123300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123300u, 0x129F28u, 0x129F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129F30u;
label_129f30:
    // 0x129f30: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x129f30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129f34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x129f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129f38: 0xc048db2  jal         func_1236C8
    ctx->pc = 0x129F38u;
    SET_GPR_U32(ctx, 31, 0x129F40u);
    ctx->pc = 0x1236C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1236C8u, 0x129F38u, 0x129F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129F40u;
label_129f40:
    // 0x129f40: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x129F40u;
    {
        const bool branch_taken_0x129f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129F40u;
        // 0x129f44: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129f40) {
            ctx->pc = 0x129F90u;
            goto label_129f90;
        }
    }
    ctx->pc = 0x129F48u;
label_129f48:
    // 0x129f48: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x129f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_129f4c:
    // 0x129f4c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x129f4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129f50: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x129f50u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x129f54: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x129f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x129f58: 0x108001d6  beqz        $a0, . + 4 + (0x1D6 << 2)
    ctx->pc = 0x129F58u;
    {
        const bool branch_taken_0x129f58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x129F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129F58u;
        // 0x129f5c: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129f58) {
            ctx->pc = 0x12A6B4u;
            goto label_12a6b4;
        }
    }
    ctx->pc = 0x129F60u;
    // 0x129f60: 0x100001c5  b           . + 4 + (0x1C5 << 2)
    ctx->pc = 0x129F60u;
    {
        const bool branch_taken_0x129f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129F60u;
        // 0x129f64: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129f60) {
            ctx->pc = 0x12A678u;
            goto label_12a678;
        }
    }
    ctx->pc = 0x129F68u;
label_129f68:
    // 0x129f68: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x129f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129f6c: 0xc04bda0  jal         func_12F680
    ctx->pc = 0x129F6Cu;
    SET_GPR_U32(ctx, 31, 0x129F74u);
    ctx->pc = 0x12F680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F680u, 0x129F6Cu, 0x129F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129F74u;
label_129f74:
    // 0x129f74: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x129f74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129f78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x129f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129f7c: 0xc048c90  jal         func_123240
    ctx->pc = 0x129F7Cu;
    SET_GPR_U32(ctx, 31, 0x129F84u);
    ctx->pc = 0x123240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123240u, 0x129F7Cu, 0x129F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129F84u;
label_129f84:
    // 0x129f84: 0x100001bb  b           . + 4 + (0x1BB << 2)
    ctx->pc = 0x129F84u;
    {
        const bool branch_taken_0x129f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129F84u;
        // 0x129f88: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129f84) {
            ctx->pc = 0x12A674u;
            goto label_12a674;
        }
    }
    ctx->pc = 0x129F8Cu;
    // 0x129f8c: 0x0  nop
    ctx->pc = 0x129f8cu;
    // NOP
label_129f90:
    // 0x129f90: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x129f90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_129f94:
    // 0x129f94: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x129f94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129f98: 0x8fa80020  lw          $t0, 0x20($sp)
    ctx->pc = 0x129f98u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x129f9c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x129f9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129fa0: 0xc04bb5e  jal         func_12ED78
    ctx->pc = 0x129FA0u;
    SET_GPR_U32(ctx, 31, 0x129FA8u);
    ctx->pc = 0x129FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129FA0u;
    // 0x129fa4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12ED78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12ED78u, 0x129FA0u, 0x129FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129FA8u;
label_129fa8:
    // 0x129fa8: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x129fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x129fac: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x129facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x129fb0: 0x1000013a  b           . + 4 + (0x13A << 2)
    ctx->pc = 0x129FB0u;
    {
        const bool branch_taken_0x129fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129FB0u;
        // 0x129fb4: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129fb0) {
            ctx->pc = 0x12A49Cu;
            goto label_12a49c;
        }
    }
    ctx->pc = 0x129FB8u;
label_129fb8:
    // 0x129fb8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x129fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129fbc: 0xc04bccc  jal         func_12F330
    ctx->pc = 0x129FBCu;
    SET_GPR_U32(ctx, 31, 0x129FC4u);
    ctx->pc = 0x129FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129FBCu;
    // 0x129fc0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F330u, 0x129FBCu, 0x129FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129FC4u;
label_129fc4:
    // 0x129fc4: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x129fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x129fc8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x129fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129fcc: 0xc04bd22  jal         func_12F488
    ctx->pc = 0x129FCCu;
    SET_GPR_U32(ctx, 31, 0x129FD4u);
    ctx->pc = 0x129FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129FCCu;
    // 0x129fd0: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F488u, 0x129FCCu, 0x129FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129FD4u;
label_129fd4:
    // 0x129fd4: 0x184001a8  blez        $v0, . + 4 + (0x1A8 << 2)
    ctx->pc = 0x129FD4u;
    {
        const bool branch_taken_0x129fd4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x129FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129FD4u;
        // 0x129fd8: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129fd4) {
            ctx->pc = 0x12A678u;
            goto label_12a678;
        }
    }
    ctx->pc = 0x129FDCu;
    // 0x129fdc: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x129FDCu;
    {
        const bool branch_taken_0x129fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x129fdc) {
            ctx->pc = 0x12A054u;
            goto label_12a054;
        }
    }
    ctx->pc = 0x129FE4u;
    // 0x129fe4: 0x0  nop
    ctx->pc = 0x129fe4u;
    // NOP
label_129fe8:
    // 0x129fe8: 0x14800043  bnez        $a0, . + 4 + (0x43 << 2)
    ctx->pc = 0x129FE8u;
    {
        const bool branch_taken_0x129fe8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x129FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129FE8u;
        // 0x129fec: 0x8fa5003c  lw          $a1, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129fe8) {
            ctx->pc = 0x12A0F8u;
            goto label_12a0f8;
        }
    }
    ctx->pc = 0x129FF0u;
    // 0x129ff0: 0x12a00013  beqz        $s5, . + 4 + (0x13 << 2)
    ctx->pc = 0x129FF0u;
    {
        const bool branch_taken_0x129ff0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x129ff0) {
            ctx->pc = 0x12A040u;
            goto label_12a040;
        }
    }
    ctx->pc = 0x129FF8u;
    // 0x129ff8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x129ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x129ffc: 0x31b3a  dsrl        $v1, $v1, 12
    ctx->pc = 0x129ffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 12);
    // 0x12a000: 0x2631024  and         $v0, $s3, $v1
    ctx->pc = 0x12a000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 3));
    // 0x12a004: 0x14430024  bne         $v0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x12A004u;
    {
        const bool branch_taken_0x12a004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x12A008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A004u;
        // 0x12a008: 0x3c037ff0  lui         $v1, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a004) {
            ctx->pc = 0x12A098u;
            goto label_12a098;
        }
    }
    ctx->pc = 0x12A00Cu;
    // 0x12a00c: 0x13103f  dsra32      $v0, $s3, 0
    ctx->pc = 0x12a00cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x12a010: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x12a010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x12a014: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x12a014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x12a018: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x12a018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x12a01c: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x12a01cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x12a020: 0x2639824  and         $s3, $s3, $v1
    ctx->pc = 0x12a020u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 3));
    // 0x12a024: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x12a024u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x12a028: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x12a028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12a02c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x12a02cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x12a030: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12a030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12a034: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x12a034u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x12a038: 0x1000018e  b           . + 4 + (0x18E << 2)
    ctx->pc = 0x12A038u;
    {
        const bool branch_taken_0x12a038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A038u;
        // 0x12a03c: 0x2639824  and         $s3, $s3, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a038) {
            ctx->pc = 0x12A674u;
            goto label_12a674;
        }
    }
    ctx->pc = 0x12A040u;
label_12a040:
    // 0x12a040: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12a040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12a044: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x12a044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x12a048: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x12a048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
    // 0x12a04c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x12A04Cu;
    {
        const bool branch_taken_0x12a04c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a04c) {
            ctx->pc = 0x12A098u;
            goto label_12a098;
        }
    }
    ctx->pc = 0x12A054u;
label_12a054:
    // 0x12a054: 0x13103f  dsra32      $v0, $s3, 0
    ctx->pc = 0x12a054u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x12a058: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x12a058u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x12a05c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x12a05cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x12a060: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x12a060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12a064: 0x31b3c  dsll32      $v1, $v1, 12
    ctx->pc = 0x12a064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 12));
    // 0x12a068: 0x31b3a  dsrl        $v1, $v1, 12
    ctx->pc = 0x12a068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 12);
    // 0x12a06c: 0x3c04fff0  lui         $a0, 0xFFF0
    ctx->pc = 0x12a06cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65520 << 16));
    // 0x12a070: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x12a070u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x12a074: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x12a074u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x12a078: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x12a078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x12a07c: 0x2659824  and         $s3, $s3, $a1
    ctx->pc = 0x12a07cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 5));
    // 0x12a080: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12a080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12a084: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x12a084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x12a088: 0x2639825  or          $s3, $s3, $v1
    ctx->pc = 0x12a088u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
    // 0x12a08c: 0x10000179  b           . + 4 + (0x179 << 2)
    ctx->pc = 0x12A08Cu;
    {
        const bool branch_taken_0x12a08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A08Cu;
        // 0x12a090: 0x2659825  or          $s3, $s3, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a08c) {
            ctx->pc = 0x12A674u;
            goto label_12a674;
        }
    }
    ctx->pc = 0x12A094u;
    // 0x12a094: 0x0  nop
    ctx->pc = 0x12a094u;
    // NOP
label_12a098:
    // 0x12a098: 0x13103c  dsll32      $v0, $s3, 0
    ctx->pc = 0x12a098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
    // 0x12a09c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x12a09cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x12a0a0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x12a0a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x12a0a4: 0x10400174  beqz        $v0, . + 4 + (0x174 << 2)
    ctx->pc = 0x12A0A4u;
    {
        const bool branch_taken_0x12a0a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A0A4u;
        // 0x12a0a8: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a0a4) {
            ctx->pc = 0x12A678u;
            goto label_12a678;
        }
    }
    ctx->pc = 0x12A0ACu;
    // 0x12a0ac: 0x16a0ffae  bnez        $s5, . + 4 + (-0x52 << 2)
    ctx->pc = 0x12A0ACu;
    {
        const bool branch_taken_0x12a0ac = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a0ac) {
            ctx->pc = 0x129F68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129f68;
        }
    }
    ctx->pc = 0x12A0B4u;
    // 0x12a0b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12a0b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a0b8: 0xc04bda0  jal         func_12F680
    ctx->pc = 0x12A0B8u;
    SET_GPR_U32(ctx, 31, 0x12A0C0u);
    ctx->pc = 0x12F680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F680u, 0x12A0B8u, 0x12A0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A0C0u;
label_12a0c0:
    // 0x12a0c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12a0c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a0c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12a0c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a0c8: 0xc048ca6  jal         func_123298
    ctx->pc = 0x12A0C8u;
    SET_GPR_U32(ctx, 31, 0x12A0D0u);
    ctx->pc = 0x123298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123298u, 0x12A0C8u, 0x12A0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A0D0u;
label_12a0d0:
    // 0x12a0d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12a0d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a0d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12a0d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a0d8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12a0d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a0dc: 0xc048db2  jal         func_1236C8
    ctx->pc = 0x12A0DCu;
    SET_GPR_U32(ctx, 31, 0x12A0E4u);
    ctx->pc = 0x1236C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1236C8u, 0x12A0DCu, 0x12A0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A0E4u;
label_12a0e4:
    // 0x12a0e4: 0x1040ff98  beqz        $v0, . + 4 + (-0x68 << 2)
    ctx->pc = 0x12A0E4u;
    {
        const bool branch_taken_0x12a0e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A0E4u;
        // 0x12a0e8: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a0e4) {
            ctx->pc = 0x129F48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129f48;
        }
    }
    ctx->pc = 0x12A0ECu;
    // 0x12a0ec: 0x10000162  b           . + 4 + (0x162 << 2)
    ctx->pc = 0x12A0ECu;
    {
        const bool branch_taken_0x12a0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a0ec) {
            ctx->pc = 0x12A678u;
            goto label_12a678;
        }
    }
    ctx->pc = 0x12A0F4u;
    // 0x12a0f4: 0x0  nop
    ctx->pc = 0x12a0f4u;
    // NOP
label_12a0f8:
    // 0x12a0f8: 0xc04be9c  jal         func_12FA70
    ctx->pc = 0x12A0F8u;
    SET_GPR_U32(ctx, 31, 0x12A100u);
    ctx->pc = 0x12A0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A0F8u;
    // 0x12a0fc: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FA70u, 0x12A0F8u, 0x12A100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A100u;
label_12a100:
    // 0x12a100: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x12a100u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x12a104: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x12a104u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x12a108: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12a108u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a10c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12a10cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a110: 0xc048db2  jal         func_1236C8
    ctx->pc = 0x12A110u;
    SET_GPR_U32(ctx, 31, 0x12A118u);
    ctx->pc = 0x1236C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1236C8u, 0x12A110u, 0x12A118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A118u;
label_12a118:
    // 0x12a118: 0x1c40002f  bgtz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x12A118u;
    {
        const bool branch_taken_0x12a118 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x12a118) {
            ctx->pc = 0x12A1D8u;
            goto label_12a1d8;
        }
    }
    ctx->pc = 0x12A120u;
    // 0x12a120: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x12A120u;
    {
        const bool branch_taken_0x12a120 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a120) {
            ctx->pc = 0x12A140u;
            goto label_12a140;
        }
    }
    ctx->pc = 0x12A128u;
    // 0x12a128: 0x3410ffc0  ori         $s0, $zero, 0xFFC0
    ctx->pc = 0x12a128u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x12a12c: 0x1083bc  dsll32      $s0, $s0, 14
    ctx->pc = 0x12a12cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
    // 0x12a130: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x12a130u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a134: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x12A134u;
    {
        const bool branch_taken_0x12a134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a134) {
            ctx->pc = 0x12A228u;
            goto label_12a228;
        }
    }
    ctx->pc = 0x12A13Cu;
    // 0x12a13c: 0x0  nop
    ctx->pc = 0x12a13cu;
    // NOP
label_12a140:
    // 0x12a140: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12a140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12a144: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x12a144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x12a148: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x12a148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
    // 0x12a14c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x12A14Cu;
    {
        const bool branch_taken_0x12a14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A14Cu;
        // 0x12a150: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a14c) {
            ctx->pc = 0x12A178u;
            goto label_12a178;
        }
    }
    ctx->pc = 0x12A154u;
    // 0x12a154: 0x1262ff7d  beq         $s3, $v0, . + 4 + (-0x83 << 2)
    ctx->pc = 0x12A154u;
    {
        const bool branch_taken_0x12a154 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x12A158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A154u;
        // 0x12a158: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a154) {
            ctx->pc = 0x129F4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129f4c;
        }
    }
    ctx->pc = 0x12A15Cu;
    // 0x12a15c: 0x3410ffc0  ori         $s0, $zero, 0xFFC0
    ctx->pc = 0x12a15cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x12a160: 0x1083bc  dsll32      $s0, $s0, 14
    ctx->pc = 0x12a160u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
    // 0x12a164: 0x3411bff0  ori         $s1, $zero, 0xBFF0
    ctx->pc = 0x12a164u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49136);
    // 0x12a168: 0x118c3c  dsll32      $s1, $s1, 16
    ctx->pc = 0x12a168u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 16));
    // 0x12a16c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x12A16Cu;
    {
        const bool branch_taken_0x12a16c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a16c) {
            ctx->pc = 0x12A228u;
            goto label_12a228;
        }
    }
    ctx->pc = 0x12A174u;
    // 0x12a174: 0x0  nop
    ctx->pc = 0x12a174u;
    // NOP
label_12a178:
    // 0x12a178: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x12a178u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x12a17c: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x12a17cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x12a180: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12a180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a184: 0xc048db2  jal         func_1236C8
    ctx->pc = 0x12A184u;
    SET_GPR_U32(ctx, 31, 0x12A18Cu);
    ctx->pc = 0x1236C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1236C8u, 0x12A184u, 0x12A18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A18Cu;
label_12a18c:
    // 0x12a18c: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12A18Cu;
    {
        const bool branch_taken_0x12a18c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x12a18c) {
            ctx->pc = 0x12A1A8u;
            goto label_12a1a8;
        }
    }
    ctx->pc = 0x12A194u;
    // 0x12a194: 0x3410ff80  ori         $s0, $zero, 0xFF80
    ctx->pc = 0x12a194u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x12a198: 0x1083bc  dsll32      $s0, $s0, 14
    ctx->pc = 0x12a198u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
    // 0x12a19c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x12A19Cu;
    {
        const bool branch_taken_0x12a19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a19c) {
            ctx->pc = 0x12A1C0u;
            goto label_12a1c0;
        }
    }
    ctx->pc = 0x12A1A4u;
    // 0x12a1a4: 0x0  nop
    ctx->pc = 0x12a1a4u;
    // NOP
label_12a1a8:
    // 0x12a1a8: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x12a1a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x12a1ac: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x12a1acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x12a1b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12a1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a1b4: 0xc048cc0  jal         func_123300
    ctx->pc = 0x12A1B4u;
    SET_GPR_U32(ctx, 31, 0x12A1BCu);
    ctx->pc = 0x123300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123300u, 0x12A1B4u, 0x12A1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A1BCu;
label_12a1bc:
    // 0x12a1bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12a1bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12a1c0:
    // 0x12a1c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x12a1c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a1c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12a1c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a1c8: 0xc048ca6  jal         func_123298
    ctx->pc = 0x12A1C8u;
    SET_GPR_U32(ctx, 31, 0x12A1D0u);
    ctx->pc = 0x123298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123298u, 0x12A1C8u, 0x12A1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A1D0u;
label_12a1d0:
    // 0x12a1d0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x12A1D0u;
    {
        const bool branch_taken_0x12a1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a1d0) {
            ctx->pc = 0x12A224u;
            goto label_12a224;
        }
    }
    ctx->pc = 0x12A1D8u;
label_12a1d8:
    // 0x12a1d8: 0x3412ff80  ori         $s2, $zero, 0xFF80
    ctx->pc = 0x12a1d8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x12a1dc: 0x1293bc  dsll32      $s2, $s2, 14
    ctx->pc = 0x12a1dcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 14));
    // 0x12a1e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12a1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a1e4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12a1e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a1e8: 0xc048cc0  jal         func_123300
    ctx->pc = 0x12A1E8u;
    SET_GPR_U32(ctx, 31, 0x12A1F0u);
    ctx->pc = 0x123300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123300u, 0x12A1E8u, 0x12A1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A1F0u;
label_12a1f0:
    // 0x12a1f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12a1f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a1f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12a1f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a1f8: 0x16a00006  bnez        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x12A1F8u;
    {
        const bool branch_taken_0x12a1f8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a1f8) {
            ctx->pc = 0x12A214u;
            goto label_12a214;
        }
    }
    ctx->pc = 0x12A200u;
    // 0x12a200: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x12a200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a204: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12a204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a208: 0xc048ca6  jal         func_123298
    ctx->pc = 0x12A208u;
    SET_GPR_U32(ctx, 31, 0x12A210u);
    ctx->pc = 0x123298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123298u, 0x12A208u, 0x12A210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A210u;
label_12a210:
    // 0x12a210: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12a210u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12a214:
    // 0x12a214: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12a214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a218: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12a218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a21c: 0xc048c90  jal         func_123240
    ctx->pc = 0x12A21Cu;
    SET_GPR_U32(ctx, 31, 0x12A224u);
    ctx->pc = 0x123240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123240u, 0x12A21Cu, 0x12A224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A224u;
label_12a224:
    // 0x12a224: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12a224u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12a228:
    // 0x12a228: 0x13183f  dsra32      $v1, $s3, 0
    ctx->pc = 0x12a228u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x12a22c: 0x3c177ff0  lui         $s7, 0x7FF0
    ctx->pc = 0x12a22cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)32752 << 16));
    // 0x12a230: 0x772024  and         $a0, $v1, $s7
    ctx->pc = 0x12a230u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 23));
    // 0x12a234: 0x3c027fe0  lui         $v0, 0x7FE0
    ctx->pc = 0x12a234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32736 << 16));
    // 0x12a238: 0x14820031  bne         $a0, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x12A238u;
    {
        const bool branch_taken_0x12a238 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x12A23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A238u;
        // 0x12a23c: 0xafa40020  sw          $a0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a238) {
            ctx->pc = 0x12A300u;
            goto label_12a300;
        }
    }
    ctx->pc = 0x12A240u;
    // 0x12a240: 0x3c02fcb0  lui         $v0, 0xFCB0
    ctx->pc = 0x12a240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64688 << 16));
    // 0x12a244: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x12a244u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x12a248: 0x12903e  dsrl32      $s2, $s2, 0
    ctx->pc = 0x12a248u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (32 + 0));
    // 0x12a24c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x12a24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12a250: 0x260a02d  daddu       $s4, $s3, $zero
    ctx->pc = 0x12a250u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a254: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12a254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12a258: 0x2729824  and         $s3, $s3, $s2
    ctx->pc = 0x12a258u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 18));
    // 0x12a25c: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x12a25cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x12a260: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12a260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a264: 0xc04bda0  jal         func_12F680
    ctx->pc = 0x12A264u;
    SET_GPR_U32(ctx, 31, 0x12A26Cu);
    ctx->pc = 0x12F680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F680u, 0x12A264u, 0x12A26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A26Cu;
label_12a26c:
    // 0x12a26c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12a26cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a270: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12a270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a274: 0xc048cc0  jal         func_123300
    ctx->pc = 0x12A274u;
    SET_GPR_U32(ctx, 31, 0x12A27Cu);
    ctx->pc = 0x123300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123300u, 0x12A274u, 0x12A27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A27Cu;
label_12a27c:
    // 0x12a27c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12a27cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a280: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12a280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a284: 0xc048c90  jal         func_123240
    ctx->pc = 0x12A284u;
    SET_GPR_U32(ctx, 31, 0x12A28Cu);
    ctx->pc = 0x123240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123240u, 0x12A284u, 0x12A28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A28Cu;
label_12a28c:
    // 0x12a28c: 0x3c037c9f  lui         $v1, 0x7C9F
    ctx->pc = 0x12a28cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31903 << 16));
    // 0x12a290: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12a290u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a294: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x12a294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x12a298: 0x13203f  dsra32      $a0, $s3, 0
    ctx->pc = 0x12a298u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x12a29c: 0x971024  and         $v0, $a0, $s7
    ctx->pc = 0x12a29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 23));
    // 0x12a2a0: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x12a2a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x12a2a4: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x12A2A4u;
    {
        const bool branch_taken_0x12a2a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A2A4u;
        // 0x12a2a8: 0x2729824  and         $s3, $s3, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a2a4) {
            ctx->pc = 0x12A2E8u;
            goto label_12a2e8;
        }
    }
    ctx->pc = 0x12A2ACu;
    // 0x12a2ac: 0x3c027fef  lui         $v0, 0x7FEF
    ctx->pc = 0x12a2acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32751 << 16));
    // 0x12a2b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x12a2b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x12a2b4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x12a2b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x12a2b8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x12a2b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x12a2bc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x12a2bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x12a2c0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x12a2c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x12a2c4: 0x1282fe95  beq         $s4, $v0, . + 4 + (-0x16B << 2)
    ctx->pc = 0x12A2C4u;
    {
        const bool branch_taken_0x12a2c4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x12A2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A2C4u;
        // 0x12a2c8: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a2c4) {
            ctx->pc = 0x129D1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129d1c;
        }
    }
    ctx->pc = 0x12A2CCu;
    // 0x12a2cc: 0x3c027fef  lui         $v0, 0x7FEF
    ctx->pc = 0x12a2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32751 << 16));
    // 0x12a2d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x12a2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x12a2d4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12a2d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12a2d8: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x12a2d8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x12a2dc: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x12A2DCu;
    {
        const bool branch_taken_0x12a2dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A2DCu;
        // 0x12a2e0: 0x2729825  or          $s3, $s3, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a2dc) {
            ctx->pc = 0x12A46Cu;
            goto label_12a46c;
        }
    }
    ctx->pc = 0x12A2E4u;
    // 0x12a2e4: 0x0  nop
    ctx->pc = 0x12a2e4u;
    // NOP
label_12a2e8:
    // 0x12a2e8: 0x3c020350  lui         $v0, 0x350
    ctx->pc = 0x12a2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)848 << 16));
    // 0x12a2ec: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x12a2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x12a2f0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12a2f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12a2f4: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x12A2F4u;
    {
        const bool branch_taken_0x12a2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A2F4u;
        // 0x12a2f8: 0x2629825  or          $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a2f4) {
            ctx->pc = 0x12A3A8u;
            goto label_12a3a8;
        }
    }
    ctx->pc = 0x12A2FCu;
    // 0x12a2fc: 0x0  nop
    ctx->pc = 0x12a2fcu;
    // NOP
label_12a300:
    // 0x12a300: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x12a300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12a304: 0x3c020340  lui         $v0, 0x340
    ctx->pc = 0x12a304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)832 << 16));
    // 0x12a308: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x12a308u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x12a30c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x12A30Cu;
    {
        const bool branch_taken_0x12a30c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a30c) {
            ctx->pc = 0x12A378u;
            goto label_12a378;
        }
    }
    ctx->pc = 0x12A314u;
    // 0x12a314: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x12a314u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x12a318: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x12a318u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x12a31c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12a31cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a320: 0xc048db2  jal         func_1236C8
    ctx->pc = 0x12A320u;
    SET_GPR_U32(ctx, 31, 0x12A328u);
    ctx->pc = 0x1236C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1236C8u, 0x12A320u, 0x12A328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A328u;
label_12a328:
    // 0x12a328: 0x4400013  bltz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x12A328u;
    {
        const bool branch_taken_0x12a328 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x12a328) {
            ctx->pc = 0x12A378u;
            goto label_12a378;
        }
    }
    ctx->pc = 0x12A330u;
    // 0x12a330: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x12a330u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x12a334: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x12a334u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x12a338: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12a338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a33c: 0xc048c90  jal         func_123240
    ctx->pc = 0x12A33Cu;
    SET_GPR_U32(ctx, 31, 0x12A344u);
    ctx->pc = 0x123240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123240u, 0x12A33Cu, 0x12A344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A344u;
label_12a344:
    // 0x12a344: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12a344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a348: 0xc04c02c  jal         func_1300B0
    ctx->pc = 0x12A348u;
    SET_GPR_U32(ctx, 31, 0x12A350u);
    ctx->pc = 0x1300B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1300B0u, 0x12A348u, 0x12A350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A350u;
label_12a350:
    // 0x12a350: 0xc048dc6  jal         func_123718
    ctx->pc = 0x12A350u;
    SET_GPR_U32(ctx, 31, 0x12A358u);
    ctx->pc = 0x12A354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A350u;
    // 0x12a354: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123718u, 0x12A350u, 0x12A358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A358u;
label_12a358:
    // 0x12a358: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12a358u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a35c: 0x16a00006  bnez        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x12A35Cu;
    {
        const bool branch_taken_0x12a35c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a35c) {
            ctx->pc = 0x12A378u;
            goto label_12a378;
        }
    }
    ctx->pc = 0x12A364u;
    // 0x12a364: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12a364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a368: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x12a368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a36c: 0xc048ca6  jal         func_123298
    ctx->pc = 0x12A36Cu;
    SET_GPR_U32(ctx, 31, 0x12A374u);
    ctx->pc = 0x123298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123298u, 0x12A36Cu, 0x12A374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A374u;
label_12a374:
    // 0x12a374: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12a374u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12a378:
    // 0x12a378: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12a378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a37c: 0xc04bda0  jal         func_12F680
    ctx->pc = 0x12A37Cu;
    SET_GPR_U32(ctx, 31, 0x12A384u);
    ctx->pc = 0x12F680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F680u, 0x12A37Cu, 0x12A384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A384u;
label_12a384:
    // 0x12a384: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12a384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a388: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12a388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a38c: 0xc048cc0  jal         func_123300
    ctx->pc = 0x12A38Cu;
    SET_GPR_U32(ctx, 31, 0x12A394u);
    ctx->pc = 0x123300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123300u, 0x12A38Cu, 0x12A394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A394u;
label_12a394:
    // 0x12a394: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12a394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a398: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12a398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a39c: 0xc048c90  jal         func_123240
    ctx->pc = 0x12A39Cu;
    SET_GPR_U32(ctx, 31, 0x12A3A4u);
    ctx->pc = 0x123240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123240u, 0x12A39Cu, 0x12A3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A3A4u;
label_12a3a4:
    // 0x12a3a4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12a3a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12a3a8:
    // 0x12a3a8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x12a3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12a3ac: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x12a3acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x12a3b0: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x12a3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x12a3b4: 0x13203f  dsra32      $a0, $s3, 0
    ctx->pc = 0x12a3b4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x12a3b8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x12a3b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x12a3bc: 0x838824  and         $s1, $a0, $v1
    ctx->pc = 0x12a3bcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x12a3c0: 0x1451002b  bne         $v0, $s1, . + 4 + (0x2B << 2)
    ctx->pc = 0x12A3C0u;
    {
        const bool branch_taken_0x12a3c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x12A3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A3C0u;
        // 0x12a3c4: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a3c0) {
            ctx->pc = 0x12A470u;
            goto label_12a470;
        }
    }
    ctx->pc = 0x12A3C8u;
    // 0x12a3c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12a3c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a3cc: 0xc04c00e  jal         func_130038
    ctx->pc = 0x12A3CCu;
    SET_GPR_U32(ctx, 31, 0x12A3D4u);
    ctx->pc = 0x130038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130038u, 0x12A3CCu, 0x12A3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A3D4u;
label_12a3d4:
    // 0x12a3d4: 0xc049c20  jal         func_127080
    ctx->pc = 0x12A3D4u;
    SET_GPR_U32(ctx, 31, 0x12A3DCu);
    ctx->pc = 0x12A3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A3D4u;
    // 0x12a3d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127080u, 0x12A3D4u, 0x12A3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A3DCu;
label_12a3dc:
    // 0x12a3dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12a3dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a3e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12a3e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a3e4: 0xc048ca6  jal         func_123298
    ctx->pc = 0x12A3E4u;
    SET_GPR_U32(ctx, 31, 0x12A3ECu);
    ctx->pc = 0x123298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123298u, 0x12A3E4u, 0x12A3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A3ECu;
label_12a3ec:
    // 0x12a3ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12a3ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a3f0: 0x16a00006  bnez        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x12A3F0u;
    {
        const bool branch_taken_0x12a3f0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a3f0) {
            ctx->pc = 0x12A40Cu;
            goto label_12a40c;
        }
    }
    ctx->pc = 0x12A3F8u;
    // 0x12a3f8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12a3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12a3fc: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x12a3fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x12a400: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x12a400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
    // 0x12a404: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x12A404u;
    {
        const bool branch_taken_0x12a404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a404) {
            ctx->pc = 0x12A450u;
            goto label_12a450;
        }
    }
    ctx->pc = 0x12A40Cu;
label_12a40c:
    // 0x12a40c: 0x3c010015  lui         $at, 0x15
    ctx->pc = 0x12a40cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)21 << 16));
    // 0x12a410: 0xdc25f6b8  ld          $a1, -0x948($at)
    ctx->pc = 0x12a410u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x14F6B8u));
    // 0x12a414: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12a414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a418: 0xc048db2  jal         func_1236C8
    ctx->pc = 0x12A418u;
    SET_GPR_U32(ctx, 31, 0x12A420u);
    ctx->pc = 0x1236C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1236C8u, 0x12A418u, 0x12A420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A420u;
label_12a420:
    // 0x12a420: 0x4400095  bltz        $v0, . + 4 + (0x95 << 2)
    ctx->pc = 0x12A420u;
    {
        const bool branch_taken_0x12a420 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x12A424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A420u;
        // 0x12a424: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a420) {
            ctx->pc = 0x12A678u;
            goto label_12a678;
        }
    }
    ctx->pc = 0x12A428u;
    // 0x12a428: 0x3c010015  lui         $at, 0x15
    ctx->pc = 0x12a428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)21 << 16));
    // 0x12a42c: 0xdc25f6c0  ld          $a1, -0x940($at)
    ctx->pc = 0x12a42cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x14F6C0u));
    // 0x12a430: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12a430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a434: 0xc048db2  jal         func_1236C8
    ctx->pc = 0x12A434u;
    SET_GPR_U32(ctx, 31, 0x12A43Cu);
    ctx->pc = 0x1236C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1236C8u, 0x12A434u, 0x12A43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A43Cu;
label_12a43c:
    // 0x12a43c: 0x1c40008e  bgtz        $v0, . + 4 + (0x8E << 2)
    ctx->pc = 0x12A43Cu;
    {
        const bool branch_taken_0x12a43c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x12A440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A43Cu;
        // 0x12a440: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a43c) {
            ctx->pc = 0x12A678u;
            goto label_12a678;
        }
    }
    ctx->pc = 0x12A444u;
    // 0x12a444: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x12A444u;
    {
        const bool branch_taken_0x12a444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a444) {
            ctx->pc = 0x12A470u;
            goto label_12a470;
        }
    }
    ctx->pc = 0x12A44Cu;
    // 0x12a44c: 0x0  nop
    ctx->pc = 0x12a44cu;
    // NOP
label_12a450:
    // 0x12a450: 0x3c010015  lui         $at, 0x15
    ctx->pc = 0x12a450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)21 << 16));
    // 0x12a454: 0xdc25f6c8  ld          $a1, -0x938($at)
    ctx->pc = 0x12a454u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x14F6C8u));
    // 0x12a458: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12a458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a45c: 0xc048db2  jal         func_1236C8
    ctx->pc = 0x12A45Cu;
    SET_GPR_U32(ctx, 31, 0x12A464u);
    ctx->pc = 0x1236C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1236C8u, 0x12A45Cu, 0x12A464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A464u;
label_12a464:
    // 0x12a464: 0x4400084  bltz        $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x12A464u;
    {
        const bool branch_taken_0x12a464 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x12A468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A464u;
        // 0x12a468: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a464) {
            ctx->pc = 0x12A678u;
            goto label_12a678;
        }
    }
    ctx->pc = 0x12A46Cu;
label_12a46c:
    // 0x12a46c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x12a46cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_12a470:
    // 0x12a470: 0xc04bb10  jal         func_12EC40
    ctx->pc = 0x12A470u;
    SET_GPR_U32(ctx, 31, 0x12A478u);
    ctx->pc = 0x12A474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A470u;
    // 0x12a474: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EC40u, 0x12A470u, 0x12A478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A478u;
label_12a478:
    // 0x12a478: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x12a478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a47c: 0xc04bb10  jal         func_12EC40
    ctx->pc = 0x12A47Cu;
    SET_GPR_U32(ctx, 31, 0x12A484u);
    ctx->pc = 0x12A480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A47Cu;
    // 0x12a480: 0x8fa50034  lw          $a1, 0x34($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EC40u, 0x12A47Cu, 0x12A484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A484u;
label_12a484:
    // 0x12a484: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x12a484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a488: 0xc04bb10  jal         func_12EC40
    ctx->pc = 0x12A488u;
    SET_GPR_U32(ctx, 31, 0x12A490u);
    ctx->pc = 0x12A48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A488u;
    // 0x12a48c: 0x8fa5003c  lw          $a1, 0x3C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EC40u, 0x12A488u, 0x12A490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A490u;
label_12a490:
    // 0x12a490: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x12a490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a494: 0xc04bb10  jal         func_12EC40
    ctx->pc = 0x12A494u;
    SET_GPR_U32(ctx, 31, 0x12A49Cu);
    ctx->pc = 0x12A498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A494u;
    // 0x12a498: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EC40u, 0x12A494u, 0x12A49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A49Cu;
label_12a49c:
    // 0x12a49c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x12a49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12a4a0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x12a4a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a4a4: 0xc04bae6  jal         func_12EB98
    ctx->pc = 0x12A4A4u;
    SET_GPR_U32(ctx, 31, 0x12A4ACu);
    ctx->pc = 0x12A4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A4A4u;
    // 0x12a4a8: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB98u, 0x12A4A4u, 0x12A4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A4ACu;
label_12a4ac:
    // 0x12a4ac: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x12a4acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x12a4b0: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x12a4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x12a4b4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x12a4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12a4b8: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x12a4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x12a4bc: 0x8c660010  lw          $a2, 0x10($v1)
    ctx->pc = 0x12a4bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x12a4c0: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x12a4c0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x12a4c4: 0xc04a125  jal         func_128494
    ctx->pc = 0x12A4C4u;
    SET_GPR_U32(ctx, 31, 0x12A4CCu);
    ctx->pc = 0x12A4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A4C4u;
    // 0x12a4c8: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128494u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128494u, 0x12A4C4u, 0x12A4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A4CCu;
label_12a4cc:
    // 0x12a4cc: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x12a4ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a4d0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12a4d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a4d4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x12a4d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a4d8: 0xc04be3a  jal         func_12F8E8
    ctx->pc = 0x12A4D8u;
    SET_GPR_U32(ctx, 31, 0x12A4E0u);
    ctx->pc = 0x12A4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A4D8u;
    // 0x12a4dc: 0x27a70004  addiu       $a3, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F8E8u, 0x12A4D8u, 0x12A4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A4E0u;
label_12a4e0:
    // 0x12a4e0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x12a4e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a4e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12a4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12a4e8: 0xc04bbfa  jal         func_12EFE8
    ctx->pc = 0x12A4E8u;
    SET_GPR_U32(ctx, 31, 0x12A4F0u);
    ctx->pc = 0x12A4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A4E8u;
    // 0x12a4ec: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EFE8u, 0x12A4E8u, 0x12A4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A4F0u;
label_12a4f0:
    // 0x12a4f0: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x12a4f0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12a4f4: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12A4F4u;
    {
        const bool branch_taken_0x12a4f4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x12A4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A4F4u;
        // 0x12a4f8: 0xafa2003c  sw          $v0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a4f4) {
            ctx->pc = 0x12A510u;
            goto label_12a510;
        }
    }
    ctx->pc = 0x12A4FCu;
    // 0x12a4fc: 0x8fb10048  lw          $s1, 0x48($sp)
    ctx->pc = 0x12a4fcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a500: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12a500u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a504: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x12a504u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a508: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x12A508u;
    {
        const bool branch_taken_0x12a508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A508u;
        // 0x12a50c: 0x220b82d  daddu       $s7, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a508) {
            ctx->pc = 0x12A524u;
            goto label_12a524;
        }
    }
    ctx->pc = 0x12A510u;
label_12a510:
    // 0x12a510: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12a510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a514: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x12a514u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a518: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x12a518u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a51c: 0x29023  negu        $s2, $v0
    ctx->pc = 0x12a51cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x12a520: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x12a520u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12a524:
    // 0x12a524: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12a524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12a528: 0x4420002  bltzl       $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x12A528u;
    {
        const bool branch_taken_0x12a528 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x12a528) {
            ctx->pc = 0x12A52Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12A528u;
            // 0x12a52c: 0x2228823  subu        $s1, $s1, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12A534u;
            goto label_12a534;
        }
    }
    ctx->pc = 0x12A530u;
    // 0x12a530: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x12a530u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_12a534:
    // 0x12a534: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x12a534u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x12a538: 0x24540433  addiu       $s4, $v0, 0x433
    ctx->pc = 0x12a538u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 1075));
    // 0x12a53c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x12a53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x12a540: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x12a540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12a544: 0x2883fc02  slti        $v1, $a0, -0x3FE
    ctx->pc = 0x12a544u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294966274) ? 1 : 0);
    // 0x12a548: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12A548u;
    {
        const bool branch_taken_0x12a548 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A548u;
        // 0x12a54c: 0x240a82d  daddu       $s5, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a548) {
            ctx->pc = 0x12A558u;
            goto label_12a558;
        }
    }
    ctx->pc = 0x12A550u;
    // 0x12a550: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x12a550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x12a554: 0x45a023  subu        $s4, $v0, $a1
    ctx->pc = 0x12a554u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_12a558:
    // 0x12a558: 0x2342021  addu        $a0, $s1, $s4
    ctx->pc = 0x12a558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x12a55c: 0x2549021  addu        $s2, $s2, $s4
    ctx->pc = 0x12a55cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x12a560: 0x244182a  slt         $v1, $s2, $a0
    ctx->pc = 0x12a560u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x12a564: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12a564u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a568: 0x243200b  movn        $a0, $s2, $v1
    ctx->pc = 0x12a568u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 18));
    // 0x12a56c: 0x2a4102a  slt         $v0, $s5, $a0
    ctx->pc = 0x12a56cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x12a570: 0x2a2200b  movn        $a0, $s5, $v0
    ctx->pc = 0x12a570u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 21));
    // 0x12a574: 0x18800004  blez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12A574u;
    {
        const bool branch_taken_0x12a574 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x12a574) {
            ctx->pc = 0x12A588u;
            goto label_12a588;
        }
    }
    ctx->pc = 0x12A57Cu;
    // 0x12a57c: 0x2a4a823  subu        $s5, $s5, $a0
    ctx->pc = 0x12a57cu;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x12a580: 0x2449023  subu        $s2, $s2, $a0
    ctx->pc = 0x12a580u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x12a584: 0x2248823  subu        $s1, $s1, $a0
    ctx->pc = 0x12a584u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_12a588:
    // 0x12a588: 0x18c0000d  blez        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x12A588u;
    {
        const bool branch_taken_0x12a588 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x12A58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A588u;
        // 0x12a58c: 0x8fa5003c  lw          $a1, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a588) {
            ctx->pc = 0x12A5C0u;
            goto label_12a5c0;
        }
    }
    ctx->pc = 0x12A590u;
    // 0x12a590: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x12A590u;
    SET_GPR_U32(ctx, 31, 0x12A598u);
    ctx->pc = 0x12A594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A590u;
    // 0x12a594: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F230u, 0x12A590u, 0x12A598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A598u;
label_12a598:
    // 0x12a598: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x12a598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a59c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x12a59cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12a5a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12a5a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a5a4: 0xc04bc08  jal         func_12F020
    ctx->pc = 0x12A5A4u;
    SET_GPR_U32(ctx, 31, 0x12A5ACu);
    ctx->pc = 0x12A5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A5A4u;
    // 0x12a5a8: 0xafa2003c  sw          $v0, 0x3C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F020u, 0x12A5A4u, 0x12A5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A5ACu;
label_12a5ac:
    // 0x12a5ac: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x12a5acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a5b0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x12a5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12a5b4: 0xc04bb10  jal         func_12EC40
    ctx->pc = 0x12A5B4u;
    SET_GPR_U32(ctx, 31, 0x12A5BCu);
    ctx->pc = 0x12A5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A5B4u;
    // 0x12a5b8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EC40u, 0x12A5B4u, 0x12A5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A5BCu;
label_12a5bc:
    // 0x12a5bc: 0xafb00030  sw          $s0, 0x30($sp)
    ctx->pc = 0x12a5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 16));
label_12a5c0:
    // 0x12a5c0: 0x1a400005  blez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x12A5C0u;
    {
        const bool branch_taken_0x12a5c0 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x12A5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A5C0u;
        // 0x12a5c4: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a5c0) {
            ctx->pc = 0x12A5D8u;
            goto label_12a5d8;
        }
    }
    ctx->pc = 0x12A5C8u;
    // 0x12a5c8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x12a5c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a5cc: 0xc04bccc  jal         func_12F330
    ctx->pc = 0x12A5CCu;
    SET_GPR_U32(ctx, 31, 0x12A5D4u);
    ctx->pc = 0x12A5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A5CCu;
    // 0x12a5d0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F330u, 0x12A5CCu, 0x12A5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A5D4u;
label_12a5d4:
    // 0x12a5d4: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x12a5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_12a5d8:
    // 0x12a5d8: 0x1ae00005  blez        $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x12A5D8u;
    {
        const bool branch_taken_0x12a5d8 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x12A5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A5D8u;
        // 0x12a5dc: 0x8fa50034  lw          $a1, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a5d8) {
            ctx->pc = 0x12A5F0u;
            goto label_12a5f0;
        }
    }
    ctx->pc = 0x12A5E0u;
    // 0x12a5e0: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x12a5e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a5e4: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x12A5E4u;
    SET_GPR_U32(ctx, 31, 0x12A5ECu);
    ctx->pc = 0x12A5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A5E4u;
    // 0x12a5e8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F230u, 0x12A5E4u, 0x12A5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A5ECu;
label_12a5ec:
    // 0x12a5ec: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x12a5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_12a5f0:
    // 0x12a5f0: 0x1a200005  blez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x12A5F0u;
    {
        const bool branch_taken_0x12a5f0 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x12A5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A5F0u;
        // 0x12a5f4: 0x8fa50034  lw          $a1, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a5f0) {
            ctx->pc = 0x12A608u;
            goto label_12a608;
        }
    }
    ctx->pc = 0x12A5F8u;
    // 0x12a5f8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x12a5f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a5fc: 0xc04bccc  jal         func_12F330
    ctx->pc = 0x12A5FCu;
    SET_GPR_U32(ctx, 31, 0x12A604u);
    ctx->pc = 0x12A600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A5FCu;
    // 0x12a600: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F330u, 0x12A5FCu, 0x12A604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A604u;
label_12a604:
    // 0x12a604: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x12a604u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_12a608:
    // 0x12a608: 0x1aa00007  blez        $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x12A608u;
    {
        const bool branch_taken_0x12a608 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x12A60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A608u;
        // 0x12a60c: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a608) {
            ctx->pc = 0x12A628u;
            goto label_12a628;
        }
    }
    ctx->pc = 0x12A610u;
    // 0x12a610: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x12a610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x12a614: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x12a614u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a618: 0xc04bccc  jal         func_12F330
    ctx->pc = 0x12A618u;
    SET_GPR_U32(ctx, 31, 0x12A620u);
    ctx->pc = 0x12A61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A618u;
    // 0x12a61c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F330u, 0x12A618u, 0x12A620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A620u;
label_12a620:
    // 0x12a620: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x12a620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x12a624: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x12a624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_12a628:
    // 0x12a628: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x12a628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a62c: 0xc04bd3c  jal         func_12F4F0
    ctx->pc = 0x12A62Cu;
    SET_GPR_U32(ctx, 31, 0x12A634u);
    ctx->pc = 0x12A630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A62Cu;
    // 0x12a630: 0x8fa60034  lw          $a2, 0x34($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F4F0u, 0x12A62Cu, 0x12A634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A634u;
label_12a634:
    // 0x12a634: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x12a634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x12a638: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12a638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a63c: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x12a63cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x12a640: 0x8c55000c  lw          $s5, 0xC($v0)
    ctx->pc = 0x12a640u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x12a644: 0xc04bd22  jal         func_12F488
    ctx->pc = 0x12A644u;
    SET_GPR_U32(ctx, 31, 0x12A64Cu);
    ctx->pc = 0x12A648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A644u;
    // 0x12a648: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F488u, 0x12A644u, 0x12A64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A64Cu;
label_12a64c:
    // 0x12a64c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12a64cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a650: 0x481fe65  bgez        $a0, . + 4 + (-0x19B << 2)
    ctx->pc = 0x12A650u;
    {
        const bool branch_taken_0x12a650 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x12a650) {
            ctx->pc = 0x129FE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129fe8;
        }
    }
    ctx->pc = 0x12A658u;
    // 0x12a658: 0x16a00007  bnez        $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x12A658u;
    {
        const bool branch_taken_0x12a658 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A658u;
        // 0x12a65c: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a658) {
            ctx->pc = 0x12A678u;
            goto label_12a678;
        }
    }
    ctx->pc = 0x12A660u;
    // 0x12a660: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12a660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12a664: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x12a664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x12a668: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x12a668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
    // 0x12a66c: 0x1040fe52  beqz        $v0, . + 4 + (-0x1AE << 2)
    ctx->pc = 0x12A66Cu;
    {
        const bool branch_taken_0x12a66c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A66Cu;
        // 0x12a670: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a66c) {
            ctx->pc = 0x129FB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129fb8;
        }
    }
    ctx->pc = 0x12A674u;
label_12a674:
    // 0x12a674: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x12a674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_12a678:
    // 0x12a678: 0xc04bb10  jal         func_12EC40
    ctx->pc = 0x12A678u;
    SET_GPR_U32(ctx, 31, 0x12A680u);
    ctx->pc = 0x12A67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A678u;
    // 0x12a67c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EC40u, 0x12A678u, 0x12A680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A680u;
label_12a680:
    // 0x12a680: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x12a680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a684: 0xc04bb10  jal         func_12EC40
    ctx->pc = 0x12A684u;
    SET_GPR_U32(ctx, 31, 0x12A68Cu);
    ctx->pc = 0x12A688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A684u;
    // 0x12a688: 0x8fa50034  lw          $a1, 0x34($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EC40u, 0x12A684u, 0x12A68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A68Cu;
label_12a68c:
    // 0x12a68c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x12a68cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a690: 0xc04bb10  jal         func_12EC40
    ctx->pc = 0x12A690u;
    SET_GPR_U32(ctx, 31, 0x12A698u);
    ctx->pc = 0x12A694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A690u;
    // 0x12a694: 0x8fa5003c  lw          $a1, 0x3C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EC40u, 0x12A690u, 0x12A698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A698u;
label_12a698:
    // 0x12a698: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x12a698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a69c: 0xc04bb10  jal         func_12EC40
    ctx->pc = 0x12A69Cu;
    SET_GPR_U32(ctx, 31, 0x12A6A4u);
    ctx->pc = 0x12A6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A69Cu;
    // 0x12a6a0: 0x8fa50038  lw          $a1, 0x38($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EC40u, 0x12A69Cu, 0x12A6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A6A4u;
label_12a6a4:
    // 0x12a6a4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x12a6a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a6a8: 0xc04bb10  jal         func_12EC40
    ctx->pc = 0x12A6A8u;
    SET_GPR_U32(ctx, 31, 0x12A6B0u);
    ctx->pc = 0x12A6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A6A8u;
    // 0x12a6ac: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EC40u, 0x12A6A8u, 0x12A6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A6B0u;
label_12a6b0:
    // 0x12a6b0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x12a6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_12a6b4:
    // 0x12a6b4: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12A6B4u;
    {
        const bool branch_taken_0x12a6b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a6b4) {
            ctx->pc = 0x12A6B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12A6B4u;
            // 0x12a6b8: 0xac760000  sw          $s6, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12A6BCu;
            goto label_12a6bc;
        }
    }
    ctx->pc = 0x12A6BCu;
label_12a6bc:
    // 0x12a6bc: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x12a6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x12a6c0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x12a6c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a6c4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12A6C4u;
    {
        const bool branch_taken_0x12a6c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A6C4u;
        // 0x12a6c8: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a6c4) {
            ctx->pc = 0x12A6E0u;
            goto label_12a6e0;
        }
    }
    ctx->pc = 0x12A6CCu;
    // 0x12a6cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12a6ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a6d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x12a6d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a6d4: 0xc048ca6  jal         func_123298
    ctx->pc = 0x12A6D4u;
    SET_GPR_U32(ctx, 31, 0x12A6DCu);
    ctx->pc = 0x123298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123298u, 0x12A6D4u, 0x12A6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A6DCu;
label_12a6dc:
    // 0x12a6dc: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x12a6dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_12a6e0:
    // 0x12a6e0: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x12a6e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x12a6e4: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x12a6e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12a6e8: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x12a6e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12a6ec: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x12a6ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12a6f0: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x12a6f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12a6f4: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x12a6f4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x12a6f8: 0xdfb70088  ld          $s7, 0x88($sp)
    ctx->pc = 0x12a6f8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x12a6fc: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x12a6fcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12a700: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x12a700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12a704: 0x3e00008  jr          $ra
    ctx->pc = 0x12A704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A704u;
        // 0x12a708: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12A704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12A70Cu;
    // 0x12a70c: 0x0  nop
    ctx->pc = 0x12a70cu;
    // NOP
    ctx->pc = 0x12a710u;
}
