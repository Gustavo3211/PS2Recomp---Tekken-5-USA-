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

// Function: sub_002A12D0
// Address: 0x2a12d0 - 0x2a1640
void sub_002A12D0_0x2a12d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A12D0_0x2a12d0");
#endif

    switch (ctx->pc) {
        case 0x2a1308u: goto label_2a1308;
        case 0x2a1370u: goto label_2a1370;
        case 0x2a1394u: goto label_2a1394;
        case 0x2a13acu: goto label_2a13ac;
        case 0x2a13ecu: goto label_2a13ec;
        case 0x2a1420u: goto label_2a1420;
        case 0x2a1460u: goto label_2a1460;
        case 0x2a1478u: goto label_2a1478;
        case 0x2a14ccu: goto label_2a14cc;
        case 0x2a1560u: goto label_2a1560;
        case 0x2a1574u: goto label_2a1574;
        case 0x2a158cu: goto label_2a158c;
        case 0x2a15d0u: goto label_2a15d0;
        default: break;
    }

    ctx->pc = 0x2a12d0u;

    // 0x2a12d0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2a12d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2a12d4: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2a12d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2a12d8: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x2a12d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x2a12dc: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2a12dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2a12e0: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x2a12e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x2a12e4: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2a12e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2a12e8: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x2a12e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x2a12ec: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2a12ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2a12f0: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x2a12f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x2a12f4: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x2a12f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x2a12f8: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x2a12f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x2a12fc: 0x8c94016c  lw          $s4, 0x16C($a0)
    ctx->pc = 0x2a12fcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 364)));
    // 0x2a1300: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x2a1300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x2a1304: 0x0  nop
    ctx->pc = 0x2a1304u;
    // NOP
label_2a1308:
    // 0x2a1308: 0x82830020  lb          $v1, 0x20($s4)
    ctx->pc = 0x2a1308u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x2a130c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a130cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a1310: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A1310u;
    {
        const bool branch_taken_0x2a1310 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A1314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1310u;
        // 0x2a1314: 0x92840020  lbu         $a0, 0x20($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1310) {
            ctx->pc = 0x2A1330u;
            goto label_2a1330;
        }
    }
    ctx->pc = 0x2A1318u;
    // 0x2a1318: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a1318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a131c: 0x50620038  beql        $v1, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x2A131Cu;
    {
        const bool branch_taken_0x2a131c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a131c) {
            ctx->pc = 0x2A1320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A131Cu;
            // 0x2a1320: 0x8e860040  lw          $a2, 0x40($s4) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A1400u;
            goto label_2a1400;
        }
    }
    ctx->pc = 0x2A1324u;
    // 0x2a1324: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x2A1324u;
    {
        const bool branch_taken_0x2a1324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1324u;
        // 0x2a1328: 0x8fa40030  lw          $a0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1324) {
            ctx->pc = 0x2A15FCu;
            goto label_2a15fc;
        }
    }
    ctx->pc = 0x2A132Cu;
    // 0x2a132c: 0x0  nop
    ctx->pc = 0x2a132cu;
    // NOP
label_2a1330:
    // 0x2a1330: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2a1330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a1334: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2a1334u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2a1338: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2a1338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2a133c: 0x3c178080  lui         $s7, 0x8080
    ctx->pc = 0x2a133cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)32896 << 16));
    // 0x2a1340: 0x390c0  sll         $s2, $v1, 3
    ctx->pc = 0x2a1340u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2a1344: 0x3c168000  lui         $s6, 0x8000
    ctx->pc = 0x2a1344u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)32768 << 16));
    // 0x2a1348: 0x2484cb4c  addiu       $a0, $a0, -0x34B4
    ctx->pc = 0x2a1348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953804));
    // 0x2a134c: 0x2442cb48  addiu       $v0, $v0, -0x34B8
    ctx->pc = 0x2a134cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953800));
    // 0x2a1350: 0x244f021  addu        $fp, $s2, $a0
    ctx->pc = 0x2a1350u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x2a1354: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x2a1354u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2a1358: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2a1358u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a135c: 0x36f78080  ori         $s7, $s7, 0x8080
    ctx->pc = 0x2a135cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)32896);
    // 0x2a1360: 0x36d6a0ff  ori         $s6, $s6, 0xA0FF
    ctx->pc = 0x2a1360u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)41215);
    // 0x2a1364: 0x27b50020  addiu       $s5, $sp, 0x20
    ctx->pc = 0x2a1364u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a1368: 0x8e82003c  lw          $v0, 0x3C($s4)
    ctx->pc = 0x2a1368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
    // 0x2a136c: 0x0  nop
    ctx->pc = 0x2a136cu;
    // NOP
