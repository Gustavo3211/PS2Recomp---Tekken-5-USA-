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

// Function: sub_0021D810
// Address: 0x21d810 - 0x21d848
void sub_0021D810_0x21d810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D810_0x21d810");
#endif

    switch (ctx->pc) {
        case 0x21d810u: goto label_21d810;
        case 0x21d814u: goto label_21d814;
        case 0x21d818u: goto label_21d818;
        case 0x21d81cu: goto label_21d81c;
        case 0x21d820u: goto label_21d820;
        case 0x21d824u: goto label_21d824;
        case 0x21d828u: goto label_21d828;
        case 0x21d82cu: goto label_21d82c;
        case 0x21d830u: goto label_21d830;
        case 0x21d834u: goto label_21d834;
        case 0x21d838u: goto label_21d838;
        case 0x21d83cu: goto label_21d83c;
        case 0x21d840u: goto label_21d840;
        case 0x21d844u: goto label_21d844;
        default: break;
    }

    ctx->pc = 0x21d810u;

label_21d810:
    // 0x21d810: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x21d810u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_21d814:
    // 0x21d814: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21d814u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_21d818:
    // 0x21d818: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x21d818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_21d81c:
    // 0x21d81c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21d81cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_21d820:
    // 0x21d820: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21d820u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_21d824:
    // 0x21d824: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x21d824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_21d828:
    // 0x21d828: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21d828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21d82c:
    // 0x21d82c: 0x8c426ad0  lw          $v0, 0x6AD0($v0)
    ctx->pc = 0x21d82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27344)));
label_21d830:
    // 0x21d830: 0x40f809  jalr        $v0
label_21d834:
    if (ctx->pc == 0x21D834u) {
        ctx->pc = 0x21D838u;
        goto label_21d838;
    }
    ctx->pc = 0x21D830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21D838u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D830u, 0x21D838u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21D838u;
label_21d838:
    // 0x21d838: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21d838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21d83c:
    // 0x21d83c: 0x3e00008  jr          $ra
label_21d840:
    if (ctx->pc == 0x21D840u) {
        ctx->pc = 0x21D840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D83Cu;
        // 0x21d840: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D844u;
        goto label_21d844;
    }
    ctx->pc = 0x21D83Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D83Cu;
        // 0x21d840: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D83Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D844u;
label_21d844:
    // 0x21d844: 0x0  nop
    ctx->pc = 0x21d844u;
    // NOP
    ctx->pc = 0x21d848u;
}
