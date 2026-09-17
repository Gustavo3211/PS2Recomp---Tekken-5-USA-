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

// Function: sub_0021D760
// Address: 0x21d760 - 0x21d790
void sub_0021D760_0x21d760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D760_0x21d760");
#endif

    switch (ctx->pc) {
        case 0x21d780u: goto label_21d780;
        default: break;
    }

    ctx->pc = 0x21d760u;

    // 0x21d760: 0x8f82a3bc  lw          $v0, -0x5C44($gp)
    ctx->pc = 0x21d760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943676)));
    // 0x21d764: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x21d764u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x21d768: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21d768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21d76c: 0x2484bf10  addiu       $a0, $a0, -0x40F0
    ctx->pc = 0x21d76cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950672));
    // 0x21d770: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21d770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21d774: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21d774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21d778: 0xc0a58f6  jal         func_2963D8
    ctx->pc = 0x21D778u;
    SET_GPR_U32(ctx, 31, 0x21D780u);
    ctx->pc = 0x21D77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D778u;
    // 0x21d77c: 0xaf82a3bc  sw          $v0, -0x5C44($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943676), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2963D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2963D8u, 0x21D778u, 0x21D780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D780u;
label_21d780:
    // 0x21d780: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21d780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d784: 0x3e00008  jr          $ra
    ctx->pc = 0x21D784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D784u;
        // 0x21d788: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D78Cu;
    // 0x21d78c: 0x0  nop
    ctx->pc = 0x21d78cu;
    // NOP
    ctx->pc = 0x21d790u;
}
