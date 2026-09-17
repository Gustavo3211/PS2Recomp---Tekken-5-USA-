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

// Function: sub_004B12C8
// Address: 0x4b12c8 - 0x4b18a8
void sub_004B12C8_0x4b12c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B12C8_0x4b12c8");
#endif

    switch (ctx->pc) {
        case 0x4b12d8u: goto label_4b12d8;
        case 0x4b12e0u: goto label_4b12e0;
        case 0x4b1368u: goto label_4b1368;
        case 0x4b13b0u: goto label_4b13b0;
        case 0x4b13f8u: goto label_4b13f8;
        case 0x4b1450u: goto label_4b1450;
        case 0x4b1498u: goto label_4b1498;
        case 0x4b14e0u: goto label_4b14e0;
        case 0x4b15f0u: goto label_4b15f0;
        case 0x4b163cu: goto label_4b163c;
        case 0x4b1664u: goto label_4b1664;
        case 0x4b166cu: goto label_4b166c;
        case 0x4b168cu: goto label_4b168c;
        case 0x4b169cu: goto label_4b169c;
        case 0x4b16b0u: goto label_4b16b0;
        case 0x4b16d0u: goto label_4b16d0;
        case 0x4b16e0u: goto label_4b16e0;
        case 0x4b16f4u: goto label_4b16f4;
        case 0x4b1714u: goto label_4b1714;
        case 0x4b1724u: goto label_4b1724;
        case 0x4b1740u: goto label_4b1740;
        case 0x4b17a4u: goto label_4b17a4;
        case 0x4b17f8u: goto label_4b17f8;
        default: break;
    }

    ctx->pc = 0x4b12c8u;

    // 0x4b12c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b12c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b12cc: 0x812c620  j           func_4B1880
    ctx->pc = 0x4B12CCu;
    ctx->pc = 0x4B12D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B12CCu;
    // 0x4b12d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B1880u;
    goto label_4b1880;
    ctx->pc = 0x4B12D4u;
    // 0x4b12d4: 0x0  nop
    ctx->pc = 0x4b12d4u;
    // NOP
label_4b12d8:
    // 0x4b12d8: 0x3e00008  jr          $ra
    ctx->pc = 0x4B12D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B12DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B12D8u;
        // 0x4b12dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B12D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B12E0u;
label_4b12e0:
    // 0x4b12e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b12e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b12e4: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4b12e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4b12e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b12e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b12ec: 0x24a50d30  addiu       $a1, $a1, 0xD30
    ctx->pc = 0x4b12ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3376));
    // 0x4b12f0: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4b12f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4b12f4: 0x848201b6  lh          $v0, 0x1B6($a0)
    ctx->pc = 0x4b12f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 438)));
    // 0x4b12f8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4b12f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D30u));
    // 0x4b12fc: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4b12fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4b1300: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b1300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b1304: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b1304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b1308: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4b1308u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4b130c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b130cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b1310: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4b1310u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4b1314: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x4b1314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x4b1318: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b1318u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b131c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b131cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b1320: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4b1320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4b1324: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b1324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b1328: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4b1328u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4b132c: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4b132cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4b1330: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B1330u;
    {
        const bool branch_taken_0x4b1330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b1330) {
            ctx->pc = 0x4B1334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B1330u;
            // 0x4b1334: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B1348u;
            goto label_4b1348;
        }
    }
    ctx->pc = 0x4B1338u;
    // 0x4b1338: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b1338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b133c: 0x812c628  j           func_4B18A0
    ctx->pc = 0x4B133Cu;
    ctx->pc = 0x4B1340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B133Cu;
    // 0x4b1340: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B18A0u;
    goto label_4b18a0;
    ctx->pc = 0x4B1344u;
    // 0x4b1344: 0x0  nop
    ctx->pc = 0x4b1344u;
    // NOP
