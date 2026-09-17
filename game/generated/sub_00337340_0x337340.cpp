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

// Function: sub_00337340
// Address: 0x337340 - 0x337520
void sub_00337340_0x337340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337340_0x337340");
#endif

    switch (ctx->pc) {
        case 0x337380u: goto label_337380;
        case 0x337390u: goto label_337390;
        case 0x3373a0u: goto label_3373a0;
        case 0x337434u: goto label_337434;
        case 0x337480u: goto label_337480;
        case 0x337488u: goto label_337488;
        case 0x3374c0u: goto label_3374c0;
        default: break;
    }

    ctx->pc = 0x337340u;

    // 0x337340: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x337340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x337344: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x337344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
    // 0x337348: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x337348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33734c: 0x24700a60  addiu       $s0, $v1, 0xA60
    ctx->pc = 0x33734cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 2656));
    // 0x337350: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x337350u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x440A68u));
    // 0x337354: 0x3c028106  lui         $v0, 0x8106
    ctx->pc = 0x337354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33030 << 16));
    // 0x337358: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x337358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x33735c: 0x34428001  ori         $v0, $v0, 0x8001
    ctx->pc = 0x33735cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
    // 0x337360: 0x460001d  bltz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x337360u;
    {
        const bool branch_taken_0x337360 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x337364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337360u;
        // 0x337364: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337360) {
            ctx->pc = 0x3373D8u;
            goto label_3373d8;
        }
    }
    ctx->pc = 0x337368u;
    // 0x337368: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x337368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x33736c: 0x3c028106  lui         $v0, 0x8106
    ctx->pc = 0x33736cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33030 << 16));
    // 0x337370: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x337370u;
    {
        const bool branch_taken_0x337370 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x337374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337370u;
        // 0x337374: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x337370) {
            ctx->pc = 0x3373D8u;
            goto label_3373d8;
        }
    }
    ctx->pc = 0x337378u;
    // 0x337378: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x337378u;
    SET_GPR_U32(ctx, 31, 0x337380u);
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x337378u, 0x337380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337380u;
label_337380:
    // 0x337380: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x337380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x337384: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x337384u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x337388: 0xc043c28  jal         func_10F0A0
    ctx->pc = 0x337388u;
    SET_GPR_U32(ctx, 31, 0x337390u);
    ctx->pc = 0x33738Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337388u;
    // 0x33738c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F0A0u, 0x337388u, 0x337390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337390u;
label_337390:
    // 0x337390: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x337390u;
    {
        const bool branch_taken_0x337390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x337394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337390u;
        // 0x337394: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337390) {
            ctx->pc = 0x3373BCu;
            goto label_3373bc;
        }
    }
    ctx->pc = 0x337398u;
    // 0x337398: 0xc043fa0  jal         func_10FE80
    ctx->pc = 0x337398u;
    SET_GPR_U32(ctx, 31, 0x3373A0u);
    ctx->pc = 0x10FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FE80u, 0x337398u, 0x3373A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3373A0u;
label_3373a0:
    // 0x3373a0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3373a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3373a4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3373a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3373a8: 0x34630810  ori         $v1, $v1, 0x810
    ctx->pc = 0x3373a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2064);
    // 0x3373ac: 0x24040c00  addiu       $a0, $zero, 0xC00
    ctx->pc = 0x3373acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3072));
    // 0x3373b0: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x3373b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x3373b4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x3373b4u;
    runtime->Store32(rdram, ctx, 0x10000810u, GPR_U32(ctx, 4)); // MMIO: 0x10000810
    // 0x3373b8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3373b8u;
    runtime->Store32(rdram, ctx, 0x10000800u, GPR_U32(ctx, 0)); // MMIO: 0x10000800
