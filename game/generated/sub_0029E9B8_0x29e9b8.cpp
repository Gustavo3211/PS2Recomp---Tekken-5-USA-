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

// Function: sub_0029E9B8
// Address: 0x29e9b8 - 0x29e9e8
void sub_0029E9B8_0x29e9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029E9B8_0x29e9b8");
#endif

    switch (ctx->pc) {
        case 0x29e9c8u: goto label_29e9c8;
        default: break;
    }

    ctx->pc = 0x29e9b8u;

    // 0x29e9b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29e9b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29e9bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29e9bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29e9c0: 0xc0a7a36  jal         func_29E8D8
    ctx->pc = 0x29E9C0u;
    SET_GPR_U32(ctx, 31, 0x29E9C8u);
    ctx->pc = 0x29E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E8D8u, 0x29E9C0u, 0x29E9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E9C8u;
label_29e9c8:
    // 0x29e9c8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x29e9c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e9cc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x29E9CCu;
    {
        const bool branch_taken_0x29e9cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E9CCu;
        // 0x29e9d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e9cc) {
            ctx->pc = 0x29E9D8u;
            goto label_29e9d8;
        }
    }
    ctx->pc = 0x29E9D4u;
    // 0x29e9d4: 0x8c62013c  lw          $v0, 0x13C($v1)
    ctx->pc = 0x29e9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 316)));
label_29e9d8:
    // 0x29e9d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29e9d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29e9dc: 0x3e00008  jr          $ra
    ctx->pc = 0x29E9DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E9DCu;
        // 0x29e9e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E9DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E9E4u;
    // 0x29e9e4: 0x0  nop
    ctx->pc = 0x29e9e4u;
    // NOP
    ctx->pc = 0x29e9e8u;
}
