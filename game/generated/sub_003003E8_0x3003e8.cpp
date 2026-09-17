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

// Function: sub_003003E8
// Address: 0x3003e8 - 0x300418
void sub_003003E8_0x3003e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003003E8_0x3003e8");
#endif

    ctx->pc = 0x3003e8u;

    // 0x3003e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3003e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3003ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3003ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3003f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3003f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3003f4: 0x80c0100  j           func_300400
    ctx->pc = 0x3003F4u;
    ctx->pc = 0x3003F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3003F4u;
    // 0x3003f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300400u;
    goto label_300400;
    ctx->pc = 0x3003FCu;
    // 0x3003fc: 0x0  nop
    ctx->pc = 0x3003fcu;
    // NOP
label_300400:
    // 0x300400: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x300400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x300404: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x300404u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x300408: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x300408u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x30040c: 0x3e00008  jr          $ra
    ctx->pc = 0x30040Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x300410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30040Cu;
        // 0x300410: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30040Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x300414u;
    // 0x300414: 0x0  nop
    ctx->pc = 0x300414u;
    // NOP
    ctx->pc = 0x300418u;
}
