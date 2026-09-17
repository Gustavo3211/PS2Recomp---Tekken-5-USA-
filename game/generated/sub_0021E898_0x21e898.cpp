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

// Function: sub_0021E898
// Address: 0x21e898 - 0x21e8c0
void sub_0021E898_0x21e898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021E898_0x21e898");
#endif

    switch (ctx->pc) {
        case 0x21e8acu: goto label_21e8ac;
        case 0x21e8b4u: goto label_21e8b4;
        default: break;
    }

    ctx->pc = 0x21e898u;

    // 0x21e898: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x21e898u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x21e89c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21e89cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21e8a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21e8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21e8a4: 0xc0879a8  jal         func_21E6A0
    ctx->pc = 0x21E8A4u;
    SET_GPR_U32(ctx, 31, 0x21E8ACu);
    ctx->pc = 0x21E8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E8A4u;
    // 0x21e8a8: 0x248483c0  addiu       $a0, $a0, -0x7C40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E6A0u, 0x21E8A4u, 0x21E8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E8ACu;
label_21e8ac:
    // 0x21e8ac: 0xc0876e0  jal         func_21DB80
    ctx->pc = 0x21E8ACu;
    SET_GPR_U32(ctx, 31, 0x21E8B4u);
    ctx->pc = 0x21DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21DB80u, 0x21E8ACu, 0x21E8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E8B4u;
label_21e8b4:
    // 0x21e8b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21e8b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e8b8: 0x3e00008  jr          $ra
    ctx->pc = 0x21E8B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E8B8u;
        // 0x21e8bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E8B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21E8C0u;
}
