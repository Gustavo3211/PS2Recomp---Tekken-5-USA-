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

// Function: sub_00290630
// Address: 0x290630 - 0x290c30
void sub_00290630_0x290630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00290630_0x290630");
#endif

    switch (ctx->pc) {
        case 0x2906b0u: goto label_2906b0;
        case 0x290728u: goto label_290728;
        case 0x290740u: goto label_290740;
        case 0x290760u: goto label_290760;
        case 0x290778u: goto label_290778;
        case 0x2907d0u: goto label_2907d0;
        case 0x2908c8u: goto label_2908c8;
        case 0x2908f4u: goto label_2908f4;
        case 0x290914u: goto label_290914;
        case 0x290954u: goto label_290954;
        case 0x290984u: goto label_290984;
        case 0x2909a0u: goto label_2909a0;
        case 0x2909e8u: goto label_2909e8;
        case 0x2909fcu: goto label_2909fc;
        case 0x290a14u: goto label_290a14;
        case 0x290a30u: goto label_290a30;
        case 0x290a74u: goto label_290a74;
        case 0x290aa0u: goto label_290aa0;
        case 0x290abcu: goto label_290abc;
        case 0x290ad0u: goto label_290ad0;
        case 0x290ae4u: goto label_290ae4;
        case 0x290af8u: goto label_290af8;
        case 0x290b0cu: goto label_290b0c;
        case 0x290b20u: goto label_290b20;
        case 0x290b34u: goto label_290b34;
        case 0x290b48u: goto label_290b48;
        case 0x290b5cu: goto label_290b5c;
        case 0x290b70u: goto label_290b70;
        case 0x290b84u: goto label_290b84;
        case 0x290bf0u: goto label_290bf0;
        default: break;
    }

    ctx->pc = 0x290630u;

    // 0x290630: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x290630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x290634: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x290634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x290638: 0x2484015c  addiu       $a0, $a0, 0x15C
    ctx->pc = 0x290638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 348));
    // 0x29063c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x29063cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x290640: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x290640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x290644: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x290644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x290648: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x290648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x29064c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x29064cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x290650: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x290650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x290654: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x290654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x290658: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x290658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x29065c: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x29065cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x290660: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x290660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x290664: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x290664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x290668: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x290668u;
    {
        const bool branch_taken_0x290668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x290668) {
            ctx->pc = 0x29066Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290668u;
            // 0x29066c: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290688u;
            goto label_290688;
        }
    }
    ctx->pc = 0x290670u;
    // 0x290670: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x290670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x290674: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x290674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x290678: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x290678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x29067c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29067Cu;
    {
        const bool branch_taken_0x29067c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x290680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29067Cu;
        // 0x290680: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29067c) {
            ctx->pc = 0x290694u;
            goto label_290694;
        }
    }
    ctx->pc = 0x290684u;
    // 0x290684: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x290684u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_290688:
    // 0x290688: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x290688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x29068c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x29068cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x290690: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x290690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_290694:
    // 0x290694: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x290694u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290698: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x290698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x29069c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29069cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2906a0: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2906a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2906a4: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x2906a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x2906a8: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x2906a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
    // 0x2906ac: 0x0  nop
    ctx->pc = 0x2906acu;
    // NOP
label_2906b0:
    // 0x2906b0: 0x16e00005  bnez        $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x2906B0u;
    {
        const bool branch_taken_0x2906b0 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x2906B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2906B0u;
        // 0x2906b4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2906b0) {
            ctx->pc = 0x2906C8u;
            goto label_2906c8;
        }
    }
    ctx->pc = 0x2906B8u;
    // 0x2906b8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2906b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2906bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2906BCu;
    {
        const bool branch_taken_0x2906bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2906C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2906BCu;
        // 0x2906c0: 0x8c910150  lw          $s1, 0x150($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2906bc) {
            ctx->pc = 0x2906CCu;
            goto label_2906cc;
        }
    }
    ctx->pc = 0x2906C4u;
    // 0x2906c4: 0x0  nop
    ctx->pc = 0x2906c4u;
    // NOP
label_2906c8:
    // 0x2906c8: 0x8c510154  lw          $s1, 0x154($v0)
    ctx->pc = 0x2906c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
label_2906cc:
    // 0x2906cc: 0x82230020  lb          $v1, 0x20($s1)
    ctx->pc = 0x2906ccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2906d0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2906d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2906d4: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x2906d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x2906d8: 0x2c620010  sltiu       $v0, $v1, 0x10
    ctx->pc = 0x2906d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2906dc: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x2906DCu;
    {
        const bool branch_taken_0x2906dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2906E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2906DCu;
        // 0x2906e0: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2906dc) {
            ctx->pc = 0x2907D8u;
            goto label_2907d8;
        }
    }
    ctx->pc = 0x2906E4u;
    // 0x2906e4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2906e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2906e8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2906e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2906ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2906ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2906f0: 0x8c63ac00  lw          $v1, -0x5400($v1)
    ctx->pc = 0x2906f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945792)));
    // 0x2906f4: 0x600008  jr          $v1
    ctx->pc = 0x2906F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x290700u: goto label_290700;
            case 0x290758u: goto label_290758;
            case 0x290790u: goto label_290790;
            case 0x2907A0u: goto label_2907a0;
            case 0x2907D8u: goto label_2907d8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2906F4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2906FCu;
    // 0x2906fc: 0x0  nop
    ctx->pc = 0x2906fcu;
    // NOP
