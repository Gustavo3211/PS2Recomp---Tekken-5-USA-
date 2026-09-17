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

// Function: sub_00242760
// Address: 0x242760 - 0x242790
void sub_00242760_0x242760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242760_0x242760");
#endif

    switch (ctx->pc) {
        case 0x242770u: goto label_242770;
        default: break;
    }

    ctx->pc = 0x242760u;

    // 0x242760: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x242760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x242764: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x242764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x242768: 0xc0905ae  jal         func_2416B8
    ctx->pc = 0x242768u;
    SET_GPR_U32(ctx, 31, 0x242770u);
    ctx->pc = 0x2416B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2416B8u, 0x242768u, 0x242770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242770u;
label_242770:
    // 0x242770: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x242770u;
    {
        const bool branch_taken_0x242770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x242774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242770u;
        // 0x242774: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242770) {
            ctx->pc = 0x24277Cu;
            goto label_24277c;
        }
    }
    ctx->pc = 0x242778u;
    // 0x242778: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x242778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_24277c:
    // 0x24277c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24277cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x242780: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x242780u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242784: 0x3e00008  jr          $ra
    ctx->pc = 0x242784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242784u;
        // 0x242788: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24278Cu;
    // 0x24278c: 0x0  nop
    ctx->pc = 0x24278cu;
    // NOP
    ctx->pc = 0x242790u;
}
