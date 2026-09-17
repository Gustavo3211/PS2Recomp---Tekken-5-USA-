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

// Function: sub_002DBAF8
// Address: 0x2dbaf8 - 0x2dbb18
void sub_002DBAF8_0x2dbaf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DBAF8_0x2dbaf8");
#endif

    switch (ctx->pc) {
        case 0x2dbb08u: goto label_2dbb08;
        default: break;
    }

    ctx->pc = 0x2dbaf8u;

    // 0x2dbaf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dbaf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dbafc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dbafcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dbb00: 0xc0b6e72  jal         func_2DB9C8
    ctx->pc = 0x2DBB00u;
    SET_GPR_U32(ctx, 31, 0x2DBB08u);
    ctx->pc = 0x2DBB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBB00u;
    // 0x2dbb04: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB9C8u, 0x2DBB00u, 0x2DBB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBB08u;
label_2dbb08:
    // 0x2dbb08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dbb08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dbb0c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DBB0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DBB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBB0Cu;
        // 0x2dbb10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DBB0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DBB14u;
    // 0x2dbb14: 0x0  nop
    ctx->pc = 0x2dbb14u;
    // NOP
    ctx->pc = 0x2dbb18u;
}
