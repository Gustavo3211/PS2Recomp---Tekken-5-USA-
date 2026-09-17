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

// Function: sub_004CE330
// Address: 0x4ce330 - 0x4ce470
void sub_004CE330_0x4ce330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CE330_0x4ce330");
#endif

    switch (ctx->pc) {
        case 0x4ce330u: goto label_4ce330;
        case 0x4ce334u: goto label_4ce334;
        case 0x4ce338u: goto label_4ce338;
        case 0x4ce33cu: goto label_4ce33c;
        case 0x4ce340u: goto label_4ce340;
        case 0x4ce344u: goto label_4ce344;
        case 0x4ce348u: goto label_4ce348;
        case 0x4ce34cu: goto label_4ce34c;
        case 0x4ce350u: goto label_4ce350;
        case 0x4ce354u: goto label_4ce354;
        case 0x4ce358u: goto label_4ce358;
        case 0x4ce35cu: goto label_4ce35c;
        case 0x4ce360u: goto label_4ce360;
        case 0x4ce364u: goto label_4ce364;
        case 0x4ce368u: goto label_4ce368;
        case 0x4ce36cu: goto label_4ce36c;
        case 0x4ce370u: goto label_4ce370;
        case 0x4ce374u: goto label_4ce374;
        case 0x4ce378u: goto label_4ce378;
        case 0x4ce37cu: goto label_4ce37c;
        case 0x4ce380u: goto label_4ce380;
        case 0x4ce384u: goto label_4ce384;
        case 0x4ce388u: goto label_4ce388;
        case 0x4ce38cu: goto label_4ce38c;
        case 0x4ce390u: goto label_4ce390;
        case 0x4ce394u: goto label_4ce394;
        case 0x4ce398u: goto label_4ce398;
        case 0x4ce39cu: goto label_4ce39c;
        case 0x4ce3a0u: goto label_4ce3a0;
        case 0x4ce3a4u: goto label_4ce3a4;
        case 0x4ce3a8u: goto label_4ce3a8;
        case 0x4ce3acu: goto label_4ce3ac;
        case 0x4ce3b0u: goto label_4ce3b0;
        case 0x4ce3b4u: goto label_4ce3b4;
        case 0x4ce3b8u: goto label_4ce3b8;
        case 0x4ce3bcu: goto label_4ce3bc;
        case 0x4ce3c0u: goto label_4ce3c0;
        case 0x4ce3c4u: goto label_4ce3c4;
        case 0x4ce3c8u: goto label_4ce3c8;
        case 0x4ce3ccu: goto label_4ce3cc;
        case 0x4ce3d0u: goto label_4ce3d0;
        case 0x4ce3d4u: goto label_4ce3d4;
        case 0x4ce3d8u: goto label_4ce3d8;
        case 0x4ce3dcu: goto label_4ce3dc;
        case 0x4ce3e0u: goto label_4ce3e0;
        case 0x4ce3e4u: goto label_4ce3e4;
        case 0x4ce3e8u: goto label_4ce3e8;
        case 0x4ce3ecu: goto label_4ce3ec;
        case 0x4ce3f0u: goto label_4ce3f0;
        case 0x4ce3f4u: goto label_4ce3f4;
        case 0x4ce3f8u: goto label_4ce3f8;
        case 0x4ce3fcu: goto label_4ce3fc;
        case 0x4ce400u: goto label_4ce400;
        case 0x4ce404u: goto label_4ce404;
        case 0x4ce408u: goto label_4ce408;
        case 0x4ce40cu: goto label_4ce40c;
        case 0x4ce410u: goto label_4ce410;
        case 0x4ce414u: goto label_4ce414;
        case 0x4ce418u: goto label_4ce418;
        case 0x4ce41cu: goto label_4ce41c;
        case 0x4ce420u: goto label_4ce420;
        case 0x4ce424u: goto label_4ce424;
        case 0x4ce428u: goto label_4ce428;
        case 0x4ce42cu: goto label_4ce42c;
        case 0x4ce430u: goto label_4ce430;
        case 0x4ce434u: goto label_4ce434;
        case 0x4ce438u: goto label_4ce438;
        case 0x4ce43cu: goto label_4ce43c;
        case 0x4ce440u: goto label_4ce440;
        case 0x4ce444u: goto label_4ce444;
        case 0x4ce448u: goto label_4ce448;
        case 0x4ce44cu: goto label_4ce44c;
        case 0x4ce450u: goto label_4ce450;
        case 0x4ce454u: goto label_4ce454;
        case 0x4ce458u: goto label_4ce458;
        case 0x4ce45cu: goto label_4ce45c;
        case 0x4ce460u: goto label_4ce460;
        case 0x4ce464u: goto label_4ce464;
        case 0x4ce468u: goto label_4ce468;
        case 0x4ce46cu: goto label_4ce46c;
        default: break;
    }

    ctx->pc = 0x4ce330u;