label_2a1370:
    // 0x2a1370: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x2a1370u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x2a1374: 0x26700001  addiu       $s0, $s3, 0x1
    ctx->pc = 0x2a1374u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2a1378: 0x24653f58  addiu       $a1, $v1, 0x3F58
    ctx->pc = 0x2a1378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16216));
    // 0x2a137c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a137cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1380: 0x501026  xor         $v0, $v0, $s0
    ctx->pc = 0x2a1380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 16));
    // 0x2a1384: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2a1384u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1388: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x2a1388u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a138c: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x2A138Cu;
    SET_GPR_U32(ctx, 31, 0x2A1394u);
    ctx->pc = 0x2A1390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A138Cu;
    // 0x2a1390: 0x2e2880b  movn        $s1, $s7, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x2A138Cu, 0x2A1394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1394u;
label_2a1394:
    // 0x2a1394: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2a1394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a1398: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2a1398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a139c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2a139cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a13a0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2a13a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a13a4: 0xc0cc3c8  jal         func_330F20
    ctx->pc = 0x2A13A4u;
    SET_GPR_U32(ctx, 31, 0x2A13ACu);
    ctx->pc = 0x2A13A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A13A4u;
    // 0x2a13a8: 0xa3a00021  sb          $zero, 0x21($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330F20u, 0x2A13A4u, 0x2A13ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A13ACu;
label_2a13ac:
    // 0x2a13ac: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2a13acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2a13b0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2a13b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2a13b4: 0x8fca0000  lw          $t2, 0x0($fp)
    ctx->pc = 0x2a13b4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a13b8: 0x134900  sll         $t1, $s3, 4
    ctx->pc = 0x2a13b8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x2a13bc: 0x694821  addu        $t1, $v1, $t1
    ctx->pc = 0x2a13bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2a13c0: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x2a13c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a13c4: 0x2444cbd0  addiu       $a0, $v0, -0x3430
    ctx->pc = 0x2a13c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953936));
    // 0x2a13c8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2a13c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a13cc: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x2a13ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a13d0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a13d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a13d4: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x2a13d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2a13d8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2a13d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a13dc: 0x240b006e  addiu       $t3, $zero, 0x6E
    ctx->pc = 0x2a13dcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x2a13e0: 0xa7a00012  sh          $zero, 0x12($sp)
    ctx->pc = 0x2a13e0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 18), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a13e4: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2A13E4u;
    SET_GPR_U32(ctx, 31, 0x2A13ECu);
    ctx->pc = 0x2A13E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A13E4u;
    // 0x2a13e8: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2A13E4u, 0x2A13ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A13ECu;
label_2a13ec:
    // 0x2a13ec: 0x2a620008  slti        $v0, $s3, 0x8
    ctx->pc = 0x2a13ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2a13f0: 0x5440ffdf  bnel        $v0, $zero, . + 4 + (-0x21 << 2)
    ctx->pc = 0x2A13F0u;
    {
        const bool branch_taken_0x2a13f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a13f0) {
            ctx->pc = 0x2A13F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A13F0u;
            // 0x2a13f4: 0x8e82003c  lw          $v0, 0x3C($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A1370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a1370;
        }
    }
    ctx->pc = 0x2A13F8u;
    // 0x2a13f8: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x2A13F8u;
    {
        const bool branch_taken_0x2a13f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A13FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A13F8u;
        // 0x2a13fc: 0x8fa40030  lw          $a0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a13f8) {
            ctx->pc = 0x2A15FCu;
            goto label_2a15fc;
        }
    }
    ctx->pc = 0x2A1400u;
