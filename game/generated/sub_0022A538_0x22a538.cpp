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

// Function: sub_0022A538
// Address: 0x22a538 - 0x22a558
void sub_0022A538_0x22a538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A538_0x22a538");
#endif

    switch (ctx->pc) {
        case 0x22a548u: goto label_22a548;
        default: break;
    }

    ctx->pc = 0x22a538u;

    // 0x22a538: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22a538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22a53c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22a53cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22a540: 0xc09214a  jal         func_248528
    ctx->pc = 0x22A540u;
    SET_GPR_U32(ctx, 31, 0x22A548u);
    ctx->pc = 0x22A544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A540u;
    // 0x22a544: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248528u, 0x22A540u, 0x22A548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A548u;
label_22a548:
    // 0x22a548: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22a548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a54c: 0x3e00008  jr          $ra
    ctx->pc = 0x22A54Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A54Cu;
        // 0x22a550: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A54Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A554u;
    // 0x22a554: 0x0  nop
    ctx->pc = 0x22a554u;
    // NOP
    ctx->pc = 0x22a558u;
}
