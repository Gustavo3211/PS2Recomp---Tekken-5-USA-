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

// Function: sub_002934E0
// Address: 0x2934e0 - 0x2935f8
void sub_002934E0_0x2934e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002934E0_0x2934e0");
#endif

    switch (ctx->pc) {
        case 0x293520u: goto label_293520;
        case 0x293530u: goto label_293530;
        case 0x29353cu: goto label_29353c;
        case 0x29355cu: goto label_29355c;
        case 0x293570u: goto label_293570;
        case 0x29358cu: goto label_29358c;
        case 0x2935bcu: goto label_2935bc;
        case 0x2935c4u: goto label_2935c4;
        case 0x2935d8u: goto label_2935d8;
        default: break;
    }

    ctx->pc = 0x2934e0u;

    // 0x2934e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2934e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2934e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2934e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2934e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2934e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2934ec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2934ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2934f0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2934f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2934f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2934f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2934f8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2934f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2934fc: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x2934fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x293500: 0x10520019  beq         $v0, $s2, . + 4 + (0x19 << 2)
    ctx->pc = 0x293500u;
    {
        const bool branch_taken_0x293500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x293504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293500u;
        // 0x293504: 0x28430002  slti        $v1, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x293500) {
            ctx->pc = 0x293568u;
            goto label_293568;
        }
    }
    ctx->pc = 0x293508u;
    // 0x293508: 0x10600031  beqz        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x293508u;
    {
        const bool branch_taken_0x293508 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x293508) {
            ctx->pc = 0x2935D0u;
            goto label_2935d0;
        }
    }
    ctx->pc = 0x293510u;
    // 0x293510: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x293510u;
    {
        const bool branch_taken_0x293510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x293510) {
            ctx->pc = 0x2935D0u;
            goto label_2935d0;
        }
    }
    ctx->pc = 0x293518u;
    // 0x293518: 0xc089622  jal         func_225888
    ctx->pc = 0x293518u;
    SET_GPR_U32(ctx, 31, 0x293520u);
    ctx->pc = 0x29351Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293518u;
    // 0x29351c: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225888u, 0x293518u, 0x293520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293520u;
label_293520:
    // 0x293520: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x293520u;
    {
        const bool branch_taken_0x293520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x293524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293520u;
        // 0x293524: 0x2404002e  addiu       $a0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293520) {
            ctx->pc = 0x2935D8u;
            goto label_2935d8;
        }
    }
    ctx->pc = 0x293528u;
    // 0x293528: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x293528u;
    SET_GPR_U32(ctx, 31, 0x293530u);
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x293528u, 0x293530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293530u;
label_293530:
    // 0x293530: 0x2404002f  addiu       $a0, $zero, 0x2F
    ctx->pc = 0x293530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x293534: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x293534u;
    SET_GPR_U32(ctx, 31, 0x29353Cu);
    ctx->pc = 0x293538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293534u;
    // 0x293538: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x293534u, 0x29353Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29353Cu;
label_29353c:
    // 0x29353c: 0x3c094000  lui         $t1, 0x4000
    ctx->pc = 0x29353cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16384 << 16));
    // 0x293540: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x293540u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293544: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x293544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293548: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x293548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29354c: 0x24072000  addiu       $a3, $zero, 0x2000
    ctx->pc = 0x29354cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x293550: 0x240800f1  addiu       $t0, $zero, 0xF1
    ctx->pc = 0x293550u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
    // 0x293554: 0xc0a5adc  jal         func_296B70
    ctx->pc = 0x293554u;
    SET_GPR_U32(ctx, 31, 0x29355Cu);
    ctx->pc = 0x293558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293554u;
    // 0x293558: 0x35290400  ori         $t1, $t1, 0x400 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x296B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296B70u, 0x293554u, 0x29355Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29355Cu;