label_4ce330:
    // 0x4ce330: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4ce330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4ce334:
    // 0x4ce334: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ce334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4ce338:
    // 0x4ce338: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ce338u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ce33c:
    // 0x4ce33c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4ce33cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_4ce340:
    // 0x4ce340: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4ce340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4ce344:
    // 0x4ce344: 0xc1232f2  jal         func_48CBC8
label_4ce348:
    if (ctx->pc == 0x4CE348u) {
        ctx->pc = 0x4CE348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CE344u;
        // 0x4ce348: 0x261101b4  addiu       $s1, $s0, 0x1B4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CE34Cu;
        goto label_4ce34c;
    }
    ctx->pc = 0x4CE344u;
    SET_GPR_U32(ctx, 31, 0x4CE34Cu);
    ctx->pc = 0x4CE348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CE344u;
    // 0x4ce348: 0x261101b4  addiu       $s1, $s0, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4CE344u, 0x4CE34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CE34Cu;
label_4ce34c:
    // 0x4ce34c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4ce34cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
label_4ce350:
    // 0x4ce350: 0xac620fa8  sw          $v0, 0xFA8($v1)
    ctx->pc = 0x4ce350u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4008), GPR_U32(ctx, 2));
label_4ce354:
    // 0x4ce354: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4ce354u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4ce358:
    // 0x4ce358: 0x4400027  bltz        $v0, . + 4 + (0x27 << 2)
label_4ce35c:
    if (ctx->pc == 0x4CE35Cu) {
        ctx->pc = 0x4CE35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CE358u;
        // 0x4ce35c: 0x3c09007f  lui         $t1, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CE360u;
        goto label_4ce360;
    }
    ctx->pc = 0x4CE358u;
    {
        const bool branch_taken_0x4ce358 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4CE35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CE358u;
        // 0x4ce35c: 0x3c09007f  lui         $t1, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ce358) {
            ctx->pc = 0x4CE3F8u;
            goto label_4ce3f8;
        }
    }
    ctx->pc = 0x4CE360u;
label_4ce360:
    // 0x4ce360: 0xc12b642  jal         func_4AD908
label_4ce364:
    if (ctx->pc == 0x4CE364u) {
        ctx->pc = 0x4CE364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CE360u;
        // 0x4ce364: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CE368u;
        goto label_4ce368;
    }
    ctx->pc = 0x4CE360u;
    SET_GPR_U32(ctx, 31, 0x4CE368u);
    ctx->pc = 0x4CE364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CE360u;
    // 0x4ce364: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4CE360u, 0x4CE368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CE368u;
label_4ce368:
    // 0x4ce368: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x4ce368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_4ce36c:
    // 0x4ce36c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4ce36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4ce370:
    // 0x4ce370: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4ce370u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_4ce374:
    // 0x4ce374: 0x26070014  addiu       $a3, $s0, 0x14
    ctx->pc = 0x4ce374u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_4ce378:
    // 0x4ce378: 0x26080018  addiu       $t0, $s0, 0x18
    ctx->pc = 0x4ce378u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_4ce37c:
    // 0x4ce37c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ce37cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4ce380:
    // 0x4ce380: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4ce380u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
label_4ce384:
    // 0x4ce384: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4ce384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_4ce388:
    // 0x4ce388: 0x24840f88  addiu       $a0, $a0, 0xF88
    ctx->pc = 0x4ce388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3976));
label_4ce38c:
    // 0x4ce38c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4ce38cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_4ce390:
    // 0x4ce390: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4ce390u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_4ce394:
    // 0x4ce394: 0x34a52000  ori         $a1, $a1, 0x2000
    ctx->pc = 0x4ce394u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8192);
label_4ce398:
    // 0x4ce398: 0x24090140  addiu       $t1, $zero, 0x140
    ctx->pc = 0x4ce398u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_4ce39c:
    // 0x4ce39c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4ce39cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4ce3a0:
    // 0x4ce3a0: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x4ce3a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4ce3a4:
    // 0x4ce3a4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ce3a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4ce3a8:
    // 0x4ce3a8: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4ce3a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_4ce3ac:
    // 0x4ce3ac: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4ce3acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_4ce3b0:
    // 0x4ce3b0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4ce3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4ce3b4:
    // 0x4ce3b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ce3b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4ce3b8:
    // 0x4ce3b8: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4ce3b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_4ce3bc:
    // 0x4ce3bc: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x4ce3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_4ce3c0:
    // 0x4ce3c0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4ce3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4ce3c4:
    // 0x4ce3c4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ce3c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4ce3c8:
    // 0x4ce3c8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4ce3c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_4ce3cc:
    // 0x4ce3cc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4ce3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_4ce3d0:
    // 0x4ce3d0: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4ce3d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_4ce3d4:
    // 0x4ce3d4: 0xa602015a  sh          $v0, 0x15A($s0)
    ctx->pc = 0x4ce3d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 346), (uint16_t)GPR_U32(ctx, 2));
label_4ce3d8:
    // 0x4ce3d8: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x4ce3d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_4ce3dc:
    // 0x4ce3dc: 0xa6090158  sh          $t1, 0x158($s0)
    ctx->pc = 0x4ce3dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 344), (uint16_t)GPR_U32(ctx, 9));
