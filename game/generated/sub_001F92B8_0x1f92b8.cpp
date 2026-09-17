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

// Function: sub_001F92B8
// Address: 0x1f92b8 - 0x1f9510
void sub_001F92B8_0x1f92b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F92B8_0x1f92b8");
#endif

    switch (ctx->pc) {
        case 0x1f9340u: goto label_1f9340;
        case 0x1f937cu: goto label_1f937c;
        case 0x1f9388u: goto label_1f9388;
        case 0x1f93c4u: goto label_1f93c4;
        case 0x1f93e0u: goto label_1f93e0;
        case 0x1f93f8u: goto label_1f93f8;
        case 0x1f9428u: goto label_1f9428;
        case 0x1f9440u: goto label_1f9440;
        case 0x1f947cu: goto label_1f947c;
        case 0x1f94a8u: goto label_1f94a8;
        case 0x1f94bcu: goto label_1f94bc;
        case 0x1f94d4u: goto label_1f94d4;
        case 0x1f94e0u: goto label_1f94e0;
        case 0x1f94f0u: goto label_1f94f0;
        default: break;
    }

    ctx->pc = 0x1f92b8u;

    // 0x1f92b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f92b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f92bc: 0x8f86a850  lw          $a2, -0x57B0($gp)
    ctx->pc = 0x1f92bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944848)));
    // 0x1f92c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f92c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f92c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f92c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f92c8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1f92c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f92cc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1f92ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1f92d0: 0x3c14003b  lui         $s4, 0x3B
    ctx->pc = 0x1f92d0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)59 << 16));
    // 0x1f92d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f92d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f92d8: 0x269188d0  addiu       $s1, $s4, -0x7730
    ctx->pc = 0x1f92d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 4294936784));
    // 0x1f92dc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f92dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1f92e0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1f92e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1f92e4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1f92e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A88D0u));
    // 0x1f92e8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1f92e8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A88D4u));
    // 0x1f92ec: 0x906201bc  lbu         $v0, 0x1BC($v1)
    ctx->pc = 0x1f92ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 444)));
    // 0x1f92f0: 0x908501bc  lbu         $a1, 0x1BC($a0)
    ctx->pc = 0x1f92f0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 444)));
    // 0x1f92f4: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x1f92f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x1f92f8: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F92F8u;
    {
        const bool branch_taken_0x1f92f8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F92FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F92F8u;
        // 0x1f92fc: 0xc2900a  movz        $s2, $a2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f92f8) {
            ctx->pc = 0x1F9308u;
            goto label_1f9308;
        }
    }
    ctx->pc = 0x1F9300u;
    // 0x1f9300: 0x8f82a854  lw          $v0, -0x57AC($gp)
    ctx->pc = 0x1f9300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944852)));
    // 0x1f9304: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f9304u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_1f9308:
    // 0x1f9308: 0x3c130015  lui         $s3, 0x15
    ctx->pc = 0x1f9308u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)21 << 16));
    // 0x1f930c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1f930cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1f9310: 0x267055b0  addiu       $s0, $s3, 0x55B0
    ctx->pc = 0x1f9310u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 21936));
    // 0x1f9314: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1f9314u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1555C4u));
    // 0x1f9318: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F9318u;
    {
        const bool branch_taken_0x1f9318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f9318) {
            ctx->pc = 0x1F931Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F9318u;
            // 0x1f931c: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9330u;
            goto label_1f9330;
        }
    }
    ctx->pc = 0x1F9320u;
    // 0x1f9320: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1f9320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1f9324: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1f9324u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1f9328: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x1f9328u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x1f932c: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x1f932cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1f9330:
    // 0x1f9330: 0x54400044  bnel        $v0, $zero, . + 4 + (0x44 << 2)
    ctx->pc = 0x1F9330u;
    {
        const bool branch_taken_0x1f9330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f9330) {
            ctx->pc = 0x1F9334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F9330u;
            // 0x1f9334: 0x267155b0  addiu       $s1, $s3, 0x55B0 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 21936));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9444u;
            goto label_1f9444;
        }
    }
    ctx->pc = 0x1F9338u;
    // 0x1f9338: 0xc07e242  jal         func_1F8908
    ctx->pc = 0x1F9338u;
    SET_GPR_U32(ctx, 31, 0x1F9340u);
    ctx->pc = 0x1F8908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8908u, 0x1F9338u, 0x1F9340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9340u;
