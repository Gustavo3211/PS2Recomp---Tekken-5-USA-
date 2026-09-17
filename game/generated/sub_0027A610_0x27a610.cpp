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

// Function: sub_0027A610
// Address: 0x27a610 - 0x27a738
void sub_0027A610_0x27a610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027A610_0x27a610");
#endif

    switch (ctx->pc) {
        case 0x27a670u: goto label_27a670;
        default: break;
    }

    ctx->pc = 0x27a610u;

    // 0x27a610: 0x94850300  lhu         $a1, 0x300($a0)
    ctx->pc = 0x27a610u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 768)));
    // 0x27a614: 0x24a2ff23  addiu       $v0, $a1, -0xDD
    ctx->pc = 0x27a614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967075));
    // 0x27a618: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x27a618u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x27a61c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x27A61Cu;
    {
        const bool branch_taken_0x27a61c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a61c) {
            ctx->pc = 0x27A668u;
            goto label_27a668;
        }
    }
    ctx->pc = 0x27A624u;
    // 0x27a624: 0x848202c2  lh          $v0, 0x2C2($a0)
    ctx->pc = 0x27a624u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 706)));
    // 0x27a628: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x27A628u;
    {
        const bool branch_taken_0x27a628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A628u;
        // 0x27a62c: 0x51400  sll         $v0, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a628) {
            ctx->pc = 0x27A650u;
            goto label_27a650;
        }
    }
    ctx->pc = 0x27A630u;
    // 0x27a630: 0x848302f8  lh          $v1, 0x2F8($a0)
    ctx->pc = 0x27a630u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 760)));
    // 0x27a634: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x27a634u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x27a638: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27A638u;
    {
        const bool branch_taken_0x27a638 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27a638) {
            ctx->pc = 0x27A63Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A638u;
            // 0x27a63c: 0x8c830310  lw          $v1, 0x310($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 784)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A658u;
            goto label_27a658;
        }
    }
    ctx->pc = 0x27A640u;
    // 0x27a640: 0x948202c0  lhu         $v0, 0x2C0($a0)
    ctx->pc = 0x27a640u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 704)));
    // 0x27a644: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27a644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27a648: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27A648u;
    {
        const bool branch_taken_0x27a648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A648u;
        // 0x27a64c: 0xa48202c0  sh          $v0, 0x2C0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 704), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a648) {
            ctx->pc = 0x27A654u;
            goto label_27a654;
        }
    }
    ctx->pc = 0x27A650u;
label_27a650:
    // 0x27a650: 0xa48002c0  sh          $zero, 0x2C0($a0)
    ctx->pc = 0x27a650u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 704), (uint16_t)GPR_U32(ctx, 0));
label_27a654:
    // 0x27a654: 0x8c830310  lw          $v1, 0x310($a0)
    ctx->pc = 0x27a654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 784)));
label_27a658:
    // 0x27a658: 0x94620024  lhu         $v0, 0x24($v1)
    ctx->pc = 0x27a658u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x27a65c: 0xa48502f8  sh          $a1, 0x2F8($a0)
    ctx->pc = 0x27a65cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 760), (uint16_t)GPR_U32(ctx, 5));
    // 0x27a660: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x27a660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x27a664: 0xa48202c2  sh          $v0, 0x2C2($a0)
    ctx->pc = 0x27a664u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 706), (uint16_t)GPR_U32(ctx, 2));
label_27a668:
    // 0x27a668: 0x3e00008  jr          $ra
    ctx->pc = 0x27A668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27A670u;
label_27a670:
    // 0x27a670: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x27a670u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a674: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x27a674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x27a678: 0x94c20300  lhu         $v0, 0x300($a2)
    ctx->pc = 0x27a678u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 768)));
    // 0x27a67c: 0x30443c00  andi        $a0, $v0, 0x3C00
    ctx->pc = 0x27a67cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15360);
    // 0x27a680: 0x10830029  beq         $a0, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x27A680u;
    {
        const bool branch_taken_0x27a680 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x27A684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A680u;
        // 0x27a684: 0x24030800  addiu       $v1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a680) {
            ctx->pc = 0x27A728u;
            goto label_27a728;
        }
    }
    ctx->pc = 0x27A688u;
    // 0x27a688: 0x14830028  bne         $a0, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x27A688u;
    {
        const bool branch_taken_0x27a688 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x27A68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A688u;
        // 0x27a68c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a688) {
            ctx->pc = 0x27A72Cu;
            goto label_27a72c;
        }
    }
    ctx->pc = 0x27A690u;
    // 0x27a690: 0x94c50302  lhu         $a1, 0x302($a2)
    ctx->pc = 0x27a690u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 770)));
    // 0x27a694: 0x30a21000  andi        $v0, $a1, 0x1000
    ctx->pc = 0x27a694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4096);
    // 0x27a698: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27A698u;
    {
        const bool branch_taken_0x27a698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A698u;
        // 0x27a69c: 0x30a300ff  andi        $v1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a698) {
            ctx->pc = 0x27A6B0u;
            goto label_27a6b0;
        }
    }
    ctx->pc = 0x27A6A0u;
    // 0x27a6a0: 0x94c202fe  lhu         $v0, 0x2FE($a2)
    ctx->pc = 0x27a6a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 766)));
    // 0x27a6a4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x27A6A4u;
    {
        const bool branch_taken_0x27a6a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A6A4u;
        // 0x27a6a8: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a6a4) {
            ctx->pc = 0x27A714u;
            goto label_27a714;
        }
    }
    ctx->pc = 0x27A6ACu;
    // 0x27a6ac: 0x0  nop
    ctx->pc = 0x27a6acu;
    // NOP
