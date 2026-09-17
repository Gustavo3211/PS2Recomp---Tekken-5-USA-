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

// Function: sub_0012EFE8
// Address: 0x12efe8 - 0x12f020
void sub_0012EFE8_0x12efe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012EFE8_0x12efe8");
#endif

    switch (ctx->pc) {
        case 0x12f000u: goto label_12f000;
        default: break;
    }

    ctx->pc = 0x12efe8u;

    // 0x12efe8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12efe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12efec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12efecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12eff0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x12eff0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eff4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x12eff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x12eff8: 0xc04bae6  jal         func_12EB98
    ctx->pc = 0x12EFF8u;
    SET_GPR_U32(ctx, 31, 0x12F000u);
    ctx->pc = 0x12EFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EFF8u;
    // 0x12effc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB98u, 0x12EFF8u, 0x12F000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F000u;
label_12f000:
    // 0x12f000: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12f000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12f004: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12f004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f008: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x12f008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12f00c: 0xac900014  sw          $s0, 0x14($a0)
    ctx->pc = 0x12f00cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 16));
    // 0x12f010: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12f010u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f014: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x12f014u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x12f018: 0x3e00008  jr          $ra
    ctx->pc = 0x12F018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F018u;
        // 0x12f01c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12F020u;
}
