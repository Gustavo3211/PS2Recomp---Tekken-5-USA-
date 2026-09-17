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

// Function: sub_00230740
// Address: 0x230740 - 0x230768
void sub_00230740_0x230740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230740_0x230740");
#endif

    ctx->pc = 0x230740u;

    // 0x230740: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x230740u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x230744: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x230744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x230748: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x230748u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23074c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23074cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x230750: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x230750u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x230754: 0x3c010016  lui         $at, 0x16
    ctx->pc = 0x230754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)22 << 16));
    // 0x230758: 0x2421d050  addiu       $at, $at, -0x2FB0
    ctx->pc = 0x230758u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294955088));
    // 0x23075c: 0x3e00008  jr          $ra
    ctx->pc = 0x23075Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23075Cu;
        // 0x230760: 0x221021  addu        $v0, $at, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23075Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230764u;
    // 0x230764: 0x0  nop
    ctx->pc = 0x230764u;
    // NOP
    ctx->pc = 0x230768u;
}
