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

// Function: sub_0031A068
// Address: 0x31a068 - 0x31a098
void sub_0031A068_0x31a068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031A068_0x31a068");
#endif

    switch (ctx->pc) {
        case 0x31a068u: goto label_31a068;
        case 0x31a06cu: goto label_31a06c;
        case 0x31a070u: goto label_31a070;
        case 0x31a074u: goto label_31a074;
        case 0x31a078u: goto label_31a078;
        case 0x31a07cu: goto label_31a07c;
        case 0x31a080u: goto label_31a080;
        case 0x31a084u: goto label_31a084;
        case 0x31a088u: goto label_31a088;
        case 0x31a08cu: goto label_31a08c;
        case 0x31a090u: goto label_31a090;
        case 0x31a094u: goto label_31a094;
        default: break;
    }

    ctx->pc = 0x31a068u;

label_31a068:
    // 0x31a068: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31a068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_31a06c:
    // 0x31a06c: 0x8f85c594  lw          $a1, -0x3A6C($gp)
    ctx->pc = 0x31a06cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952340)));
label_31a070:
    // 0x31a070: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31a070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_31a074:
    // 0x31a074: 0x8ca20050  lw          $v0, 0x50($a1)
    ctx->pc = 0x31a074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
label_31a078:
    // 0x31a078: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x31a078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_31a07c:
    // 0x31a07c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x31a07cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_31a080:
    // 0x31a080: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x31a080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_31a084:
    // 0x31a084: 0x60f809  jalr        $v1
label_31a088:
    if (ctx->pc == 0x31A088u) {
        ctx->pc = 0x31A088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A084u;
        // 0x31a088: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A08Cu;
        goto label_31a08c;
    }
    ctx->pc = 0x31A084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x31A08Cu);
        ctx->pc = 0x31A088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A084u;
        // 0x31a088: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A084u, 0x31A08Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31A08Cu;
label_31a08c:
    // 0x31a08c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31a08cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31a090:
    // 0x31a090: 0x3e00008  jr          $ra
label_31a094:
    if (ctx->pc == 0x31A094u) {
        ctx->pc = 0x31A094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A090u;
        // 0x31a094: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A098u;
        goto label_fallthrough_0x31a090;
    }
    ctx->pc = 0x31A090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A090u;
        // 0x31a094: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x31a090:
    ctx->pc = 0x31A098u;
}
