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

// Function: sub_00323778
// Address: 0x323778 - 0x323798
void sub_00323778_0x323778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323778_0x323778");
#endif

    switch (ctx->pc) {
        case 0x32378cu: goto label_32378c;
        default: break;
    }

    ctx->pc = 0x323778u;

    // 0x323778: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x323778u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x32377c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32377cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x323780: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x323780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x323784: 0xc0c9072  jal         func_3241C8
    ctx->pc = 0x323784u;
    SET_GPR_U32(ctx, 31, 0x32378Cu);
    ctx->pc = 0x323788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323784u;
    // 0x323788: 0x248408c0  addiu       $a0, $a0, 0x8C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3241C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3241C8u, 0x323784u, 0x32378Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32378Cu;
label_32378c:
    // 0x32378c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32378cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323790: 0x3e00008  jr          $ra
    ctx->pc = 0x323790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323790u;
        // 0x323794: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323798u;
}
