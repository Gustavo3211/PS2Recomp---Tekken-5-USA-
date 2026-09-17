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

// Function: sub_004E12D0
// Address: 0x4e12d0 - 0x4e1760
void sub_004E12D0_0x4e12d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E12D0_0x4e12d0");
#endif

    switch (ctx->pc) {
        case 0x4e1318u: goto label_4e1318;
        case 0x4e1320u: goto label_4e1320;
        case 0x4e1448u: goto label_4e1448;
        case 0x4e14e8u: goto label_4e14e8;
        case 0x4e14f0u: goto label_4e14f0;
        case 0x4e14f8u: goto label_4e14f8;
        case 0x4e1500u: goto label_4e1500;
        case 0x4e1688u: goto label_4e1688;
        case 0x4e16d4u: goto label_4e16d4;
        case 0x4e16f8u: goto label_4e16f8;
        default: break;
    }

    ctx->pc = 0x4e12d0u;

    // 0x4e12d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4e12d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4e12d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4e12d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4e12d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4e12d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e12dc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4e12dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4e12e0: 0x263201b4  addiu       $s2, $s1, 0x1B4
    ctx->pc = 0x4e12e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 436));
    // 0x4e12e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4e12e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4e12e8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4e12e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4e12ec: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4e12ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4e12f0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4e12f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4e12f4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4e12f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4e12f8: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4e12f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4e12fc: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x4e12fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x4e1300: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x4e1300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x4e1304: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4e1304u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e1308: 0x4400031  bltz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x4E1308u;
    {
        const bool branch_taken_0x4e1308 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4E130Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1308u;
        // 0x4e130c: 0x3c13007f  lui         $s3, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1308) {
            ctx->pc = 0x4E13D0u;
            goto label_4e13d0;
        }
    }
    ctx->pc = 0x4E1310u;
    // 0x4e1310: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4E1310u;
    SET_GPR_U32(ctx, 31, 0x4E1318u);
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4E1310u, 0x4E1318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E1318u;
label_4e1318:
    // 0x4e1318: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4E1318u;
    SET_GPR_U32(ctx, 31, 0x4E1320u);
    ctx->pc = 0x4E131Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E1318u;
    // 0x4e131c: 0x26701168  addiu       $s0, $s3, 0x1168 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4E1318u, 0x4E1320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E1320u;
label_4e1320:
    // 0x4e1320: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4e1320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e1324: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4e1324u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4e1328: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4e1328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4e132c: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x4e132cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x4e1330: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e1330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e1334: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x4e1334u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
    // 0x4e1338: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e1338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e133c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e133cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4e1340: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4e1340u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e1344: 0xa622015e  sh          $v0, 0x15E($s1)
    ctx->pc = 0x4e1344u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 350), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e1348: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4e1348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e134c: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4e134cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e1350: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e1350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e1354: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4e1354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4e1358: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e1358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e135c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e135cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4e1360: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e1360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e1364: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4e1364u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e1368: 0x2442ff8b  addiu       $v0, $v0, -0x75
    ctx->pc = 0x4e1368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967179));
    // 0x4e136c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4e136cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4e1370: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e1370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e1374: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e1374u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4e1378: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e1378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e137c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4e137cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e1380: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4e1380u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x4e1384: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4e1384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4e1388: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e1388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e138c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e138cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4e1390: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4e1390u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e1394: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e1394u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e1398: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4e1398u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4e139c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4e139cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4e13a0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x4e13a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x4e13a4: 0x24217ca8  addiu       $at, $at, 0x7CA8
    ctx->pc = 0x4e13a4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 31912));
    // 0x4e13a8: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x4e13a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x4e13ac: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4e13acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4e13b0: 0xa623000c  sh          $v1, 0xC($s1)
    ctx->pc = 0x4e13b0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e13b4: 0x9444000c  lhu         $a0, 0xC($v0)
    ctx->pc = 0x4e13b4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x4e13b8: 0xa6240158  sh          $a0, 0x158($s1)
    ctx->pc = 0x4e13b8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 344), (uint16_t)GPR_U32(ctx, 4));
    // 0x4e13bc: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4e13bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e13c0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4e13c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4e13c4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4E13C4u;
    {
        const bool branch_taken_0x4e13c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E13C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E13C4u;
        // 0x4e13c8: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e13c4) {
            ctx->pc = 0x4E13D8u;
            goto label_4e13d8;
        }
    }
    ctx->pc = 0x4E13CCu;
    // 0x4e13cc: 0x0  nop
    ctx->pc = 0x4e13ccu;
    // NOP
