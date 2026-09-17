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

// Function: sub_002206C0
// Address: 0x2206c0 - 0x2206e0
void sub_002206C0_0x2206c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002206C0_0x2206c0");
#endif

    switch (ctx->pc) {
        case 0x2206d0u: goto label_2206d0;
        default: break;
    }

    ctx->pc = 0x2206c0u;

    // 0x2206c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2206c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2206c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2206c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2206c8: 0xc088186  jal         func_220618
    ctx->pc = 0x2206C8u;
    SET_GPR_U32(ctx, 31, 0x2206D0u);
    ctx->pc = 0x2206CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2206C8u;
    // 0x2206cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220618u, 0x2206C8u, 0x2206D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2206D0u;
label_2206d0:
    // 0x2206d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2206d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2206d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2206D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2206D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2206D4u;
        // 0x2206d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2206D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2206DCu;
    // 0x2206dc: 0x0  nop
    ctx->pc = 0x2206dcu;
    // NOP
    ctx->pc = 0x2206e0u;
}