label_1f9340:
    // 0x1f9340: 0x54400040  bnel        $v0, $zero, . + 4 + (0x40 << 2)
    ctx->pc = 0x1F9340u;
    {
        const bool branch_taken_0x1f9340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f9340) {
            ctx->pc = 0x1F9344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F9340u;
            // 0x1f9344: 0x267155b0  addiu       $s1, $s3, 0x55B0 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 21936));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9444u;
            goto label_1f9444;
        }
    }
    ctx->pc = 0x1F9348u;
    // 0x1f9348: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1f9348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1f934c: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x1F934Cu;
    {
        const bool branch_taken_0x1f934c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f934c) {
            ctx->pc = 0x1F9350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F934Cu;
            // 0x1f9350: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F93D0u;
            goto label_1f93d0;
        }
    }
    ctx->pc = 0x1F9354u;
    // 0x1f9354: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1f9354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f9358: 0x908201bc  lbu         $v0, 0x1BC($a0)
    ctx->pc = 0x1f9358u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 444)));
    // 0x1f935c: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1F935Cu;
    {
        const bool branch_taken_0x1f935c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f935c) {
            ctx->pc = 0x1F9360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F935Cu;
            // 0x1f9360: 0x266455b0  addiu       $a0, $s3, 0x55B0 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 21936));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9390u;
            goto label_1f9390;
        }
    }
    ctx->pc = 0x1F9364u;
    // 0x1f9364: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1f9364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1f9368: 0x90a201bc  lbu         $v0, 0x1BC($a1)
    ctx->pc = 0x1f9368u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 444)));
    // 0x1f936c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F936Cu;
    {
        const bool branch_taken_0x1f936c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f936c) {
            ctx->pc = 0x1F9370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F936Cu;
            // 0x1f9370: 0x266455b0  addiu       $a0, $s3, 0x55B0 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 21936));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9390u;
            goto label_1f9390;
        }
    }
    ctx->pc = 0x1F9374u;
    // 0x1f9374: 0xc07e78a  jal         func_1F9E28
    ctx->pc = 0x1F9374u;
    SET_GPR_U32(ctx, 31, 0x1F937Cu);
    ctx->pc = 0x1F9E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9E28u, 0x1F9374u, 0x1F937Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F937Cu;
label_1f937c:
    // 0x1f937c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1f937cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1f9380: 0xc07e78a  jal         func_1F9E28
    ctx->pc = 0x1F9380u;
    SET_GPR_U32(ctx, 31, 0x1F9388u);
    ctx->pc = 0x1F9384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9380u;
    // 0x1f9384: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9E28u, 0x1F9380u, 0x1F9388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9388u;
label_1f9388:
    // 0x1f9388: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1F9388u;
    {
        const bool branch_taken_0x1f9388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F938Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9388u;
        // 0x1f938c: 0x267155b0  addiu       $s1, $s3, 0x55B0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 21936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9388) {
            ctx->pc = 0x1F9444u;
            goto label_1f9444;
        }
    }
    ctx->pc = 0x1F9390u;
label_1f9390:
    // 0x1f9390: 0x268688d0  addiu       $a2, $s4, -0x7730
    ctx->pc = 0x1f9390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 4294936784));
    // 0x1f9394: 0x9483002c  lhu         $v1, 0x2C($a0)
    ctx->pc = 0x1f9394u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1f9398: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1f9398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f939c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f939cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f93a0: 0x22842  srl         $a1, $v0, 1
    ctx->pc = 0x1f93a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1f93a4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1f93a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1f93a8: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1f93a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1f93ac: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1f93acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f93b0: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1f93b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1f93b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f93b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f93b8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1f93b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1f93bc: 0xc07e78a  jal         func_1F9E28
    ctx->pc = 0x1F93BCu;
    SET_GPR_U32(ctx, 31, 0x1F93C4u);
    ctx->pc = 0x1F93C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F93BCu;
    // 0x1f93c0: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9E28u, 0x1F93BCu, 0x1F93C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F93C4u;
label_1f93c4:
    // 0x1f93c4: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1F93C4u;
    {
        const bool branch_taken_0x1f93c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F93C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F93C4u;
        // 0x1f93c8: 0x267155b0  addiu       $s1, $s3, 0x55B0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 21936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f93c4) {
            ctx->pc = 0x1F9444u;
            goto label_1f9444;
        }
    }
    ctx->pc = 0x1F93CCu;
    // 0x1f93cc: 0x0  nop
    ctx->pc = 0x1f93ccu;
    // NOP
label_1f93d0:
    // 0x1f93d0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1F93D0u;
    {
        const bool branch_taken_0x1f93d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f93d0) {
            ctx->pc = 0x1F93D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F93D0u;
            // 0x1f93d4: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9400u;
            goto label_1f9400;
        }
    }
    ctx->pc = 0x1F93D8u;
    // 0x1f93d8: 0xc0bd236  jal         func_2F48D8
    ctx->pc = 0x1F93D8u;
    SET_GPR_U32(ctx, 31, 0x1F93E0u);
    ctx->pc = 0x2F48D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F48D8u, 0x1F93D8u, 0x1F93E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F93E0u;
