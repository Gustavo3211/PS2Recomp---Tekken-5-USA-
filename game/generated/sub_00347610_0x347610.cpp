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

// Function: sub_00347610
// Address: 0x347610 - 0x347cc8
void sub_00347610_0x347610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00347610_0x347610");
#endif

    switch (ctx->pc) {
        case 0x34769cu: goto label_34769c;
        case 0x3476bcu: goto label_3476bc;
        case 0x347704u: goto label_347704;
        case 0x347724u: goto label_347724;
        case 0x347744u: goto label_347744;
        case 0x34778cu: goto label_34778c;
        case 0x3477acu: goto label_3477ac;
        case 0x3477ccu: goto label_3477cc;
        case 0x3477f4u: goto label_3477f4;
        case 0x3477fcu: goto label_3477fc;
        case 0x347828u: goto label_347828;
        case 0x347870u: goto label_347870;
        case 0x3479b0u: goto label_3479b0;
        case 0x3479d8u: goto label_3479d8;
        case 0x3479fcu: goto label_3479fc;
        case 0x347ab4u: goto label_347ab4;
        case 0x347ad8u: goto label_347ad8;
        case 0x347b00u: goto label_347b00;
        case 0x347b94u: goto label_347b94;
        case 0x347c28u: goto label_347c28;
        case 0x347c64u: goto label_347c64;
        case 0x347ca0u: goto label_347ca0;
        default: break;
    }

    ctx->pc = 0x347610u;

label_347610:
    // 0x347610: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x347610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x347614: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x347614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x347618: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x347618u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34761c: 0x2e820009  sltiu       $v0, $s4, 0x9
    ctx->pc = 0x34761cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x347620: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x347620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x347624: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x347624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x347628: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x347628u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34762c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x34762cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x347630: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x347630u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347634: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x347634u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347638: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x347638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34763c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x34763cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x347640: 0x10400071  beqz        $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x347640u;
    {
        const bool branch_taken_0x347640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x347644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347640u;
        // 0x347644: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347640) {
            ctx->pc = 0x347808u;
            goto label_347808;
        }
    }
    ctx->pc = 0x347648u;
    // 0x347648: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x347648u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x34764c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x34764cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x347650: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x347650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x347654: 0x8c634bb0  lw          $v1, 0x4BB0($v1)
    ctx->pc = 0x347654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 19376)));
    // 0x347658: 0x600008  jr          $v1
    ctx->pc = 0x347658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x347660u: goto label_347660;
            case 0x3476C8u: goto label_3476c8;
            case 0x347750u: goto label_347750;
            case 0x347808u: goto label_347808;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x347658u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x347660u;
label_347660:
    // 0x347660: 0x2ca20007  sltiu       $v0, $a1, 0x7
    ctx->pc = 0x347660u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x347664: 0x50400069  beql        $v0, $zero, . + 4 + (0x69 << 2)
    ctx->pc = 0x347664u;
    {
        const bool branch_taken_0x347664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x347664) {
            ctx->pc = 0x347668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347664u;
            // 0x347668: 0x8e700000  lw          $s0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34780Cu;
            goto label_34780c;
        }
    }
    ctx->pc = 0x34766Cu;
    // 0x34766c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x34766cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x347670: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x347670u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x347674: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x347674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x347678: 0x8c634be0  lw          $v1, 0x4BE0($v1)
    ctx->pc = 0x347678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 19424)));
    // 0x34767c: 0x600008  jr          $v1
    ctx->pc = 0x34767Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x347688u: goto label_347688;
            case 0x3476A8u: goto label_3476a8;
            case 0x347808u: goto label_347808;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34767Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x347684u;
    // 0x347684: 0x0  nop
    ctx->pc = 0x347684u;
    // NOP
label_347688:
    // 0x347688: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x347688u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x34768c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34768cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347690: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x347690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347694: 0xc0d21fa  jal         func_3487E8
    ctx->pc = 0x347694u;
    SET_GPR_U32(ctx, 31, 0x34769Cu);
    ctx->pc = 0x347698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347694u;
    // 0x347698: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3487E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3487E8u, 0x347694u, 0x34769Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34769Cu;
label_34769c:
    // 0x34769c: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x34769Cu;
    {
        const bool branch_taken_0x34769c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34769c) {
            ctx->pc = 0x3477F4u;
            goto label_3477f4;
        }
    }
    ctx->pc = 0x3476A4u;
    // 0x3476a4: 0x0  nop
    ctx->pc = 0x3476a4u;
    // NOP
label_3476a8:
    // 0x3476a8: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x3476a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3476ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3476acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3476b0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3476b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3476b4: 0xc0d2198  jal         func_348660
    ctx->pc = 0x3476B4u;
    SET_GPR_U32(ctx, 31, 0x3476BCu);
    ctx->pc = 0x3476B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3476B4u;
    // 0x3476b8: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348660u, 0x3476B4u, 0x3476BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3476BCu;
label_3476bc:
    // 0x3476bc: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x3476BCu;
    {
        const bool branch_taken_0x3476bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3476bc) {
            ctx->pc = 0x3477F4u;
            goto label_3477f4;
        }
    }
    ctx->pc = 0x3476C4u;
    // 0x3476c4: 0x0  nop
    ctx->pc = 0x3476c4u;
    // NOP