label_3373bc:
    // 0x3373bc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3373bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3373c0: 0xfe000000  sd          $zero, 0x0($s0)
    ctx->pc = 0x3373c0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 0));
    // 0x3373c4: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3373C4u;
    {
        const bool branch_taken_0x3373c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3373C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3373C4u;
        // 0x3373c8: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3373c4) {
            ctx->pc = 0x3373D4u;
            goto label_3373d4;
        }
    }
    ctx->pc = 0x3373CCu;
    // 0x3373cc: 0xf  sync
    ctx->pc = 0x3373ccu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3373d0: 0x42000038  ei
    ctx->pc = 0x3373d0u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_3373d4:
    // 0x3373d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3373d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3373d8:
    // 0x3373d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3373d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3373dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3373dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3373e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3373e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3373e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3373E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3373E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3373E4u;
        // 0x3373e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3373E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3373ECu;
    // 0x3373ec: 0x0  nop
    ctx->pc = 0x3373ecu;
    // NOP
    // 0x3373f0: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x3373f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
    // 0x3373f4: 0x3c028106  lui         $v0, 0x8106
    ctx->pc = 0x3373f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33030 << 16));
    // 0x3373f8: 0x8c640a68  lw          $a0, 0xA68($v1)
    ctx->pc = 0x3373f8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x440A68u));
    // 0x3373fc: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3373FCu;
    {
        const bool branch_taken_0x3373fc = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x337400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3373FCu;
        // 0x337400: 0x34428001  ori         $v0, $v0, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3373fc) {
            ctx->pc = 0x337414u;
            goto label_337414;
        }
    }
    ctx->pc = 0x337404u;
    // 0x337404: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x337404u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x337408: 0x34630810  ori         $v1, $v1, 0x810
    ctx->pc = 0x337408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2064);
    // 0x33740c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x33740cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10000810u)); // MMIO: 0x10000810
    // 0x337410: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x337410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_337414:
    // 0x337414: 0x3e00008  jr          $ra
    ctx->pc = 0x337414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33741Cu;
    // 0x33741c: 0x0  nop
    ctx->pc = 0x33741cu;
    // NOP
    // 0x337420: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x337420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x337424: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x337424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x337428: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x337428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x33742c: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x33742Cu;
    SET_GPR_U32(ctx, 31, 0x337434u);
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x33742Cu, 0x337434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337434u;
label_337434:
    // 0x337434: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x337434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x337438: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x337438u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33743c: 0x34630810  ori         $v1, $v1, 0x810
    ctx->pc = 0x33743cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2064);
    // 0x337440: 0x2402f3ff  addiu       $v0, $zero, -0xC01
    ctx->pc = 0x337440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294964223));
    // 0x337444: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x337444u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x10000810u)); // MMIO: 0x10000810
    // 0x337448: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x337448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x33744c: 0x30830080  andi        $v1, $a0, 0x80
    ctx->pc = 0x33744cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x337450: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x337450u;
    {
        const bool branch_taken_0x337450 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x337454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337450u;
        // 0x337454: 0x34440080  ori         $a0, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x337450) {
            ctx->pc = 0x337470u;
            goto label_337470;
        }
    }
    ctx->pc = 0x337458u;
    // 0x337458: 0x52000010  beql        $s0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x337458u;
    {
        const bool branch_taken_0x337458 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x337458) {
            ctx->pc = 0x33745Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x337458u;
            // 0x33745c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33749Cu;
            goto label_33749c;
        }
    }
    ctx->pc = 0x337460u;
    // 0x337460: 0xf  sync
    ctx->pc = 0x337460u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x337464: 0x42000038  ei
    ctx->pc = 0x337464u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x337468: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x337468u;
    {
        const bool branch_taken_0x337468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33746Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337468u;
        // 0x33746c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337468) {
            ctx->pc = 0x33749Cu;
            goto label_33749c;
        }
    }
    ctx->pc = 0x337470u;
label_337470:
    // 0x337470: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x337470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x337474: 0xac240810  sw          $a0, 0x810($at)
    ctx->pc = 0x337474u;
    runtime->Store32(rdram, ctx, 0x10000810u, GPR_U32(ctx, 4)); // MMIO: 0x10000810
    // 0x337478: 0xc0cde82  jal         func_337A08
    ctx->pc = 0x337478u;
    SET_GPR_U32(ctx, 31, 0x337480u);
    ctx->pc = 0x337A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337A08u, 0x337478u, 0x337480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337480u;
