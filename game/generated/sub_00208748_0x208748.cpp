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

// Function: sub_00208748
// Address: 0x208748 - 0x208878
void sub_00208748_0x208748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208748_0x208748");
#endif

    switch (ctx->pc) {
        case 0x208868u: goto label_208868;
        default: break;
    }

    ctx->pc = 0x208748u;

    // 0x208748: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x208748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20874c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x20874cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x208750: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x208750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x208754: 0x244683c0  addiu       $a2, $v0, -0x7C40
    ctx->pc = 0x208754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935488));
    // 0x208758: 0x90c3001c  lbu         $v1, 0x1C($a2)
    ctx->pc = 0x208758u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3A83DCu));
    // 0x20875c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x20875Cu;
    {
        const bool branch_taken_0x20875c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x208760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20875Cu;
        // 0x208760: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20875c) {
            ctx->pc = 0x208770u;
            goto label_208770;
        }
    }
    ctx->pc = 0x208764u;
    // 0x208764: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x208764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x208768: 0x807c864  j           func_1F2190
    ctx->pc = 0x208768u;
    ctx->pc = 0x20876Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208768u;
    // 0x20876c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2190u;
    sub_001F2190_0x1f2190(rdram, ctx, runtime); return;
    ctx->pc = 0x208770u;
label_208770:
    // 0x208770: 0x3c07003b  lui         $a3, 0x3B
    ctx->pc = 0x208770u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)59 << 16));
    // 0x208774: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x208774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208778: 0x24e588d0  addiu       $a1, $a3, -0x7730
    ctx->pc = 0x208778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294936784));
    // 0x20877c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20877cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A88D0u));
    // 0x208780: 0x904401bc  lbu         $a0, 0x1BC($v0)
    ctx->pc = 0x208780u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 444)));
    // 0x208784: 0x54830011  bnel        $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x208784u;
    {
        const bool branch_taken_0x208784 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x208784) {
            ctx->pc = 0x208788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208784u;
            // 0x208788: 0xa0c00014  sb          $zero, 0x14($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 20), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2087CCu;
            goto label_2087cc;
        }
    }
    ctx->pc = 0x20878Cu;
    // 0x20878c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x20878cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x208790: 0x904301bc  lbu         $v1, 0x1BC($v0)
    ctx->pc = 0x208790u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 444)));
    // 0x208794: 0x5460000c  bnel        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x208794u;
    {
        const bool branch_taken_0x208794 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x208794) {
            ctx->pc = 0x208798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208794u;
            // 0x208798: 0xa0c00014  sb          $zero, 0x14($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 20), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2087C8u;
            goto label_2087c8;
        }
    }
    ctx->pc = 0x20879Cu;
    // 0x20879c: 0x90c20016  lbu         $v0, 0x16($a2)
    ctx->pc = 0x20879cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 22)));
    // 0x2087a0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2087A0u;
    {
        const bool branch_taken_0x2087a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2087A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2087A0u;
        // 0x2087a4: 0xa0c40014  sb          $a0, 0x14($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 20), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2087a0) {
            ctx->pc = 0x2087B8u;
            goto label_2087b8;
        }
    }
    ctx->pc = 0x2087A8u;
    // 0x2087a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2087a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2087ac: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2087acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2087b0: 0x807c864  j           func_1F2190
    ctx->pc = 0x2087B0u;
    ctx->pc = 0x2087B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2087B0u;
    // 0x2087b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2190u;
    sub_001F2190_0x1f2190(rdram, ctx, runtime); return;
    ctx->pc = 0x2087B8u;
label_2087b8:
    // 0x2087b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2087b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2087bc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2087bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2087c0: 0x807c864  j           func_1F2190
    ctx->pc = 0x2087C0u;
    ctx->pc = 0x2087C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2087C0u;
    // 0x2087c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2190u;
    sub_001F2190_0x1f2190(rdram, ctx, runtime); return;
    ctx->pc = 0x2087C8u;
