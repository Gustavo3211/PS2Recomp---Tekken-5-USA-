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

// Function: sub_00323728
// Address: 0x323728 - 0x323750
void sub_00323728_0x323728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323728_0x323728");
#endif

    switch (ctx->pc) {
        case 0x323740u: goto label_323740;
        default: break;
    }

    ctx->pc = 0x323728u;

    // 0x323728: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x323728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32372c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x32372cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x323730: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x323730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x323734: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x323734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x323738: 0xc0c903c  jal         func_3240F0
    ctx->pc = 0x323738u;
    SET_GPR_U32(ctx, 31, 0x323740u);
    ctx->pc = 0x32373Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323738u;
    // 0x32373c: 0x248408c0  addiu       $a0, $a0, 0x8C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3240F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3240F0u, 0x323738u, 0x323740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323740u;
label_323740:
    // 0x323740: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x323740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323744: 0x3e00008  jr          $ra
    ctx->pc = 0x323744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323744u;
        // 0x323748: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32374Cu;
    // 0x32374c: 0x0  nop
    ctx->pc = 0x32374cu;
    // NOP
    ctx->pc = 0x323750u;
}