label_3476c8:
    // 0x3476c8: 0x2ca20007  sltiu       $v0, $a1, 0x7
    ctx->pc = 0x3476c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x3476cc: 0x5040004f  beql        $v0, $zero, . + 4 + (0x4F << 2)
    ctx->pc = 0x3476CCu;
    {
        const bool branch_taken_0x3476cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3476cc) {
            ctx->pc = 0x3476D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3476CCu;
            // 0x3476d0: 0x8e700000  lw          $s0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34780Cu;
            goto label_34780c;
        }
    }
    ctx->pc = 0x3476D4u;
    // 0x3476d4: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x3476d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3476d8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x3476d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x3476dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3476dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3476e0: 0x8c634c00  lw          $v1, 0x4C00($v1)
    ctx->pc = 0x3476e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 19456)));
    // 0x3476e4: 0x600008  jr          $v1
    ctx->pc = 0x3476E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3476F0u: goto label_3476f0;
            case 0x347730u: goto label_347730;
            case 0x347808u: goto label_347808;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3476E4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3476ECu;
    // 0x3476ec: 0x0  nop
    ctx->pc = 0x3476ecu;
    // NOP
label_3476f0:
    // 0x3476f0: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x3476f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3476f4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3476f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3476f8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3476f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3476fc: 0xc0d232a  jal         func_348CA8
    ctx->pc = 0x3476FCu;
    SET_GPR_U32(ctx, 31, 0x347704u);
    ctx->pc = 0x347700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3476FCu;
    // 0x347700: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348CA8u, 0x3476FCu, 0x347704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347704u;
label_347704:
    // 0x347704: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x347704u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x347708: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x347708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34770c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x34770cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347710: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x347710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x347714: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x347714u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347718: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x347718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34771c: 0xc0d2096  jal         func_348258
    ctx->pc = 0x34771Cu;
    SET_GPR_U32(ctx, 31, 0x347724u);
    ctx->pc = 0x347720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34771Cu;
    // 0x347720: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348258u, 0x34771Cu, 0x347724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347724u;
label_347724:
    // 0x347724: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x347724u;
    {
        const bool branch_taken_0x347724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x347724) {
            ctx->pc = 0x3477F4u;
            goto label_3477f4;
        }
    }
    ctx->pc = 0x34772Cu;
    // 0x34772c: 0x0  nop
    ctx->pc = 0x34772cu;
    // NOP
label_347730:
    // 0x347730: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x347730u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x347734: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x347734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347738: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x347738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34773c: 0xc0d2144  jal         func_348510
    ctx->pc = 0x34773Cu;
    SET_GPR_U32(ctx, 31, 0x347744u);
    ctx->pc = 0x347740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34773Cu;
    // 0x347740: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348510u, 0x34773Cu, 0x347744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347744u;
label_347744:
    // 0x347744: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x347744u;
    {
        const bool branch_taken_0x347744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x347744) {
            ctx->pc = 0x3477F4u;
            goto label_3477f4;
        }
    }
    ctx->pc = 0x34774Cu;
    // 0x34774c: 0x0  nop
    ctx->pc = 0x34774cu;
    // NOP
label_347750:
    // 0x347750: 0x2ca20007  sltiu       $v0, $a1, 0x7
    ctx->pc = 0x347750u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x347754: 0x5040002d  beql        $v0, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x347754u;
    {
        const bool branch_taken_0x347754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x347754) {
            ctx->pc = 0x347758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347754u;
            // 0x347758: 0x8e700000  lw          $s0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34780Cu;
            goto label_34780c;
        }
    }
    ctx->pc = 0x34775Cu;
    // 0x34775c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x34775cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x347760: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x347760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x347764: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x347764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x347768: 0x8c634c20  lw          $v1, 0x4C20($v1)
    ctx->pc = 0x347768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 19488)));
    // 0x34776c: 0x600008  jr          $v1
    ctx->pc = 0x34776Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x347778u: goto label_347778;
            case 0x3477B8u: goto label_3477b8;
            case 0x3477D8u: goto label_3477d8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34776Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x347774u;
    // 0x347774: 0x0  nop
    ctx->pc = 0x347774u;
    // NOP
label_347778:
    // 0x347778: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x347778u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34777c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x34777cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347780: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x347780u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347784: 0xc0d232a  jal         func_348CA8
    ctx->pc = 0x347784u;
    SET_GPR_U32(ctx, 31, 0x34778Cu);
    ctx->pc = 0x347788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347784u;
    // 0x347788: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348CA8u, 0x347784u, 0x34778Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34778Cu;
label_34778c:
    // 0x34778c: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x34778cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x347790: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x347790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347794: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x347794u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347798: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x347798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x34779c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x34779cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3477a0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3477a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3477a4: 0xc0d1f32  jal         func_347CC8
    ctx->pc = 0x3477A4u;
    SET_GPR_U32(ctx, 31, 0x3477ACu);
    ctx->pc = 0x3477A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3477A4u;
    // 0x3477a8: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347CC8u, 0x3477A4u, 0x3477ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3477ACu;
label_3477ac:
    // 0x3477ac: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3477ACu;
    {
        const bool branch_taken_0x3477ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3477ac) {
            ctx->pc = 0x3477F4u;
            goto label_3477f4;
        }
    }
    ctx->pc = 0x3477B4u;
    // 0x3477b4: 0x0  nop
    ctx->pc = 0x3477b4u;
    // NOP