label_4ce3e0:
    // 0x4ce3e0: 0xa603015c  sh          $v1, 0x15C($s0)
    ctx->pc = 0x4ce3e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 348), (uint16_t)GPR_U32(ctx, 3));
label_4ce3e4:
    // 0x4ce3e4: 0xa60a01b6  sh          $t2, 0x1B6($s0)
    ctx->pc = 0x4ce3e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 438), (uint16_t)GPR_U32(ctx, 10));
label_4ce3e8:
    // 0x4ce3e8: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4ce3e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4ce3ec:
    // 0x4ce3ec: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4ce3ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_4ce3f0:
    // 0x4ce3f0: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4ce3f0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_4ce3f4:
    // 0x4ce3f4: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4ce3f4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
label_4ce3f8:
    // 0x4ce3f8: 0x3c0a007f  lui         $t2, 0x7F
    ctx->pc = 0x4ce3f8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)127 << 16));
label_4ce3fc:
    // 0x4ce3fc: 0x25290f94  addiu       $t1, $t1, 0xF94
    ctx->pc = 0x4ce3fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3988));
label_4ce400:
    // 0x4ce400: 0x254a0f98  addiu       $t2, $t2, 0xF98
    ctx->pc = 0x4ce400u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 3992));
label_4ce404:
    // 0x4ce404: 0x8d280000  lw          $t0, 0x0($t1)
    ctx->pc = 0x4ce404u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_4ce408:
    // 0x4ce408: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4ce408u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_4ce40c:
    // 0x4ce40c: 0x8d470000  lw          $a3, 0x0($t2)
    ctx->pc = 0x4ce40cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_4ce410:
    // 0x4ce410: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4ce410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_4ce414:
    // 0x4ce414: 0x34630493  ori         $v1, $v1, 0x493
    ctx->pc = 0x4ce414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1171);
label_4ce418:
    // 0x4ce418: 0x3442047e  ori         $v0, $v0, 0x47E
    ctx->pc = 0x4ce418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1150);
label_4ce41c:
    // 0x4ce41c: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4ce41cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
label_4ce420:
    // 0x4ce420: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4ce420u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_4ce424:
    // 0x4ce424: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x4ce424u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
label_4ce428:
    // 0x4ce428: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4ce428u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
label_4ce42c:
    // 0x4ce42c: 0xad280000  sw          $t0, 0x0($t1)
    ctx->pc = 0x4ce42cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 8));
label_4ce430:
    // 0x4ce430: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x4ce430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_4ce434:
    // 0x4ce434: 0xad470000  sw          $a3, 0x0($t2)
    ctx->pc = 0x4ce434u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 7));
label_4ce438:
    // 0x4ce438: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x4ce438u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_4ce43c:
    // 0x4ce43c: 0xc12b698  jal         func_4ADA60
label_4ce440:
    if (ctx->pc == 0x4CE440u) {
        ctx->pc = 0x4CE440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CE43Cu;
        // 0x4ce440: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CE444u;
        goto label_4ce444;
    }
    ctx->pc = 0x4CE43Cu;
    SET_GPR_U32(ctx, 31, 0x4CE444u);
    ctx->pc = 0x4CE440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CE43Cu;
    // 0x4ce440: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADA60u, 0x4CE43Cu, 0x4CE444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CE444u;
label_4ce444:
    // 0x4ce444: 0x860301bc  lh          $v1, 0x1BC($s0)
    ctx->pc = 0x4ce444u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
label_4ce448:
    // 0x4ce448: 0x2c620011  sltiu       $v0, $v1, 0x11
    ctx->pc = 0x4ce448u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_4ce44c:
    // 0x4ce44c: 0x5040003f  beql        $v0, $zero, . + 4 + (0x3F << 2)
label_4ce450:
    if (ctx->pc == 0x4CE450u) {
        ctx->pc = 0x4CE450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CE44Cu;
        // 0x4ce450: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CE454u;
        goto label_4ce454;
    }
    ctx->pc = 0x4CE44Cu;
    {
        const bool branch_taken_0x4ce44c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ce44c) {
            ctx->pc = 0x4CE450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4CE44Cu;
            // 0x4ce450: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CE54Cu;
            return;
        }
    }
    ctx->pc = 0x4CE454u;
label_4ce454:
    // 0x4ce454: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x4ce454u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4ce458:
    // 0x4ce458: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4ce458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_4ce45c:
    // 0x4ce45c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4ce45cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4ce460:
    // 0x4ce460: 0x8c63b680  lw          $v1, -0x4980($v1)
    ctx->pc = 0x4ce460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948480)));
label_4ce464:
    // 0x4ce464: 0x600008  jr          $v1
label_4ce468:
    if (ctx->pc == 0x4CE468u) {
        ctx->pc = 0x4CE46Cu;
        goto label_4ce46c;
    }
    ctx->pc = 0x4CE464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CE464u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4CE46Cu;
label_4ce46c:
    // 0x4ce46c: 0x0  nop
    ctx->pc = 0x4ce46cu;
    // NOP
    ctx->pc = 0x4ce470u;
}