label_290700:
    // 0x290700: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x290700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x290704: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x290704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290708: 0x8c4488a8  lw          $a0, -0x7758($v0)
    ctx->pc = 0x290708u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A88A8u));
    // 0x29070c: 0x2e31804  sllv        $v1, $v1, $s7
    ctx->pc = 0x29070cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 23) & 0x1F));
    // 0x290710: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x290710u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x290714: 0x10800031  beqz        $a0, . + 4 + (0x31 << 2)
    ctx->pc = 0x290714u;
    {
        const bool branch_taken_0x290714 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x290718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290714u;
        // 0x290718: 0x179080  sll         $s2, $s7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290714) {
            ctx->pc = 0x2907DCu;
            goto label_2907dc;
        }
    }
    ctx->pc = 0x29071Cu;
    // 0x29071c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x29071cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x290720: 0xc0863f8  jal         func_218FE0
    ctx->pc = 0x290720u;
    SET_GPR_U32(ctx, 31, 0x290728u);
    ctx->pc = 0x290724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290720u;
    // 0x290724: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218FE0u, 0x290720u, 0x290728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290728u;
label_290728:
    // 0x290728: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x290728u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29072c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x29072cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x290730: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x290730u;
    {
        const bool branch_taken_0x290730 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x290734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290730u;
        // 0x290734: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290730) {
            ctx->pc = 0x290750u;
            goto label_290750;
        }
    }
    ctx->pc = 0x290738u;
    // 0x290738: 0xc092ebe  jal         func_24BAF8
    ctx->pc = 0x290738u;
    SET_GPR_U32(ctx, 31, 0x290740u);
    ctx->pc = 0x29073Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290738u;
    // 0x29073c: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BAF8u, 0x290738u, 0x290740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290740u;
label_290740:
    // 0x290740: 0x179080  sll         $s2, $s7, 2
    ctx->pc = 0x290740u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x290744: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x290744u;
    {
        const bool branch_taken_0x290744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290744u;
        // 0x290748: 0x202a00b  movn        $s4, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290744) {
            ctx->pc = 0x2907DCu;
            goto label_2907dc;
        }
    }
    ctx->pc = 0x29074Cu;
    // 0x29074c: 0x0  nop
    ctx->pc = 0x29074cu;
    // NOP
label_290750:
    // 0x290750: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x290750u;
    {
        const bool branch_taken_0x290750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290750u;
        // 0x290754: 0x24140014  addiu       $s4, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290750) {
            ctx->pc = 0x2907D8u;
            goto label_2907d8;
        }
    }
    ctx->pc = 0x290758u;
label_290758:
    // 0x290758: 0xc0863f8  jal         func_218FE0
    ctx->pc = 0x290758u;
    SET_GPR_U32(ctx, 31, 0x290760u);
    ctx->pc = 0x29075Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290758u;
    // 0x29075c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218FE0u, 0x290758u, 0x290760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290760u;
label_290760:
    // 0x290760: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x290760u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290764: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x290764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x290768: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x290768u;
    {
        const bool branch_taken_0x290768 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x29076Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290768u;
        // 0x29076c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290768) {
            ctx->pc = 0x290780u;
            goto label_290780;
        }
    }
    ctx->pc = 0x290770u;
    // 0x290770: 0xc092ebe  jal         func_24BAF8
    ctx->pc = 0x290770u;
    SET_GPR_U32(ctx, 31, 0x290778u);
    ctx->pc = 0x290774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290770u;
    // 0x290774: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BAF8u, 0x290770u, 0x290778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290778u;
label_290778:
    // 0x290778: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x290778u;
    {
        const bool branch_taken_0x290778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29077Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290778u;
        // 0x29077c: 0x202a00b  movn        $s4, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290778) {
            ctx->pc = 0x290784u;
            goto label_290784;
        }
    }
    ctx->pc = 0x290780u;
label_290780:
    // 0x290780: 0x24140014  addiu       $s4, $zero, 0x14
    ctx->pc = 0x290780u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_290784:
    // 0x290784: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x290784u;
    {
        const bool branch_taken_0x290784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290784u;
        // 0x290788: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290784) {
            ctx->pc = 0x2907D8u;
            goto label_2907d8;
        }
    }
    ctx->pc = 0x29078Cu;
    // 0x29078c: 0x0  nop
    ctx->pc = 0x29078cu;
    // NOP
label_290790:
    // 0x290790: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x290790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x290794: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x290794u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290798: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x290798u;
    {
        const bool branch_taken_0x290798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29079Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290798u;
        // 0x29079c: 0x179080  sll         $s2, $s7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290798) {
            ctx->pc = 0x2907C8u;
            goto label_2907c8;
        }
    }
    ctx->pc = 0x2907A0u;
label_2907a0:
    // 0x2907a0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2907a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2907a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2907a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2907a8: 0x904383ce  lbu         $v1, -0x7C32($v0)
    ctx->pc = 0x2907a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3A83CEu));
    // 0x2907ac: 0x1464000b  bne         $v1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x2907ACu;
    {
        const bool branch_taken_0x2907ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2907B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2907ACu;
        // 0x2907b0: 0x179080  sll         $s2, $s7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2907ac) {
            ctx->pc = 0x2907DCu;
            goto label_2907dc;
        }
    }
    ctx->pc = 0x2907B4u;
    // 0x2907b4: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x2907b4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2907b8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2907b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2907bc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2907bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2907c0: 0x8c4288d0  lw          $v0, -0x7730($v0)
    ctx->pc = 0x2907c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936784)));
    // 0x2907c4: 0x84440042  lh          $a0, 0x42($v0)
    ctx->pc = 0x2907c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 66)));