label_2a1400:
    // 0x2a1400: 0x4c00043  bltz        $a2, . + 4 + (0x43 << 2)
    ctx->pc = 0x2A1400u;
    {
        const bool branch_taken_0x2a1400 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x2A1404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1400u;
        // 0x2a1404: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1400) {
            ctx->pc = 0x2A1510u;
            goto label_2a1510;
        }
    }
    ctx->pc = 0x2A1408u;
    // 0x2a1408: 0x8e82003c  lw          $v0, 0x3C($s4)
    ctx->pc = 0x2a1408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
    // 0x2a140c: 0x5840007b  blezl       $v0, . + 4 + (0x7B << 2)
    ctx->pc = 0x2A140Cu;
    {
        const bool branch_taken_0x2a140c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2a140c) {
            ctx->pc = 0x2A1410u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A140Cu;
            // 0x2a1410: 0x8fa40030  lw          $a0, 0x30($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A15FCu;
            goto label_2a15fc;
        }
    }
    ctx->pc = 0x2A1414u;
    // 0x2a1414: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2a1414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a1418: 0x27b50020  addiu       $s5, $sp, 0x20
    ctx->pc = 0x2a1418u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a141c: 0x290c0  sll         $s2, $v0, 3
    ctx->pc = 0x2a141cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2a1420:
    // 0x2a1420: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x2a1420u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x2a1424: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2a1424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a1428: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2a1428u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2a142c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A142Cu;
    {
        const bool branch_taken_0x2a142c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2a142c) {
            ctx->pc = 0x2A1440u;
            goto label_2a1440;
        }
    }
    ctx->pc = 0x2A1434u;
    // 0x2a1434: 0x3c118000  lui         $s1, 0x8000
    ctx->pc = 0x2a1434u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32768 << 16));
    // 0x2a1438: 0x10d30003  beq         $a2, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A1438u;
    {
        const bool branch_taken_0x2a1438 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 19));
        ctx->pc = 0x2A143Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1438u;
        // 0x2a143c: 0x3631a0ff  ori         $s1, $s1, 0xA0FF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)41215);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1438) {
            ctx->pc = 0x2A1448u;
            goto label_2a1448;
        }
    }
    ctx->pc = 0x2A1440u;
label_2a1440:
    // 0x2a1440: 0x3c1180ff  lui         $s1, 0x80FF
    ctx->pc = 0x2a1440u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)33023 << 16));
    // 0x2a1444: 0x3631ffff  ori         $s1, $s1, 0xFFFF
    ctx->pc = 0x2a1444u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
label_2a1448:
    // 0x2a1448: 0x26700001  addiu       $s0, $s3, 0x1
    ctx->pc = 0x2a1448u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2a144c: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x2a144cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x2a1450: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a1450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1454: 0x24453f58  addiu       $a1, $v0, 0x3F58
    ctx->pc = 0x2a1454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16216));
    // 0x2a1458: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x2A1458u;
    SET_GPR_U32(ctx, 31, 0x2A1460u);
    ctx->pc = 0x2A145Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1458u;
    // 0x2a145c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x2A1458u, 0x2A1460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1460u;
label_2a1460:
    // 0x2a1460: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2a1460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a1464: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2a1464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a1468: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2a1468u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a146c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2a146cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a1470: 0xc0cc3c8  jal         func_330F20
    ctx->pc = 0x2A1470u;
    SET_GPR_U32(ctx, 31, 0x2A1478u);
    ctx->pc = 0x2A1474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1470u;
    // 0x2a1474: 0xa3a00021  sb          $zero, 0x21($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330F20u, 0x2A1470u, 0x2A1478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1478u;