label_3477b8:
    // 0x3477b8: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x3477b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3477bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3477bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3477c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3477c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3477c4: 0xc0d1ff4  jal         func_347FD0
    ctx->pc = 0x3477C4u;
    SET_GPR_U32(ctx, 31, 0x3477CCu);
    ctx->pc = 0x3477C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3477C4u;
    // 0x3477c8: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347FD0u, 0x3477C4u, 0x3477CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3477CCu;
label_3477cc:
    // 0x3477cc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3477CCu;
    {
        const bool branch_taken_0x3477cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3477cc) {
            ctx->pc = 0x3477F4u;
            goto label_3477f4;
        }
    }
    ctx->pc = 0x3477D4u;
    // 0x3477d4: 0x0  nop
    ctx->pc = 0x3477d4u;
    // NOP
label_3477d8:
    // 0x3477d8: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x3477d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3477dc: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x3477dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3477e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3477e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3477e4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3477e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3477e8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3477e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3477ec: 0xc0d2048  jal         func_348120
    ctx->pc = 0x3477ECu;
    SET_GPR_U32(ctx, 31, 0x3477F4u);
    ctx->pc = 0x3477F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3477ECu;
    // 0x3477f0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348120u, 0x3477ECu, 0x3477F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3477F4u;
label_3477f4:
    // 0x3477f4: 0xc04a4d1  jal         func_129344
    ctx->pc = 0x3477F4u;
    SET_GPR_U32(ctx, 31, 0x3477FCu);
    ctx->pc = 0x3477F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3477F4u;
    // 0x3477f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129344u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129344u, 0x3477F4u, 0x3477FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3477FCu;
label_3477fc:
    // 0x3477fc: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x3477fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x347800: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x347800u;
    {
        const bool branch_taken_0x347800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347800u;
        // 0x347804: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347800) {
            ctx->pc = 0x347838u;
            goto label_347838;
        }
    }
    ctx->pc = 0x347808u;
label_347808:
    // 0x347808: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x347808u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_34780c:
    // 0x34780c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x34780cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347810: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x347810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347814: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x347814u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x347818: 0xd0102a  slt         $v0, $a2, $s0
    ctx->pc = 0x347818u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x34781c: 0xc2800b  movn        $s0, $a2, $v0
    ctx->pc = 0x34781cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 6));
    // 0x347820: 0xc04a125  jal         func_128494
    ctx->pc = 0x347820u;
    SET_GPR_U32(ctx, 31, 0x347828u);
    ctx->pc = 0x347824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347820u;
    // 0x347824: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128494u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128494u, 0x347820u, 0x347828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347828u;
label_347828:
    // 0x347828: 0x2501821  addu        $v1, $s2, $s0
    ctx->pc = 0x347828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x34782c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x34782cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x347830: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x347830u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347834: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x347834u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
label_347838:
    // 0x347838: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x347838u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34783c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x34783cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x347840: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x347840u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x347844: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x347844u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x347848: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x347848u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34784c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x34784cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347850: 0x3e00008  jr          $ra
    ctx->pc = 0x347850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347850u;
        // 0x347854: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x347850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x347858u;
    // 0x347858: 0x90870000  lbu         $a3, 0x0($a0)
    ctx->pc = 0x347858u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34785c: 0x14e00004  bnez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x34785Cu;
    {
        const bool branch_taken_0x34785c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x347860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34785Cu;
        // 0x347860: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34785c) {
            ctx->pc = 0x347870u;
            goto label_347870;
        }
    }
    ctx->pc = 0x347864u;
    // 0x347864: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x347864u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x347868: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x347868u;
    {
        const bool branch_taken_0x347868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34786Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347868u;
        // 0x34786c: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347868) {
            ctx->pc = 0x347958u;
            goto label_347958;
        }
    }
    ctx->pc = 0x347870u;
label_347870:
    // 0x347870: 0x24e200e0  addiu       $v0, $a3, 0xE0
    ctx->pc = 0x347870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 224));
    // 0x347874: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x347874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x347878: 0x2c42005f  sltiu       $v0, $v0, 0x5F
    ctx->pc = 0x347878u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)95) ? 1 : 0);
    // 0x34787c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x34787Cu;
    {
        const bool branch_taken_0x34787c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x347880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34787Cu;
        // 0x347880: 0x71600  sll         $v0, $a3, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34787c) {
            ctx->pc = 0x3478D0u;
            goto label_3478d0;
        }
    }
    ctx->pc = 0x347884u;
    // 0x347884: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x347884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x347888: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x347888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x34788c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x34788cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x347890: 0x54400029  bnel        $v0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x347890u;
    {
        const bool branch_taken_0x347890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x347890) {
            ctx->pc = 0x347894u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347890u;
            // 0x347894: 0xa0a00000  sb          $zero, 0x0($a1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x347938u;
            goto label_347938;
        }
    }
    ctx->pc = 0x347898u;
    // 0x347898: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x347898u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34789c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x34789cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3478a0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3478a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3478a4: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x3478a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x3478a8: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x3478a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3478ac: 0x80e7b808  lb          $a3, -0x47F8($a3)
    ctx->pc = 0x3478acu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 4294948872)));
    // 0x3478b0: 0x3c080046  lui         $t0, 0x46
    ctx->pc = 0x3478b0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)70 << 16));
    // 0x3478b4: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x3478b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x3478b8: 0x8108b809  lb          $t0, -0x47F7($t0)
    ctx->pc = 0x3478b8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 4294948873)));
    // 0x3478bc: 0xa0a70000  sb          $a3, 0x0($a1)
    ctx->pc = 0x3478bcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x3478c0: 0xa0a80001  sb          $t0, 0x1($a1)
    ctx->pc = 0x3478c0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 8));
    // 0x3478c4: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x3478C4u;
    {
        const bool branch_taken_0x3478c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3478C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3478C4u;
        // 0x3478c8: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3478c4) {
            ctx->pc = 0x347944u;
            goto label_347944;
        }
    }
    ctx->pc = 0x3478CCu;
    // 0x3478cc: 0x0  nop
    ctx->pc = 0x3478ccu;
    // NOP
