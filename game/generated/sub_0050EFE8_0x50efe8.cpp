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

// Function: sub_0050EFE8
// Address: 0x50efe8 - 0x50f028
void sub_0050EFE8_0x50efe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050EFE8_0x50efe8");
#endif

    switch (ctx->pc) {
        case 0x50f008u: goto label_50f008;
        default: break;
    }

    ctx->pc = 0x50efe8u;

    // 0x50efe8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x50efe8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50efec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x50efecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x50eff0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x50eff0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x50eff4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x50eff4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x50eff8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x50eff8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x50effc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x50effcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x50f000: 0x8142b00  j           func_50AC00
    ctx->pc = 0x50F000u;
    ctx->pc = 0x50F004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50F000u;
    // 0x50f004: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x50AC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50AC00u, 0x50F000u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x50F008u;
label_50f008:
    // 0x50f008: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x50f008u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x50f00c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x50f00cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x50f010: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x50f010u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x50f014: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x50f014u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x50f018: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x50f018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x50f01c: 0x3e00008  jr          $ra
    ctx->pc = 0x50F01Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50F020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50F01Cu;
        // 0x50f020: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50F01Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x50F024u;
    // 0x50f024: 0x0  nop
    ctx->pc = 0x50f024u;
    // NOP
    ctx->pc = 0x50f028u;
}