label_4e13d0:
    // 0x4e13d0: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x4e13d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x4e13d4: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x4e13d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
label_4e13d8:
    // 0x4e13d8: 0x26701168  addiu       $s0, $s3, 0x1168
    ctx->pc = 0x4e13d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4456));
    // 0x4e13dc: 0x24d37ca8  addiu       $s3, $a2, 0x7CA8
    ctx->pc = 0x4e13dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), 31912));
    // 0x4e13e0: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4e13e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e13e4: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x4e13e4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x4e13e8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4e13e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e13ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4e13ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e13f0: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4e13f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4e13f4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e13f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e13f8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e13f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e13fc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e13fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4e1400: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e1400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e1404: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4e1404u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e1408: 0x2442ff8b  addiu       $v0, $v0, -0x75
    ctx->pc = 0x4e1408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967179));
    // 0x4e140c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4e140cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4e1410: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e1410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e1414: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e1414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4e1418: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e1418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e141c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4e141cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e1420: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4e1420u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x4e1424: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4e1424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4e1428: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e1428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e142c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e142cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4e1430: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4e1430u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e1434: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e1434u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e1438: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4e1438u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4e143c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4e143cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4e1440: 0xc1230b4  jal         func_48C2D0
    ctx->pc = 0x4E1440u;
    SET_GPR_U32(ctx, 31, 0x4E1448u);
    ctx->pc = 0x4E1444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E1440u;
    // 0x4e1444: 0x539821  addu        $s3, $v0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C2D0u, 0x4E1440u, 0x4E1448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E1448u;
label_4e1448:
    // 0x4e1448: 0x504000b9  beql        $v0, $zero, . + 4 + (0xB9 << 2)
    ctx->pc = 0x4E1448u;
    {
        const bool branch_taken_0x4e1448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e1448) {
            ctx->pc = 0x4E144Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1448u;
            // 0x4e144c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E1730u;
            goto label_4e1730;
        }
    }
    ctx->pc = 0x4E1450u;
    // 0x4e1450: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4e1450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e1454: 0x862201b6  lh          $v0, 0x1B6($s1)
    ctx->pc = 0x4e1454u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 438)));
    // 0x4e1458: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e1458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e145c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4e145cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4e1460: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e1460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e1464: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e1464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4e1468: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4e1468u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e146c: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x4e146cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x4e1470: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x4E1470u;
    {
        const bool branch_taken_0x4e1470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E1474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1470u;
        // 0x4e1474: 0x3c0b007f  lui         $t3, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1470) {
            ctx->pc = 0x4E14F8u;
            goto label_4e14f8;
        }
    }
    ctx->pc = 0x4E1478u;
    // 0x4e1478: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4e1478u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x4e147c: 0x3c0d007f  lui         $t5, 0x7F
    ctx->pc = 0x4e147cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)127 << 16));
    // 0x4e1480: 0x256b1170  addiu       $t3, $t3, 0x1170
    ctx->pc = 0x4e1480u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4464));
    // 0x4e1484: 0x258c1174  addiu       $t4, $t4, 0x1174
    ctx->pc = 0x4e1484u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4468));
    // 0x4e1488: 0x25ad1178  addiu       $t5, $t5, 0x1178
    ctx->pc = 0x4e1488u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4472));
    // 0x4e148c: 0x8d6a0000  lw          $t2, 0x0($t3)
    ctx->pc = 0x4e148cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4e1490: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x4e1490u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e1494: 0x8d880000  lw          $t0, 0x0($t4)
    ctx->pc = 0x4e1494u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x7F1174u));
    // 0x4e1498: 0x8da90000  lw          $t1, 0x0($t5)
    ctx->pc = 0x4e1498u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x7F1178u));
    // 0x4e149c: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x4e149cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x4e14a0: 0x86630002  lh          $v1, 0x2($s3)
    ctx->pc = 0x4e14a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x4e14a4: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4e14a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4e14a8: 0x86640004  lh          $a0, 0x4($s3)
    ctx->pc = 0x4e14a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x4e14ac: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4e14acu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4e14b0: 0x86620006  lh          $v0, 0x6($s3)
    ctx->pc = 0x4e14b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x4e14b4: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x4e14b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x4e14b8: 0x922025  or          $a0, $a0, $s2
    ctx->pc = 0x4e14b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 18));
    // 0x4e14bc: 0x1435024  and         $t2, $t2, $v1
    ctx->pc = 0x4e14bcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x4e14c0: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4e14c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4e14c4: 0x1044024  and         $t0, $t0, $a0
    ctx->pc = 0x4e14c4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
    // 0x4e14c8: 0x1224824  and         $t1, $t1, $v0
    ctx->pc = 0x4e14c8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x4e14cc: 0xad6a0000  sw          $t2, 0x0($t3)
    ctx->pc = 0x4e14ccu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 10));
    // 0x4e14d0: 0xad880000  sw          $t0, 0x0($t4)
    ctx->pc = 0x4e14d0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 8));
    // 0x4e14d4: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x4e14d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e14d8: 0xada90000  sw          $t1, 0x0($t5)
    ctx->pc = 0x4e14d8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 9));
    // 0x4e14dc: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x4e14dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e14e0: 0xc127c58  jal         func_49F160
    ctx->pc = 0x4E14E0u;
    SET_GPR_U32(ctx, 31, 0x4E14E8u);
    ctx->pc = 0x4E14E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E14E0u;
    // 0x4e14e4: 0x120302d  daddu       $a2, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F160u, 0x4E14E0u, 0x4E14E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E14E8u;