label_3478d0:
    // 0x3478d0: 0x441000f  bgez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3478D0u;
    {
        const bool branch_taken_0x3478d0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3478D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3478D0u;
        // 0x3478d4: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3478d0) {
            ctx->pc = 0x347910u;
            goto label_347910;
        }
    }
    ctx->pc = 0x3478D8u;
    // 0x3478d8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x3478d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3478dc: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3478dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3478e0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3478e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3478e4: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x3478E4u;
    {
        const bool branch_taken_0x3478e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3478e4) {
            ctx->pc = 0x3478E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3478E4u;
            // 0x3478e8: 0xa0a00000  sb          $zero, 0x0($a1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x347938u;
            goto label_347938;
        }
    }
    ctx->pc = 0x3478ECu;
    // 0x3478ec: 0xa0a70000  sb          $a3, 0x0($a1)
    ctx->pc = 0x3478ecu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x3478f0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3478f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3478f4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3478f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3478f8: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3478f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3478fc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3478fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x347900: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x347900u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x347904: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x347904u;
    {
        const bool branch_taken_0x347904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347904u;
        // 0x347908: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347904) {
            ctx->pc = 0x347944u;
            goto label_347944;
        }
    }
    ctx->pc = 0x34790Cu;
    // 0x34790c: 0x0  nop
    ctx->pc = 0x34790cu;
    // NOP
label_347910:
    // 0x347910: 0x54e2000c  bnel        $a3, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x347910u;
    {
        const bool branch_taken_0x347910 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x347910) {
            ctx->pc = 0x347914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347910u;
            // 0x347914: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x347944u;
            goto label_347944;
        }
    }
    ctx->pc = 0x347918u;
    // 0x347918: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x347918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x34791c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x34791cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x347920: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x347920u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x347924: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x347924u;
    {
        const bool branch_taken_0x347924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x347924) {
            ctx->pc = 0x347928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347924u;
            // 0x347928: 0xa0a00000  sb          $zero, 0x0($a1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x347938u;
            goto label_347938;
        }
    }
    ctx->pc = 0x34792Cu;
    // 0x34792c: 0xa0a70000  sb          $a3, 0x0($a1)
    ctx->pc = 0x34792cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x347930: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x347930u;
    {
        const bool branch_taken_0x347930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347930u;
        // 0x347934: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347930) {
            ctx->pc = 0x347940u;
            goto label_347940;
        }
    }
    ctx->pc = 0x347938u;
label_347938:
    // 0x347938: 0x3e00008  jr          $ra
    ctx->pc = 0x347938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34793Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347938u;
        // 0x34793c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x347938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x347940u;
label_347940:
    // 0x347940: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x347940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_347944:
    // 0x347944: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x347944u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x347948: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x347948u;
    {
        const bool branch_taken_0x347948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34794Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347948u;
        // 0x34794c: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347948) {
            ctx->pc = 0x347870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_347870;
        }
    }
    ctx->pc = 0x347950u;
    // 0x347950: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x347950u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x347954: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x347954u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_347958:
    // 0x347958: 0x3e00008  jr          $ra
    ctx->pc = 0x347958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34795Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347958u;
        // 0x34795c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x347958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x347960u;
    // 0x347960: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x347960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x347964: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x347964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x347968: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x347968u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34796c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x34796cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x347970: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x347970u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347974: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x347974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x347978: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x347978u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34797c: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x34797cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x347980: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x347980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x347984: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x347984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x347988: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x347988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x34798c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x34798cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x347990: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x347990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x347994: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x347994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x347998: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x347998u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x34799c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x34799Cu;
    {
        const bool branch_taken_0x34799c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3479A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34799Cu;
        // 0x3479a0: 0xc0f02d  daddu       $fp, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34799c) {
            ctx->pc = 0x3479B0u;
            goto label_3479b0;
        }
    }
    ctx->pc = 0x3479A4u;
    // 0x3479a4: 0xa2600000  sb          $zero, 0x0($s3)
    ctx->pc = 0x3479a4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3479a8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x3479A8u;
    {
        const bool branch_taken_0x3479a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3479ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3479A8u;
        // 0x3479ac: 0xafc00000  sw          $zero, 0x0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3479a8) {
            ctx->pc = 0x347A50u;
            goto label_347a50;
        }
    }
    ctx->pc = 0x3479B0u;