label_4b1348:
    // 0x4b1348: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b1348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b134c: 0x8c430d60  lw          $v1, 0xD60($v0)
    ctx->pc = 0x4b134cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3424)));
    // 0x4b1350: 0x24630164  addiu       $v1, $v1, 0x164
    ctx->pc = 0x4b1350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 356));
    // 0x4b1354: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4b1354u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4b1358: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4b1358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4b135c: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4b135cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b1360: 0x812c628  j           func_4B18A0
    ctx->pc = 0x4B1360u;
    ctx->pc = 0x4B1364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1360u;
    // 0x4b1364: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B18A0u;
    goto label_4b18a0;
    ctx->pc = 0x4B1368u;
label_4b1368:
    // 0x4b1368: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b1368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b136c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4b136cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4b1370: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b1370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b1374: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4b1374u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4b1378: 0xa482015e  sh          $v0, 0x15E($a0)
    ctx->pc = 0x4b1378u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 350), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b137c: 0x24a50d60  addiu       $a1, $a1, 0xD60
    ctx->pc = 0x4b137cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3424));
    // 0x4b1380: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x4b1380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x4b1384: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b1384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b1388: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4b1388u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0D60u));
    // 0x4b138c: 0xa4460166  sh          $a2, 0x166($v0)
    ctx->pc = 0x4b138cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 358), (uint16_t)GPR_U32(ctx, 6));
    // 0x4b1390: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4b1390u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D60u));
    // 0x4b1394: 0x24630164  addiu       $v1, $v1, 0x164
    ctx->pc = 0x4b1394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 356));
    // 0x4b1398: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4b1398u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4b139c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4b139cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4b13a0: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4b13a0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b13a4: 0x812c628  j           func_4B18A0
    ctx->pc = 0x4B13A4u;
    ctx->pc = 0x4B13A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B13A4u;
    // 0x4b13a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B18A0u;
    goto label_4b18a0;
    ctx->pc = 0x4B13ACu;
    // 0x4b13ac: 0x0  nop
    ctx->pc = 0x4b13acu;
    // NOP
label_4b13b0:
    // 0x4b13b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b13b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b13b4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4b13b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4b13b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b13b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b13bc: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4b13bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4b13c0: 0xa482015e  sh          $v0, 0x15E($a0)
    ctx->pc = 0x4b13c0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 350), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b13c4: 0x24a50d60  addiu       $a1, $a1, 0xD60
    ctx->pc = 0x4b13c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3424));
    // 0x4b13c8: 0x2406005a  addiu       $a2, $zero, 0x5A
    ctx->pc = 0x4b13c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x4b13cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b13ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b13d0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4b13d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0D60u));
    // 0x4b13d4: 0xa4460166  sh          $a2, 0x166($v0)
    ctx->pc = 0x4b13d4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 358), (uint16_t)GPR_U32(ctx, 6));
    // 0x4b13d8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4b13d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D60u));
    // 0x4b13dc: 0x24630164  addiu       $v1, $v1, 0x164
    ctx->pc = 0x4b13dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 356));
    // 0x4b13e0: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4b13e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4b13e4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4b13e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4b13e8: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4b13e8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b13ec: 0x812c628  j           func_4B18A0
    ctx->pc = 0x4B13ECu;
    ctx->pc = 0x4B13F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B13ECu;
    // 0x4b13f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B18A0u;
    goto label_4b18a0;
    ctx->pc = 0x4B13F4u;
    // 0x4b13f4: 0x0  nop
    ctx->pc = 0x4b13f4u;
    // NOP