label_1f93e0:
    // 0x1f93e0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1F93E0u;
    {
        const bool branch_taken_0x1f93e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F93E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F93E0u;
        // 0x1f93e4: 0x267155b0  addiu       $s1, $s3, 0x55B0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 21936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f93e0) {
            ctx->pc = 0x1F9444u;
            goto label_1f9444;
        }
    }
    ctx->pc = 0x1F93E8u;
    // 0x1f93e8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1f93e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1f93ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f93ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f93f0: 0xc07e262  jal         func_1F8988
    ctx->pc = 0x1F93F0u;
    SET_GPR_U32(ctx, 31, 0x1F93F8u);
    ctx->pc = 0x1F93F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F93F0u;
    // 0x1f93f4: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8988u, 0x1F93F0u, 0x1F93F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F93F8u;
label_1f93f8:
    // 0x1f93f8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1F93F8u;
    {
        const bool branch_taken_0x1f93f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F93FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F93F8u;
        // 0x1f93fc: 0xae000020  sw          $zero, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f93f8) {
            ctx->pc = 0x1F9440u;
            goto label_1f9440;
        }
    }
    ctx->pc = 0x1F9400u;
label_1f9400:
    // 0x1f9400: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F9400u;
    {
        const bool branch_taken_0x1f9400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9400u;
        // 0x1f9404: 0x267155b0  addiu       $s1, $s3, 0x55B0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 21936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9400) {
            ctx->pc = 0x1F9444u;
            goto label_1f9444;
        }
    }
    ctx->pc = 0x1F9408u;
    // 0x1f9408: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1f9408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1f940c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1f940cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f9410: 0x8c4383c0  lw          $v1, -0x7C40($v0)
    ctx->pc = 0x1f9410u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x1f9414: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F9414u;
    {
        const bool branch_taken_0x1f9414 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1F9418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9414u;
        // 0x1f9418: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9414) {
            ctx->pc = 0x1F9430u;
            goto label_1f9430;
        }
    }
    ctx->pc = 0x1F941Cu;
    // 0x1f941c: 0x38840008  xori        $a0, $a0, 0x8
    ctx->pc = 0x1f941cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)8);
    // 0x1f9420: 0xc083082  jal         func_20C208
    ctx->pc = 0x1F9420u;
    SET_GPR_U32(ctx, 31, 0x1F9428u);
    ctx->pc = 0x1F9424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9420u;
    // 0x1f9424: 0x2c840001  sltiu       $a0, $a0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C208u, 0x1F9420u, 0x1F9428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9428u;
label_1f9428:
    // 0x1f9428: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F9428u;
    {
        const bool branch_taken_0x1f9428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F942Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9428u;
        // 0x1f942c: 0x267155b0  addiu       $s1, $s3, 0x55B0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 21936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9428) {
            ctx->pc = 0x1F9444u;
            goto label_1f9444;
        }
    }
    ctx->pc = 0x1F9430u;
label_1f9430:
    // 0x1f9430: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f9430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f9434: 0x38840008  xori        $a0, $a0, 0x8
    ctx->pc = 0x1f9434u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)8);
    // 0x1f9438: 0xc07e368  jal         func_1F8DA0
    ctx->pc = 0x1F9438u;
    SET_GPR_U32(ctx, 31, 0x1F9440u);
    ctx->pc = 0x1F943Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9438u;
    // 0x1f943c: 0x2c840001  sltiu       $a0, $a0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8DA0u, 0x1F9438u, 0x1F9440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9440u;
label_1f9440:
    // 0x1f9440: 0x267155b0  addiu       $s1, $s3, 0x55B0
    ctx->pc = 0x1f9440u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 21936));
label_1f9444:
    // 0x1f9444: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x1f9444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1f9448: 0x58400005  blezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F9448u;
    {
        const bool branch_taken_0x1f9448 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1f9448) {
            ctx->pc = 0x1F944Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F9448u;
            // 0x1f944c: 0x32420800  andi        $v0, $s2, 0x800 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2048);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9460u;
            goto label_1f9460;
        }
    }
    ctx->pc = 0x1F9450u;
    // 0x1f9450: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f9450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f9454: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1F9454u;
    {
        const bool branch_taken_0x1f9454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9454u;
        // 0x1f9458: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9454) {
            ctx->pc = 0x1F94F0u;
            goto label_1f94f0;
        }
    }
    ctx->pc = 0x1F945Cu;
    // 0x1f945c: 0x0  nop
    ctx->pc = 0x1f945cu;
    // NOP
