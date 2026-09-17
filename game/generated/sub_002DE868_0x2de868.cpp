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

// Function: sub_002DE868
// Address: 0x2de868 - 0x2de890
void sub_002DE868_0x2de868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE868_0x2de868");
#endif

    switch (ctx->pc) {
        case 0x2de868u: goto label_2de868;
        case 0x2de86cu: goto label_2de86c;
        case 0x2de870u: goto label_2de870;
        case 0x2de874u: goto label_2de874;
        case 0x2de878u: goto label_2de878;
        case 0x2de87cu: goto label_2de87c;
        case 0x2de880u: goto label_2de880;
        case 0x2de884u: goto label_2de884;
        case 0x2de888u: goto label_2de888;
        case 0x2de88cu: goto label_2de88c;
        default: break;
    }

    ctx->pc = 0x2de868u;

label_2de868:
    // 0x2de868: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2de868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2de86c:
    // 0x2de86c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2de86cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2de870:
    // 0x2de870: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x2de870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_2de874:
    // 0x2de874: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2de878:
    if (ctx->pc == 0x2DE878u) {
        ctx->pc = 0x2DE878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE874u;
        // 0x2de878: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE87Cu;
        goto label_2de87c;
    }
    ctx->pc = 0x2DE874u;
    {
        const bool branch_taken_0x2de874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de874) {
            ctx->pc = 0x2DE878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DE874u;
            // 0x2de878: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DE888u;
            goto label_2de888;
        }
    }
    ctx->pc = 0x2DE87Cu;
label_2de87c:
    // 0x2de87c: 0x40f809  jalr        $v0
label_2de880:
    if (ctx->pc == 0x2DE880u) {
        ctx->pc = 0x2DE884u;
        goto label_2de884;
    }
    ctx->pc = 0x2DE87Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DE884u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE87Cu, 0x2DE884u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DE884u;
label_2de884:
    // 0x2de884: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2de884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2de888:
    // 0x2de888: 0x3e00008  jr          $ra
label_2de88c:
    if (ctx->pc == 0x2DE88Cu) {
        ctx->pc = 0x2DE88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE888u;
        // 0x2de88c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE890u;
        goto label_fallthrough_0x2de888;
    }
    ctx->pc = 0x2DE888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE888u;
        // 0x2de88c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2de888:
    ctx->pc = 0x2DE890u;
}
