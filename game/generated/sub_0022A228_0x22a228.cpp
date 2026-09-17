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

// Function: sub_0022A228
// Address: 0x22a228 - 0x22a268
void sub_0022A228_0x22a228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A228_0x22a228");
#endif

    switch (ctx->pc) {
        case 0x22a258u: goto label_22a258;
        default: break;
    }

    ctx->pc = 0x22a228u;

    // 0x22a228: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22a228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22a22c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x22a22cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a230: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22a230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22a234: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x22A234u;
    {
        const bool branch_taken_0x22a234 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A234u;
        // 0x22a238: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a234) {
            ctx->pc = 0x22A250u;
            goto label_22a250;
        }
    }
    ctx->pc = 0x22A23Cu;
    // 0x22a23c: 0x84460002  lh          $a2, 0x2($v0)
    ctx->pc = 0x22a23cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x22a240: 0x8045000a  lb          $a1, 0xA($v0)
    ctx->pc = 0x22a240u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x22a244: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22a244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a248: 0x808ae4a  j           func_22B928
    ctx->pc = 0x22A248u;
    ctx->pc = 0x22A24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A248u;
    // 0x22a24c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B928u, 0x22A248u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x22A250u;
label_22a250:
    // 0x22a250: 0xc08af6a  jal         func_22BDA8
    ctx->pc = 0x22A250u;
    SET_GPR_U32(ctx, 31, 0x22A258u);
    ctx->pc = 0x22A254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A250u;
    // 0x22a254: 0x8044000a  lb          $a0, 0xA($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 10)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BDA8u, 0x22A250u, 0x22A258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A258u;
label_22a258:
    // 0x22a258: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22a258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a25c: 0x3e00008  jr          $ra
    ctx->pc = 0x22A25Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A25Cu;
        // 0x22a260: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A25Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A264u;
    // 0x22a264: 0x0  nop
    ctx->pc = 0x22a264u;
    // NOP
    ctx->pc = 0x22a268u;
}
