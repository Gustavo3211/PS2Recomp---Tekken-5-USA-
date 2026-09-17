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

// Function: sub_0033C6E8
// Address: 0x33c6e8 - 0x33c708
void sub_0033C6E8_0x33c6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033C6E8_0x33c6e8");
#endif

    switch (ctx->pc) {
        case 0x33c6f8u: goto label_33c6f8;
        default: break;
    }

    ctx->pc = 0x33c6e8u;

    // 0x33c6e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33c6e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33c6ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33c6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33c6f0: 0xc0cb186  jal         func_32C618
    ctx->pc = 0x33C6F0u;
    SET_GPR_U32(ctx, 31, 0x33C6F8u);
    ctx->pc = 0x33C6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C6F0u;
    // 0x33c6f4: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C618u, 0x33C6F0u, 0x33C6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C6F8u;
label_33c6f8:
    // 0x33c6f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33c6f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33c6fc: 0x3e00008  jr          $ra
    ctx->pc = 0x33C6FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33C700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C6FCu;
        // 0x33c700: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C6FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33C704u;
    // 0x33c704: 0x0  nop
    ctx->pc = 0x33c704u;
    // NOP
    ctx->pc = 0x33c708u;
}