label_4b13f8:
    // 0x4b13f8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4b13f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4b13fc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b13fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b1400: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b1400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b1404: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4b1404u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4b1408: 0xa482015e  sh          $v0, 0x15E($a0)
    ctx->pc = 0x4b1408u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 350), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b140c: 0x24c60d60  addiu       $a2, $a2, 0xD60
    ctx->pc = 0x4b140cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3424));
    // 0x4b1410: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4b1410u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D60u));
    // 0x4b1414: 0x24630166  addiu       $v1, $v1, 0x166
    ctx->pc = 0x4b1414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 358));
    // 0x4b1418: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4b1418u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4b141c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4b141cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4b1420: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4b1420u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b1424: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x4b1424u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0D60u));
    // 0x4b1428: 0x84a20166  lh          $v0, 0x166($a1)
    ctx->pc = 0x4b1428u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 358)));
    // 0x4b142c: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B142Cu;
    {
        const bool branch_taken_0x4b142c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4B1430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B142Cu;
        // 0x4b1430: 0x24a30164  addiu       $v1, $a1, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 356));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b142c) {
            ctx->pc = 0x4B1440u;
            goto label_4b1440;
        }
    }
    ctx->pc = 0x4B1434u;
    // 0x4b1434: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4b1434u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4b1438: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4b1438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4b143c: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4b143cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_4b1440:
    // 0x4b1440: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b1440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b1444: 0x812c628  j           func_4B18A0
    ctx->pc = 0x4B1444u;
    ctx->pc = 0x4B1448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1444u;
    // 0x4b1448: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B18A0u;
    goto label_4b18a0;
    ctx->pc = 0x4B144Cu;
    // 0x4b144c: 0x0  nop
    ctx->pc = 0x4b144cu;
    // NOP
label_4b1450:
    // 0x4b1450: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4b1450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4b1454: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b1454u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b1458: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b1458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b145c: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4b145cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4b1460: 0xa482015e  sh          $v0, 0x15E($a0)
    ctx->pc = 0x4b1460u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 350), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b1464: 0x8ca30d60  lw          $v1, 0xD60($a1)
    ctx->pc = 0x4b1464u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D60u));
    // 0x4b1468: 0x84620120  lh          $v0, 0x120($v1)
    ctx->pc = 0x4b1468u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 288)));
    // 0x4b146c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B146Cu;
    {
        const bool branch_taken_0x4b146c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B1470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B146Cu;
        // 0x4b1470: 0x24650164  addiu       $a1, $v1, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 356));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b146c) {
            ctx->pc = 0x4B1480u;
            goto label_4b1480;
        }
    }
    ctx->pc = 0x4B1474u;
    // 0x4b1474: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b1474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b1478: 0x812c628  j           func_4B18A0
    ctx->pc = 0x4B1478u;
    ctx->pc = 0x4B147Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1478u;
    // 0x4b147c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B18A0u;
    goto label_4b18a0;
    ctx->pc = 0x4B1480u;
label_4b1480:
    // 0x4b1480: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4b1480u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4b1484: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b1484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b1488: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4b1488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4b148c: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x4b148cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b1490: 0x812c628  j           func_4B18A0
    ctx->pc = 0x4B1490u;
    ctx->pc = 0x4B1494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1490u;
    // 0x4b1494: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B18A0u;
    goto label_4b18a0;
    ctx->pc = 0x4B1498u;
label_4b1498:
    // 0x4b1498: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b1498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b149c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4b149cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4b14a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b14a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b14a4: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4b14a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4b14a8: 0xa482015e  sh          $v0, 0x15E($a0)
    ctx->pc = 0x4b14a8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 350), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b14ac: 0x24a50d60  addiu       $a1, $a1, 0xD60
    ctx->pc = 0x4b14acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3424));
    // 0x4b14b0: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x4b14b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4b14b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b14b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b14b8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4b14b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0D60u));
    // 0x4b14bc: 0xa4460166  sh          $a2, 0x166($v0)
    ctx->pc = 0x4b14bcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 358), (uint16_t)GPR_U32(ctx, 6));
    // 0x4b14c0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4b14c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D60u));
    // 0x4b14c4: 0x24630164  addiu       $v1, $v1, 0x164
    ctx->pc = 0x4b14c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 356));
    // 0x4b14c8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4b14c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4b14cc: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4b14ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4b14d0: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4b14d0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b14d4: 0x812c628  j           func_4B18A0
    ctx->pc = 0x4B14D4u;
    ctx->pc = 0x4B14D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B14D4u;
    // 0x4b14d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B18A0u;
    goto label_4b18a0;
    ctx->pc = 0x4B14DCu;
    // 0x4b14dc: 0x0  nop
    ctx->pc = 0x4b14dcu;
    // NOP
