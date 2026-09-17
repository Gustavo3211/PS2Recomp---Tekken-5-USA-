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

// Function: sub_0021A088
// Address: 0x21a088 - 0x21a0b8
void sub_0021A088_0x21a088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021A088_0x21a088");
#endif

    switch (ctx->pc) {
        case 0x21a0a0u: goto label_21a0a0;
        case 0x21a0acu: goto label_21a0ac;
        default: break;
    }

    ctx->pc = 0x21a088u;

    // 0x21a088: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x21a088u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x21a08c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21a08cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21a090: 0x24845ba0  addiu       $a0, $a0, 0x5BA0
    ctx->pc = 0x21a090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23456));
    // 0x21a094: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21a094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21a098: 0xc0867ba  jal         func_219EE8
    ctx->pc = 0x21A098u;
    SET_GPR_U32(ctx, 31, 0x21A0A0u);
    ctx->pc = 0x21A09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A098u;
    // 0x21a09c: 0xaf80c930  sw          $zero, -0x36D0($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953264), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219EE8u, 0x21A098u, 0x21A0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A0A0u;
label_21a0a0:
    // 0x21a0a0: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x21a0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x21a0a4: 0xc0867cc  jal         func_219F30
    ctx->pc = 0x21A0A4u;
    SET_GPR_U32(ctx, 31, 0x21A0ACu);
    ctx->pc = 0x21A0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A0A4u;
    // 0x21a0a8: 0x24845b28  addiu       $a0, $a0, 0x5B28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219F30u, 0x21A0A4u, 0x21A0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A0ACu;
label_21a0ac:
    // 0x21a0ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21a0acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a0b0: 0x3e00008  jr          $ra
    ctx->pc = 0x21A0B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A0B0u;
        // 0x21a0b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A0B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21A0B8u;
}
