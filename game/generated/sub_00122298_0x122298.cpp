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

// Function: sub_00122298
// Address: 0x122298 - 0x1222c0
void sub_00122298_0x122298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122298_0x122298");
#endif

    switch (ctx->pc) {
        case 0x122298u: goto label_122298;
        case 0x12229cu: goto label_12229c;
        case 0x1222a0u: goto label_1222a0;
        case 0x1222a4u: goto label_1222a4;
        case 0x1222a8u: goto label_1222a8;
        case 0x1222acu: goto label_1222ac;
        case 0x1222b0u: goto label_1222b0;
        case 0x1222b4u: goto label_1222b4;
        case 0x1222b8u: goto label_1222b8;
        case 0x1222bcu: goto label_1222bc;
        default: break;
    }

    ctx->pc = 0x122298u;

label_122298:
    // 0x122298: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x122298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_12229c:
    // 0x12229c: 0x3c030013  lui         $v1, 0x13
    ctx->pc = 0x12229cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
label_1222a0:
    // 0x1222a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1222a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1222a4:
    // 0x1222a4: 0x8c624380  lw          $v0, 0x4380($v1)
    ctx->pc = 0x1222a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17280)));
label_1222a8:
    // 0x1222a8: 0x40f809  jalr        $v0
label_1222ac:
    if (ctx->pc == 0x1222ACu) {
        ctx->pc = 0x1222B0u;
        goto label_1222b0;
    }
    ctx->pc = 0x1222A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1222B0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1222A8u, 0x1222B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1222B0u;
label_1222b0:
    // 0x1222b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1222b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1222b4:
    // 0x1222b4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1222b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1222b8:
    // 0x1222b8: 0x3e00008  jr          $ra
label_1222bc:
    if (ctx->pc == 0x1222BCu) {
        ctx->pc = 0x1222BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1222B8u;
        // 0x1222bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1222C0u;
        goto label_fallthrough_0x1222b8;
    }
    ctx->pc = 0x1222B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1222BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1222B8u;
        // 0x1222bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1222B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1222b8:
    ctx->pc = 0x1222C0u;
}
