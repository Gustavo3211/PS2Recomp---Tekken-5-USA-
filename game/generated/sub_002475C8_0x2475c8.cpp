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

// Function: sub_002475C8
// Address: 0x2475c8 - 0x247690
void sub_002475C8_0x2475c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002475C8_0x2475c8");
#endif

    switch (ctx->pc) {
        case 0x247600u: goto label_247600;
        case 0x247638u: goto label_247638;
        default: break;
    }

    ctx->pc = 0x2475c8u;

    // 0x2475c8: 0x84850012  lh          $a1, 0x12($a0)
    ctx->pc = 0x2475c8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x2475cc: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x2475ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x2475d0: 0x244e1268  addiu       $t6, $v0, 0x1268
    ctx->pc = 0x2475d0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 4712));
    // 0x2475d4: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x2475d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x2475d8: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x2475d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2475dc: 0x8c8b0044  lw          $t3, 0x44($a0)
    ctx->pc = 0x2475dcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x2475e0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2475e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2475e4: 0x24796ec0  addiu       $t9, $v1, 0x6EC0
    ctx->pc = 0x2475e4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 3), 28352));
    // 0x2475e8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2475e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2475ec: 0x278c0  sll         $t7, $v0, 3
    ctx->pc = 0x2475ecu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2475f0: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x2475f0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2475f4: 0x25cd0004  addiu       $t5, $t6, 0x4
    ctx->pc = 0x2475f4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
    // 0x2475f8: 0x25d80008  addiu       $t8, $t6, 0x8
    ctx->pc = 0x2475f8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 14), 8));
    // 0x2475fc: 0x910c0  sll         $v0, $t1, 3
    ctx->pc = 0x2475fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_247600:
    // 0x247600: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x247600u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x247604: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x247604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x247608: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x247608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x24760c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x24760cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x247610: 0x34080  sll         $t0, $v1, 2
    ctx->pc = 0x247610u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x247614: 0x4f1021  addu        $v0, $v0, $t7
    ctx->pc = 0x247614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x247618: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x247618u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24761c: 0x593021  addu        $a2, $v0, $t9
    ctx->pc = 0x24761cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 25)));
    // 0x247620: 0x10e5021  addu        $t2, $t0, $t6
    ctx->pc = 0x247620u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 14)));
    // 0x247624: 0xaccc000c  sw          $t4, 0xC($a2)
    ctx->pc = 0x247624u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 12));
    // 0x247628: 0xaccc0010  sw          $t4, 0x10($a2)
    ctx->pc = 0x247628u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 12));
    // 0x24762c: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x24762cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x247630: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x247630u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x247634: 0x0  nop
    ctx->pc = 0x247634u;
    // NOP
label_247638:
    // 0x247638: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x247638u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x24763c: 0x482021  addu        $a0, $v0, $t0
    ctx->pc = 0x24763cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x247640: 0x8d1021  addu        $v0, $a0, $t5
    ctx->pc = 0x247640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x247644: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x247644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x247648: 0x146b0009  bne         $v1, $t3, . + 4 + (0x9 << 2)
    ctx->pc = 0x247648u;
    {
        const bool branch_taken_0x247648 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 11));
        ctx->pc = 0x24764Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247648u;
        // 0x24764c: 0x2ce50002  sltiu       $a1, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x247648) {
            ctx->pc = 0x247670u;
            goto label_247670;
        }
    }
    ctx->pc = 0x247650u;
    // 0x247650: 0x981021  addu        $v0, $a0, $t8
    ctx->pc = 0x247650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 24)));
    // 0x247654: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x247654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x247658: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x247658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24765c: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x24765cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x247660: 0xacc40010  sw          $a0, 0x10($a2)
    ctx->pc = 0x247660u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 4));
    // 0x247664: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x247664u;
    {
        const bool branch_taken_0x247664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247664u;
        // 0x247668: 0xaccb000c  sw          $t3, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247664) {
            ctx->pc = 0x247678u;
            goto label_247678;
        }
    }
    ctx->pc = 0x24766Cu;
    // 0x24766c: 0x0  nop
    ctx->pc = 0x24766cu;
    // NOP
label_247670:
    // 0x247670: 0x14a0fff1  bnez        $a1, . + 4 + (-0xF << 2)
    ctx->pc = 0x247670u;
    {
        const bool branch_taken_0x247670 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x247674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247670u;
        // 0x247674: 0x710c0  sll         $v0, $a3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247670) {
            ctx->pc = 0x247638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_247638;
        }
    }
    ctx->pc = 0x247678u;
label_247678:
    // 0x247678: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x247678u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x24767c: 0x2d220002  sltiu       $v0, $t1, 0x2
    ctx->pc = 0x24767cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x247680: 0x5440ffdf  bnel        $v0, $zero, . + 4 + (-0x21 << 2)
    ctx->pc = 0x247680u;
    {
        const bool branch_taken_0x247680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x247680) {
            ctx->pc = 0x247684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x247680u;
            // 0x247684: 0x910c0  sll         $v0, $t1, 3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247600u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_247600;
        }
    }
    ctx->pc = 0x247688u;
    // 0x247688: 0x3e00008  jr          $ra
    ctx->pc = 0x247688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247690u;
}