label_2907c8:
    // 0x2907c8: 0xc086408  jal         func_219020
    ctx->pc = 0x2907C8u;
    SET_GPR_U32(ctx, 31, 0x2907D0u);
    ctx->pc = 0x219020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219020u, 0x2907C8u, 0x2907D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2907D0u;
label_2907d0:
    // 0x2907d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2907D0u;
    {
        const bool branch_taken_0x2907d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2907D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2907D0u;
        // 0x2907d4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2907d0) {
            ctx->pc = 0x2907DCu;
            goto label_2907dc;
        }
    }
    ctx->pc = 0x2907D8u;
label_2907d8:
    // 0x2907d8: 0x179080  sll         $s2, $s7, 2
    ctx->pc = 0x2907d8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
label_2907dc:
    // 0x2907dc: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x2907dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x2907e0: 0x171040  sll         $v0, $s7, 1
    ctx->pc = 0x2907e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 1));
    // 0x2907e4: 0x2441821  addu        $v1, $s2, $a0
    ctx->pc = 0x2907e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x2907e8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2907e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2907ec: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2907ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2907f0: 0xa45e0120  sh          $fp, 0x120($v0)
    ctx->pc = 0x2907f0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 288), (uint16_t)GPR_U32(ctx, 30));
    // 0x2907f4: 0x16e0000c  bnez        $s7, . + 4 + (0xC << 2)
    ctx->pc = 0x2907F4u;
    {
        const bool branch_taken_0x2907f4 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x2907F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2907F4u;
        // 0x2907f8: 0x8c700110  lw          $s0, 0x110($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2907f4) {
            ctx->pc = 0x290828u;
            goto label_290828;
        }
    }
    ctx->pc = 0x2907FCu;
    // 0x2907fc: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2907fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x290800: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x290800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x290804: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x290804u;
    {
        const bool branch_taken_0x290804 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x290808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290804u;
        // 0x290808: 0x8c760100  lw          $s6, 0x100($v1) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290804) {
            ctx->pc = 0x290818u;
            goto label_290818;
        }
    }
    ctx->pc = 0x29080Cu;
    // 0x29080c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x29080Cu;
    {
        const bool branch_taken_0x29080c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29080Cu;
        // 0x290810: 0x8c750108  lw          $s5, 0x108($v1) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29080c) {
            ctx->pc = 0x29089Cu;
            goto label_29089c;
        }
    }
    ctx->pc = 0x290814u;
    // 0x290814: 0x0  nop
    ctx->pc = 0x290814u;
    // NOP
label_290818:
    // 0x290818: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x290818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x29081c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x29081Cu;
    {
        const bool branch_taken_0x29081c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29081Cu;
        // 0x290820: 0x8c950104  lw          $s5, 0x104($a0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29081c) {
            ctx->pc = 0x29089Cu;
            goto label_29089c;
        }
    }
    ctx->pc = 0x290824u;
    // 0x290824: 0x0  nop
    ctx->pc = 0x290824u;
    // NOP
label_290828:
    // 0x290828: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x290828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x29082c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x29082cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x290830: 0x12020016  beq         $s0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x290830u;
    {
        const bool branch_taken_0x290830 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x290834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290830u;
        // 0x290834: 0x8c76010c  lw          $s6, 0x10C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290830) {
            ctx->pc = 0x29088Cu;
            goto label_29088c;
        }
    }
    ctx->pc = 0x290838u;
    // 0x290838: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x290838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x29083c: 0x12020014  beq         $s0, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x29083Cu;
    {
        const bool branch_taken_0x29083c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x290840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29083Cu;
        // 0x290840: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29083c) {
            ctx->pc = 0x290890u;
            goto label_290890;
        }
    }
    ctx->pc = 0x290844u;
    // 0x290844: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x290844u;
    {
        const bool branch_taken_0x290844 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x290848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290844u;
        // 0x290848: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290844) {
            ctx->pc = 0x290890u;
            goto label_290890;
        }
    }
    ctx->pc = 0x29084Cu;
    // 0x29084c: 0x12020010  beq         $s0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x29084Cu;
    {
        const bool branch_taken_0x29084c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x290850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29084Cu;
        // 0x290850: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29084c) {
            ctx->pc = 0x290890u;
            goto label_290890;
        }
    }
    ctx->pc = 0x290854u;
    // 0x290854: 0x1202000e  beq         $s0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x290854u;
    {
        const bool branch_taken_0x290854 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x290858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290854u;
        // 0x290858: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290854) {
            ctx->pc = 0x290890u;
            goto label_290890;
        }
    }
    ctx->pc = 0x29085Cu;
    // 0x29085c: 0x1202000c  beq         $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x29085Cu;
    {
        const bool branch_taken_0x29085c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x290860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29085Cu;
        // 0x290860: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29085c) {
            ctx->pc = 0x290890u;
            goto label_290890;
        }
    }
    ctx->pc = 0x290864u;
    // 0x290864: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x290864u;
    {
        const bool branch_taken_0x290864 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x290868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290864u;
        // 0x290868: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290864) {
            ctx->pc = 0x290890u;
            goto label_290890;
        }
    }
    ctx->pc = 0x29086Cu;
    // 0x29086c: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x29086Cu;
    {
        const bool branch_taken_0x29086c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x290870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29086Cu;
        // 0x290870: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29086c) {
            ctx->pc = 0x290890u;
            goto label_290890;
        }
    }
    ctx->pc = 0x290874u;
    // 0x290874: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x290874u;
    {
        const bool branch_taken_0x290874 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x290878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290874u;
        // 0x290878: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290874) {
            ctx->pc = 0x290890u;
            goto label_290890;
        }
    }
    ctx->pc = 0x29087Cu;
    // 0x29087c: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29087Cu;
    {
        const bool branch_taken_0x29087c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x290880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29087Cu;
        // 0x290880: 0x2402001d  addiu       $v0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29087c) {
            ctx->pc = 0x290890u;
            goto label_290890;
        }
    }
    ctx->pc = 0x290884u;
    // 0x290884: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x290884u;
    {
        const bool branch_taken_0x290884 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x290888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290884u;
        // 0x290888: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290884) {
            ctx->pc = 0x290898u;
            goto label_290898;
        }
    }
    ctx->pc = 0x29088Cu;
