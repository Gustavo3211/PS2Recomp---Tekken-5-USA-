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

// Function: sub_004EE0A8
// Address: 0x4ee0a8 - 0x4ee0c8
void sub_004EE0A8_0x4ee0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EE0A8_0x4ee0a8");
#endif

    switch (ctx->pc) {
        case 0x4ee0b0u: goto label_4ee0b0;
        case 0x4ee0b4u: goto label_4ee0b4;
        default: break;
    }

    ctx->pc = 0x4ee0a8u;

    // 0x4ee0a8: 0xc13ba4e  jal         func_4EE938
    ctx->pc = 0x4EE0A8u;
    SET_GPR_U32(ctx, 31, 0x4EE0B0u);
    ctx->pc = 0x4EE0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EE0A8u;
    // 0x4ee0ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EE938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EE938u, 0x4EE0A8u, 0x4EE0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EE0B0u;
label_4ee0b0:
    // 0x4ee0b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ee0b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4ee0b4:
    // 0x4ee0b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4ee0b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ee0b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4ee0b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ee0bc: 0x3e00008  jr          $ra
    ctx->pc = 0x4EE0BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EE0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EE0BCu;
        // 0x4ee0c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EE0BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EE0C4u;
    // 0x4ee0c4: 0x0  nop
    ctx->pc = 0x4ee0c4u;
    // NOP
    ctx->pc = 0x4ee0c8u;
}