label_4b14e0:
    // 0x4b14e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4b14e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4b14e4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4b14e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4b14e8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4b14e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4b14ec: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4b14ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b14f0: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4b14f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4b14f4: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4b14f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4b14f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b14f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b14fc: 0x24770d60  addiu       $s7, $v1, 0xD60
    ctx->pc = 0x4b14fcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 3424));
    // 0x4b1500: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4b1500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4b1504: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4b1504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4b1508: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4b1508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4b150c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4b150cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4b1510: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4b1510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4b1514: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4b1514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4b1518: 0xa6a2015e  sh          $v0, 0x15E($s5)
    ctx->pc = 0x4b1518u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 350), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b151c: 0x8ee50000  lw          $a1, 0x0($s7)
    ctx->pc = 0x4b151cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0D60u));
    // 0x4b1520: 0x84a20120  lh          $v0, 0x120($a1)
    ctx->pc = 0x4b1520u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 288)));
    // 0x4b1524: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x4B1524u;
    {
        const bool branch_taken_0x4b1524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b1524) {
            ctx->pc = 0x4B1528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B1524u;
            // 0x4b1528: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B1558u;
            goto label_4b1558;
        }
    }
    ctx->pc = 0x4B152Cu;
    // 0x4b152c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b152cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b1530: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4b1530u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b1534: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4b1534u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b1538: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4b1538u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4b153c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4b153cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b1540: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4b1540u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4b1544: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4b1544u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b1548: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4b1548u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4b154c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4b154cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b1550: 0x812c628  j           func_4B18A0
    ctx->pc = 0x4B1550u;
    ctx->pc = 0x4B1554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1550u;
    // 0x4b1554: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B18A0u;
    goto label_4b18a0;
    ctx->pc = 0x4B1558u;
