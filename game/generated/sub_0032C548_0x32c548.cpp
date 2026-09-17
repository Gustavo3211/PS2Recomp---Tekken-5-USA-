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

// Function: sub_0032C548
// Address: 0x32c548 - 0x32c570
void sub_0032C548_0x32c548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032C548_0x32c548");
#endif

    switch (ctx->pc) {
        case 0x32c564u: goto label_32c564;
        default: break;
    }

    ctx->pc = 0x32c548u;

    // 0x32c548: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x32c548u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c54c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32c54cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32c550: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32c550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32c554: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x32c554u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x32c558: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x32c558u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x32c55c: 0xc0cb15c  jal         func_32C570
    ctx->pc = 0x32C55Cu;
    SET_GPR_U32(ctx, 31, 0x32C564u);
    ctx->pc = 0x32C560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C55Cu;
    // 0x32c560: 0xac46000c  sw          $a2, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C570u, 0x32C55Cu, 0x32C564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C564u;
label_32c564:
    // 0x32c564: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32c564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32c568: 0x3e00008  jr          $ra
    ctx->pc = 0x32C568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32C56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C568u;
        // 0x32c56c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32C570u;
}
