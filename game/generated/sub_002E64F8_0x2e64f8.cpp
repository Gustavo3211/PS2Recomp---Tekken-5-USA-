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

// Function: sub_002E64F8
// Address: 0x2e64f8 - 0x2e6538
void sub_002E64F8_0x2e64f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E64F8_0x2e64f8");
#endif

    switch (ctx->pc) {
        case 0x2e650cu: goto label_2e650c;
        default: break;
    }

    ctx->pc = 0x2e64f8u;

    // 0x2e64f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e64f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e64fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e64fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e6500: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2e6500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2e6504: 0xc0bb738  jal         func_2EDCE0
    ctx->pc = 0x2E6504u;
    SET_GPR_U32(ctx, 31, 0x2E650Cu);
    ctx->pc = 0x2E6508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6504u;
    // 0x2e6508: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDCE0u, 0x2E6504u, 0x2E650Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E650Cu;
label_2e650c:
    // 0x2e650c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2e650cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2e6510: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2e6510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2e6514: 0x244205d8  addiu       $v0, $v0, 0x5D8
    ctx->pc = 0x2e6514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1496));
    // 0x2e6518: 0x24630180  addiu       $v1, $v1, 0x180
    ctx->pc = 0x2e6518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x2e651c: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x2e651cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x2e6520: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x2e6520u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x2e6524: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e6524u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e6528: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2e6528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e652c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E652Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E6530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E652Cu;
        // 0x2e6530: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E652Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E6534u;
    // 0x2e6534: 0x0  nop
    ctx->pc = 0x2e6534u;
    // NOP
    ctx->pc = 0x2e6538u;
}
