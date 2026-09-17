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

// Function: sub_0036C618
// Address: 0x36c618 - 0x36c668
void sub_0036C618_0x36c618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C618_0x36c618");
#endif

    switch (ctx->pc) {
        case 0x36c63cu: goto label_36c63c;
        case 0x36c654u: goto label_36c654;
        default: break;
    }

    ctx->pc = 0x36c618u;

    // 0x36c618: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36c618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36c61c: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36c61cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36c620: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36c620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36c624: 0x24506f68  addiu       $s0, $v0, 0x6F68
    ctx->pc = 0x36c624u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 28520));
    // 0x36c628: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36c628u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D6F68u));
    // 0x36c62c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36C62Cu;
    {
        const bool branch_taken_0x36c62c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36C630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C62Cu;
        // 0x36c630: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c62c) {
            ctx->pc = 0x36C654u;
            goto label_36c654;
        }
    }
    ctx->pc = 0x36C634u;
    // 0x36c634: 0xc0dae78  jal         func_36B9E0
    ctx->pc = 0x36C634u;
    SET_GPR_U32(ctx, 31, 0x36C63Cu);
    ctx->pc = 0x36B9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36B9E0u, 0x36C634u, 0x36C63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C63Cu;
label_36c63c:
    // 0x36c63c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36c63cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36c640: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x36c640u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36c644: 0x24a5d158  addiu       $a1, $a1, -0x2EA8
    ctx->pc = 0x36c644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955352));
    // 0x36c648: 0x24c66ec8  addiu       $a2, $a2, 0x6EC8
    ctx->pc = 0x36c648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28360));
    // 0x36c64c: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36C64Cu;
    SET_GPR_U32(ctx, 31, 0x36C654u);
    ctx->pc = 0x36C650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C64Cu;
    // 0x36c650: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36C64Cu, 0x36C654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C654u;
label_36c654:
    // 0x36c654: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36c654u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c658: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36c658u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c65c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36c65cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36c660: 0x3e00008  jr          $ra
    ctx->pc = 0x36C660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C660u;
        // 0x36c664: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C668u;
}
