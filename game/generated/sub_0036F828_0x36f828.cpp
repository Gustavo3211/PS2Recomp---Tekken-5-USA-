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

// Function: sub_0036F828
// Address: 0x36f828 - 0x36f888
void sub_0036F828_0x36f828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036F828_0x36f828");
#endif

    switch (ctx->pc) {
        case 0x36f84cu: goto label_36f84c;
        case 0x36f864u: goto label_36f864;
        default: break;
    }

    ctx->pc = 0x36f828u;

    // 0x36f828: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36f828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36f82c: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36f82cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36f830: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36f830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36f834: 0x24507480  addiu       $s0, $v0, 0x7480
    ctx->pc = 0x36f834u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29824));
    // 0x36f838: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36f838u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D7480u));
    // 0x36f83c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36F83Cu;
    {
        const bool branch_taken_0x36f83c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36F840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F83Cu;
        // 0x36f840: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f83c) {
            ctx->pc = 0x36F864u;
            goto label_36f864;
        }
    }
    ctx->pc = 0x36F844u;
    // 0x36f844: 0xc0db7d6  jal         func_36DF58
    ctx->pc = 0x36F844u;
    SET_GPR_U32(ctx, 31, 0x36F84Cu);
    ctx->pc = 0x36DF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36DF58u, 0x36F844u, 0x36F84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F84Cu;
label_36f84c:
    // 0x36f84c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36f84cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36f850: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x36f850u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36f854: 0x24a508a0  addiu       $a1, $a1, 0x8A0
    ctx->pc = 0x36f854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2208));
    // 0x36f858: 0x24c67180  addiu       $a2, $a2, 0x7180
    ctx->pc = 0x36f858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29056));
    // 0x36f85c: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36F85Cu;
    SET_GPR_U32(ctx, 31, 0x36F864u);
    ctx->pc = 0x36F860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F85Cu;
    // 0x36f860: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36F85Cu, 0x36F864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F864u;
label_36f864:
    // 0x36f864: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36f864u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f868: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36f868u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36f86c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36f86cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36f870: 0x3e00008  jr          $ra
    ctx->pc = 0x36F870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F870u;
        // 0x36f874: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F878u;
    // 0x36f878: 0x3e00008  jr          $ra
    ctx->pc = 0x36F878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F878u;
        // 0x36f87c: 0xac850060  sw          $a1, 0x60($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F880u;
    // 0x36f880: 0x3e00008  jr          $ra
    ctx->pc = 0x36F880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F880u;
        // 0x36f884: 0x8c820060  lw          $v0, 0x60($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F888u;
}
