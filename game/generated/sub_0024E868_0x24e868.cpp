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

// Function: sub_0024E868
// Address: 0x24e868 - 0x24e888
void sub_0024E868_0x24e868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024E868_0x24e868");
#endif

    switch (ctx->pc) {
        case 0x24e87cu: goto label_24e87c;
        default: break;
    }

    ctx->pc = 0x24e868u;

    // 0x24e868: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24e868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24e86c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24e86cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24e870: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24e870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24e874: 0xc0938f6  jal         func_24E3D8
    ctx->pc = 0x24E874u;
    SET_GPR_U32(ctx, 31, 0x24E87Cu);
    ctx->pc = 0x24E878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E874u;
    // 0x24e878: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24E3D8u, 0x24E874u, 0x24E87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E87Cu;
label_24e87c:
    // 0x24e87c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24e87cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24e880: 0x3e00008  jr          $ra
    ctx->pc = 0x24E880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24E884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E880u;
        // 0x24e884: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24E888u;
}
