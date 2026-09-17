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

// Function: sub_003258F8
// Address: 0x3258f8 - 0x325930
void sub_003258F8_0x3258f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003258F8_0x3258f8");
#endif

    switch (ctx->pc) {
        case 0x325920u: goto label_325920;
        default: break;
    }

    ctx->pc = 0x3258f8u;

    // 0x3258f8: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x3258f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x3258fc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3258fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x325900: 0x24a500c0  addiu       $a1, $a1, 0xC0
    ctx->pc = 0x325900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
    // 0x325904: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x325904u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x325908: 0x24a60008  addiu       $a2, $a1, 0x8
    ctx->pc = 0x325908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x32590c: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x32590cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x325910: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x325910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325914: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x325914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x325918: 0xc0c964c  jal         func_325930
    ctx->pc = 0x325918u;
    SET_GPR_U32(ctx, 31, 0x325920u);
    ctx->pc = 0x32591Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325918u;
    // 0x32591c: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325930u, 0x325918u, 0x325920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325920u;
label_325920:
    // 0x325920: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x325920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x325924: 0x3e00008  jr          $ra
    ctx->pc = 0x325924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325924u;
        // 0x325928: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32592Cu;
    // 0x32592c: 0x0  nop
    ctx->pc = 0x32592cu;
    // NOP
    ctx->pc = 0x325930u;
}