label_2a1478:
    // 0x2a1478: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2a1478u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2a147c: 0x2484cb48  addiu       $a0, $a0, -0x34B8
    ctx->pc = 0x2a147cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953800));
    // 0x2a1480: 0x134900  sll         $t1, $s3, 4
    ctx->pc = 0x2a1480u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x2a1484: 0x2441821  addu        $v1, $s2, $a0
    ctx->pc = 0x2a1484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x2a1488: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2a1488u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2a148c: 0x2484cb4c  addiu       $a0, $a0, -0x34B4
    ctx->pc = 0x2a148cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953804));
    // 0x2a1490: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a1490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a1494: 0x2441021  addu        $v0, $s2, $a0
    ctx->pc = 0x2a1494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x2a1498: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2a1498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a149c: 0x8c4a0000  lw          $t2, 0x0($v0)
    ctx->pc = 0x2a149cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a14a0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2a14a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2a14a4: 0x894821  addu        $t1, $a0, $t1
    ctx->pc = 0x2a14a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x2a14a8: 0x2444cbd0  addiu       $a0, $v0, -0x3430
    ctx->pc = 0x2a14a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953936));
    // 0x2a14ac: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x2a14acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2a14b0: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x2a14b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a14b4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2a14b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a14b8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2a14b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a14bc: 0x240b006e  addiu       $t3, $zero, 0x6E
    ctx->pc = 0x2a14bcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x2a14c0: 0xa7a00012  sh          $zero, 0x12($sp)
    ctx->pc = 0x2a14c0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 18), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a14c4: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2A14C4u;
    SET_GPR_U32(ctx, 31, 0x2A14CCu);
    ctx->pc = 0x2A14C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A14C4u;
    // 0x2a14c8: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2A14C4u, 0x2A14CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A14CCu;
label_2a14cc:
    // 0x2a14cc: 0x8e860040  lw          $a2, 0x40($s4)
    ctx->pc = 0x2a14ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x2a14d0: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x2a14d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a14d4: 0x2a640008  slti        $a0, $s3, 0x8
    ctx->pc = 0x2a14d4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2a14d8: 0xd3102a  slt         $v0, $a2, $s3
    ctx->pc = 0x2a14d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2a14dc: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2A14DCu;
    {
        const bool branch_taken_0x2a14dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A14E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A14DCu;
        // 0x2a14e0: 0x2a650009  slti        $a1, $s3, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a14dc) {
            ctx->pc = 0x2A1510u;
            goto label_2a1510;
        }
    }
    ctx->pc = 0x2A14E4u;
    // 0x2a14e4: 0x8e83003c  lw          $v1, 0x3C($s4)
    ctx->pc = 0x2a14e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
    // 0x2a14e8: 0x263102a  slt         $v0, $s3, $v1
    ctx->pc = 0x2a14e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2a14ec: 0x50400043  beql        $v0, $zero, . + 4 + (0x43 << 2)
    ctx->pc = 0x2A14ECu;
    {
        const bool branch_taken_0x2a14ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a14ec) {
            ctx->pc = 0x2A14F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A14ECu;
            // 0x2a14f0: 0x8fa40030  lw          $a0, 0x30($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A15FCu;
            goto label_2a15fc;
        }
    }
    ctx->pc = 0x2A14F4u;
    // 0x2a14f4: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A14F4u;
    {
        const bool branch_taken_0x2a14f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a14f4) {
            ctx->pc = 0x2A1518u;
            goto label_2a1518;
        }
    }
    ctx->pc = 0x2A14FCu;
    // 0x2a14fc: 0x54a0ffc8  bnel        $a1, $zero, . + 4 + (-0x38 << 2)
    ctx->pc = 0x2A14FCu;
    {
        const bool branch_taken_0x2a14fc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a14fc) {
            ctx->pc = 0x2A1500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A14FCu;
            // 0x2a1500: 0x92840020  lbu         $a0, 0x20($s4) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A1420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a1420;
        }
    }
    ctx->pc = 0x2A1504u;
    // 0x2a1504: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A1504u;
    {
        const bool branch_taken_0x2a1504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1504) {
            ctx->pc = 0x2A1518u;
            goto label_2a1518;
        }
    }
    ctx->pc = 0x2A150Cu;
    // 0x2a150c: 0x0  nop
    ctx->pc = 0x2a150cu;
    // NOP
