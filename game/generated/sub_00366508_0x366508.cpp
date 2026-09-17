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

// Function: sub_00366508
// Address: 0x366508 - 0x366620
void sub_00366508_0x366508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00366508_0x366508");
#endif

    switch (ctx->pc) {
        case 0x366510u: goto label_366510;
        case 0x366548u: goto label_366548;
        case 0x366570u: goto label_366570;
        case 0x366608u: goto label_366608;
        default: break;
    }

    ctx->pc = 0x366508u;

    // 0x366508: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x366508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x36650c: 0x24821478  addiu       $v0, $a0, 0x1478
    ctx->pc = 0x36650cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 5240));
label_366510:
    // 0x366510: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x366510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x366514: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x366514u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x366518: 0x0  nop
    ctx->pc = 0x366518u;
    // NOP
    // 0x36651c: 0x0  nop
    ctx->pc = 0x36651cu;
    // NOP
    // 0x366520: 0x0  nop
    ctx->pc = 0x366520u;
    // NOP
    // 0x366524: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x366524u;
    {
        const bool branch_taken_0x366524 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x366528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366524u;
        // 0x366528: 0x2442ffec  addiu       $v0, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366524) {
            ctx->pc = 0x366510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366510;
        }
    }
    ctx->pc = 0x36652Cu;
    // 0x36652c: 0xac801480  sw          $zero, 0x1480($a0)
    ctx->pc = 0x36652cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5248), GPR_U32(ctx, 0));
    // 0x366530: 0x3e00008  jr          $ra
    ctx->pc = 0x366530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x366534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366530u;
        // 0x366534: 0xac801484  sw          $zero, 0x1484($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 5252), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x366530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x366538u;
    // 0x366538: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x366538u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36653c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36653cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366540: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x366540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366544: 0x0  nop
    ctx->pc = 0x366544u;
    // NOP
label_366548:
    // 0x366548: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x366548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x36654c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x36654cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x366550: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x366550u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x366554: 0x28a40200  slti        $a0, $a1, 0x200
    ctx->pc = 0x366554u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x366558: 0x0  nop
    ctx->pc = 0x366558u;
    // NOP
    // 0x36655c: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36655Cu;
    {
        const bool branch_taken_0x36655c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x366560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36655Cu;
        // 0x366560: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36655c) {
            ctx->pc = 0x366548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366548;
        }
    }
    ctx->pc = 0x366564u;
    // 0x366564: 0x3e00008  jr          $ra
    ctx->pc = 0x366564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x366568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366564u;
        // 0x366568: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x366564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36656Cu;
    // 0x36656c: 0x0  nop
    ctx->pc = 0x36656cu;
    // NOP
label_366570:
    // 0x366570: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x366570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x366574: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x366574u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366578: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x366578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36657c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x36657cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x366580: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x366580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x366584: 0x254b1488  addiu       $t3, $t2, 0x1488
    ctx->pc = 0x366584u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 5256));
    // 0x366588: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x366588u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x36658c: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x36658cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x366590: 0x8d481484  lw          $t0, 0x1484($t2)
    ctx->pc = 0x366590u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 5252)));
    // 0x366594: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x366594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x366598: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x366598u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x36659c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x36659cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x3665a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3665a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3665a4: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x3665a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x3665a8: 0x24500a80  addiu       $s0, $v0, 0xA80
    ctx->pc = 0x3665a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2688));
    // 0x3665ac: 0xae060004  sw          $a2, 0x4($s0)
    ctx->pc = 0x3665acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 6));
    // 0x3665b0: 0xae070008  sw          $a3, 0x8($s0)
    ctx->pc = 0x3665b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
    // 0x3665b4: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x3665b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x3665b8: 0xa209000c  sb          $t1, 0xC($s0)
    ctx->pc = 0x3665b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 9));
    // 0x3665bc: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x3665bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x3665c0: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x3665c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x3665c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3665c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3665c8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3665C8u;
    {
        const bool branch_taken_0x3665c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3665CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3665C8u;
        // 0x3665cc: 0xad620000  sw          $v0, 0x0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3665c8) {
            ctx->pc = 0x3665D8u;
            goto label_3665d8;
        }
    }
    ctx->pc = 0x3665D0u;
    // 0x3665d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3665d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3665d4: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x3665d4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
label_3665d8:
    // 0x3665d8: 0x8d421484  lw          $v0, 0x1484($t2)
    ctx->pc = 0x3665d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 5252)));
    // 0x3665dc: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x3665dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3665e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3665e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3665e4: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3665E4u;
    {
        const bool branch_taken_0x3665e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3665E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3665E4u;
        // 0x3665e8: 0xad421484  sw          $v0, 0x1484($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 5252), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3665e4) {
            ctx->pc = 0x3665F0u;
            goto label_3665f0;
        }
    }
    ctx->pc = 0x3665ECu;
    // 0x3665ec: 0xad401484  sw          $zero, 0x1484($t2)
    ctx->pc = 0x3665ecu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 5252), GPR_U32(ctx, 0));
label_3665f0:
    // 0x3665f0: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x3665f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3665f4: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x3665f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3665f8: 0x8e080004  lw          $t0, 0x4($s0)
    ctx->pc = 0x3665f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3665fc: 0x8e090008  lw          $t1, 0x8($s0)
    ctx->pc = 0x3665fcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x366600: 0xc0d6ad0  jal         func_35AB40
    ctx->pc = 0x366600u;
    SET_GPR_U32(ctx, 31, 0x366608u);
    ctx->pc = 0x366604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366600u;
    // 0x366604: 0x8d450004  lw          $a1, 0x4($t2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AB40u, 0x366600u, 0x366608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366608u;
label_366608:
    // 0x366608: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x366608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x36660c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36660cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x366610: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x366610u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x366614: 0x3e00008  jr          $ra
    ctx->pc = 0x366614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x366618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366614u;
        // 0x366618: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x366614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36661Cu;
    // 0x36661c: 0x0  nop
    ctx->pc = 0x36661cu;
    // NOP
    ctx->pc = 0x366620u;
}
