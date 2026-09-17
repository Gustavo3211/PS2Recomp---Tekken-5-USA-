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

// Function: sub_0031A178
// Address: 0x31a178 - 0x31a198
void sub_0031A178_0x31a178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031A178_0x31a178");
#endif

    switch (ctx->pc) {
        case 0x31a18cu: goto label_31a18c;
        default: break;
    }

    ctx->pc = 0x31a178u;

    // 0x31a178: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x31a178u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x31a17c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31a17cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31a180: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31a180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31a184: 0xc0c7008  jal         func_31C020
    ctx->pc = 0x31A184u;
    SET_GPR_U32(ctx, 31, 0x31A18Cu);
    ctx->pc = 0x31A188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A184u;
    // 0x31a188: 0x24844f40  addiu       $a0, $a0, 0x4F40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31C020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C020u, 0x31A184u, 0x31A18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A18Cu;
label_31a18c:
    // 0x31a18c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31a18cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31a190: 0x3e00008  jr          $ra
    ctx->pc = 0x31A190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A190u;
        // 0x31a194: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31A198u;
}