label_29088c:
    // 0x29088c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x29088cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_290890:
    // 0x290890: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x290890u;
    {
        const bool branch_taken_0x290890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290890u;
        // 0x290894: 0x8c950110  lw          $s5, 0x110($a0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290890) {
            ctx->pc = 0x29089Cu;
            goto label_29089c;
        }
    }
    ctx->pc = 0x290898u;
label_290898:
    // 0x290898: 0x8c550114  lw          $s5, 0x114($v0)
    ctx->pc = 0x290898u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 276)));
label_29089c:
    // 0x29089c: 0x8ed30004  lw          $s3, 0x4($s6)
    ctx->pc = 0x29089cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x2908a0: 0x13c00065  beqz        $fp, . + 4 + (0x65 << 2)
    ctx->pc = 0x2908A0u;
    {
        const bool branch_taken_0x2908a0 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x2908A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2908A0u;
        // 0x2908a4: 0x8eb10004  lw          $s1, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2908a0) {
            ctx->pc = 0x290A38u;
            goto label_290a38;
        }
    }
    ctx->pc = 0x2908A8u;
    // 0x2908a8: 0x52900045  beql        $s4, $s0, . + 4 + (0x45 << 2)
    ctx->pc = 0x2908A8u;
    {
        const bool branch_taken_0x2908a8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 16));
        if (branch_taken_0x2908a8) {
            ctx->pc = 0x2908ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2908A8u;
            // 0x2908ac: 0x8e620080  lw          $v0, 0x80($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2909C0u;
            goto label_2909c0;
        }
    }
    ctx->pc = 0x2908B0u;
    // 0x2908b0: 0x680001b  bltz        $s4, . + 4 + (0x1B << 2)
    ctx->pc = 0x2908B0u;
    {
        const bool branch_taken_0x2908b0 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x2908B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2908B0u;
        // 0x2908b4: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2908b0) {
            ctx->pc = 0x290920u;
            goto label_290920;
        }
    }
    ctx->pc = 0x2908B8u;
    // 0x2908b8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2908b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2908bc: 0x2464bf20  addiu       $a0, $v1, -0x40E0
    ctx->pc = 0x2908bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950688));
    // 0x2908c0: 0xc0a59e2  jal         func_296788
    ctx->pc = 0x2908C0u;
    SET_GPR_U32(ctx, 31, 0x2908C8u);
    ctx->pc = 0x2908C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2908C0u;
    // 0x2908c4: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296788u, 0x2908C0u, 0x2908C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2908C8u;
label_2908c8:
    // 0x2908c8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2908c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2908cc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2908CCu;
    {
        const bool branch_taken_0x2908cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2908D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2908CCu;
        // 0x2908d0: 0x8e620080  lw          $v0, 0x80($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2908cc) {
            ctx->pc = 0x2908E0u;
            goto label_2908e0;
        }
    }
    ctx->pc = 0x2908D4u;
    // 0x2908d4: 0xae630078  sw          $v1, 0x78($s3)
    ctx->pc = 0x2908d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 3));
    // 0x2908d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2908D8u;
    {
        const bool branch_taken_0x2908d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2908DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2908D8u;
        // 0x2908dc: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2908d8) {
            ctx->pc = 0x2908E8u;
            goto label_2908e8;
        }
    }
    ctx->pc = 0x2908E0u;
label_2908e0:
    // 0x2908e0: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2908e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2908e4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2908e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2908e8:
    // 0x2908e8: 0xae620080  sw          $v0, 0x80($s3)
    ctx->pc = 0x2908e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 2));
    // 0x2908ec: 0xc0a5b60  jal         func_296D80
    ctx->pc = 0x2908ECu;
    SET_GPR_U32(ctx, 31, 0x2908F4u);
    ctx->pc = 0x2908F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2908ECu;
    // 0x2908f0: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D80u, 0x2908ECu, 0x2908F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2908F4u;
