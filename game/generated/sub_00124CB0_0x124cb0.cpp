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

// Function: sub_00124CB0
// Address: 0x124cb0 - 0x124cd0
void sub_00124CB0_0x124cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124CB0_0x124cb0");
#endif

    switch (ctx->pc) {
        case 0x124cb4u: goto label_124cb4;
        default: break;
    }

    ctx->pc = 0x124cb0u;

    // 0x124cb0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x124cb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_124cb4:
    // 0x124cb4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x124cb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124cb8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x124cb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x124cbc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x124cbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x124cc0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x124cc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124cc4: 0x3e00008  jr          $ra
    ctx->pc = 0x124CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124CC4u;
        // 0x124cc8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124CC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124CCCu;
    // 0x124ccc: 0x0  nop
    ctx->pc = 0x124cccu;
    // NOP
    ctx->pc = 0x124cd0u;
}
