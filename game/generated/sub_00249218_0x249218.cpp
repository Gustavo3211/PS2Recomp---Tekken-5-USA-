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

// Function: sub_00249218
// Address: 0x249218 - 0x249240
void sub_00249218_0x249218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249218_0x249218");
#endif

    switch (ctx->pc) {
        case 0x249230u: goto label_249230;
        default: break;
    }

    ctx->pc = 0x249218u;

    // 0x249218: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x249218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24921c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x24921cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249220: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x249220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x249224: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x249224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x249228: 0xc09263e  jal         func_2498F8
    ctx->pc = 0x249228u;
    SET_GPR_U32(ctx, 31, 0x249230u);
    ctx->pc = 0x24922Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249228u;
    // 0x24922c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2498F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2498F8u, 0x249228u, 0x249230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249230u;
label_249230:
    // 0x249230: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x249230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x249234: 0x3e00008  jr          $ra
    ctx->pc = 0x249234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249234u;
        // 0x249238: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24923Cu;
    // 0x24923c: 0x0  nop
    ctx->pc = 0x24923cu;
    // NOP
    ctx->pc = 0x249240u;
}