label_2908f4:
    // 0x2908f4: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2908F4u;
    {
        const bool branch_taken_0x2908f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2908F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2908F4u;
        // 0x2908f8: 0x8fa3001c  lw          $v1, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2908f4) {
            ctx->pc = 0x290934u;
            goto label_290934;
        }
    }
    ctx->pc = 0x2908FCu;
    // 0x2908fc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2908fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x290900: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x290900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290904: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x290904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290908: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x290908u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29090c: 0xc0ad7f6  jal         func_2B5FD8
    ctx->pc = 0x29090Cu;
    SET_GPR_U32(ctx, 31, 0x290914u);
    ctx->pc = 0x290910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29090Cu;
    // 0x290910: 0x8c440130  lw          $a0, 0x130($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5FD8u, 0x29090Cu, 0x290914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290914u;
label_290914:
    // 0x290914: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x290914u;
    {
        const bool branch_taken_0x290914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290914u;
        // 0x290918: 0x8fa3001c  lw          $v1, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290914) {
            ctx->pc = 0x290934u;
            goto label_290934;
        }
    }
    ctx->pc = 0x29091Cu;
    // 0x29091c: 0x0  nop
    ctx->pc = 0x29091cu;
    // NOP
label_290920:
    // 0x290920: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x290920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x290924: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x290924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x290928: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x290928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x29092c: 0xae620080  sw          $v0, 0x80($s3)
    ctx->pc = 0x29092cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 2));
    // 0x290930: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x290930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_290934:
    // 0x290934: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x290934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x290938: 0x600001b  bltz        $s0, . + 4 + (0x1B << 2)
    ctx->pc = 0x290938u;
    {
        const bool branch_taken_0x290938 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x29093Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290938u;
        // 0x29093c: 0xac540110  sw          $s4, 0x110($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 272), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290938) {
            ctx->pc = 0x2909A8u;
            goto label_2909a8;
        }
    }
    ctx->pc = 0x290940u;
    // 0x290940: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x290940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x290944: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x290944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290948: 0x2444bf20  addiu       $a0, $v0, -0x40E0
    ctx->pc = 0x290948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950688));
    // 0x29094c: 0xc0a59e2  jal         func_296788
    ctx->pc = 0x29094Cu;
    SET_GPR_U32(ctx, 31, 0x290954u);
    ctx->pc = 0x290950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29094Cu;
    // 0x290950: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296788u, 0x29094Cu, 0x290954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290954u;
label_290954:
    // 0x290954: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x290954u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290958: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x290958u;
    {
        const bool branch_taken_0x290958 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29095Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290958u;
        // 0x29095c: 0x8e220080  lw          $v0, 0x80($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290958) {
            ctx->pc = 0x290970u;
            goto label_290970;
        }
    }
    ctx->pc = 0x290960u;
    // 0x290960: 0xae230078  sw          $v1, 0x78($s1)
    ctx->pc = 0x290960u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 3));
    // 0x290964: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x290964u;
    {
        const bool branch_taken_0x290964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290964u;
        // 0x290968: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x290964) {
            ctx->pc = 0x290978u;
            goto label_290978;
        }
    }
    ctx->pc = 0x29096Cu;
    // 0x29096c: 0x0  nop
    ctx->pc = 0x29096cu;
    // NOP
label_290970:
    // 0x290970: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x290970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x290974: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x290974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_290978:
    // 0x290978: 0xae220080  sw          $v0, 0x80($s1)
    ctx->pc = 0x290978u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
    // 0x29097c: 0xc0a5b60  jal         func_296D80
    ctx->pc = 0x29097Cu;
    SET_GPR_U32(ctx, 31, 0x290984u);
    ctx->pc = 0x290980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29097Cu;
    // 0x290980: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D80u, 0x29097Cu, 0x290984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290984u;
label_290984:
    // 0x290984: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x290984u;
    {
        const bool branch_taken_0x290984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x290988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290984u;
        // 0x290988: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290984) {
            ctx->pc = 0x290A58u;
            goto label_290a58;
        }
    }
    ctx->pc = 0x29098Cu;
    // 0x29098c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x29098cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290990: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x290990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290994: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x290994u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290998: 0xc0ad7f6  jal         func_2B5FD8
    ctx->pc = 0x290998u;
    SET_GPR_U32(ctx, 31, 0x2909A0u);
    ctx->pc = 0x29099Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290998u;
    // 0x29099c: 0x8c640130  lw          $a0, 0x130($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5FD8u, 0x290998u, 0x2909A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2909A0u;
label_2909a0:
    // 0x2909a0: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2909A0u;
    {
        const bool branch_taken_0x2909a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2909a0) {
            ctx->pc = 0x290A58u;
            goto label_290a58;
        }
    }
    ctx->pc = 0x2909A8u;
label_2909a8:
    // 0x2909a8: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x2909a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x2909ac: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2909acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2909b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2909b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2909b4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2909B4u;
    {
        const bool branch_taken_0x2909b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2909B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2909B4u;
        // 0x2909b8: 0xae220080  sw          $v0, 0x80($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2909b4) {
            ctx->pc = 0x290A58u;
            goto label_290a58;
        }
    }
    ctx->pc = 0x2909BCu;
    // 0x2909bc: 0x0  nop
    ctx->pc = 0x2909bcu;
    // NOP