label_4b1558:
    // 0x4b1558: 0x84a30166  lh          $v1, 0x166($a1)
    ctx->pc = 0x4b1558u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 358)));
    // 0x4b155c: 0x24540d30  addiu       $s4, $v0, 0xD30
    ctx->pc = 0x4b155cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 3376));
    // 0x4b1560: 0x3c16ffff  lui         $s6, 0xFFFF
    ctx->pc = 0x4b1560u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65535 << 16));
    // 0x4b1564: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x4b1564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b1568: 0x761825  or          $v1, $v1, $s6
    ctx->pc = 0x4b1568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 22));
    // 0x4b156c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b156cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b1570: 0x433024  and         $a2, $v0, $v1
    ctx->pc = 0x4b1570u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4b1574: 0xae860000  sw          $a2, 0x0($s4)
    ctx->pc = 0x4b1574u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 6));
    // 0x4b1578: 0x86870000  lh          $a3, 0x0($s4)
    ctx->pc = 0x4b1578u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b157c: 0x4e000b0  bltz        $a3, . + 4 + (0xB0 << 2)
    ctx->pc = 0x4B157Cu;
    {
        const bool branch_taken_0x4b157c = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x4B1580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B157Cu;
        // 0x4b1580: 0x3c10007f  lui         $s0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b157c) {
            ctx->pc = 0x4B1840u;
            goto label_4b1840;
        }
    }
    ctx->pc = 0x4B1584u;
    // 0x4b1584: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4b1584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4b1588: 0x26100d34  addiu       $s0, $s0, 0xD34
    ctx->pc = 0x4b1588u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3380));
    // 0x4b158c: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x4b158cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
    // 0x4b1590: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4b1590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b1594: 0x34c4ffff  ori         $a0, $a2, 0xFFFF
    ctx->pc = 0x4b1594u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4b1598: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4b1598u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4b159c: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4b159cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4b15a0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b15a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b15a4: 0x26520d3c  addiu       $s2, $s2, 0xD3C
    ctx->pc = 0x4b15a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3388));
    // 0x4b15a8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b15a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b15ac: 0x26310d44  addiu       $s1, $s1, 0xD44
    ctx->pc = 0x4b15acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3396));
    // 0x4b15b0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4b15b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4b15b4: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4b15b4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4b15b8: 0x26730d40  addiu       $s3, $s3, 0xD40
    ctx->pc = 0x4b15b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3392));
    // 0x4b15bc: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4b15bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b15c0: 0x471004  sllv        $v0, $a3, $v0
    ctx->pc = 0x4b15c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x4b15c4: 0x561025  or          $v0, $v0, $s6
    ctx->pc = 0x4b15c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 22));
    // 0x4b15c8: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4b15c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4b15cc: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x4b15ccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
    // 0x4b15d0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4b15d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4b15d4: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x4b15d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b15d8: 0x2442e000  addiu       $v0, $v0, -0x2000
    ctx->pc = 0x4b15d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959104));
    // 0x4b15dc: 0x561025  or          $v0, $v0, $s6
    ctx->pc = 0x4b15dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 22));
    // 0x4b15e0: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4b15e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4b15e4: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x4b15e4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
    // 0x4b15e8: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4B15E8u;
    SET_GPR_U32(ctx, 31, 0x4B15F0u);
    ctx->pc = 0x4B15ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B15E8u;
    // 0x4b15ec: 0x86840000  lh          $a0, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4B15E8u, 0x4B15F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B15F0u;
label_4b15f0:
    // 0x4b15f0: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x4b15f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b15f4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4b15f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b15f8: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4b15f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4b15fc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4b15fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4b1600: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4b1600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4b1604: 0x761824  and         $v1, $v1, $s6
    ctx->pc = 0x4b1604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 22));
    // 0x4b1608: 0x30a22000  andi        $v0, $a1, 0x2000
    ctx->pc = 0x4b1608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8192);
    // 0x4b160c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4b160cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4b1610: 0x86060000  lh          $a2, 0x0($s0)
    ctx->pc = 0x4b1610u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b1614: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4b1614u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4b1618: 0x34842000  ori         $a0, $a0, 0x2000
    ctx->pc = 0x4b1618u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8192);
    // 0x4b161c: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x4b161cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x4b1620: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b1620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1624: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4b1624u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b1628: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x4b1628u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x4b162c: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x4b162cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4b1630: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x4b1630u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x4b1634: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4B1634u;
    SET_GPR_U32(ctx, 31, 0x4B163Cu);
    ctx->pc = 0x4B1638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1634u;
    // 0x4b1638: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4B1634u, 0x4B163Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B163Cu;
label_4b163c:
    // 0x4b163c: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x4b163cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b1640: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x4b1640u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b1644: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4b1644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1648: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4b1648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b164c: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x4b164cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4b1650: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4b1650u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4b1654: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4b1654u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4b1658: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4b1658u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4b165c: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4B165Cu;
    SET_GPR_U32(ctx, 31, 0x4B1664u);
    ctx->pc = 0x4B1660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B165Cu;
    // 0x4b1660: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4B165Cu, 0x4B1664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B1664u;
label_4b1664:
    // 0x4b1664: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4B1664u;
    SET_GPR_U32(ctx, 31, 0x4B166Cu);
    ctx->pc = 0x4B1668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1664u;
    // 0x4b1668: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4B1664u, 0x4B166Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B166Cu;
