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

// Function: sub_003046B8
// Address: 0x3046b8 - 0x3046e8
void sub_003046B8_0x3046b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003046B8_0x3046b8");
#endif

    switch (ctx->pc) {
        case 0x3046ccu: goto label_3046cc;
        case 0x3046d4u: goto label_3046d4;
        default: break;
    }

    ctx->pc = 0x3046b8u;

    // 0x3046b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3046b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3046bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3046bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3046c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3046c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3046c4: 0xc0c11ba  jal         func_3046E8
    ctx->pc = 0x3046C4u;
    SET_GPR_U32(ctx, 31, 0x3046CCu);
    ctx->pc = 0x3046C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3046C4u;
    // 0x3046c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3046E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3046E8u, 0x3046C4u, 0x3046CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3046CCu;
label_3046cc:
    // 0x3046cc: 0xc0c11dc  jal         func_304770
    ctx->pc = 0x3046CCu;
    SET_GPR_U32(ctx, 31, 0x3046D4u);
    ctx->pc = 0x3046D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3046CCu;
    // 0x3046d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304770u, 0x3046CCu, 0x3046D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3046D4u;
label_3046d4:
    // 0x3046d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3046d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3046d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3046d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3046dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3046DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3046E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3046DCu;
        // 0x3046e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3046DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3046E4u;
    // 0x3046e4: 0x0  nop
    ctx->pc = 0x3046e4u;
    // NOP
    ctx->pc = 0x3046e8u;
}