label_2087c8:
    // 0x2087c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2087c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2087cc:
    // 0x2087cc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2087ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2087d0: 0x904401bc  lbu         $a0, 0x1BC($v0)
    ctx->pc = 0x2087d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 444)));
    // 0x2087d4: 0x5483000a  bnel        $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2087D4u;
    {
        const bool branch_taken_0x2087d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2087d4) {
            ctx->pc = 0x2087D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2087D4u;
            // 0x2087d8: 0x24e488d0  addiu       $a0, $a3, -0x7730 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294936784));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208800u;
            goto label_208800;
        }
    }
    ctx->pc = 0x2087DCu;
    // 0x2087dc: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2087dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2087e0: 0x904301bc  lbu         $v1, 0x1BC($v0)
    ctx->pc = 0x2087e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 444)));
    // 0x2087e4: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2087E4u;
    {
        const bool branch_taken_0x2087e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2087E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2087E4u;
        // 0x2087e8: 0x24e488d0  addiu       $a0, $a3, -0x7730 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294936784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2087e4) {
            ctx->pc = 0x208800u;
            goto label_208800;
        }
    }
    ctx->pc = 0x2087ECu;
    // 0x2087ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2087ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2087f0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2087f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2087f4: 0x807c864  j           func_1F2190
    ctx->pc = 0x2087F4u;
    ctx->pc = 0x2087F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2087F4u;
    // 0x2087f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2190u;
    sub_001F2190_0x1f2190(rdram, ctx, runtime); return;
    ctx->pc = 0x2087FCu;
    // 0x2087fc: 0x0  nop
    ctx->pc = 0x2087fcu;
    // NOP
label_208800:
    // 0x208800: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x208800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x208804: 0x904301bc  lbu         $v1, 0x1BC($v0)
    ctx->pc = 0x208804u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 444)));
    // 0x208808: 0x5460000f  bnel        $v1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x208808u;
    {
        const bool branch_taken_0x208808 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x208808) {
            ctx->pc = 0x20880Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208808u;
            // 0x20880c: 0x90c20015  lbu         $v0, 0x15($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 21)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208848u;
            goto label_208848;
        }
    }
    ctx->pc = 0x208810u;
    // 0x208810: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x208810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x208814: 0x904301bc  lbu         $v1, 0x1BC($v0)
    ctx->pc = 0x208814u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 444)));
    // 0x208818: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x208818u;
    {
        const bool branch_taken_0x208818 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20881Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208818u;
        // 0x20881c: 0x90c20015  lbu         $v0, 0x15($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208818) {
            ctx->pc = 0x208848u;
            goto label_208848;
        }
    }
    ctx->pc = 0x208820u;
    // 0x208820: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x208820u;
    {
        const bool branch_taken_0x208820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208820u;
        // 0x208824: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208820) {
            ctx->pc = 0x208838u;
            goto label_208838;
        }
    }
    ctx->pc = 0x208828u;
    // 0x208828: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x208828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20882c: 0x807c864  j           func_1F2190
    ctx->pc = 0x20882Cu;
    ctx->pc = 0x208830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20882Cu;
    // 0x208830: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2190u;
    sub_001F2190_0x1f2190(rdram, ctx, runtime); return;
    ctx->pc = 0x208834u;
    // 0x208834: 0x0  nop
    ctx->pc = 0x208834u;
    // NOP
label_208838:
    // 0x208838: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x208838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20883c: 0x807c864  j           func_1F2190
    ctx->pc = 0x20883Cu;
    ctx->pc = 0x208840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20883Cu;
    // 0x208840: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2190u;
    sub_001F2190_0x1f2190(rdram, ctx, runtime); return;
    ctx->pc = 0x208844u;
    // 0x208844: 0x0  nop
    ctx->pc = 0x208844u;
    // NOP
label_208848:
    // 0x208848: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x208848u;
    {
        const bool branch_taken_0x208848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20884Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208848u;
        // 0x20884c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208848) {
            ctx->pc = 0x208860u;
            goto label_208860;
        }
    }
    ctx->pc = 0x208850u;
    // 0x208850: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x208850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x208854: 0x807c864  j           func_1F2190
    ctx->pc = 0x208854u;
    ctx->pc = 0x208858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208854u;
    // 0x208858: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2190u;
    sub_001F2190_0x1f2190(rdram, ctx, runtime); return;
    ctx->pc = 0x20885Cu;
    // 0x20885c: 0x0  nop
    ctx->pc = 0x20885cu;
    // NOP
label_208860:
    // 0x208860: 0xc07c864  jal         func_1F2190
    ctx->pc = 0x208860u;
    SET_GPR_U32(ctx, 31, 0x208868u);
    ctx->pc = 0x208864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208860u;
    // 0x208864: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2190u, 0x208860u, 0x208868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208868u;
label_208868:
    // 0x208868: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x208868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20886c: 0x3e00008  jr          $ra
    ctx->pc = 0x20886Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20886Cu;
        // 0x208870: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20886Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208874u;
    // 0x208874: 0x0  nop
    ctx->pc = 0x208874u;
    // NOP
    ctx->pc = 0x208878u;
}
