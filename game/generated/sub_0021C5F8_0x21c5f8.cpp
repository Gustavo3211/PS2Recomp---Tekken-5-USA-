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

// Function: sub_0021C5F8
// Address: 0x21c5f8 - 0x21c660
void sub_0021C5F8_0x21c5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021C5F8_0x21c5f8");
#endif

    switch (ctx->pc) {
        case 0x21c630u: goto label_21c630;
        default: break;
    }

    ctx->pc = 0x21c5f8u;

    // 0x21c5f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21c5f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21c5fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21c5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21c600: 0x90830030  lbu         $v1, 0x30($a0)
    ctx->pc = 0x21c600u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x21c604: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x21C604u;
    {
        const bool branch_taken_0x21c604 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C604u;
        // 0x21c608: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c604) {
            ctx->pc = 0x21C650u;
            goto label_21c650;
        }
    }
    ctx->pc = 0x21C60Cu;
    // 0x21c60c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21C60Cu;
    {
        const bool branch_taken_0x21c60c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C60Cu;
        // 0x21c610: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c60c) {
            ctx->pc = 0x21C628u;
            goto label_21c628;
        }
    }
    ctx->pc = 0x21C614u;
    // 0x21c614: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x21C614u;
    {
        const bool branch_taken_0x21c614 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21C618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C614u;
        // 0x21c618: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c614) {
            ctx->pc = 0x21C640u;
            goto label_21c640;
        }
    }
    ctx->pc = 0x21C61Cu;
    // 0x21c61c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x21C61Cu;
    {
        const bool branch_taken_0x21c61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c61c) {
            ctx->pc = 0x21C654u;
            goto label_21c654;
        }
    }
    ctx->pc = 0x21C624u;
    // 0x21c624: 0x0  nop
    ctx->pc = 0x21c624u;
    // NOP
label_21c628:
    // 0x21c628: 0xc0850f0  jal         func_2143C0
    ctx->pc = 0x21C628u;
    SET_GPR_U32(ctx, 31, 0x21C630u);
    ctx->pc = 0x21C62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C628u;
    // 0x21c62c: 0x90840031  lbu         $a0, 0x31($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 49)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2143C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2143C0u, 0x21C628u, 0x21C630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C630u;
label_21c630:
    // 0x21c630: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21c630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c634: 0x808510c  j           func_214430
    ctx->pc = 0x21C634u;
    ctx->pc = 0x21C638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C634u;
    // 0x21c638: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214430u;
    sub_00214430_0x214430(rdram, ctx, runtime); return;
    ctx->pc = 0x21C63Cu;
    // 0x21c63c: 0x0  nop
    ctx->pc = 0x21c63cu;
    // NOP
label_21c640:
    // 0x21c640: 0x90840031  lbu         $a0, 0x31($a0)
    ctx->pc = 0x21c640u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 49)));
    // 0x21c644: 0x80850e6  j           func_214398
    ctx->pc = 0x21C644u;
    ctx->pc = 0x21C648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C644u;
    // 0x21c648: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214398u;
    sub_00214398_0x214398(rdram, ctx, runtime); return;
    ctx->pc = 0x21C64Cu;
    // 0x21c64c: 0x0  nop
    ctx->pc = 0x21c64cu;
    // NOP
label_21c650:
    // 0x21c650: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21c650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21c654:
    // 0x21c654: 0x3e00008  jr          $ra
    ctx->pc = 0x21C654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C654u;
        // 0x21c658: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C65Cu;
    // 0x21c65c: 0x0  nop
    ctx->pc = 0x21c65cu;
    // NOP
    ctx->pc = 0x21c660u;
}
