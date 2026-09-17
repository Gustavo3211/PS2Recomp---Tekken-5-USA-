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

// Function: sub_00294008
// Address: 0x294008 - 0x294038
void sub_00294008_0x294008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294008_0x294008");
#endif

    switch (ctx->pc) {
        case 0x294008u: goto label_294008;
        case 0x29400cu: goto label_29400c;
        case 0x294010u: goto label_294010;
        case 0x294014u: goto label_294014;
        case 0x294018u: goto label_294018;
        case 0x29401cu: goto label_29401c;
        case 0x294020u: goto label_294020;
        case 0x294024u: goto label_294024;
        case 0x294028u: goto label_294028;
        case 0x29402cu: goto label_29402c;
        case 0x294030u: goto label_294030;
        case 0x294034u: goto label_294034;
        default: break;
    }

    ctx->pc = 0x294008u;

label_294008:
    // 0x294008: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x294008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_29400c:
    // 0x29400c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x29400cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_294010:
    // 0x294010: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x294010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_294014:
    // 0x294014: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x294014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_294018:
    // 0x294018: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x294018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_29401c:
    // 0x29401c: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x29401cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_294020:
    // 0x294020: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x294020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_294024:
    // 0x294024: 0x40f809  jalr        $v0
label_294028:
    if (ctx->pc == 0x294028u) {
        ctx->pc = 0x294028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294024u;
        // 0x294028: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29402Cu;
        goto label_29402c;
    }
    ctx->pc = 0x294024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29402Cu);
        ctx->pc = 0x294028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294024u;
        // 0x294028: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294024u, 0x29402Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29402Cu;
label_29402c:
    // 0x29402c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29402cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_294030:
    // 0x294030: 0x3e00008  jr          $ra
label_294034:
    if (ctx->pc == 0x294034u) {
        ctx->pc = 0x294034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294030u;
        // 0x294034: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294038u;
        goto label_fallthrough_0x294030;
    }
    ctx->pc = 0x294030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294030u;
        // 0x294034: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x294030:
    ctx->pc = 0x294038u;
}
