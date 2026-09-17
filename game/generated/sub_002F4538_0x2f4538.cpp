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

// Function: sub_002F4538
// Address: 0x2f4538 - 0x2f4560
void sub_002F4538_0x2f4538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F4538_0x2f4538");
#endif

    switch (ctx->pc) {
        case 0x2f4554u: goto label_2f4554;
        default: break;
    }

    ctx->pc = 0x2f4538u;

    // 0x2f4538: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f4538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f453c: 0x248400fc  addiu       $a0, $a0, 0xFC
    ctx->pc = 0x2f453cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 252));
    // 0x2f4540: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2f4540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f4544: 0x24060090  addiu       $a2, $zero, 0x90
    ctx->pc = 0x2f4544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2f4548: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f4548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f454c: 0xc0bb89a  jal         func_2EE268
    ctx->pc = 0x2F454Cu;
    SET_GPR_U32(ctx, 31, 0x2F4554u);
    ctx->pc = 0x2F4550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F454Cu;
    // 0x2f4550: 0x24070100  addiu       $a3, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE268u, 0x2F454Cu, 0x2F4554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4554u;
label_2f4554:
    // 0x2f4554: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f4554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f4558: 0x3e00008  jr          $ra
    ctx->pc = 0x2F4558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F455Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4558u;
        // 0x2f455c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F4560u;
}
