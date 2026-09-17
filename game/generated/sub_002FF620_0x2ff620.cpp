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

// Function: sub_002FF620
// Address: 0x2ff620 - 0x2ff698
void sub_002FF620_0x2ff620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FF620_0x2ff620");
#endif

    switch (ctx->pc) {
        case 0x2ff644u: goto label_2ff644;
        case 0x2ff64cu: goto label_2ff64c;
        case 0x2ff65cu: goto label_2ff65c;
        case 0x2ff668u: goto label_2ff668;
        case 0x2ff674u: goto label_2ff674;
        case 0x2ff67cu: goto label_2ff67c;
        case 0x2ff684u: goto label_2ff684;
        default: break;
    }

    ctx->pc = 0x2ff620u;

    // 0x2ff620: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ff620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ff624: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ff624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ff628: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2ff628u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff62c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ff62cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ff630: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ff630u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff634: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2FF634u;
    {
        const bool branch_taken_0x2ff634 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF634u;
        // 0x2ff638: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff634) {
            ctx->pc = 0x2FF684u;
            goto label_2ff684;
        }
    }
    ctx->pc = 0x2FF63Cu;
    // 0x2ff63c: 0xc0bfda6  jal         func_2FF698
    ctx->pc = 0x2FF63Cu;
    SET_GPR_U32(ctx, 31, 0x2FF644u);
    ctx->pc = 0x2FF698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FF698u, 0x2FF63Cu, 0x2FF644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF644u;
label_2ff644:
    // 0x2ff644: 0xc0bfdae  jal         func_2FF6B8
    ctx->pc = 0x2FF644u;
    SET_GPR_U32(ctx, 31, 0x2FF64Cu);
    ctx->pc = 0x2FF648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF644u;
    // 0x2ff648: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FF6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FF6B8u, 0x2FF644u, 0x2FF64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF64Cu;
label_2ff64c:
    // 0x2ff64c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ff64cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff650: 0x26060038  addiu       $a2, $s0, 0x38
    ctx->pc = 0x2ff650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x2ff654: 0xc0bfe1e  jal         func_2FF878
    ctx->pc = 0x2FF654u;
    SET_GPR_U32(ctx, 31, 0x2FF65Cu);
    ctx->pc = 0x2FF658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF654u;
    // 0x2ff658: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FF878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FF878u, 0x2FF654u, 0x2FF65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF65Cu;
label_2ff65c:
    // 0x2ff65c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ff65cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff660: 0xc0bfe26  jal         func_2FF898
    ctx->pc = 0x2FF660u;
    SET_GPR_U32(ctx, 31, 0x2FF668u);
    ctx->pc = 0x2FF664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF660u;
    // 0x2ff664: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FF898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FF898u, 0x2FF660u, 0x2FF668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF668u;
label_2ff668:
    // 0x2ff668: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ff668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff66c: 0xc0bf994  jal         func_2FE650
    ctx->pc = 0x2FF66Cu;
    SET_GPR_U32(ctx, 31, 0x2FF674u);
    ctx->pc = 0x2FF670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF66Cu;
    // 0x2ff670: 0x262506e0  addiu       $a1, $s1, 0x6E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE650u, 0x2FF66Cu, 0x2FF674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF674u;
label_2ff674:
    // 0x2ff674: 0xc0bfe16  jal         func_2FF858
    ctx->pc = 0x2FF674u;
    SET_GPR_U32(ctx, 31, 0x2FF67Cu);
    ctx->pc = 0x2FF678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF674u;
    // 0x2ff678: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FF858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FF858u, 0x2FF674u, 0x2FF67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF67Cu;
label_2ff67c:
    // 0x2ff67c: 0xc0bfa9e  jal         func_2FEA78
    ctx->pc = 0x2FF67Cu;
    SET_GPR_U32(ctx, 31, 0x2FF684u);
    ctx->pc = 0x2FF680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF67Cu;
    // 0x2ff680: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEA78u, 0x2FF67Cu, 0x2FF684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF684u;
label_2ff684:
    // 0x2ff684: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ff684u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ff688: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ff688u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ff68c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ff68cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ff690: 0x3e00008  jr          $ra
    ctx->pc = 0x2FF690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FF694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF690u;
        // 0x2ff694: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FF698u;
}