label_3479b0:
    // 0x3479b0: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x3479b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x3479b4: 0x443001e  bgezl       $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x3479B4u;
    {
        const bool branch_taken_0x3479b4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3479b4) {
            ctx->pc = 0x3479B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3479B4u;
            // 0x3479b8: 0xa2630000  sb          $v1, 0x0($s3) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x347A30u;
            goto label_347a30;
        }
    }
    ctx->pc = 0x3479BCu;
    // 0x3479bc: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3479bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3479c0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3479c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3479c4: 0x2456b90a  addiu       $s6, $v0, -0x46F6
    ctx->pc = 0x3479c4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949130));
    // 0x3479c8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3479c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3479cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3479CCu;
    {
        const bool branch_taken_0x3479cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3479D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3479CCu;
        // 0x3479d0: 0x26d5fffe  addiu       $s5, $s6, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3479cc) {
            ctx->pc = 0x3479DCu;
            goto label_3479dc;
        }
    }
    ctx->pc = 0x3479D4u;
    // 0x3479d4: 0x0  nop
    ctx->pc = 0x3479d4u;
    // NOP
label_3479d8:
    // 0x3479d8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3479d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3479dc:
    // 0x3479dc: 0x2e82005f  sltiu       $v0, $s4, 0x5F
    ctx->pc = 0x3479dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)95) ? 1 : 0);
    // 0x3479e0: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x3479E0u;
    {
        const bool branch_taken_0x3479e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3479e0) {
            ctx->pc = 0x3479E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3479E0u;
            // 0x3479e4: 0x2402005f  addiu       $v0, $zero, 0x5F (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
            ctx->in_delay_slot = false;
            ctx->pc = 0x347A20u;
            goto label_347a20;
        }
    }
    ctx->pc = 0x3479E8u;
    // 0x3479e8: 0x2552821  addu        $a1, $s2, $s5
    ctx->pc = 0x3479e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    // 0x3479ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3479ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3479f0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3479f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3479f4: 0xc04a100  jal         func_128400
    ctx->pc = 0x3479F4u;
    SET_GPR_U32(ctx, 31, 0x3479FCu);
    ctx->pc = 0x3479F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3479F4u;
    // 0x3479f8: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128400u, 0x3479F4u, 0x3479FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3479FCu;
label_3479fc:
    // 0x3479fc: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x3479FCu;
    {
        const bool branch_taken_0x3479fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3479fc) {
            ctx->pc = 0x347A00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3479FCu;
            // 0x347a00: 0x26120003  addiu       $s2, $s0, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3479D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3479d8;
        }
    }
    ctx->pc = 0x347A04u;
    // 0x347a04: 0x2561021  addu        $v0, $s2, $s6
    ctx->pc = 0x347a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 22)));
    // 0x347a08: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x347a08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x347a0c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x347a0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x347a10: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x347a10u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x347a14: 0xa2630000  sb          $v1, 0x0($s3)
    ctx->pc = 0x347a14u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x347a18: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x347a18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x347a1c: 0x2402005f  addiu       $v0, $zero, 0x5F
    ctx->pc = 0x347a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
label_347a20:
    // 0x347a20: 0x52820006  beql        $s4, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x347A20u;
    {
        const bool branch_taken_0x347a20 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x347a20) {
            ctx->pc = 0x347A24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347A20u;
            // 0x347a24: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x347A3Cu;
            goto label_347a3c;
        }
    }
    ctx->pc = 0x347A28u;
    // 0x347a28: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x347A28u;
    {
        const bool branch_taken_0x347a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347A28u;
        // 0x347a2c: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347a28) {
            ctx->pc = 0x347A40u;
            goto label_347a40;
        }
    }
    ctx->pc = 0x347A30u;
label_347a30:
    // 0x347a30: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x347a30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x347a34: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x347a34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x347a38: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x347a38u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_347a3c:
    // 0x347a3c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x347a3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_347a40:
    // 0x347a40: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x347A40u;
    {
        const bool branch_taken_0x347a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x347A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347A40u;
        // 0x347a44: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347a40) {
            ctx->pc = 0x3479B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3479b0;
        }
    }
    ctx->pc = 0x347A48u;
    // 0x347a48: 0xa2600000  sb          $zero, 0x0($s3)
    ctx->pc = 0x347a48u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x347a4c: 0xafd70000  sw          $s7, 0x0($fp)
    ctx->pc = 0x347a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 23));
label_347a50:
    // 0x347a50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x347a50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x347a54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x347a54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347a58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x347a58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x347a5c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x347a5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x347a60: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x347a60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x347a64: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x347a64u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x347a68: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x347a68u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x347a6c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x347a6cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x347a70: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x347a70u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x347a74: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x347a74u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x347a78: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x347a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347a7c: 0x3e00008  jr          $ra
    ctx->pc = 0x347A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347A7Cu;
        // 0x347a80: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x347A7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x347A84u;
    // 0x347a84: 0x0  nop
    ctx->pc = 0x347a84u;
    // NOP
    // 0x347a88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x347a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x347a8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x347a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x347a90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x347a90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347a94: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x347a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x347a98: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x347a98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347a9c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x347a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x347aa0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x347aa0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347aa4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x347aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x347aa8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x347aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x347aac: 0xc04a4d1  jal         func_129344
    ctx->pc = 0x347AACu;
    SET_GPR_U32(ctx, 31, 0x347AB4u);
    ctx->pc = 0x347AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347AACu;
    // 0x347ab0: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129344u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129344u, 0x347AACu, 0x347AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347AB4u;
