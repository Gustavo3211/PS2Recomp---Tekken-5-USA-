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

// Function: sub_00218598
// Address: 0x218598 - 0x21866c
void sub_00218598_0x218598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218598_0x218598");
#endif

    switch (ctx->pc) {
        case 0x2185f0u: goto label_2185f0;
        case 0x218624u: goto label_218624;
        case 0x218638u: goto label_218638;
        case 0x21864cu: goto label_21864c;
        default: break;
    }

    ctx->pc = 0x218598u;

    // 0x218598: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x218598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21859c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21859cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2185a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2185a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2185a4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2185a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2185a8: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x2185a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2185ac: 0x2c62000b  sltiu       $v0, $v1, 0xB
    ctx->pc = 0x2185acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x2185b0: 0x5040002f  beql        $v0, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x2185B0u;
    {
        const bool branch_taken_0x2185b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2185b0) {
            ctx->pc = 0x2185B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2185B0u;
            // 0x2185b4: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x218670u;
            return;
        }
    }
    ctx->pc = 0x2185B8u;
    // 0x2185b8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2185b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2185bc: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2185bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2185c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2185c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2185c4: 0x8c635ac0  lw          $v1, 0x5AC0($v1)
    ctx->pc = 0x2185c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 23232)));
    // 0x2185c8: 0x600008  jr          $v1
    ctx->pc = 0x2185C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2185D0u: goto label_2185d0;
            case 0x2185E0u: goto label_2185e0;
            case 0x218640u: goto label_218640;
            case 0x218658u: goto label_218658;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2185C8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2185D0u;
label_2185d0:
    // 0x2185d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2185d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2185d4: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2185D4u;
    {
        const bool branch_taken_0x2185d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2185D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2185D4u;
        // 0x2185d8: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2185d4) {
            ctx->pc = 0x21866Cu;
            return;
        }
    }
    ctx->pc = 0x2185DCu;
    // 0x2185dc: 0x0  nop
    ctx->pc = 0x2185dcu;
    // NOP
label_2185e0:
    // 0x2185e0: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x2185e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x2185e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2185e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2185e8: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x2185E8u;
    SET_GPR_U32(ctx, 31, 0x2185F0u);
    ctx->pc = 0x2185ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2185E8u;
    // 0x2185ec: 0x248437e0  addiu       $a0, $a0, 0x37E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x2185E8u, 0x2185F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2185F0u;
label_2185f0:
    // 0x2185f0: 0x24450058  addiu       $a1, $v0, 0x58
    ctx->pc = 0x2185f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x2185f4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2185f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2185f8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2185F8u;
    {
        const bool branch_taken_0x2185f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2185f8) {
            ctx->pc = 0x2185FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2185F8u;
            // 0x2185fc: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x218614u;
            goto label_218614;
        }
    }
    ctx->pc = 0x218600u;
    // 0x218600: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x218600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x218604: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x218604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x218608: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x218608u;
    {
        const bool branch_taken_0x218608 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x218608) {
            ctx->pc = 0x21861Cu;
            goto label_21861c;
        }
    }
    ctx->pc = 0x218610u;
    // 0x218610: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x218610u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_218614:
    // 0x218614: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x218614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218618: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x218618u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_21861c:
    // 0x21861c: 0xc0902c4  jal         func_240B10
    ctx->pc = 0x21861Cu;
    SET_GPR_U32(ctx, 31, 0x218624u);
    ctx->pc = 0x218620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21861Cu;
    // 0x218620: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240B10u, 0x21861Cu, 0x218624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218624u;
label_218624:
    // 0x218624: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x218624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x218628: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x218628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x21862c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21862cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218630: 0xc0b7fb0  jal         func_2DFEC0
    ctx->pc = 0x218630u;
    SET_GPR_U32(ctx, 31, 0x218638u);
    ctx->pc = 0x218634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218630u;
    // 0x218634: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFEC0u, 0x218630u, 0x218638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218638u;
label_218638:
    // 0x218638: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x218638u;
    {
        const bool branch_taken_0x218638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21863Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218638u;
        // 0x21863c: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218638) {
            ctx->pc = 0x218670u;
            return;
        }
    }
    ctx->pc = 0x218640u;
label_218640:
    // 0x218640: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x218640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218644: 0xc0b7fb0  jal         func_2DFEC0
    ctx->pc = 0x218644u;
    SET_GPR_U32(ctx, 31, 0x21864Cu);
    ctx->pc = 0x218648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218644u;
    // 0x218648: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFEC0u, 0x218644u, 0x21864Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21864Cu;
label_21864c:
    // 0x21864c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x21864Cu;
    {
        const bool branch_taken_0x21864c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21864Cu;
        // 0x218650: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21864c) {
            ctx->pc = 0x218670u;
            return;
        }
    }
    ctx->pc = 0x218654u;
    // 0x218654: 0x0  nop
    ctx->pc = 0x218654u;
    // NOP
label_218658:
    // 0x218658: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x218658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21865c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21865cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218660: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x218660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x218664: 0xc0b7fb0  jal         func_2DFEC0
    ctx->pc = 0x218664u;
    SET_GPR_U32(ctx, 31, 0x21866Cu);
    ctx->pc = 0x218668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218664u;
    // 0x218668: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFEC0u, 0x218664u, 0x21866Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21866Cu;
}
