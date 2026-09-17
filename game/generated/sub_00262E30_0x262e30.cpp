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

// Function: sub_00262E30
// Address: 0x262e30 - 0x262e68
void sub_00262E30_0x262e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00262E30_0x262e30");
#endif

    switch (ctx->pc) {
        case 0x262e58u: goto label_262e58;
        default: break;
    }

    ctx->pc = 0x262e30u;

    // 0x262e30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x262e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x262e34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x262e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x262e38: 0x84a30012  lh          $v1, 0x12($a1)
    ctx->pc = 0x262e38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 18)));
    // 0x262e3c: 0x24a50720  addiu       $a1, $a1, 0x720
    ctx->pc = 0x262e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1824));
    // 0x262e40: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x262e40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x262e44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x262e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x262e48: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x262e48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x262e4c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x262e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x262e50: 0xc098b44  jal         func_262D10
    ctx->pc = 0x262E50u;
    SET_GPR_U32(ctx, 31, 0x262E58u);
    ctx->pc = 0x262E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262E50u;
    // 0x262e54: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262D10u, 0x262E50u, 0x262E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262E58u;
label_262e58:
    // 0x262e58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x262e58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x262e5c: 0x3e00008  jr          $ra
    ctx->pc = 0x262E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262E5Cu;
        // 0x262e60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262E5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x262E64u;
    // 0x262e64: 0x0  nop
    ctx->pc = 0x262e64u;
    // NOP
    ctx->pc = 0x262e68u;
}