label_4b166c:
    // 0x4b166c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x4b166cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b1670: 0x86a20120  lh          $v0, 0x120($s5)
    ctx->pc = 0x4b1670u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 288)));
    // 0x4b1674: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b1674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b1678: 0x561025  or          $v0, $v0, $s6
    ctx->pc = 0x4b1678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 22));
    // 0x4b167c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b167cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b1680: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4b1680u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4b1684: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4B1684u;
    SET_GPR_U32(ctx, 31, 0x4B168Cu);
    ctx->pc = 0x4B1688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1684u;
    // 0x4b1688: 0x86840000  lh          $a0, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4B1684u, 0x4B168Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B168Cu;
label_4b168c:
    // 0x4b168c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4b168cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1690: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x4b1690u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x4b1694: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4B1694u;
    SET_GPR_U32(ctx, 31, 0x4B169Cu);
    ctx->pc = 0x4B1698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1694u;
    // 0x4b1698: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4B1694u, 0x4B169Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B169Cu;
label_4b169c:
    // 0x4b169c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4b169cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b16a0: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x4b16a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b16a4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4b16a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b16a8: 0xc12b8a8  jal         func_4AE2A0
    ctx->pc = 0x4B16A8u;
    SET_GPR_U32(ctx, 31, 0x4B16B0u);
    ctx->pc = 0x4B16ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B16A8u;
    // 0x4b16ac: 0x8e070000  lw          $a3, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE2A0u, 0x4B16A8u, 0x4B16B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B16B0u;
label_4b16b0:
    // 0x4b16b0: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x4b16b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b16b4: 0x86a20164  lh          $v0, 0x164($s5)
    ctx->pc = 0x4b16b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 356)));
    // 0x4b16b8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b16b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b16bc: 0x561025  or          $v0, $v0, $s6
    ctx->pc = 0x4b16bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 22));
    // 0x4b16c0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b16c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b16c4: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4b16c4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4b16c8: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4B16C8u;
    SET_GPR_U32(ctx, 31, 0x4B16D0u);
    ctx->pc = 0x4B16CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B16C8u;
    // 0x4b16cc: 0x86840000  lh          $a0, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4B16C8u, 0x4B16D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B16D0u;
label_4b16d0:
    // 0x4b16d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4b16d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b16d4: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x4b16d4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x4b16d8: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4B16D8u;
    SET_GPR_U32(ctx, 31, 0x4B16E0u);
    ctx->pc = 0x4B16DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B16D8u;
    // 0x4b16dc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4B16D8u, 0x4B16E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B16E0u;
label_4b16e0:
    // 0x4b16e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4b16e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b16e4: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x4b16e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b16e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4b16e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b16ec: 0xc12b84e  jal         func_4AE138
    ctx->pc = 0x4B16ECu;
    SET_GPR_U32(ctx, 31, 0x4B16F4u);
    ctx->pc = 0x4B16F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B16ECu;
    // 0x4b16f0: 0x8e070000  lw          $a3, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE138u, 0x4B16ECu, 0x4B16F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B16F4u;
label_4b16f4:
    // 0x4b16f4: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x4b16f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b16f8: 0x86a20166  lh          $v0, 0x166($s5)
    ctx->pc = 0x4b16f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 358)));
    // 0x4b16fc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b16fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b1700: 0x561025  or          $v0, $v0, $s6
    ctx->pc = 0x4b1700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 22));
    // 0x4b1704: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b1704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b1708: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4b1708u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4b170c: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4B170Cu;
    SET_GPR_U32(ctx, 31, 0x4B1714u);
    ctx->pc = 0x4B1710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B170Cu;
    // 0x4b1710: 0x86840000  lh          $a0, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4B170Cu, 0x4B1714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B1714u;
label_4b1714:
    // 0x4b1714: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4b1714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1718: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x4b1718u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x4b171c: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4B171Cu;
    SET_GPR_U32(ctx, 31, 0x4B1724u);
    ctx->pc = 0x4B1720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B171Cu;
    // 0x4b1720: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4B171Cu, 0x4B1724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B1724u;
