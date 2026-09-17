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

// Function: sub_003136F8
// Address: 0x3136f8 - 0x313748
void sub_003136F8_0x3136f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003136F8_0x3136f8");
#endif

    ctx->pc = 0x3136f8u;

    // 0x3136f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3136f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3136fc: 0x3c04001c  lui         $a0, 0x1C
    ctx->pc = 0x3136fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28 << 16));
    // 0x313700: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x313700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x313704: 0x24848110  addiu       $a0, $a0, -0x7EF0
    ctx->pc = 0x313704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934800));
    // 0x313708: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x313708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31370c: 0x80c5054  j           func_314150
    ctx->pc = 0x31370Cu;
    ctx->pc = 0x313710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31370Cu;
    // 0x313710: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314150u, 0x31370Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x313714u;
    // 0x313714: 0x0  nop
    ctx->pc = 0x313714u;
    // NOP
    // 0x313718: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x313718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31371c: 0x3c04001c  lui         $a0, 0x1C
    ctx->pc = 0x31371cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28 << 16));
    // 0x313720: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x313720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x313724: 0x24848110  addiu       $a0, $a0, -0x7EF0
    ctx->pc = 0x313724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934800));
    // 0x313728: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x313728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31372c: 0x80c5156  j           func_314558
    ctx->pc = 0x31372Cu;
    ctx->pc = 0x313730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31372Cu;
    // 0x313730: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314558u, 0x31372Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x313734u;
    // 0x313734: 0x0  nop
    ctx->pc = 0x313734u;
    // NOP
    // 0x313738: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x313738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x31373c: 0x3e00008  jr          $ra
    ctx->pc = 0x31373Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x313740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31373Cu;
        // 0x313740: 0xa0448168  sb          $a0, -0x7E98($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294934888), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31373Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x313744u;
    // 0x313744: 0x0  nop
    ctx->pc = 0x313744u;
    // NOP
    ctx->pc = 0x313748u;
}