label_4e14e8:
    // 0x4e14e8: 0xc127bf2  jal         func_49EFC8
    ctx->pc = 0x4E14E8u;
    SET_GPR_U32(ctx, 31, 0x4E14F0u);
    ctx->pc = 0x4E14ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E14E8u;
    // 0x4e14ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EFC8u, 0x4E14E8u, 0x4E14F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E14F0u;
label_4e14f0:
    // 0x4e14f0: 0xc12b94c  jal         func_4AE530
    ctx->pc = 0x4E14F0u;
    SET_GPR_U32(ctx, 31, 0x4E14F8u);
    ctx->pc = 0x4E14F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E14F0u;
    // 0x4e14f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE530u, 0x4E14F0u, 0x4E14F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E14F8u;
label_4e14f8:
    // 0x4e14f8: 0xc127e84  jal         func_49FA10
    ctx->pc = 0x4E14F8u;
    SET_GPR_U32(ctx, 31, 0x4E1500u);
    ctx->pc = 0x4E14FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E14F8u;
    // 0x4e14fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA10u, 0x4E14F8u, 0x4E1500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E1500u;
label_4e1500:
    // 0x4e1500: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4e1500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e1504: 0x862201be  lh          $v0, 0x1BE($s1)
    ctx->pc = 0x4e1504u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 446)));
    // 0x4e1508: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e1508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e150c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4e150cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4e1510: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e1510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e1514: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e1514u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4e1518: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e1518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e151c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4e151cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e1520: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x4e1520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x4e1524: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e1524u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e1528: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e1528u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e152c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4e152cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4e1530: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e1530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e1534: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e1534u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4e1538: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4e1538u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e153c: 0x1440006f  bnez        $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x4E153Cu;
    {
        const bool branch_taken_0x4e153c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E1540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E153Cu;
        // 0x4e1540: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e153c) {
            ctx->pc = 0x4E16FCu;
            goto label_4e16fc;
        }
    }
    ctx->pc = 0x4E1544u;
    // 0x4e1544: 0x86620008  lh          $v0, 0x8($s3)
    ctx->pc = 0x4e1544u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x4e1548: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e1548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e154c: 0x2625015e  addiu       $a1, $s1, 0x15E
    ctx->pc = 0x4e154cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 350));
    // 0x4e1550: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4e1550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4e1554: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e1554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e1558: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e1558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4e155c: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x4e155cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e1560: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4e1560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x4e1564: 0xa4a40000  sh          $a0, 0x0($a1)
    ctx->pc = 0x4e1564u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x4e1568: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4e1568u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e156c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4e156cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e1570: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4e1570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4e1574: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e1574u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e1578: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e1578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e157c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e157cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e1580: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4e1580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4e1584: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e1584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e1588: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e1588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4e158c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4e158cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e1590: 0x1440005a  bnez        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x4E1590u;
    {
        const bool branch_taken_0x4e1590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E1594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1590u;
        // 0x4e1594: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1590) {
            ctx->pc = 0x4E16FCu;
            goto label_4e16fc;
        }
    }
    ctx->pc = 0x4E1598u;
    // 0x4e1598: 0x3c070073  lui         $a3, 0x73
    ctx->pc = 0x4e1598u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)115 << 16));
    // 0x4e159c: 0x9662000a  lhu         $v0, 0xA($s3)
    ctx->pc = 0x4e159cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x4e15a0: 0x24e7d680  addiu       $a3, $a3, -0x2980
    ctx->pc = 0x4e15a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956672));
    // 0x4e15a4: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4e15a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4e15a8: 0x24f72330  addiu       $s7, $a3, 0x2330
    ctx->pc = 0x4e15a8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 7), 9008));
    // 0x4e15ac: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4e15acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4e15b0: 0xa6e20000  sh          $v0, 0x0($s7)
    ctx->pc = 0x4e15b0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x72F9B0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9B0u, _value); } while (0);
    // 0x4e15b4: 0x24951170  addiu       $s5, $a0, 0x1170
    ctx->pc = 0x4e15b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 4464));
    // 0x4e15b8: 0x24741174  addiu       $s4, $v1, 0x1174
    ctx->pc = 0x4e15b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4468));
    // 0x4e15bc: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4e15bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4e15c0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x4e15c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x4e15c4: 0x3c0a007f  lui         $t2, 0x7F
    ctx->pc = 0x4e15c4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)127 << 16));
    // 0x4e15c8: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x4e15c8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F1170u));
    // 0x4e15cc: 0x254a1178  addiu       $t2, $t2, 0x1178
    ctx->pc = 0x4e15ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4472));
    // 0x4e15d0: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4e15d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4e15d4: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x4e15d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e15d8: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4e15d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4e15dc: 0x2473116c  addiu       $s3, $v1, 0x116C
    ctx->pc = 0x4e15dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4460));
    // 0x4e15e0: 0xa4e22334  sh          $v0, 0x2334($a3)
    ctx->pc = 0x4e15e0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 9012), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e15e4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4e15e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4e15e8: 0x34630c00  ori         $v1, $v1, 0xC00
    ctx->pc = 0x4e15e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3072);
    // 0x4e15ec: 0x24fe233a  addiu       $fp, $a3, 0x233A
    ctx->pc = 0x4e15ecu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 7), 9018));
    // 0x4e15f0: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x4e15f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x4e15f4: 0x24f6233c  addiu       $s6, $a3, 0x233C
    ctx->pc = 0x4e15f4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 7), 9020));
    // 0x4e15f8: 0x8d490000  lw          $t1, 0x0($t2)
    ctx->pc = 0x4e15f8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4e15fc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4e15fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4e1600: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4e1600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4e1604: 0x8e680000  lw          $t0, 0x0($s3)
    ctx->pc = 0x4e1604u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4e1608: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4e1608u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4e160c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4e160cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4e1610: 0xa4e22336  sh          $v0, 0x2336($a3)
    ctx->pc = 0x4e1610u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 9014), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e1614: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4e1614u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4e1618: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x4e1618u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x4e161c: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4e161cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4e1620: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x4e1620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x4e1624: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x4e1624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e1628: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4e1628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4e162c: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4e162cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4e1630: 0xa4e22338  sh          $v0, 0x2338($a3)
    ctx->pc = 0x4e1630u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 9016), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e1634: 0x96230118  lhu         $v1, 0x118($s1)
    ctx->pc = 0x4e1634u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x4e1638: 0xa7c30000  sh          $v1, 0x0($fp)
    ctx->pc = 0x4e1638u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e163c: 0x9622011c  lhu         $v0, 0x11C($s1)
    ctx->pc = 0x4e163cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x4e1640: 0xa6c20000  sh          $v0, 0x0($s6)
    ctx->pc = 0x4e1640u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e1644: 0x96230120  lhu         $v1, 0x120($s1)
    ctx->pc = 0x4e1644u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x4e1648: 0xa4e3233e  sh          $v1, 0x233E($a3)
    ctx->pc = 0x4e1648u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 9022), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e164c: 0x86220130  lh          $v0, 0x130($s1)
    ctx->pc = 0x4e164cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x4e1650: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4e1650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4e1654: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4e1654u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4e1658: 0xaea50000  sw          $a1, 0x0($s5)
    ctx->pc = 0x4e1658u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 5));
    // 0x4e165c: 0x86220132  lh          $v0, 0x132($s1)
    ctx->pc = 0x4e165cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 306)));
    // 0x4e1660: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4e1660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4e1664: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4e1664u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4e1668: 0xae860000  sw          $a2, 0x0($s4)
    ctx->pc = 0x4e1668u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 6));
    // 0x4e166c: 0x86220134  lh          $v0, 0x134($s1)
    ctx->pc = 0x4e166cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 308)));
    // 0x4e1670: 0xae680000  sw          $t0, 0x0($s3)
    ctx->pc = 0x4e1670u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 8));
    // 0x4e1674: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4e1674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4e1678: 0x1224824  and         $t1, $t1, $v0
    ctx->pc = 0x4e1678u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x4e167c: 0xad490000  sw          $t1, 0x0($t2)
    ctx->pc = 0x4e167cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 9));
    // 0x4e1680: 0xc122d6e  jal         func_48B5B8
    ctx->pc = 0x4E1680u;
    SET_GPR_U32(ctx, 31, 0x4E1688u);
    ctx->pc = 0x4E1684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E1680u;
    // 0x4e1684: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B5B8u, 0x4E1680u, 0x4E1688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E1688u;
