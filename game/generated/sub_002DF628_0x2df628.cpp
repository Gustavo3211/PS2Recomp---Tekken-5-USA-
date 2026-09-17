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

// Function: sub_002DF628
// Address: 0x2df628 - 0x2df648
void sub_002DF628_0x2df628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF628_0x2df628");
#endif

    switch (ctx->pc) {
        case 0x2df63cu: goto label_2df63c;
        default: break;
    }

    ctx->pc = 0x2df628u;

    // 0x2df628: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2df628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2df62c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2df62cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df630: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2df630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2df634: 0xc0b7d54  jal         func_2DF550
    ctx->pc = 0x2DF634u;
    SET_GPR_U32(ctx, 31, 0x2DF63Cu);
    ctx->pc = 0x2DF638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF634u;
    // 0x2df638: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF550u, 0x2DF634u, 0x2DF63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF63Cu;
label_2df63c:
    // 0x2df63c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2df63cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df640: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF640u;
        // 0x2df644: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF648u;
}
