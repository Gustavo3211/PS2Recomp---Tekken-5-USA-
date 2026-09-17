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

// Function: sub_001F1358
// Address: 0x1f1358 - 0x1f1440
void sub_001F1358_0x1f1358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F1358_0x1f1358");
#endif

    switch (ctx->pc) {
        case 0x1f13acu: goto label_1f13ac;
        case 0x1f13b4u: goto label_1f13b4;
        case 0x1f13d0u: goto label_1f13d0;
        case 0x1f13dcu: goto label_1f13dc;
        case 0x1f13e8u: goto label_1f13e8;
        case 0x1f1414u: goto label_1f1414;
        default: break;
    }

    ctx->pc = 0x1f1358u;

    // 0x1f1358: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f1358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f135c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1f135cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1f1360: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f1360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f1364: 0x244323b0  addiu       $v1, $v0, 0x23B0
    ctx->pc = 0x1f1364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 9136));
    // 0x1f1368: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f1368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f136c: 0x24620080  addiu       $v0, $v1, 0x80
    ctx->pc = 0x1f136cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1f1370: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f1370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f1374: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1f1374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1f1378: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1f1378u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3B23B4u));
    // 0x1f137c: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F137Cu;
    {
        const bool branch_taken_0x1f137c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F1380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F137Cu;
        // 0x1f1380: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f137c) {
            ctx->pc = 0x1F1390u;
            goto label_1f1390;
        }
    }
    ctx->pc = 0x1F1384u;
    // 0x1f1384: 0x246200b8  addiu       $v0, $v1, 0xB8
    ctx->pc = 0x1f1384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 184));
    // 0x1f1388: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F1388u;
    {
        const bool branch_taken_0x1f1388 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f1388) {
            ctx->pc = 0x1F1394u;
            goto label_1f1394;
        }
    }
    ctx->pc = 0x1F1390u;
label_1f1390:
    // 0x1f1390: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f1390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f1394:
    // 0x1f1394: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F1394u;
    {
        const bool branch_taken_0x1f1394 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1394u;
        // 0x1f1398: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1394) {
            ctx->pc = 0x1F13B8u;
            goto label_1f13b8;
        }
    }
    ctx->pc = 0x1F139Cu;
    // 0x1f139c: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x1f139cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x1f13a0: 0x261088d0  addiu       $s0, $s0, -0x7730
    ctx->pc = 0x1f13a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936784));
    // 0x1f13a4: 0xc07c4c6  jal         func_1F1318
    ctx->pc = 0x1F13A4u;
    SET_GPR_U32(ctx, 31, 0x1F13ACu);
    ctx->pc = 0x1F13A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F13A4u;
    // 0x1f13a8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1318u, 0x1F13A4u, 0x1F13ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F13ACu;
label_1f13ac:
    // 0x1f13ac: 0xc07c4c6  jal         func_1F1318
    ctx->pc = 0x1F13ACu;
    SET_GPR_U32(ctx, 31, 0x1F13B4u);
    ctx->pc = 0x1F13B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F13ACu;
    // 0x1f13b0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1318u, 0x1F13ACu, 0x1F13B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F13B4u;
label_1f13b4:
    // 0x1f13b4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1f13b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_1f13b8:
    // 0x1f13b8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1f13b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f13bc: 0x8c438880  lw          $v1, -0x7780($v0)
    ctx->pc = 0x1f13bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936704)));
    // 0x1f13c0: 0x50640019  beql        $v1, $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1F13C0u;
    {
        const bool branch_taken_0x1f13c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1f13c0) {
            ctx->pc = 0x1F13C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F13C0u;
            // 0x1f13c4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1428u;
            goto label_1f1428;
        }
    }
    ctx->pc = 0x1F13C8u;
    // 0x1f13c8: 0xc09d47a  jal         func_2751E8
    ctx->pc = 0x1F13C8u;
    SET_GPR_U32(ctx, 31, 0x1F13D0u);
    ctx->pc = 0x1F13CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F13C8u;
    // 0x1f13cc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2751E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2751E8u, 0x1F13C8u, 0x1F13D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F13D0u;
label_1f13d0:
    // 0x1f13d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f13d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f13d4: 0xc09d480  jal         func_275200
    ctx->pc = 0x1F13D4u;
    SET_GPR_U32(ctx, 31, 0x1F13DCu);
    ctx->pc = 0x1F13D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F13D4u;
    // 0x1f13d8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275200u, 0x1F13D4u, 0x1F13DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F13DCu;
label_1f13dc:
    // 0x1f13dc: 0x1a400011  blez        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F13DCu;
    {
        const bool branch_taken_0x1f13dc = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1F13E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F13DCu;
        // 0x1f13e0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f13dc) {
            ctx->pc = 0x1F1424u;
            goto label_1f1424;
        }
    }
    ctx->pc = 0x1F13E4u;
    // 0x1f13e4: 0x0  nop
    ctx->pc = 0x1f13e4u;
    // NOP
label_1f13e8:
    // 0x1f13e8: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x1f13e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1f13ec: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1f13ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1f13f0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F13F0u;
    {
        const bool branch_taken_0x1f13f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F13F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F13F0u;
        // 0x1f13f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f13f0) {
            ctx->pc = 0x1F1404u;
            goto label_1f1404;
        }
    }
    ctx->pc = 0x1F13F8u;
    // 0x1f13f8: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F13F8u;
    {
        const bool branch_taken_0x1f13f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F13FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F13F8u;
        // 0x1f13fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f13f8) {
            ctx->pc = 0x1F1404u;
            goto label_1f1404;
        }
    }
    ctx->pc = 0x1F1400u;
    // 0x1f1400: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f1400u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1404:
    // 0x1f1404: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F1404u;
    {
        const bool branch_taken_0x1f1404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1404) {
            ctx->pc = 0x1F1408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1404u;
            // 0x1f1408: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1418u;
            goto label_1f1418;
        }
    }
    ctx->pc = 0x1F140Cu;
    // 0x1f140c: 0xc07c4c6  jal         func_1F1318
    ctx->pc = 0x1F140Cu;
    SET_GPR_U32(ctx, 31, 0x1F1414u);
    ctx->pc = 0x1F1410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F140Cu;
    // 0x1f1410: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1318u, 0x1F140Cu, 0x1F1414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1414u;
label_1f1414:
    // 0x1f1414: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f1414u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1f1418:
    // 0x1f1418: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x1f1418u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1f141c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1F141Cu;
    {
        const bool branch_taken_0x1f141c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F141Cu;
        // 0x1f1420: 0x261008d0  addiu       $s0, $s0, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f141c) {
            ctx->pc = 0x1F13E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f13e8;
        }
    }
    ctx->pc = 0x1F1424u;
label_1f1424:
    // 0x1f1424: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f1424u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f1428:
    // 0x1f1428: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f1428u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f142c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f142cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f1430: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1f1430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f1434: 0x3e00008  jr          $ra
    ctx->pc = 0x1F1434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1434u;
        // 0x1f1438: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F143Cu;
    // 0x1f143c: 0x0  nop
    ctx->pc = 0x1f143cu;
    // NOP
    ctx->pc = 0x1f1440u;
}