label_2909c0:
    // 0x2909c0: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x2909c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x2909c4: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2909C4u;
    {
        const bool branch_taken_0x2909c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2909c4) {
            ctx->pc = 0x290A58u;
            goto label_290a58;
        }
    }
    ctx->pc = 0x2909CCu;
    // 0x2909cc: 0x6800022  bltz        $s4, . + 4 + (0x22 << 2)
    ctx->pc = 0x2909CCu;
    {
        const bool branch_taken_0x2909cc = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x2909D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2909CCu;
        // 0x2909d0: 0x3c04003c  lui         $a0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2909cc) {
            ctx->pc = 0x290A58u;
            goto label_290a58;
        }
    }
    ctx->pc = 0x2909D4u;
    // 0x2909d4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2909d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2909d8: 0x2490bf20  addiu       $s0, $a0, -0x40E0
    ctx->pc = 0x2909d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950688));
    // 0x2909dc: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2909dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2909e0: 0xc0a59e2  jal         func_296788
    ctx->pc = 0x2909E0u;
    SET_GPR_U32(ctx, 31, 0x2909E8u);
    ctx->pc = 0x2909E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2909E0u;
    // 0x2909e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296788u, 0x2909E0u, 0x2909E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2909E8u;
label_2909e8:
    // 0x2909e8: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2909E8u;
    {
        const bool branch_taken_0x2909e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2909ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2909E8u;
        // 0x2909ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2909e8) {
            ctx->pc = 0x290A58u;
            goto label_290a58;
        }
    }
    ctx->pc = 0x2909F0u;
    // 0x2909f0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2909f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2909f4: 0xc0a59e2  jal         func_296788
    ctx->pc = 0x2909F4u;
    SET_GPR_U32(ctx, 31, 0x2909FCu);
    ctx->pc = 0x2909F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2909F4u;
    // 0x2909f8: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296788u, 0x2909F4u, 0x2909FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2909FCu;
label_2909fc:
    // 0x2909fc: 0x8e630080  lw          $v1, 0x80($s3)
    ctx->pc = 0x2909fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x290a00: 0xae620078  sw          $v0, 0x78($s3)
    ctx->pc = 0x290a00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 2));
    // 0x290a04: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x290a04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x290a08: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x290a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x290a0c: 0xc0a5b60  jal         func_296D80
    ctx->pc = 0x290A0Cu;
    SET_GPR_U32(ctx, 31, 0x290A14u);
    ctx->pc = 0x290A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290A0Cu;
    // 0x290a10: 0xae630080  sw          $v1, 0x80($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D80u, 0x290A0Cu, 0x290A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290A14u;
label_290a14:
    // 0x290a14: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x290A14u;
    {
        const bool branch_taken_0x290a14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x290A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290A14u;
        // 0x290a18: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290a14) {
            ctx->pc = 0x290A58u;
            goto label_290a58;
        }
    }
    ctx->pc = 0x290A1Cu;
    // 0x290a1c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x290a1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290a20: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x290a20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290a24: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x290a24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290a28: 0xc0ad7f6  jal         func_2B5FD8
    ctx->pc = 0x290A28u;
    SET_GPR_U32(ctx, 31, 0x290A30u);
    ctx->pc = 0x290A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290A28u;
    // 0x290a2c: 0x8c440130  lw          $a0, 0x130($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5FD8u, 0x290A28u, 0x290A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290A30u;
label_290a30:
    // 0x290a30: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x290A30u;
    {
        const bool branch_taken_0x290a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x290a30) {
            ctx->pc = 0x290A58u;
            goto label_290a58;
        }
    }
    ctx->pc = 0x290A38u;
label_290a38:
    // 0x290a38: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x290a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x290a3c: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x290a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x290a40: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x290a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x290a44: 0x2442821  addu        $a1, $s2, $a0
    ctx->pc = 0x290a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x290a48: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x290a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x290a4c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x290a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x290a50: 0xae620080  sw          $v0, 0x80($s3)
    ctx->pc = 0x290a50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 2));
    // 0x290a54: 0xaca40110  sw          $a0, 0x110($a1)
    ctx->pc = 0x290a54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 272), GPR_U32(ctx, 4));
label_290a58:
    // 0x290a58: 0x16e00013  bnez        $s7, . + 4 + (0x13 << 2)
    ctx->pc = 0x290A58u;
    {
        const bool branch_taken_0x290a58 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x290A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290A58u;
        // 0x290a5c: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290a58) {
            ctx->pc = 0x290AA8u;
            goto label_290aa8;
        }
    }
    ctx->pc = 0x290A60u;
    // 0x290a60: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x290a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x290a64: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x290a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x290a68: 0x2444bf20  addiu       $a0, $v0, -0x40E0
    ctx->pc = 0x290a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950688));
    // 0x290a6c: 0xc0a59e2  jal         func_296788
    ctx->pc = 0x290A6Cu;
    SET_GPR_U32(ctx, 31, 0x290A74u);
    ctx->pc = 0x290A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290A6Cu;
    // 0x290a70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296788u, 0x290A6Cu, 0x290A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290A74u;
label_290a74:
    // 0x290a74: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x290a74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290a78: 0x5060005e  beql        $v1, $zero, . + 4 + (0x5E << 2)
    ctx->pc = 0x290A78u;
    {
        const bool branch_taken_0x290a78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x290a78) {
            ctx->pc = 0x290A7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290A78u;
            // 0x290a7c: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290BF4u;
            goto label_290bf4;
        }
    }
    ctx->pc = 0x290A80u;
    // 0x290a80: 0x8e620078  lw          $v0, 0x78($s3)
    ctx->pc = 0x290a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x290a84: 0x5462005b  bnel        $v1, $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x290A84u;
    {
        const bool branch_taken_0x290a84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x290a84) {
            ctx->pc = 0x290A88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290A84u;
            // 0x290a88: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290BF4u;
            goto label_290bf4;
        }
    }
    ctx->pc = 0x290A8Cu;
    // 0x290a8c: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x290a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x290a90: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x290a90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x290a94: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x290a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290a98: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x290A98u;
    SET_GPR_U32(ctx, 31, 0x290AA0u);
    ctx->pc = 0x290A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290A98u;
    // 0x290a9c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x290A98u, 0x290AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290AA0u;
