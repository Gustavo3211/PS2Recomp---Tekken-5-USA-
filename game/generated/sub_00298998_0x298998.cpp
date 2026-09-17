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

// Function: sub_00298998
// Address: 0x298998 - 0x2989b8
void sub_00298998_0x298998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298998_0x298998");
#endif

    switch (ctx->pc) {
        case 0x2989acu: goto label_2989ac;
        default: break;
    }

    ctx->pc = 0x298998u;

    // 0x298998: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x298998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29899c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29899cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2989a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2989a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2989a4: 0xc0a622e  jal         func_2988B8
    ctx->pc = 0x2989A4u;
    SET_GPR_U32(ctx, 31, 0x2989ACu);
    ctx->pc = 0x2989A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2989A4u;
    // 0x2989a8: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2988B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2988B8u, 0x2989A4u, 0x2989ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2989ACu;
label_2989ac:
    // 0x2989ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2989acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2989b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2989B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2989B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2989B0u;
        // 0x2989b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2989B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2989B8u;
}
