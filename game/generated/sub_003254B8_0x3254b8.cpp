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

// Function: sub_003254B8
// Address: 0x3254b8 - 0x3254e0
void sub_003254B8_0x3254b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003254B8_0x3254b8");
#endif

    switch (ctx->pc) {
        case 0x3254d0u: goto label_3254d0;
        default: break;
    }

    ctx->pc = 0x3254b8u;

    // 0x3254b8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3254b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3254bc: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x3254bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x3254c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3254c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3254c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3254c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3254c8: 0xc0cb224  jal         func_32C890
    ctx->pc = 0x3254C8u;
    SET_GPR_U32(ctx, 31, 0x3254D0u);
    ctx->pc = 0x3254CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3254C8u;
    // 0x3254cc: 0x24840f40  addiu       $a0, $a0, 0xF40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C890u, 0x3254C8u, 0x3254D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3254D0u;
label_3254d0:
    // 0x3254d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3254d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3254d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3254D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3254D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3254D4u;
        // 0x3254d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3254D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3254DCu;
    // 0x3254dc: 0x0  nop
    ctx->pc = 0x3254dcu;
    // NOP
    ctx->pc = 0x3254e0u;
}
