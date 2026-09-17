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

// Function: sub_002B3628
// Address: 0x2b3628 - 0x2b3698
void sub_002B3628_0x2b3628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B3628_0x2b3628");
#endif

    switch (ctx->pc) {
        case 0x2b3650u: goto label_2b3650;
        case 0x2b3664u: goto label_2b3664;
        default: break;
    }

    ctx->pc = 0x2b3628u;

    // 0x2b3628: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b3628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b362c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b362cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b3630: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b3630u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3634: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2b3634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2b3638: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2b3638u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b363c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b363cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b3640: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2b3640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2b3644: 0x8e230084  lw          $v1, 0x84($s1)
    ctx->pc = 0x2b3644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x2b3648: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2B3648u;
    {
        const bool branch_taken_0x2b3648 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2B364Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3648u;
        // 0x2b364c: 0x8e3000ac  lw          $s0, 0xAC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3648) {
            ctx->pc = 0x2B367Cu;
            goto label_2b367c;
        }
    }
    ctx->pc = 0x2B3650u;
label_2b3650:
    // 0x2b3650: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B3650u;
    {
        const bool branch_taken_0x2b3650 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3650u;
        // 0x2b3654: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3650) {
            ctx->pc = 0x2B366Cu;
            goto label_2b366c;
        }
    }
    ctx->pc = 0x2B3658u;
    // 0x2b3658: 0x8e050068  lw          $a1, 0x68($s0)
    ctx->pc = 0x2b3658u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2b365c: 0xc0adeae  jal         func_2B7AB8
    ctx->pc = 0x2B365Cu;
    SET_GPR_U32(ctx, 31, 0x2B3664u);
    ctx->pc = 0x2B3660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B365Cu;
    // 0x2b3660: 0x8f84cadc  lw          $a0, -0x3524($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953692)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7AB8u, 0x2B365Cu, 0x2B3664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3664u;
label_2b3664:
    // 0x2b3664: 0x8e100070  lw          $s0, 0x70($s0)
    ctx->pc = 0x2b3664u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2b3668: 0x8e230084  lw          $v1, 0x84($s1)
    ctx->pc = 0x2b3668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_2b366c:
    // 0x2b366c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2b366cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2b3670: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x2b3670u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2b3674: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2B3674u;
    {
        const bool branch_taken_0x2b3674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b3674) {
            ctx->pc = 0x2B3650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b3650;
        }
    }
    ctx->pc = 0x2B367Cu;
label_2b367c:
    // 0x2b367c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b367cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b3680: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b3680u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b3684: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b3684u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b3688: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2b3688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b368c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B368Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B368Cu;
        // 0x2b3690: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B368Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3694u;
    // 0x2b3694: 0x0  nop
    ctx->pc = 0x2b3694u;
    // NOP
    ctx->pc = 0x2b3698u;
}