label_347ab4:
    // 0x347ab4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x347ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x347ab8: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x347ab8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x347abc: 0x71380a  movz        $a3, $v1, $s1
    ctx->pc = 0x347abcu;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
    // 0x347ac0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x347ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x347ac4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x347ac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347ac8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x347ac8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347acc: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x347accu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347ad0: 0xc0d1d84  jal         func_347610
    ctx->pc = 0x347AD0u;
    SET_GPR_U32(ctx, 31, 0x347AD8u);
    ctx->pc = 0x347AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347AD0u;
    // 0x347ad4: 0x260482d  daddu       $t1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347610u;
    goto label_347610;
    ctx->pc = 0x347AD8u;
label_347ad8:
    // 0x347ad8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x347ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347adc: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x347adcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x347ae0: 0x1060006c  beqz        $v1, . + 4 + (0x6C << 2)
    ctx->pc = 0x347AE0u;
    {
        const bool branch_taken_0x347ae0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x347AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347AE0u;
        // 0x347ae4: 0x264a0001  addiu       $t2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347ae0) {
            ctx->pc = 0x347C94u;
            goto label_347c94;
        }
    }
    ctx->pc = 0x347AE8u;
    // 0x347ae8: 0x24020081  addiu       $v0, $zero, 0x81
    ctx->pc = 0x347ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    // 0x347aec: 0x1462005d  bne         $v1, $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x347AECu;
    {
        const bool branch_taken_0x347aec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x347AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347AECu;
        // 0x347af0: 0x140202d  daddu       $a0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347aec) {
            ctx->pc = 0x347C64u;
            goto label_347c64;
        }
    }
    ctx->pc = 0x347AF4u;
    // 0x347af4: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x347af4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x347af8: 0x10600066  beqz        $v1, . + 4 + (0x66 << 2)
    ctx->pc = 0x347AF8u;
    {
        const bool branch_taken_0x347af8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x347AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347AF8u;
        // 0x347afc: 0x264a0002  addiu       $t2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347af8) {
            ctx->pc = 0x347C94u;
            goto label_347c94;
        }
    }
    ctx->pc = 0x347B00u;
label_347b00:
    // 0x347b00: 0x2402004a  addiu       $v0, $zero, 0x4A
    ctx->pc = 0x347b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x347b04: 0x14620030  bne         $v1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x347B04u;
    {
        const bool branch_taken_0x347b04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x347B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347B04u;
        // 0x347b08: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347b04) {
            ctx->pc = 0x347BC8u;
            goto label_347bc8;
        }
    }
    ctx->pc = 0x347B0Cu;
    // 0x347b0c: 0x2547fffc  addiu       $a3, $t2, -0x4
    ctx->pc = 0x347b0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967292));
    // 0x347b10: 0xf2102b  sltu        $v0, $a3, $s2
    ctx->pc = 0x347b10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x347b14: 0x54400054  bnel        $v0, $zero, . + 4 + (0x54 << 2)
    ctx->pc = 0x347B14u;
    {
        const bool branch_taken_0x347b14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x347b14) {
            ctx->pc = 0x347B18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347B14u;
            // 0x347b18: 0x91430000  lbu         $v1, 0x0($t2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x347C68u;
            goto label_347c68;
        }
    }
    ctx->pc = 0x347B1Cu;
    // 0x347b1c: 0x90e80000  lbu         $t0, 0x0($a3)
    ctx->pc = 0x347b1cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x347b20: 0x24020082  addiu       $v0, $zero, 0x82
    ctx->pc = 0x347b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x347b24: 0x11020006  beq         $t0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x347B24u;
    {
        const bool branch_taken_0x347b24 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x347B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347B24u;
        // 0x347b28: 0x90e60001  lbu         $a2, 0x1($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347b24) {
            ctx->pc = 0x347B40u;
            goto label_347b40;
        }
    }
    ctx->pc = 0x347B2Cu;
    // 0x347b2c: 0x24020083  addiu       $v0, $zero, 0x83
    ctx->pc = 0x347b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
    // 0x347b30: 0x51020004  beql        $t0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x347B30u;
    {
        const bool branch_taken_0x347b30 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x347b30) {
            ctx->pc = 0x347B34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347B30u;
            // 0x347b34: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x347B44u;
            goto label_347b44;
        }
    }
    ctx->pc = 0x347B38u;
    // 0x347b38: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x347B38u;
    {
        const bool branch_taken_0x347b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347B38u;
        // 0x347b3c: 0x91430000  lbu         $v1, 0x0($t2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347b38) {
            ctx->pc = 0x347C68u;
            goto label_347c68;
        }
    }
    ctx->pc = 0x347B40u;
label_347b40:
    // 0x347b40: 0x2409005f  addiu       $t1, $zero, 0x5F
    ctx->pc = 0x347b40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
