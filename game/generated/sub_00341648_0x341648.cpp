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

// Function: sub_00341648
// Address: 0x341648 - 0x341690
void sub_00341648_0x341648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341648_0x341648");
#endif

    switch (ctx->pc) {
        case 0x34165cu: goto label_34165c;
        default: break;
    }

    ctx->pc = 0x341648u;

    // 0x341648: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x341648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34164c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34164cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x341650: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x341650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x341654: 0xc0d05a4  jal         func_341690
    ctx->pc = 0x341654u;
    SET_GPR_U32(ctx, 31, 0x34165Cu);
    ctx->pc = 0x341658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341654u;
    // 0x341658: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341690u, 0x341654u, 0x34165Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34165Cu;
label_34165c:
    // 0x34165c: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x34165cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x341660: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x341660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341664: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x341664u;
    {
        const bool branch_taken_0x341664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x341668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341664u;
        // 0x341668: 0x24a517d8  addiu       $a1, $a1, 0x17D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341664) {
            ctx->pc = 0x341680u;
            goto label_341680;
        }
    }
    ctx->pc = 0x34166Cu;
    // 0x34166c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34166cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x341670: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x341670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x341674: 0x80d04d6  j           func_341358
    ctx->pc = 0x341674u;
    ctx->pc = 0x341678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341674u;
    // 0x341678: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341358u, 0x341674u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x34167Cu;
    // 0x34167c: 0x0  nop
    ctx->pc = 0x34167cu;
    // NOP
label_341680:
    // 0x341680: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x341680u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x341684: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x341684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x341688: 0x3e00008  jr          $ra
    ctx->pc = 0x341688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34168Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341688u;
        // 0x34168c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341690u;
}