label_4b1724:
    // 0x4b1724: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4b1724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1728: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x4b1728u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b172c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4b172cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1730: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x4b1730u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b1734: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x4b1734u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
    // 0x4b1738: 0xc12b87a  jal         func_4AE1E8
    ctx->pc = 0x4B1738u;
    SET_GPR_U32(ctx, 31, 0x4B1740u);
    ctx->pc = 0x4B173Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1738u;
    // 0x4b173c: 0x2610d680  addiu       $s0, $s0, -0x2980 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE1E8u, 0x4B1738u, 0x4B1740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B1740u;
label_4b1740:
    // 0x4b1740: 0x96460000  lhu         $a2, 0x0($s2)
    ctx->pc = 0x4b1740u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b1744: 0x96670000  lhu         $a3, 0x0($s3)
    ctx->pc = 0x4b1744u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4b1748: 0x260a2494  addiu       $t2, $s0, 0x2494
    ctx->pc = 0x4b1748u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 9364));
    // 0x4b174c: 0x96250000  lhu         $a1, 0x0($s1)
    ctx->pc = 0x4b174cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b1750: 0x26082498  addiu       $t0, $s0, 0x2498
    ctx->pc = 0x4b1750u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 9368));
    // 0x4b1754: 0x2609249c  addiu       $t1, $s0, 0x249C
    ctx->pc = 0x4b1754u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 9372));
    // 0x4b1758: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x4b1758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4b175c: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4b175cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b1760: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x4b1760u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x4b1764: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4b1764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4b1768: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x4b1768u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x4b176c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x4b176cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x4b1770: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4b1770u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4b1774: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4b1774u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4b1778: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4b1778u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4b177c: 0x761825  or          $v1, $v1, $s6
    ctx->pc = 0x4b177cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 22));
    // 0x4b1780: 0x962025  or          $a0, $a0, $s6
    ctx->pc = 0x4b1780u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 22));
    // 0x4b1784: 0x561025  or          $v0, $v0, $s6
    ctx->pc = 0x4b1784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 22));
    // 0x4b1788: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4b1788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4b178c: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x4b178cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x4b1790: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4b1790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4b1794: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4b1794u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4b1798: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x4b1798u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x4b179c: 0xc12b8da  jal         func_4AE368
    ctx->pc = 0x4B179Cu;
    SET_GPR_U32(ctx, 31, 0x4B17A4u);
    ctx->pc = 0x4B17A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B179Cu;
    // 0x4b17a0: 0xad220000  sw          $v0, 0x0($t1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE368u, 0x4B179Cu, 0x4B17A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B17A4u;
label_4b17a4:
    // 0x4b17a4: 0x960324a0  lhu         $v1, 0x24A0($s0)
    ctx->pc = 0x4b17a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 9376)));
    // 0x4b17a8: 0x960224a2  lhu         $v0, 0x24A2($s0)
    ctx->pc = 0x4b17a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 9378)));
    // 0x4b17ac: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x4b17acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x4b17b0: 0xa603233a  sh          $v1, 0x233A($s0)
    ctx->pc = 0x4b17b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 9018), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b17b4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4b17b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b17b8: 0xa602233c  sh          $v0, 0x233C($s0)
    ctx->pc = 0x4b17b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 9020), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b17bc: 0xa600233e  sh          $zero, 0x233E($s0)
    ctx->pc = 0x4b17bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 9022), (uint16_t)GPR_U32(ctx, 0));
    // 0x4b17c0: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x4b17c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x4b17c4: 0x561024  and         $v0, $v0, $s6
    ctx->pc = 0x4b17c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
    // 0x4b17c8: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4b17c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4b17cc: 0xa6022334  sh          $v0, 0x2334($s0)
    ctx->pc = 0x4b17ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 9012), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b17d0: 0x8ea30014  lw          $v1, 0x14($s5)
    ctx->pc = 0x4b17d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x4b17d4: 0x761824  and         $v1, $v1, $s6
    ctx->pc = 0x4b17d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 22));
    // 0x4b17d8: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4b17d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4b17dc: 0xa6032336  sh          $v1, 0x2336($s0)
    ctx->pc = 0x4b17dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 9014), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b17e0: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x4b17e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x4b17e4: 0xa6052330  sh          $a1, 0x2330($s0)
    ctx->pc = 0x4b17e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 9008), (uint16_t)GPR_U32(ctx, 5));
    // 0x4b17e8: 0x561024  and         $v0, $v0, $s6
    ctx->pc = 0x4b17e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
    // 0x4b17ec: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4b17ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4b17f0: 0xc127ac8  jal         func_49EB20
    ctx->pc = 0x4B17F0u;
    SET_GPR_U32(ctx, 31, 0x4B17F8u);
    ctx->pc = 0x4B17F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B17F0u;
    // 0x4b17f4: 0xa6022338  sh          $v0, 0x2338($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 9016), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EB20u, 0x4B17F0u, 0x4B17F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B17F8u;
