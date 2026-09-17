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

// Function: sub_00336790
// Address: 0x336790 - 0x3367c0
void sub_00336790_0x336790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336790_0x336790");
#endif

    switch (ctx->pc) {
        case 0x336790u: goto label_336790;
        case 0x336794u: goto label_336794;
        case 0x336798u: goto label_336798;
        case 0x33679cu: goto label_33679c;
        case 0x3367a0u: goto label_3367a0;
        case 0x3367a4u: goto label_3367a4;
        case 0x3367a8u: goto label_3367a8;
        case 0x3367acu: goto label_3367ac;
        case 0x3367b0u: goto label_3367b0;
        case 0x3367b4u: goto label_3367b4;
        case 0x3367b8u: goto label_3367b8;
        case 0x3367bcu: goto label_3367bc;
        default: break;
    }

    ctx->pc = 0x336790u;

label_336790:
    // 0x336790: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x336790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_336794:
    // 0x336794: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x336794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_336798:
    // 0x336798: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x336798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_33679c:
    // 0x33679c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x33679cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3367a0:
    // 0x3367a0: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3367a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_3367a4:
    // 0x3367a4: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x3367a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_3367a8:
    // 0x3367a8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3367a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3367ac:
    // 0x3367ac: 0x40f809  jalr        $v0
label_3367b0:
    if (ctx->pc == 0x3367B0u) {
        ctx->pc = 0x3367B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3367ACu;
        // 0x3367b0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3367B4u;
        goto label_3367b4;
    }
    ctx->pc = 0x3367ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3367B4u);
        ctx->pc = 0x3367B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3367ACu;
        // 0x3367b0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3367ACu, 0x3367B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3367B4u;
label_3367b4:
    // 0x3367b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3367b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3367b8:
    // 0x3367b8: 0x3e00008  jr          $ra
label_3367bc:
    if (ctx->pc == 0x3367BCu) {
        ctx->pc = 0x3367BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3367B8u;
        // 0x3367bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3367C0u;
        goto label_fallthrough_0x3367b8;
    }
    ctx->pc = 0x3367B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3367BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3367B8u;
        // 0x3367bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3367B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3367b8:
    ctx->pc = 0x3367C0u;
}
