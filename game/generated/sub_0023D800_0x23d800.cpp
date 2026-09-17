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

// Function: sub_0023D800
// Address: 0x23d800 - 0x23d830
void sub_0023D800_0x23d800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023D800_0x23d800");
#endif

    ctx->pc = 0x23d800u;

    // 0x23d800: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x23d800u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x23d804: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x23d804u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x23d808: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x23d808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x23d80c: 0x24c607d0  addiu       $a2, $a2, 0x7D0
    ctx->pc = 0x23d80cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2000));
    // 0x23d810: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x23d810u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x23d814: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x23d814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x23d818: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23d818u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23d81c: 0x462821  addu        $a1, $v0, $a2
    ctx->pc = 0x23d81cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x23d820: 0x8ca30180  lw          $v1, 0x180($a1)
    ctx->pc = 0x23d820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 384)));
    // 0x23d824: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x23d824u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d828: 0x3e00008  jr          $ra
    ctx->pc = 0x23D828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D828u;
        // 0x23d82c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23D830u;
}