label_4e1688:
    // 0x4e1688: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4e1688u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e168c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4e168cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4e1690: 0x16420017  bne         $s2, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x4E1690u;
    {
        const bool branch_taken_0x4e1690 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x4E1694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1690u;
        // 0x4e1694: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1690) {
            ctx->pc = 0x4E16F0u;
            goto label_4e16f0;
        }
    }
    ctx->pc = 0x4E1698u;
    // 0x4e1698: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4e1698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4e169c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4e169cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4e16a0: 0x8e890000  lw          $t1, 0x0($s4)
    ctx->pc = 0x4e16a0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e16a4: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x4e16a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x4e16a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4e16a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4e16ac: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4e16acu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4e16b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4e16b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4e16b4: 0x1234824  and         $t1, $t1, $v1
    ctx->pc = 0x4e16b4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x4e16b8: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x4e16b8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x4e16bc: 0xae890000  sw          $t1, 0x0($s4)
    ctx->pc = 0x4e16bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 9));
    // 0x4e16c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4e16c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e16c4: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x4e16c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e16c8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x4e16c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e16cc: 0xc12b6ea  jal         func_4ADBA8
    ctx->pc = 0x4E16CCu;
    SET_GPR_U32(ctx, 31, 0x4E16D4u);
    ctx->pc = 0x4E16D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E16CCu;
    // 0x4e16d0: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADBA8u, 0x4E16CCu, 0x4E16D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E16D4u;
