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

// Function: sub_00123588
// Address: 0x123588 - 0x1236c8
void sub_00123588_0x123588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123588_0x123588");
#endif

    switch (ctx->pc) {
        case 0x1235a8u: goto label_1235a8;
        case 0x1235b8u: goto label_1235b8;
        case 0x123680u: goto label_123680;
        case 0x1236b8u: goto label_1236b8;
        default: break;
    }

    ctx->pc = 0x123588u;

    // 0x123588: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x123588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x12358c: 0xffa40040  sd          $a0, 0x40($sp)
    ctx->pc = 0x12358cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 4));
    // 0x123590: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x123590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x123594: 0xffa50048  sd          $a1, 0x48($sp)
    ctx->pc = 0x123594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 5));
    // 0x123598: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x123598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x12359c: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x12359cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x1235a0: 0xc049ca4  jal         func_127290
    ctx->pc = 0x1235A0u;
    SET_GPR_U32(ctx, 31, 0x1235A8u);
    ctx->pc = 0x1235A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1235A0u;
    // 0x1235a4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127290u, 0x1235A0u, 0x1235A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1235A8u;
label_1235a8:
    // 0x1235a8: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x1235a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1235ac: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x1235acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1235b0: 0xc049ca4  jal         func_127290
    ctx->pc = 0x1235B0u;
    SET_GPR_U32(ctx, 31, 0x1235B8u);
    ctx->pc = 0x1235B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1235B0u;
    // 0x1235b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127290u, 0x1235B0u, 0x1235B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1235B8u;
label_1235b8:
    // 0x1235b8: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x1235b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1235bc: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x1235bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1235c0: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x1235c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1235c4: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1235C4u;
    {
        const bool branch_taken_0x1235c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1235C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1235C4u;
        // 0x1235c8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1235c4) {
            ctx->pc = 0x1236B0u;
            goto label_1236b0;
        }
    }
    ctx->pc = 0x1235CCu;
    // 0x1235cc: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1235ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1235d0: 0x2ca20002  sltiu       $v0, $a1, 0x2
    ctx->pc = 0x1235d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1235d4: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x1235D4u;
    {
        const bool branch_taken_0x1235d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1235D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1235D4u;
        // 0x1235d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1235d4) {
            ctx->pc = 0x1236B0u;
            goto label_1236b0;
        }
    }
    ctx->pc = 0x1235DCu;
    // 0x1235dc: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1235dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1235e0: 0x38c40004  xori        $a0, $a2, 0x4
    ctx->pc = 0x1235e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)4);
    // 0x1235e4: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x1235e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1235e8: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1235e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1235ec: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1235ECu;
    {
        const bool branch_taken_0x1235ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1235F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1235ECu;
        // 0x1235f0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1235ec) {
            ctx->pc = 0x123600u;
            goto label_123600;
        }
    }
    ctx->pc = 0x1235F4u;
    // 0x1235f4: 0x38c20002  xori        $v0, $a2, 0x2
    ctx->pc = 0x1235f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)2);
    // 0x1235f8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1235F8u;
    {
        const bool branch_taken_0x1235f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1235FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1235F8u;
        // 0x1235fc: 0x38a20004  xori        $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1235f8) {
            ctx->pc = 0x123618u;
            goto label_123618;
        }
    }
    ctx->pc = 0x123600u;
label_123600:
    // 0x123600: 0x54c5002b  bnel        $a2, $a1, . + 4 + (0x2B << 2)
    ctx->pc = 0x123600u;
    {
        const bool branch_taken_0x123600 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x123600) {
            ctx->pc = 0x123604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123600u;
            // 0x123604: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1236B0u;
            goto label_1236b0;
        }
    }
    ctx->pc = 0x123608u;
    // 0x123608: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x123608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x12360c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x12360Cu;
    {
        const bool branch_taken_0x12360c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12360Cu;
        // 0x123610: 0x2444f208  addiu       $a0, $v0, -0xDF8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963720));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12360c) {
            ctx->pc = 0x1236B0u;
            goto label_1236b0;
        }
    }
    ctx->pc = 0x123614u;
    // 0x123614: 0x0  nop
    ctx->pc = 0x123614u;
    // NOP
