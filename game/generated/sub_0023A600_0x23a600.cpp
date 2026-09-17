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

// Function: sub_0023A600
// Address: 0x23a600 - 0x23a6b8
void sub_0023A600_0x23a600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A600_0x23a600");
#endif

    switch (ctx->pc) {
        case 0x23a638u: goto label_23a638;
        case 0x23a644u: goto label_23a644;
        case 0x23a658u: goto label_23a658;
        case 0x23a664u: goto label_23a664;
        case 0x23a678u: goto label_23a678;
        case 0x23a688u: goto label_23a688;
        case 0x23a698u: goto label_23a698;
        case 0x23a6a8u: goto label_23a6a8;
        default: break;
    }

    ctx->pc = 0x23a600u;

    // 0x23a600: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23a600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23a604: 0x2ca20006  sltiu       $v0, $a1, 0x6
    ctx->pc = 0x23a604u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x23a608: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23a608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23a60c: 0x38900001  xori        $s0, $a0, 0x1
    ctx->pc = 0x23a60cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x23a610: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x23A610u;
    {
        const bool branch_taken_0x23a610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A610u;
        // 0x23a614: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a610) {
            ctx->pc = 0x23A6A8u;
            goto label_23a6a8;
        }
    }
    ctx->pc = 0x23A618u;
    // 0x23a618: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x23a618u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x23a61c: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x23a61cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x23a620: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23a620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23a624: 0x8c63aaa0  lw          $v1, -0x5560($v1)
    ctx->pc = 0x23a624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945440)));
    // 0x23a628: 0x600008  jr          $v1
    ctx->pc = 0x23A628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23A630u: goto label_23a630;
            case 0x23A650u: goto label_23a650;
            case 0x23A670u: goto label_23a670;
            case 0x23A680u: goto label_23a680;
            case 0x23A690u: goto label_23a690;
            case 0x23A6A0u: goto label_23a6a0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A628u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x23A630u;
label_23a630:
    // 0x23a630: 0xc08e79c  jal         func_239E70
    ctx->pc = 0x23A630u;
    SET_GPR_U32(ctx, 31, 0x23A638u);
    ctx->pc = 0x23A634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A630u;
    // 0x23a634: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239E70u, 0x23A630u, 0x23A638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A638u;
label_23a638:
    // 0x23a638: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23a638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a63c: 0xc08e79c  jal         func_239E70
    ctx->pc = 0x23A63Cu;
    SET_GPR_U32(ctx, 31, 0x23A644u);
    ctx->pc = 0x23A640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A63Cu;
    // 0x23a640: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239E70u, 0x23A63Cu, 0x23A644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A644u;
label_23a644:
    // 0x23a644: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x23A644u;
    {
        const bool branch_taken_0x23a644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A644u;
        // 0x23a648: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a644) {
            ctx->pc = 0x23A6ACu;
            goto label_23a6ac;
        }
    }
    ctx->pc = 0x23A64Cu;
    // 0x23a64c: 0x0  nop
    ctx->pc = 0x23a64cu;
    // NOP
label_23a650:
    // 0x23a650: 0xc08e79c  jal         func_239E70
    ctx->pc = 0x23A650u;
    SET_GPR_U32(ctx, 31, 0x23A658u);
    ctx->pc = 0x23A654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A650u;
    // 0x23a654: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239E70u, 0x23A650u, 0x23A658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A658u;
label_23a658:
    // 0x23a658: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23a658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a65c: 0xc08e79c  jal         func_239E70
    ctx->pc = 0x23A65Cu;
    SET_GPR_U32(ctx, 31, 0x23A664u);
    ctx->pc = 0x23A660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A65Cu;
    // 0x23a660: 0x2405001c  addiu       $a1, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239E70u, 0x23A65Cu, 0x23A664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A664u;
label_23a664:
    // 0x23a664: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x23A664u;
    {
        const bool branch_taken_0x23a664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A664u;
        // 0x23a668: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a664) {
            ctx->pc = 0x23A6ACu;
            goto label_23a6ac;
        }
    }
    ctx->pc = 0x23A66Cu;
    // 0x23a66c: 0x0  nop
    ctx->pc = 0x23a66cu;
    // NOP
label_23a670:
    // 0x23a670: 0xc08e79c  jal         func_239E70
    ctx->pc = 0x23A670u;
    SET_GPR_U32(ctx, 31, 0x23A678u);
    ctx->pc = 0x23A674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A670u;
    // 0x23a674: 0x2405001a  addiu       $a1, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239E70u, 0x23A670u, 0x23A678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A678u;
label_23a678:
    // 0x23a678: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x23A678u;
    {
        const bool branch_taken_0x23a678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A678u;
        // 0x23a67c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a678) {
            ctx->pc = 0x23A6ACu;
            goto label_23a6ac;
        }
    }
    ctx->pc = 0x23A680u;
label_23a680:
    // 0x23a680: 0xc08e79c  jal         func_239E70
    ctx->pc = 0x23A680u;
    SET_GPR_U32(ctx, 31, 0x23A688u);
    ctx->pc = 0x23A684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A680u;
    // 0x23a684: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239E70u, 0x23A680u, 0x23A688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A688u;
label_23a688:
    // 0x23a688: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x23A688u;
    {
        const bool branch_taken_0x23a688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A688u;
        // 0x23a68c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a688) {
            ctx->pc = 0x23A6ACu;
            goto label_23a6ac;
        }
    }
    ctx->pc = 0x23A690u;
label_23a690:
    // 0x23a690: 0xc08e79c  jal         func_239E70
    ctx->pc = 0x23A690u;
    SET_GPR_U32(ctx, 31, 0x23A698u);
    ctx->pc = 0x23A694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A690u;
    // 0x23a694: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239E70u, 0x23A690u, 0x23A698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A698u;
label_23a698:
    // 0x23a698: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23A698u;
    {
        const bool branch_taken_0x23a698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A698u;
        // 0x23a69c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a698) {
            ctx->pc = 0x23A6ACu;
            goto label_23a6ac;
        }
    }
    ctx->pc = 0x23A6A0u;
label_23a6a0:
    // 0x23a6a0: 0xc08e79c  jal         func_239E70
    ctx->pc = 0x23A6A0u;
    SET_GPR_U32(ctx, 31, 0x23A6A8u);
    ctx->pc = 0x23A6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A6A0u;
    // 0x23a6a4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239E70u, 0x23A6A0u, 0x23A6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A6A8u;
label_23a6a8:
    // 0x23a6a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23a6a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23a6ac:
    // 0x23a6ac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23a6acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23a6b0: 0x3e00008  jr          $ra
    ctx->pc = 0x23A6B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A6B0u;
        // 0x23a6b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A6B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A6B8u;
}