label_1f9460:
    // 0x1f9460: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1F9460u;
    {
        const bool branch_taken_0x1f9460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9460u;
        // 0x1f9464: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9460) {
            ctx->pc = 0x1F94F4u;
            goto label_1f94f4;
        }
    }
    ctx->pc = 0x1F9468u;
    // 0x1f9468: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x1f9468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1f946c: 0x54400022  bnel        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x1F946Cu;
    {
        const bool branch_taken_0x1f946c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f946c) {
            ctx->pc = 0x1F9470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F946Cu;
            // 0x1f9470: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F94F8u;
            goto label_1f94f8;
        }
    }
    ctx->pc = 0x1F9474u;
    // 0x1f9474: 0xc07e266  jal         func_1F8998
    ctx->pc = 0x1F9474u;
    SET_GPR_U32(ctx, 31, 0x1F947Cu);
    ctx->pc = 0x1F8998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8998u, 0x1F9474u, 0x1F947Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F947Cu;
label_1f947c:
    // 0x1f947c: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F947Cu;
    {
        const bool branch_taken_0x1f947c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f947c) {
            ctx->pc = 0x1F9480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F947Cu;
            // 0x1f9480: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F94F4u;
            goto label_1f94f4;
        }
    }
    ctx->pc = 0x1F9484u;
    // 0x1f9484: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x1f9484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x1f9488: 0x8c6283c0  lw          $v0, -0x7C40($v1)
    ctx->pc = 0x1f9488u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x1f948c: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x1f948cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x1f9490: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F9490u;
    {
        const bool branch_taken_0x1f9490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9490u;
        // 0x1f9494: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9490) {
            ctx->pc = 0x1F94ACu;
            goto label_1f94ac;
        }
    }
    ctx->pc = 0x1F9498u;
    // 0x1f9498: 0x268288d0  addiu       $v0, $s4, -0x7730
    ctx->pc = 0x1f9498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294936784));
    // 0x1f949c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1f949cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1f94a0: 0xc08307a  jal         func_20C1E8
    ctx->pc = 0x1F94A0u;
    SET_GPR_U32(ctx, 31, 0x1F94A8u);
    ctx->pc = 0x1F94A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F94A0u;
    // 0x1f94a4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C1E8u, 0x1F94A0u, 0x1F94A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F94A8u;
label_1f94a8:
    // 0x1f94a8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1f94a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1f94ac:
    // 0x1f94ac: 0x269088d0  addiu       $s0, $s4, -0x7730
    ctx->pc = 0x1f94acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294936784));
    // 0x1f94b0: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x1f94b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x1f94b4: 0xc07e56c  jal         func_1F95B0
    ctx->pc = 0x1F94B4u;
    SET_GPR_U32(ctx, 31, 0x1F94BCu);
    ctx->pc = 0x1F94B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F94B4u;
    // 0x1f94b8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F95B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F95B0u, 0x1F94B4u, 0x1F94BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F94BCu;
label_1f94bc:
    // 0x1f94bc: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x1f94bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x1f94c0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1f94c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f94c4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1f94c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1f94c8: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1f94c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f94cc: 0xc099132  jal         func_2644C8
    ctx->pc = 0x1F94CCu;
    SET_GPR_U32(ctx, 31, 0x1F94D4u);
    ctx->pc = 0x1F94D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F94CCu;
    // 0x1f94d0: 0xac43888c  sw          $v1, -0x7774($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294936716), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2644C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2644C8u, 0x1F94CCu, 0x1F94D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F94D4u;
label_1f94d4:
    // 0x1f94d4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1f94d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f94d8: 0xc099132  jal         func_2644C8
    ctx->pc = 0x1F94D8u;
    SET_GPR_U32(ctx, 31, 0x1F94E0u);
    ctx->pc = 0x1F94DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F94D8u;
    // 0x1f94dc: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2644C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2644C8u, 0x1F94D8u, 0x1F94E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F94E0u;
label_1f94e0:
    // 0x1f94e0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1f94e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1f94e4: 0x82250048  lb          $a1, 0x48($s1)
    ctx->pc = 0x1f94e4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x1f94e8: 0xc0da5fc  jal         func_3697F0
    ctx->pc = 0x1F94E8u;
    SET_GPR_U32(ctx, 31, 0x1F94F0u);
    ctx->pc = 0x1F94ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F94E8u;
    // 0x1f94ec: 0x2484f454  addiu       $a0, $a0, -0xBAC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964308));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3697F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3697F0u, 0x1F94E8u, 0x1F94F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F94F0u;
label_1f94f0:
    // 0x1f94f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f94f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f94f4:
    // 0x1f94f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f94f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1f94f8:
    // 0x1f94f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f94f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f94fc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f94fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f9500: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1f9500u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9504: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1f9504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f9508: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F950Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9508u;
        // 0x1f950c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9510u;
}