label_2a1510:
    // 0x2a1510: 0x8e83003c  lw          $v1, 0x3C($s4)
    ctx->pc = 0x2a1510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
    // 0x2a1514: 0x263102a  slt         $v0, $s3, $v1
    ctx->pc = 0x2a1514u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2a1518:
    // 0x2a1518: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x2A1518u;
    {
        const bool branch_taken_0x2a1518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A151Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1518u;
        // 0x2a151c: 0x8fa40030  lw          $a0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1518) {
            ctx->pc = 0x2A15FCu;
            goto label_2a15fc;
        }
    }
    ctx->pc = 0x2A1520u;
    // 0x2a1520: 0x2a620008  slti        $v0, $s3, 0x8
    ctx->pc = 0x2a1520u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2a1524: 0x50400036  beql        $v0, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x2A1524u;
    {
        const bool branch_taken_0x2a1524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1524) {
            ctx->pc = 0x2A1528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A1524u;
            // 0x2a1528: 0x26940070  addiu       $s4, $s4, 0x70 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A1600u;
            goto label_2a1600;
        }
    }
    ctx->pc = 0x2A152Cu;
    // 0x2a152c: 0x2a620009  slti        $v0, $s3, 0x9
    ctx->pc = 0x2a152cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2a1530: 0x50400033  beql        $v0, $zero, . + 4 + (0x33 << 2)
    ctx->pc = 0x2A1530u;
    {
        const bool branch_taken_0x2a1530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1530) {
            ctx->pc = 0x2A1534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A1530u;
            // 0x2a1534: 0x26940070  addiu       $s4, $s4, 0x70 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A1600u;
            goto label_2a1600;
        }
    }
    ctx->pc = 0x2A1538u;
    // 0x2a1538: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2a1538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a153c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2a153cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2a1540: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2a1540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2a1544: 0x2442cb4c  addiu       $v0, $v0, -0x34B4
    ctx->pc = 0x2a1544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953804));
    // 0x2a1548: 0x490c0  sll         $s2, $a0, 3
    ctx->pc = 0x2a1548u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2a154c: 0x2463cb48  addiu       $v1, $v1, -0x34B8
    ctx->pc = 0x2a154cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953800));
    // 0x2a1550: 0x242a821  addu        $s5, $s2, $v0
    ctx->pc = 0x2a1550u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2a1554: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x2a1554u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2a1558: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x2a1558u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a155c: 0x26700001  addiu       $s0, $s3, 0x1
    ctx->pc = 0x2a155cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2a1560:
    // 0x2a1560: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x2a1560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x2a1564: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2a1564u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1568: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a1568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a156c: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x2A156Cu;
    SET_GPR_U32(ctx, 31, 0x2A1574u);
    ctx->pc = 0x2A1570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A156Cu;
    // 0x2a1570: 0x24453f58  addiu       $a1, $v0, 0x3F58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x2A156Cu, 0x2A1574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1574u;
label_2a1574:
    // 0x2a1574: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2a1574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a1578: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2a1578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a157c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a157cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1580: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2a1580u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a1584: 0xc0cc3c8  jal         func_330F20
    ctx->pc = 0x2A1584u;
    SET_GPR_U32(ctx, 31, 0x2A158Cu);
    ctx->pc = 0x2A1588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1584u;
    // 0x2a1588: 0xa3a00021  sb          $zero, 0x21($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330F20u, 0x2A1584u, 0x2A158Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A158Cu;