label_123618:
    // 0x123618: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x123618u;
    {
        const bool branch_taken_0x123618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x123618) {
            ctx->pc = 0x12361Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123618u;
            // 0x12361c: 0x38a20002  xori        $v0, $a1, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x123630u;
            goto label_123630;
        }
    }
    ctx->pc = 0x123620u;
    // 0x123620: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x123620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x123624: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x123624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123628: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x123628u;
    {
        const bool branch_taken_0x123628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12362Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123628u;
        // 0x12362c: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123628) {
            ctx->pc = 0x1236B0u;
            goto label_1236b0;
        }
    }
    ctx->pc = 0x123630u;
label_123630:
    // 0x123630: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x123630u;
    {
        const bool branch_taken_0x123630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x123630) {
            ctx->pc = 0x123634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123630u;
            // 0x123634: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123648u;
            goto label_123648;
        }
    }
    ctx->pc = 0x123638u;
    // 0x123638: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x123638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12363c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12363cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123640: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x123640u;
    {
        const bool branch_taken_0x123640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123640u;
        // 0x123644: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123640) {
            ctx->pc = 0x1236B0u;
            goto label_1236b0;
        }
    }
    ctx->pc = 0x123648u;
label_123648:
    // 0x123648: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x123648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12364c: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x12364cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123650: 0xdfa60030  ld          $a2, 0x30($sp)
    ctx->pc = 0x123650u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x123654: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x123654u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x123658: 0x86282b  sltu        $a1, $a0, $a2
    ctx->pc = 0x123658u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x12365c: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x12365Cu;
    {
        const bool branch_taken_0x12365c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x123660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12365Cu;
        // 0x123660: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12365c) {
            ctx->pc = 0x123674u;
            goto label_123674;
        }
    }
    ctx->pc = 0x123664u;
    // 0x123664: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x123664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x123668: 0x42078  dsll        $a0, $a0, 1
    ctx->pc = 0x123668u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
    // 0x12366c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x12366cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x123670: 0x86282b  sltu        $a1, $a0, $a2
    ctx->pc = 0x123670u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_123674:
    // 0x123674: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x123674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x123678: 0x31b7c  dsll32      $v1, $v1, 13
    ctx->pc = 0x123678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 13));
    // 0x12367c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x12367cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_123680:
    // 0x123680: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x123680u;
    {
        const bool branch_taken_0x123680 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x123684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123680u;
        // 0x123684: 0x41078  dsll        $v0, $a0, 1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x123680) {
            ctx->pc = 0x123698u;
            goto label_123698;
        }
    }
    ctx->pc = 0x123688u;
    // 0x123688: 0x86202f  dsubu       $a0, $a0, $a2
    ctx->pc = 0x123688u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 6));
    // 0x12368c: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x12368cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x123690: 0x41078  dsll        $v0, $a0, 1
    ctx->pc = 0x123690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 1);
    // 0x123694: 0x0  nop
    ctx->pc = 0x123694u;
    // NOP
label_123698:
    // 0x123698: 0x3187a  dsrl        $v1, $v1, 1
    ctx->pc = 0x123698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 1);
    // 0x12369c: 0x46282b  sltu        $a1, $v0, $a2
    ctx->pc = 0x12369cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1236a0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1236A0u;
    {
        const bool branch_taken_0x1236a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1236A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1236A0u;
        // 0x1236a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1236a0) {
            ctx->pc = 0x123680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_123680;
        }
    }
    ctx->pc = 0x1236A8u;
    // 0x1236a8: 0xfd070010  sd          $a3, 0x10($t0)
    ctx->pc = 0x1236a8u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 16), GPR_U64(ctx, 7));
    // 0x1236ac: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1236acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1236b0:
    // 0x1236b0: 0xc049c6e  jal         func_1271B8
    ctx->pc = 0x1236B0u;
    SET_GPR_U32(ctx, 31, 0x1236B8u);
    ctx->pc = 0x1271B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1271B8u, 0x1236B0u, 0x1236B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1236B8u;
label_1236b8:
    // 0x1236b8: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x1236b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1236bc: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1236bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1236c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1236C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1236C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1236C0u;
        // 0x1236c4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1236C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1236C8u;
}
