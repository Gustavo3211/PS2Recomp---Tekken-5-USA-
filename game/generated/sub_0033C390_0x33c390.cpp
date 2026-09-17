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

// Function: sub_0033C390
// Address: 0x33c390 - 0x33c3b0
void sub_0033C390_0x33c390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033C390_0x33c390");
#endif

    switch (ctx->pc) {
        case 0x33c3a0u: goto label_33c3a0;
        default: break;
    }

    ctx->pc = 0x33c390u;

    // 0x33c390: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33c390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33c394: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33c394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33c398: 0xc0cb186  jal         func_32C618
    ctx->pc = 0x33C398u;
    SET_GPR_U32(ctx, 31, 0x33C3A0u);
    ctx->pc = 0x33C39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C398u;
    // 0x33c39c: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C618u, 0x33C398u, 0x33C3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C3A0u;
label_33c3a0:
    // 0x33c3a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33c3a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33c3a4: 0x3e00008  jr          $ra
    ctx->pc = 0x33C3A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33C3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C3A4u;
        // 0x33c3a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C3A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33C3ACu;
    // 0x33c3ac: 0x0  nop
    ctx->pc = 0x33c3acu;
    // NOP
    ctx->pc = 0x33c3b0u;
}