label_29355c:
    // 0x29355c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x29355Cu;
    {
        const bool branch_taken_0x29355c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29355Cu;
        // 0x293560: 0xae320048  sw          $s2, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29355c) {
            ctx->pc = 0x2935D8u;
            goto label_2935d8;
        }
    }
    ctx->pc = 0x293564u;
    // 0x293564: 0x0  nop
    ctx->pc = 0x293564u;
    // NOP
label_293568:
    // 0x293568: 0xc0a5b2a  jal         func_296CA8
    ctx->pc = 0x293568u;
    SET_GPR_U32(ctx, 31, 0x293570u);
    ctx->pc = 0x296CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296CA8u, 0x293568u, 0x293570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293570u;
label_293570:
    // 0x293570: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x293570u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x293574: 0x8e22013c  lw          $v0, 0x13C($s1)
    ctx->pc = 0x293574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
    // 0x293578: 0x24a5b500  addiu       $a1, $a1, -0x4B00
    ctx->pc = 0x293578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948096));
    // 0x29357c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x29357Cu;
    {
        const bool branch_taken_0x29357c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x293580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29357Cu;
        // 0x293580: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29357c) {
            ctx->pc = 0x2935D8u;
            goto label_2935d8;
        }
    }
    ctx->pc = 0x293584u;
    // 0x293584: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x293584u;
    SET_GPR_U32(ctx, 31, 0x29358Cu);
    ctx->pc = 0x293588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293584u;
    // 0x293588: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x293584u, 0x29358Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29358Cu;
label_29358c:
    // 0x29358c: 0x2406efff  addiu       $a2, $zero, -0x1001
    ctx->pc = 0x29358cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x293590: 0xae220150  sw          $v0, 0x150($s1)
    ctx->pc = 0x293590u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 336), GPR_U32(ctx, 2));
    // 0x293594: 0x2407fffd  addiu       $a3, $zero, -0x3
    ctx->pc = 0x293594u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x293598: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x293598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29359c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29359cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2935a0: 0x8c430080  lw          $v1, 0x80($v0)
    ctx->pc = 0x2935a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x2935a4: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x2935a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x2935a8: 0xac430080  sw          $v1, 0x80($v0)
    ctx->pc = 0x2935a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 3));
    // 0x2935ac: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x2935acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x2935b0: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x2935b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x2935b4: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2935B4u;
    SET_GPR_U32(ctx, 31, 0x2935BCu);
    ctx->pc = 0x2935B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2935B4u;
    // 0x2935b8: 0xae220040  sw          $v0, 0x40($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2935B4u, 0x2935BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2935BCu;
label_2935bc:
    // 0x2935bc: 0xc0a4d96  jal         func_293658
    ctx->pc = 0x2935BCu;
    SET_GPR_U32(ctx, 31, 0x2935C4u);
    ctx->pc = 0x2935C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2935BCu;
    // 0x2935c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293658u, 0x2935BCu, 0x2935C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2935C4u;
label_2935c4:
    // 0x2935c4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2935C4u;
    {
        const bool branch_taken_0x2935c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2935C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2935C4u;
        // 0x2935c8: 0xae300048  sw          $s0, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2935c4) {
            ctx->pc = 0x2935D8u;
            goto label_2935d8;
        }
    }
    ctx->pc = 0x2935CCu;
    // 0x2935cc: 0x0  nop
    ctx->pc = 0x2935ccu;
    // NOP
label_2935d0:
    // 0x2935d0: 0xc0a5b2a  jal         func_296CA8
    ctx->pc = 0x2935D0u;
    SET_GPR_U32(ctx, 31, 0x2935D8u);
    ctx->pc = 0x2935D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2935D0u;
    // 0x2935d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296CA8u, 0x2935D0u, 0x2935D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2935D8u;
label_2935d8:
    // 0x2935d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2935d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2935dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2935dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2935e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2935e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2935e4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2935e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2935e8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2935e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2935ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2935ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2935F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2935ECu;
        // 0x2935f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2935ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2935F4u;
    // 0x2935f4: 0x0  nop
    ctx->pc = 0x2935f4u;
    // NOP
    ctx->pc = 0x2935f8u;
}
