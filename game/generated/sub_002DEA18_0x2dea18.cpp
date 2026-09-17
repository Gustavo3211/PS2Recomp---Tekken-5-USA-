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

// Function: sub_002DEA18
// Address: 0x2dea18 - 0x2dea60
void sub_002DEA18_0x2dea18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DEA18_0x2dea18");
#endif

    switch (ctx->pc) {
        case 0x2dea38u: goto label_2dea38;
        case 0x2dea4cu: goto label_2dea4c;
        default: break;
    }

    ctx->pc = 0x2dea18u;

    // 0x2dea18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dea18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dea1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2dea1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2dea20: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2dea20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dea24: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2dea24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2dea28: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2DEA28u;
    {
        const bool branch_taken_0x2dea28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEA28u;
        // 0x2dea2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dea28) {
            ctx->pc = 0x2DEA4Cu;
            goto label_2dea4c;
        }
    }
    ctx->pc = 0x2DEA30u;
    // 0x2dea30: 0xc0b7ad8  jal         func_2DEB60
    ctx->pc = 0x2DEA30u;
    SET_GPR_U32(ctx, 31, 0x2DEA38u);
    ctx->pc = 0x2DEB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DEB60u, 0x2DEA30u, 0x2DEA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEA38u;
label_2dea38:
    // 0x2dea38: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x2dea38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x2dea3c: 0x248437e0  addiu       $a0, $a0, 0x37E0
    ctx->pc = 0x2dea3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    // 0x2dea40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2dea40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dea44: 0xc0b7c00  jal         func_2DF000
    ctx->pc = 0x2DEA44u;
    SET_GPR_U32(ctx, 31, 0x2DEA4Cu);
    ctx->pc = 0x2DEA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEA44u;
    // 0x2dea48: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF000u, 0x2DEA44u, 0x2DEA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEA4Cu;
label_2dea4c:
    // 0x2dea4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2dea4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dea50: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2dea50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2dea54: 0x3e00008  jr          $ra
    ctx->pc = 0x2DEA54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DEA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEA54u;
        // 0x2dea58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DEA54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DEA5Cu;
    // 0x2dea5c: 0x0  nop
    ctx->pc = 0x2dea5cu;
    // NOP
    ctx->pc = 0x2dea60u;
}
