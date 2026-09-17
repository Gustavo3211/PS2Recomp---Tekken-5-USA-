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

// Function: sub_00262DF8
// Address: 0x262df8 - 0x262e30
void sub_00262DF8_0x262df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00262DF8_0x262df8");
#endif

    switch (ctx->pc) {
        case 0x262e20u: goto label_262e20;
        default: break;
    }

    ctx->pc = 0x262df8u;

    // 0x262df8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x262df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x262dfc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x262dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x262e00: 0x84a30012  lh          $v1, 0x12($a1)
    ctx->pc = 0x262e00u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 18)));
    // 0x262e04: 0x24a50720  addiu       $a1, $a1, 0x720
    ctx->pc = 0x262e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1824));
    // 0x262e08: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x262e08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x262e0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x262e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x262e10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x262e10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x262e14: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x262e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x262e18: 0xc098b60  jal         func_262D80
    ctx->pc = 0x262E18u;
    SET_GPR_U32(ctx, 31, 0x262E20u);
    ctx->pc = 0x262E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262E18u;
    // 0x262e1c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262D80u, 0x262E18u, 0x262E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262E20u;
label_262e20:
    // 0x262e20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x262e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x262e24: 0x3e00008  jr          $ra
    ctx->pc = 0x262E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262E24u;
        // 0x262e28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262E24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x262E2Cu;
    // 0x262e2c: 0x0  nop
    ctx->pc = 0x262e2cu;
    // NOP
    ctx->pc = 0x262e30u;
}