label_347b44:
    // 0x347b44: 0x25220045  addiu       $v0, $t1, 0x45
    ctx->pc = 0x347b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 69));
    // 0x347b48: 0x54c20009  bnel        $a2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x347B48u;
    {
        const bool branch_taken_0x347b48 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x347b48) {
            ctx->pc = 0x347B4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347B48u;
            // 0x347b4c: 0x3c0b0046  lui         $t3, 0x46 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)70 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x347B70u;
            goto label_347b70;
        }
    }
    ctx->pc = 0x347B50u;
    // 0x347b50: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x347b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347b54: 0x2402ff83  addiu       $v0, $zero, -0x7D
    ctx->pc = 0x347b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967171));
    // 0x347b58: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x347b58u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x347b5c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x347b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x347b60: 0x2402ff94  addiu       $v0, $zero, -0x6C
    ctx->pc = 0x347b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967188));
    // 0x347b64: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x347B64u;
    {
        const bool branch_taken_0x347b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347B64u;
        // 0x347b68: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347b64) {
            ctx->pc = 0x347C60u;
            goto label_347c60;
        }
    }
    ctx->pc = 0x347B6Cu;
    // 0x347b6c: 0x0  nop
    ctx->pc = 0x347b6cu;
    // NOP
label_347b70:
    // 0x347b70: 0x9162ba28  lbu         $v0, -0x45D8($t3)
    ctx->pc = 0x347b70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 4294949416)));
    // 0x347b74: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x347b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x347b78: 0x14c20005  bne         $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x347B78u;
    {
        const bool branch_taken_0x347b78 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x347B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347B78u;
        // 0x347b7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347b78) {
            ctx->pc = 0x347B90u;
            goto label_347b90;
        }
    }
    ctx->pc = 0x347B80u;
    // 0x347b80: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x347b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347b84: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x347B84u;
    {
        const bool branch_taken_0x347b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347B84u;
        // 0x347b88: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347b84) {
            ctx->pc = 0x347C54u;
            goto label_347c54;
        }
    }
    ctx->pc = 0x347B8Cu;
    // 0x347b8c: 0x0  nop
    ctx->pc = 0x347b8cu;
    // NOP
label_347b90:
    // 0x347b90: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x347b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_347b94:
    // 0x347b94: 0x2ca20014  sltiu       $v0, $a1, 0x14
    ctx->pc = 0x347b94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x347b98: 0x50400033  beql        $v0, $zero, . + 4 + (0x33 << 2)
    ctx->pc = 0x347B98u;
    {
        const bool branch_taken_0x347b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x347b98) {
            ctx->pc = 0x347B9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347B98u;
            // 0x347b9c: 0x91430000  lbu         $v1, 0x0($t2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x347C68u;
            goto label_347c68;
        }
    }
    ctx->pc = 0x347BA0u;
    // 0x347ba0: 0x2562ba28  addiu       $v0, $t3, -0x45D8
    ctx->pc = 0x347ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 4294949416));
    // 0x347ba4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x347ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x347ba8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x347ba8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x347bac: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x347bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x347bb0: 0x54c3fff8  bnel        $a2, $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x347BB0u;
    {
        const bool branch_taken_0x347bb0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x347bb0) {
            ctx->pc = 0x347BB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347BB0u;
            // 0x347bb4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x347B94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_347b94;
        }
    }
    ctx->pc = 0x347BB8u;
    // 0x347bb8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x347bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347bbc: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x347BBCu;
    {
        const bool branch_taken_0x347bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347BBCu;
        // 0x347bc0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347bbc) {
            ctx->pc = 0x347C54u;
            goto label_347c54;
        }
    }
    ctx->pc = 0x347BC4u;
    // 0x347bc4: 0x0  nop
    ctx->pc = 0x347bc4u;
    // NOP
label_347bc8:
    // 0x347bc8: 0x2402004b  addiu       $v0, $zero, 0x4B
    ctx->pc = 0x347bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x347bcc: 0x54620026  bnel        $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x347BCCu;
    {
        const bool branch_taken_0x347bcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x347bcc) {
            ctx->pc = 0x347BD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347BCCu;
            // 0x347bd0: 0x91430000  lbu         $v1, 0x0($t2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x347C68u;
            goto label_347c68;
        }
    }
    ctx->pc = 0x347BD4u;
    // 0x347bd4: 0x2547fffc  addiu       $a3, $t2, -0x4
    ctx->pc = 0x347bd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967292));
    // 0x347bd8: 0xf2102b  sltu        $v0, $a3, $s2
    ctx->pc = 0x347bd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x347bdc: 0x54400022  bnel        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x347BDCu;
    {
        const bool branch_taken_0x347bdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x347bdc) {
            ctx->pc = 0x347BE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347BDCu;
            // 0x347be0: 0x91430000  lbu         $v1, 0x0($t2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x347C68u;
            goto label_347c68;
        }
    }
    ctx->pc = 0x347BE4u;
    // 0x347be4: 0x90e80000  lbu         $t0, 0x0($a3)
    ctx->pc = 0x347be4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x347be8: 0x24020082  addiu       $v0, $zero, 0x82
    ctx->pc = 0x347be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x347bec: 0x11020006  beq         $t0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x347BECu;
    {
        const bool branch_taken_0x347bec = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x347BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347BECu;
        // 0x347bf0: 0x90e60001  lbu         $a2, 0x1($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347bec) {
            ctx->pc = 0x347C08u;
            goto label_347c08;
        }
    }
    ctx->pc = 0x347BF4u;
    // 0x347bf4: 0x24020083  addiu       $v0, $zero, 0x83
    ctx->pc = 0x347bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
    // 0x347bf8: 0x51020004  beql        $t0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x347BF8u;
    {
        const bool branch_taken_0x347bf8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x347bf8) {
            ctx->pc = 0x347BFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347BF8u;
            // 0x347bfc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x347C0Cu;
            goto label_347c0c;
        }
    }
    ctx->pc = 0x347C00u;
    // 0x347c00: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x347C00u;
    {
        const bool branch_taken_0x347c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347C00u;
        // 0x347c04: 0x91430000  lbu         $v1, 0x0($t2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347c00) {
            ctx->pc = 0x347C68u;
            goto label_347c68;
        }
    }
    ctx->pc = 0x347C08u;
