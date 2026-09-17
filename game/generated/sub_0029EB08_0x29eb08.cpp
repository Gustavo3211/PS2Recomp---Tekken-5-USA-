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

// Function: sub_0029EB08
// Address: 0x29eb08 - 0x29eb30
void sub_0029EB08_0x29eb08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029EB08_0x29eb08");
#endif

    switch (ctx->pc) {
        case 0x29eb10u: goto label_29eb10;
        default: break;
    }

    ctx->pc = 0x29eb08u;

    // 0x29eb08: 0xc049a82  jal         func_126A08
    ctx->pc = 0x29EB08u;
    SET_GPR_U32(ctx, 31, 0x29EB10u);
    ctx->pc = 0x126A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126A08u, 0x29EB08u, 0x29EB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EB10u;
label_29eb10:
    // 0x29eb10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29eb10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29eb14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29eb14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29eb18: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x29eb18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29eb1c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x29eb1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29eb20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29eb20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29eb24: 0x3e00008  jr          $ra
    ctx->pc = 0x29EB24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29EB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EB24u;
        // 0x29eb28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29EB24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29EB2Cu;
    // 0x29eb2c: 0x0  nop
    ctx->pc = 0x29eb2cu;
    // NOP
    ctx->pc = 0x29eb30u;
}
