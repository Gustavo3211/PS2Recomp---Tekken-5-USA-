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

// Function: sub_0036FC98
// Address: 0x36fc98 - 0x36fce8
void sub_0036FC98_0x36fc98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036FC98_0x36fc98");
#endif

    switch (ctx->pc) {
        case 0x36fcbcu: goto label_36fcbc;
        case 0x36fcd4u: goto label_36fcd4;
        default: break;
    }

    ctx->pc = 0x36fc98u;

    // 0x36fc98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36fc98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36fc9c: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36fc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36fca0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36fca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36fca4: 0x245074f0  addiu       $s0, $v0, 0x74F0
    ctx->pc = 0x36fca4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29936));
    // 0x36fca8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36fca8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D74F0u));
    // 0x36fcac: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36FCACu;
    {
        const bool branch_taken_0x36fcac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36FCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FCACu;
        // 0x36fcb0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fcac) {
            ctx->pc = 0x36FCD4u;
            goto label_36fcd4;
        }
    }
    ctx->pc = 0x36FCB4u;
    // 0x36fcb4: 0xc0dc55e  jal         func_371578
    ctx->pc = 0x36FCB4u;
    SET_GPR_U32(ctx, 31, 0x36FCBCu);
    ctx->pc = 0x371578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371578u, 0x36FCB4u, 0x36FCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FCBCu;
label_36fcbc:
    // 0x36fcbc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36fcbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36fcc0: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x36fcc0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36fcc4: 0x24a50928  addiu       $a1, $a1, 0x928
    ctx->pc = 0x36fcc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2344));
    // 0x36fcc8: 0x24c67560  addiu       $a2, $a2, 0x7560
    ctx->pc = 0x36fcc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30048));
    // 0x36fccc: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36FCCCu;
    SET_GPR_U32(ctx, 31, 0x36FCD4u);
    ctx->pc = 0x36FCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FCCCu;
    // 0x36fcd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36FCCCu, 0x36FCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FCD4u;
label_36fcd4:
    // 0x36fcd4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36fcd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fcd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36fcd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36fcdc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36fcdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36fce0: 0x3e00008  jr          $ra
    ctx->pc = 0x36FCE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36FCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FCE0u;
        // 0x36fce4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36FCE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36FCE8u;
}