label_290aa0:
    // 0x290aa0: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x290AA0u;
    {
        const bool branch_taken_0x290aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290AA0u;
        // 0x290aa4: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290aa0) {
            ctx->pc = 0x290BF4u;
            goto label_290bf4;
        }
    }
    ctx->pc = 0x290AA8u;
label_290aa8:
    // 0x290aa8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x290aa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290aac: 0x2470bf20  addiu       $s0, $v1, -0x40E0
    ctx->pc = 0x290aacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950688));
    // 0x290ab0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x290ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290ab4: 0xc0a59e2  jal         func_296788
    ctx->pc = 0x290AB4u;
    SET_GPR_U32(ctx, 31, 0x290ABCu);
    ctx->pc = 0x290AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290AB4u;
    // 0x290ab8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296788u, 0x290AB4u, 0x290ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290ABCu;
label_290abc:
    // 0x290abc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x290abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290ac0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x290ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x290ac4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x290ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290ac8: 0xc0a59e2  jal         func_296788
    ctx->pc = 0x290AC8u;
    SET_GPR_U32(ctx, 31, 0x290AD0u);
    ctx->pc = 0x290ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290AC8u;
    // 0x290acc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296788u, 0x290AC8u, 0x290AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290AD0u;
label_290ad0:
    // 0x290ad0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x290ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290ad4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x290ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x290ad8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x290ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290adc: 0xc0a59e2  jal         func_296788
    ctx->pc = 0x290ADCu;
    SET_GPR_U32(ctx, 31, 0x290AE4u);
    ctx->pc = 0x290AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290ADCu;
    // 0x290ae0: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296788u, 0x290ADCu, 0x290AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290AE4u;
label_290ae4:
    // 0x290ae4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x290ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290ae8: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x290ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x290aec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x290aecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290af0: 0xc0a59e2  jal         func_296788
    ctx->pc = 0x290AF0u;
    SET_GPR_U32(ctx, 31, 0x290AF8u);
    ctx->pc = 0x290AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290AF0u;
    // 0x290af4: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296788u, 0x290AF0u, 0x290AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290AF8u;
label_290af8:
    // 0x290af8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x290af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290afc: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x290afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x290b00: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x290b00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290b04: 0xc0a59e2  jal         func_296788
    ctx->pc = 0x290B04u;
    SET_GPR_U32(ctx, 31, 0x290B0Cu);
    ctx->pc = 0x290B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290B04u;
    // 0x290b08: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296788u, 0x290B04u, 0x290B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290B0Cu;
label_290b0c:
    // 0x290b0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x290b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290b10: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x290b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x290b14: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x290b14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290b18: 0xc0a59e2  jal         func_296788
    ctx->pc = 0x290B18u;
    SET_GPR_U32(ctx, 31, 0x290B20u);
    ctx->pc = 0x290B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290B18u;
    // 0x290b1c: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296788u, 0x290B18u, 0x290B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290B20u;
label_290b20:
    // 0x290b20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x290b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290b24: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x290b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x290b28: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x290b28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290b2c: 0xc0a59e2  jal         func_296788
    ctx->pc = 0x290B2Cu;
    SET_GPR_U32(ctx, 31, 0x290B34u);
    ctx->pc = 0x290B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290B2Cu;
    // 0x290b30: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296788u, 0x290B2Cu, 0x290B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290B34u;
label_290b34:
    // 0x290b34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x290b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290b38: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x290b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x290b3c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x290b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290b40: 0xc0a59e2  jal         func_296788
    ctx->pc = 0x290B40u;
    SET_GPR_U32(ctx, 31, 0x290B48u);
    ctx->pc = 0x290B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290B40u;
    // 0x290b44: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296788u, 0x290B40u, 0x290B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290B48u;
label_290b48:
    // 0x290b48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x290b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290b4c: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x290b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x290b50: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x290b50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290b54: 0xc0a59e2  jal         func_296788
    ctx->pc = 0x290B54u;
    SET_GPR_U32(ctx, 31, 0x290B5Cu);
    ctx->pc = 0x290B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290B54u;
    // 0x290b58: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296788u, 0x290B54u, 0x290B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290B5Cu;
label_290b5c:
    // 0x290b5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x290b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290b60: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x290b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x290b64: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x290b64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290b68: 0xc0a59e2  jal         func_296788
    ctx->pc = 0x290B68u;
    SET_GPR_U32(ctx, 31, 0x290B70u);
    ctx->pc = 0x290B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290B68u;
    // 0x290b6c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296788u, 0x290B68u, 0x290B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290B70u;
label_290b70:
    // 0x290b70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x290b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290b74: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x290b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x290b78: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x290b78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290b7c: 0xc0a59e2  jal         func_296788
    ctx->pc = 0x290B7Cu;
    SET_GPR_U32(ctx, 31, 0x290B84u);
    ctx->pc = 0x290B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290B7Cu;
    // 0x290b80: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296788u, 0x290B7Cu, 0x290B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290B84u;