label_4b17f8:
    // 0x4b17f8: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x4b17f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4b17fc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4b17fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1800: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4b1800u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4b1804: 0x24630166  addiu       $v1, $v1, 0x166
    ctx->pc = 0x4b1804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 358));
    // 0x4b1808: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b1808u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b180c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4b180cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4b1810: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4b1810u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b1814: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4b1814u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b1818: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4b1818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4b181c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4b181cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4b1820: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4b1820u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b1824: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4b1824u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b1828: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4b1828u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4b182c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4b182cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b1830: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4b1830u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b1834: 0x812c628  j           func_4B18A0
    ctx->pc = 0x4B1834u;
    ctx->pc = 0x4B1838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1834u;
    // 0x4b1838: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B18A0u;
    goto label_4b18a0;
    ctx->pc = 0x4B183Cu;
    // 0x4b183c: 0x0  nop
    ctx->pc = 0x4b183cu;
    // NOP
label_4b1840:
    // 0x4b1840: 0x24a30164  addiu       $v1, $a1, 0x164
    ctx->pc = 0x4b1840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 356));
    // 0x4b1844: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b1844u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b1848: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4b1848u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4b184c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4b184cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b1850: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4b1850u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b1854: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4b1854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4b1858: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4b1858u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4b185c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4b185cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b1860: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4b1860u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4b1864: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4b1864u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b1868: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4b1868u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4b186c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4b186cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b1870: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4b1870u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b1874: 0x812c628  j           func_4B18A0
    ctx->pc = 0x4B1874u;
    ctx->pc = 0x4B1878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1874u;
    // 0x4b1878: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B18A0u;
    goto label_4b18a0;
    ctx->pc = 0x4B187Cu;
    // 0x4b187c: 0x0  nop
    ctx->pc = 0x4b187cu;
    // NOP
label_4b1880:
    // 0x4b1880: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4b1880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4b1884: 0x248401b6  addiu       $a0, $a0, 0x1B6
    ctx->pc = 0x4b1884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 438));
    // 0x4b1888: 0x8c430d60  lw          $v1, 0xD60($v0)
    ctx->pc = 0x4b1888u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D60u));
    // 0x4b188c: 0xa4600164  sh          $zero, 0x164($v1)
    ctx->pc = 0x4b188cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 356), (uint16_t)GPR_U32(ctx, 0));
    // 0x4b1890: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4b1890u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b1894: 0x3042f7ff  andi        $v0, $v0, 0xF7FF
    ctx->pc = 0x4b1894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63487);
    // 0x4b1898: 0x3e00008  jr          $ra
    ctx->pc = 0x4B1898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B189Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1898u;
        // 0x4b189c: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B1898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B18A0u;
label_4b18a0:
    // 0x4b18a0: 0x3e00008  jr          $ra
    ctx->pc = 0x4B18A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B18A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B18A8u;
}
