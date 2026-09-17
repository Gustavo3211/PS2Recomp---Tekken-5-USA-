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

// Function: sub_00260230
// Address: 0x260230 - 0x260260
void sub_00260230_0x260230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00260230_0x260230");
#endif

    switch (ctx->pc) {
        case 0x260230u: goto label_260230;
        case 0x260234u: goto label_260234;
        case 0x260238u: goto label_260238;
        case 0x26023cu: goto label_26023c;
        case 0x260240u: goto label_260240;
        case 0x260244u: goto label_260244;
        case 0x260248u: goto label_260248;
        case 0x26024cu: goto label_26024c;
        case 0x260250u: goto label_260250;
        case 0x260254u: goto label_260254;
        case 0x260258u: goto label_260258;
        case 0x26025cu: goto label_26025c;
        default: break;
    }

    ctx->pc = 0x260230u;

label_260230:
    // 0x260230: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x260230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_260234:
    // 0x260234: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x260234u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_260238:
    // 0x260238: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x260238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_26023c:
    // 0x26023c: 0x8cc30024  lw          $v1, 0x24($a2)
    ctx->pc = 0x26023cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_260240:
    // 0x260240: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x260240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_260244:
    // 0x260244: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x260244u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_260248:
    // 0x260248: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x260248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_26024c:
    // 0x26024c: 0x40f809  jalr        $v0
label_260250:
    if (ctx->pc == 0x260250u) {
        ctx->pc = 0x260250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26024Cu;
        // 0x260250: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260254u;
        goto label_260254;
    }
    ctx->pc = 0x26024Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x260254u);
        ctx->pc = 0x260250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26024Cu;
        // 0x260250: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26024Cu, 0x260254u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x260254u;
label_260254:
    // 0x260254: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x260254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_260258:
    // 0x260258: 0x3e00008  jr          $ra
label_26025c:
    if (ctx->pc == 0x26025Cu) {
        ctx->pc = 0x26025Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260258u;
        // 0x26025c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260260u;
        goto label_fallthrough_0x260258;
    }
    ctx->pc = 0x260258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26025Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260258u;
        // 0x26025c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x260258:
    ctx->pc = 0x260260u;
}