label_2a158c:
    // 0x2a158c: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x2a158cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x2a1590: 0x8e490000  lw          $t1, 0x0($s2)
    ctx->pc = 0x2a1590u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2a1594: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2a1594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2a1598: 0x8eaa0000  lw          $t2, 0x0($s5)
    ctx->pc = 0x2a1598u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2a159c: 0x3c078080  lui         $a3, 0x8080
    ctx->pc = 0x2a159cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32896 << 16));
    // 0x2a15a0: 0x2444cbd0  addiu       $a0, $v0, -0x3430
    ctx->pc = 0x2a15a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953936));
    // 0x2a15a4: 0x1234821  addu        $t1, $t1, $v1
    ctx->pc = 0x2a15a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x2a15a8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a15a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a15ac: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x2a15acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2a15b0: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x2a15b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a15b4: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x2a15b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x2a15b8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2a15b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a15bc: 0x240b006e  addiu       $t3, $zero, 0x6E
    ctx->pc = 0x2a15bcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x2a15c0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2a15c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2a15c4: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x2a15c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a15c8: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2A15C8u;
    SET_GPR_U32(ctx, 31, 0x2A15D0u);
    ctx->pc = 0x2A15CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A15C8u;
    // 0x2a15cc: 0xa7a00012  sh          $zero, 0x12($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 18), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2A15C8u, 0x2A15D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A15D0u;
label_2a15d0:
    // 0x2a15d0: 0x8e82003c  lw          $v0, 0x3C($s4)
    ctx->pc = 0x2a15d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
    // 0x2a15d4: 0x2a040009  slti        $a0, $s0, 0x9
    ctx->pc = 0x2a15d4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2a15d8: 0x2a030008  slti        $v1, $s0, 0x8
    ctx->pc = 0x2a15d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2a15dc: 0x202802a  slt         $s0, $s0, $v0
    ctx->pc = 0x2a15dcu;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a15e0: 0x52000006  beql        $s0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A15E0u;
    {
        const bool branch_taken_0x2a15e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a15e0) {
            ctx->pc = 0x2A15E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A15E0u;
            // 0x2a15e4: 0x8fa40030  lw          $a0, 0x30($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A15FCu;
            goto label_2a15fc;
        }
    }
    ctx->pc = 0x2A15E8u;
    // 0x2a15e8: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A15E8u;
    {
        const bool branch_taken_0x2a15e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a15e8) {
            ctx->pc = 0x2A15ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A15E8u;
            // 0x2a15ec: 0x8fa40030  lw          $a0, 0x30($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A15FCu;
            goto label_2a15fc;
        }
    }
    ctx->pc = 0x2A15F0u;
    // 0x2a15f0: 0x1480ffdb  bnez        $a0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x2A15F0u;
    {
        const bool branch_taken_0x2a15f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A15F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A15F0u;
        // 0x2a15f4: 0x26700001  addiu       $s0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a15f0) {
            ctx->pc = 0x2A1560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a1560;
        }
    }
    ctx->pc = 0x2A15F8u;
    // 0x2a15f8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2a15f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2a15fc:
    // 0x2a15fc: 0x26940070  addiu       $s4, $s4, 0x70
    ctx->pc = 0x2a15fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
label_2a1600:
    // 0x2a1600: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2a1600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2a1604: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x2a1604u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2a1608: 0x1440ff3f  bnez        $v0, . + 4 + (-0xC1 << 2)
    ctx->pc = 0x2A1608u;
    {
        const bool branch_taken_0x2a1608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A160Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1608u;
        // 0x2a160c: 0xafa40030  sw          $a0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1608) {
            ctx->pc = 0x2A1308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a1308;
        }
    }
    ctx->pc = 0x2A1610u;
    // 0x2a1610: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2a1610u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a1614: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x2a1614u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a1618: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2a1618u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a161c: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x2a161cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2a1620: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2a1620u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a1624: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x2a1624u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1628: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2a1628u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a162c: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x2a162cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a1630: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x2a1630u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a1634: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x2a1634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2a1638: 0x3e00008  jr          $ra
    ctx->pc = 0x2A1638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A163Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1638u;
        // 0x2a163c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A1640u;
}
