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

// Function: sub_0036DE18
// Address: 0x36de18 - 0x36de40
void sub_0036DE18_0x36de18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036DE18_0x36de18");
#endif

    switch (ctx->pc) {
        case 0x36de30u: goto label_36de30;
        default: break;
    }

    ctx->pc = 0x36de18u;

    // 0x36de18: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x36de18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x36de1c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36de1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36de20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36de20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36de24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36de24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36de28: 0xc0b79f8  jal         func_2DE7E0
    ctx->pc = 0x36DE28u;
    SET_GPR_U32(ctx, 31, 0x36DE30u);
    ctx->pc = 0x36DE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DE28u;
    // 0x36de2c: 0x24070006  addiu       $a3, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE7E0u, 0x36DE28u, 0x36DE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DE30u;
label_36de30:
    // 0x36de30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36de30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36de34: 0x3e00008  jr          $ra
    ctx->pc = 0x36DE34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36DE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DE34u;
        // 0x36de38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DE34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36DE3Cu;
    // 0x36de3c: 0x0  nop
    ctx->pc = 0x36de3cu;
    // NOP
    ctx->pc = 0x36de40u;
}