label_290b84:
    // 0x290b84: 0x8e630078  lw          $v1, 0x78($s3)
    ctx->pc = 0x290b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x290b88: 0x12230019  beq         $s1, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x290B88u;
    {
        const bool branch_taken_0x290b88 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x290B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290B88u;
        // 0x290b8c: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290b88) {
            ctx->pc = 0x290BF0u;
            goto label_290bf0;
        }
    }
    ctx->pc = 0x290B90u;
    // 0x290b90: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x290B90u;
    {
        const bool branch_taken_0x290b90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x290B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290B90u;
        // 0x290b94: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290b90) {
            ctx->pc = 0x290BF0u;
            goto label_290bf0;
        }
    }
    ctx->pc = 0x290B98u;
    // 0x290b98: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x290B98u;
    {
        const bool branch_taken_0x290b98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x290B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290B98u;
        // 0x290b9c: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290b98) {
            ctx->pc = 0x290BF0u;
            goto label_290bf0;
        }
    }
    ctx->pc = 0x290BA0u;
    // 0x290ba0: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x290BA0u;
    {
        const bool branch_taken_0x290ba0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x290BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290BA0u;
        // 0x290ba4: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290ba0) {
            ctx->pc = 0x290BF0u;
            goto label_290bf0;
        }
    }
    ctx->pc = 0x290BA8u;
    // 0x290ba8: 0x50830012  beql        $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x290BA8u;
    {
        const bool branch_taken_0x290ba8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x290ba8) {
            ctx->pc = 0x290BACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290BA8u;
            // 0x290bac: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290BF4u;
            goto label_290bf4;
        }
    }
    ctx->pc = 0x290BB0u;
    // 0x290bb0: 0x53c30010  beql        $fp, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x290BB0u;
    {
        const bool branch_taken_0x290bb0 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 3));
        if (branch_taken_0x290bb0) {
            ctx->pc = 0x290BB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290BB0u;
            // 0x290bb4: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290BF4u;
            goto label_290bf4;
        }
    }
    ctx->pc = 0x290BB8u;
    // 0x290bb8: 0x52c3000e  beql        $s6, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x290BB8u;
    {
        const bool branch_taken_0x290bb8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 3));
        if (branch_taken_0x290bb8) {
            ctx->pc = 0x290BBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290BB8u;
            // 0x290bbc: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290BF4u;
            goto label_290bf4;
        }
    }
    ctx->pc = 0x290BC0u;
    // 0x290bc0: 0x52a3000c  beql        $s5, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x290BC0u;
    {
        const bool branch_taken_0x290bc0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 3));
        if (branch_taken_0x290bc0) {
            ctx->pc = 0x290BC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290BC0u;
            // 0x290bc4: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290BF4u;
            goto label_290bf4;
        }
    }
    ctx->pc = 0x290BC8u;
    // 0x290bc8: 0x5283000a  beql        $s4, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x290BC8u;
    {
        const bool branch_taken_0x290bc8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x290bc8) {
            ctx->pc = 0x290BCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290BC8u;
            // 0x290bcc: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290BF4u;
            goto label_290bf4;
        }
    }
    ctx->pc = 0x290BD0u;
    // 0x290bd0: 0x52430008  beql        $s2, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x290BD0u;
    {
        const bool branch_taken_0x290bd0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x290bd0) {
            ctx->pc = 0x290BD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290BD0u;
            // 0x290bd4: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290BF4u;
            goto label_290bf4;
        }
    }
    ctx->pc = 0x290BD8u;
    // 0x290bd8: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x290BD8u;
    {
        const bool branch_taken_0x290bd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x290BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290BD8u;
        // 0x290bdc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290bd8) {
            ctx->pc = 0x290BF0u;
            goto label_290bf0;
        }
    }
    ctx->pc = 0x290BE0u;
    // 0x290be0: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x290be0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x290be4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x290be4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x290be8: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x290BE8u;
    SET_GPR_U32(ctx, 31, 0x290BF0u);
    ctx->pc = 0x290BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290BE8u;
    // 0x290bec: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x290BE8u, 0x290BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290BF0u;
label_290bf0:
    // 0x290bf0: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x290bf0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_290bf4:
    // 0x290bf4: 0x2ae20002  slti        $v0, $s7, 0x2
    ctx->pc = 0x290bf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x290bf8: 0x1440fead  bnez        $v0, . + 4 + (-0x153 << 2)
    ctx->pc = 0x290BF8u;
    {
        const bool branch_taken_0x290bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x290BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290BF8u;
        // 0x290bfc: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290bf8) {
            ctx->pc = 0x2906B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2906b0;
        }
    }
    ctx->pc = 0x290C00u;
    // 0x290c00: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x290c00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x290c04: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x290c04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x290c08: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x290c08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x290c0c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x290c0cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x290c10: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x290c10u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x290c14: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x290c14u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x290c18: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x290c18u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x290c1c: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x290c1cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x290c20: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x290c20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x290c24: 0x3e00008  jr          $ra
    ctx->pc = 0x290C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290C24u;
        // 0x290c28: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290C24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290C2Cu;
    // 0x290c2c: 0x0  nop
    ctx->pc = 0x290c2cu;
    // NOP
    ctx->pc = 0x290c30u;
}