label_337480:
    // 0x337480: 0xc0cdd48  jal         func_337520
    ctx->pc = 0x337480u;
    SET_GPR_U32(ctx, 31, 0x337488u);
    ctx->pc = 0x337484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337480u;
    // 0x337484: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337520u, 0x337480u, 0x337488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337488u;
label_337488:
    // 0x337488: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x337488u;
    {
        const bool branch_taken_0x337488 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x33748Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337488u;
        // 0x33748c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337488) {
            ctx->pc = 0x33749Cu;
            goto label_33749c;
        }
    }
    ctx->pc = 0x337490u;
    // 0x337490: 0xf  sync
    ctx->pc = 0x337490u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x337494: 0x42000038  ei
    ctx->pc = 0x337494u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x337498: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x337498u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33749c:
    // 0x33749c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33749cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3374a0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3374a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3374a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3374A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3374A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3374A4u;
        // 0x3374a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3374A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3374ACu;
    // 0x3374ac: 0x0  nop
    ctx->pc = 0x3374acu;
    // NOP
    // 0x3374b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3374b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3374b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3374b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3374b8: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x3374B8u;
    SET_GPR_U32(ctx, 31, 0x3374C0u);
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x3374B8u, 0x3374C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3374C0u;
label_3374c0:
    // 0x3374c0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3374c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3374c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3374c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3374c8: 0x34630810  ori         $v1, $v1, 0x810
    ctx->pc = 0x3374c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2064);
    // 0x3374cc: 0x2402f37f  addiu       $v0, $zero, -0xC81
    ctx->pc = 0x3374ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294964095));
    // 0x3374d0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3374d0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10000810u)); // MMIO: 0x10000810
    // 0x3374d4: 0x30640080  andi        $a0, $v1, 0x80
    ctx->pc = 0x3374d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x3374d8: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3374D8u;
    {
        const bool branch_taken_0x3374d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3374DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3374D8u;
        // 0x3374dc: 0x621824  and         $v1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3374d8) {
            ctx->pc = 0x3374F8u;
            goto label_3374f8;
        }
    }
    ctx->pc = 0x3374E0u;
    // 0x3374e0: 0x50a0000c  beql        $a1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x3374E0u;
    {
        const bool branch_taken_0x3374e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3374e0) {
            ctx->pc = 0x3374E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3374E0u;
            // 0x3374e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x337514u;
            goto label_337514;
        }
    }
    ctx->pc = 0x3374E8u;
    // 0x3374e8: 0xf  sync
    ctx->pc = 0x3374e8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3374ec: 0x42000038  ei
    ctx->pc = 0x3374ecu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x3374f0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3374F0u;
    {
        const bool branch_taken_0x3374f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3374F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3374F0u;
        // 0x3374f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3374f0) {
            ctx->pc = 0x337514u;
            goto label_337514;
        }
    }
    ctx->pc = 0x3374F8u;
label_3374f8:
    // 0x3374f8: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x3374f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x3374fc: 0xac230810  sw          $v1, 0x810($at)
    ctx->pc = 0x3374fcu;
    runtime->Store32(rdram, ctx, 0x10000810u, GPR_U32(ctx, 3)); // MMIO: 0x10000810
    // 0x337500: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x337500u;
    {
        const bool branch_taken_0x337500 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x337504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337500u;
        // 0x337504: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337500) {
            ctx->pc = 0x337514u;
            goto label_337514;
        }
    }
    ctx->pc = 0x337508u;
    // 0x337508: 0xf  sync
    ctx->pc = 0x337508u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x33750c: 0x42000038  ei
    ctx->pc = 0x33750cu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x337510: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x337510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_337514:
    // 0x337514: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x337514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x337518: 0x3e00008  jr          $ra
    ctx->pc = 0x337518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33751Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337518u;
        // 0x33751c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337520u;
}