label_27a6b0:
    // 0x27a6b0: 0x30a22000  andi        $v0, $a1, 0x2000
    ctx->pc = 0x27a6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8192);
    // 0x27a6b4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x27A6B4u;
    {
        const bool branch_taken_0x27a6b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a6b4) {
            ctx->pc = 0x27A6B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A6B4u;
            // 0x27a6b8: 0x30a24000  andi        $v0, $a1, 0x4000 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16384);
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A6C8u;
            goto label_27a6c8;
        }
    }
    ctx->pc = 0x27A6BCu;
    // 0x27a6bc: 0x94c202fe  lhu         $v0, 0x2FE($a2)
    ctx->pc = 0x27a6bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 766)));
    // 0x27a6c0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x27A6C0u;
    {
        const bool branch_taken_0x27a6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A6C0u;
        // 0x27a6c4: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a6c0) {
            ctx->pc = 0x27A714u;
            goto label_27a714;
        }
    }
    ctx->pc = 0x27A6C8u;
label_27a6c8:
    // 0x27a6c8: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x27A6C8u;
    {
        const bool branch_taken_0x27a6c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a6c8) {
            ctx->pc = 0x27A6CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A6C8u;
            // 0x27a6cc: 0x30a28000  andi        $v0, $a1, 0x8000 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A6F0u;
            goto label_27a6f0;
        }
    }
    ctx->pc = 0x27A6D0u;
    // 0x27a6d0: 0x94c3009e  lhu         $v1, 0x9E($a2)
    ctx->pc = 0x27a6d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 158)));
    // 0x27a6d4: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x27a6d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x27a6d8: 0x94c40096  lhu         $a0, 0x96($a2)
    ctx->pc = 0x27a6d8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 150)));
    // 0x27a6dc: 0x94c202fe  lhu         $v0, 0x2FE($a2)
    ctx->pc = 0x27a6dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 766)));
    // 0x27a6e0: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x27a6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27a6e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27a6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27a6e8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x27A6E8u;
    {
        const bool branch_taken_0x27a6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A6E8u;
        // 0x27a6ec: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a6e8) {
            ctx->pc = 0x27A714u;
            goto label_27a714;
        }
    }
    ctx->pc = 0x27A6F0u;
label_27a6f0:
    // 0x27a6f0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x27A6F0u;
    {
        const bool branch_taken_0x27a6f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a6f0) {
            ctx->pc = 0x27A720u;
            goto label_27a720;
        }
    }
    ctx->pc = 0x27A6F8u;
    // 0x27a6f8: 0x94c3009e  lhu         $v1, 0x9E($a2)
    ctx->pc = 0x27a6f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 158)));
    // 0x27a6fc: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x27a6fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x27a700: 0x94c40096  lhu         $a0, 0x96($a2)
    ctx->pc = 0x27a700u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 150)));
    // 0x27a704: 0x94c202fe  lhu         $v0, 0x2FE($a2)
    ctx->pc = 0x27a704u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 766)));
    // 0x27a708: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x27a708u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27a70c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27a70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27a710: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x27a710u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_27a714:
    // 0x27a714: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x27a714u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x27a718: 0x3e00008  jr          $ra
    ctx->pc = 0x27A718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A718u;
        // 0x27a71c: 0x21403  sra         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27A720u;
label_27a720:
    // 0x27a720: 0x3e00008  jr          $ra
    ctx->pc = 0x27A720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A720u;
        // 0x27a724: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27A728u;
label_27a728:
    // 0x27a728: 0x84c202fe  lh          $v0, 0x2FE($a2)
    ctx->pc = 0x27a728u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 766)));
label_27a72c:
    // 0x27a72c: 0x3e00008  jr          $ra
    ctx->pc = 0x27A72Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A72Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27A734u;
    // 0x27a734: 0x0  nop
    ctx->pc = 0x27a734u;
    // NOP
    ctx->pc = 0x27a738u;
}