label_347c08:
    // 0x347c08: 0x2409005f  addiu       $t1, $zero, 0x5F
    ctx->pc = 0x347c08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
label_347c0c:
    // 0x347c0c: 0x3c0b0046  lui         $t3, 0x46
    ctx->pc = 0x347c0cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)70 << 16));
    // 0x347c10: 0x9162ba40  lbu         $v0, -0x45C0($t3)
    ctx->pc = 0x347c10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x45BA40u));
    // 0x347c14: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x347c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x347c18: 0x10c2000c  beq         $a2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x347C18u;
    {
        const bool branch_taken_0x347c18 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x347C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347C18u;
        // 0x347c1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347c18) {
            ctx->pc = 0x347C4Cu;
            goto label_347c4c;
        }
    }
    ctx->pc = 0x347C20u;
    // 0x347c20: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x347c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x347c24: 0x0  nop
    ctx->pc = 0x347c24u;
    // NOP
label_347c28:
    // 0x347c28: 0x2ca20005  sltiu       $v0, $a1, 0x5
    ctx->pc = 0x347c28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x347c2c: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x347C2Cu;
    {
        const bool branch_taken_0x347c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x347c2c) {
            ctx->pc = 0x347C30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347C2Cu;
            // 0x347c30: 0x91430000  lbu         $v1, 0x0($t2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x347C68u;
            goto label_347c68;
        }
    }
    ctx->pc = 0x347C34u;
    // 0x347c34: 0x2562ba40  addiu       $v0, $t3, -0x45C0
    ctx->pc = 0x347c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 4294949440));
    // 0x347c38: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x347c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x347c3c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x347c3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x347c40: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x347c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x347c44: 0x54c3fff8  bnel        $a2, $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x347C44u;
    {
        const bool branch_taken_0x347c44 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x347c44) {
            ctx->pc = 0x347C48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347C44u;
            // 0x347c48: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x347C28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_347c28;
        }
    }
    ctx->pc = 0x347C4Cu;
label_347c4c:
    // 0x347c4c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x347c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347c50: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x347c50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_347c54:
    // 0x347c54: 0xa0880000  sb          $t0, 0x0($a0)
    ctx->pc = 0x347c54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x347c58: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x347c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x347c5c: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x347c5cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
label_347c60:
    // 0x347c60: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x347c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_347c64:
    // 0x347c64: 0x91430000  lbu         $v1, 0x0($t2)
    ctx->pc = 0x347c64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_347c68:
    // 0x347c68: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x347C68u;
    {
        const bool branch_taken_0x347c68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x347C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347C68u;
        // 0x347c6c: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347c68) {
            ctx->pc = 0x347C94u;
            goto label_347c94;
        }
    }
    ctx->pc = 0x347C70u;
    // 0x347c70: 0x24020081  addiu       $v0, $zero, 0x81
    ctx->pc = 0x347c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    // 0x347c74: 0x0  nop
    ctx->pc = 0x347c74u;
    // NOP
    // 0x347c78: 0x0  nop
    ctx->pc = 0x347c78u;
    // NOP
    // 0x347c7c: 0x0  nop
    ctx->pc = 0x347c7cu;
    // NOP
    // 0x347c80: 0x1462fff8  bne         $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x347C80u;
    {
        const bool branch_taken_0x347c80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x347C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347C80u;
        // 0x347c84: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347c80) {
            ctx->pc = 0x347C64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_347c64;
        }
    }
    ctx->pc = 0x347C88u;
    // 0x347c88: 0x91430000  lbu         $v1, 0x0($t2)
    ctx->pc = 0x347c88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x347c8c: 0x1460ff9c  bnez        $v1, . + 4 + (-0x64 << 2)
    ctx->pc = 0x347C8Cu;
    {
        const bool branch_taken_0x347c8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x347C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347C8Cu;
        // 0x347c90: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347c8c) {
            ctx->pc = 0x347B00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_347b00;
        }
    }
    ctx->pc = 0x347C94u;
label_347c94:
    // 0x347c94: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x347c94u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x347c98: 0xc04a4d1  jal         func_129344
    ctx->pc = 0x347C98u;
    SET_GPR_U32(ctx, 31, 0x347CA0u);
    ctx->pc = 0x347C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347C98u;
    // 0x347c9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129344u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129344u, 0x347C98u, 0x347CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347CA0u;
label_347ca0:
    // 0x347ca0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x347ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x347ca4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x347ca4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347ca8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x347ca8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x347cac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x347cacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x347cb0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x347cb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x347cb4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x347cb4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x347cb8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x347cb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x347cbc: 0x3e00008  jr          $ra
    ctx->pc = 0x347CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347CBCu;
        // 0x347cc0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x347CBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x347CC4u;
    // 0x347cc4: 0x0  nop
    ctx->pc = 0x347cc4u;
    // NOP
    ctx->pc = 0x347cc8u;
}