label_4e16d4:
    // 0x4e16d4: 0x14520006  bne         $v0, $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x4E16D4u;
    {
        const bool branch_taken_0x4e16d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x4E16D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E16D4u;
        // 0x4e16d8: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e16d4) {
            ctx->pc = 0x4E16F0u;
            goto label_4e16f0;
        }
    }
    ctx->pc = 0x4E16DCu;
    // 0x4e16dc: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4e16dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e16e0: 0x96640000  lhu         $a0, 0x0($s3)
    ctx->pc = 0x4e16e0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4e16e4: 0xa6e30000  sh          $v1, 0x0($s7)
    ctx->pc = 0x4e16e4u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e16e8: 0xa7c20000  sh          $v0, 0x0($fp)
    ctx->pc = 0x4e16e8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e16ec: 0xa6c40000  sh          $a0, 0x0($s6)
    ctx->pc = 0x4e16ecu;
    WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 4));
label_4e16f0:
    // 0x4e16f0: 0xc127a50  jal         func_49E940
    ctx->pc = 0x4E16F0u;
    SET_GPR_U32(ctx, 31, 0x4E16F8u);
    ctx->pc = 0x4E16F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E16F0u;
    // 0x4e16f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49E940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49E940u, 0x4E16F0u, 0x4E16F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E16F8u;
label_4e16f8:
    // 0x4e16f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4e16f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e16fc:
    // 0x4e16fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e16fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e1700: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e1700u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e1704: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e1704u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e1708: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4e1708u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e170c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4e170cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e1710: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4e1710u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4e1714: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4e1714u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e1718: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4e1718u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4e171c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4e171cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4e1720: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4e1720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4e1724: 0x8138464  j           func_4E1190
    ctx->pc = 0x4E1724u;
    ctx->pc = 0x4E1728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E1724u;
    // 0x4e1728: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E1190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E1190u, 0x4E1724u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4E172Cu;
    // 0x4e172c: 0x0  nop
    ctx->pc = 0x4e172cu;
    // NOP
label_4e1730:
    // 0x4e1730: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e1730u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e1734: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e1734u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e1738: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4e1738u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e173c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4e173cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e1740: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4e1740u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4e1744: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4e1744u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e1748: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4e1748u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4e174c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4e174cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4e1750: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4e1750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4e1754: 0x3e00008  jr          $ra
    ctx->pc = 0x4E1754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E1758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1754u;
        // 0x4e1758: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E1754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E175Cu;
    // 0x4e175c: 0x0  nop
    ctx->pc = 0x4e175cu;
    // NOP
    ctx->pc = 0x4e1760u;
}
