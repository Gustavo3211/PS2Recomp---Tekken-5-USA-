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

// Function: sub_003358E0
// Address: 0x3358e0 - 0x335908
void sub_003358E0_0x3358e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003358E0_0x3358e0");
#endif

    switch (ctx->pc) {
        case 0x3358fcu: goto label_3358fc;
        default: break;
    }

    ctx->pc = 0x3358e0u;

    // 0x3358e0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x3358e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3358e4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3358e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3358e8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3358e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3358ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3358ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3358f0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3358f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3358f4: 0xc04089e  jal         func_102278
    ctx->pc = 0x3358F4u;
    SET_GPR_U32(ctx, 31, 0x3358FCu);
    ctx->pc = 0x3358F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3358F4u;
    // 0x3358f8: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102278u, 0x3358F4u, 0x3358FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3358FCu;
label_3358fc:
    // 0x3358fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3358fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x335900: 0x3e00008  jr          $ra
    ctx->pc = 0x335900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335900u;
        // 0x335904: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335908u;
}
