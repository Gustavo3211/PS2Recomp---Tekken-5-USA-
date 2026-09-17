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

// Function: sub_00121D60
// Address: 0x121d60 - 0x121d88
void sub_00121D60_0x121d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00121D60_0x121d60");
#endif

    switch (ctx->pc) {
        case 0x121d60u: goto label_121d60;
        case 0x121d64u: goto label_121d64;
        case 0x121d68u: goto label_121d68;
        case 0x121d6cu: goto label_121d6c;
        case 0x121d70u: goto label_121d70;
        case 0x121d74u: goto label_121d74;
        case 0x121d78u: goto label_121d78;
        case 0x121d7cu: goto label_121d7c;
        case 0x121d80u: goto label_121d80;
        case 0x121d84u: goto label_121d84;
        default: break;
    }

    ctx->pc = 0x121d60u;

label_121d60:
    // 0x121d60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x121d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_121d64:
    // 0x121d64: 0x3c030013  lui         $v1, 0x13
    ctx->pc = 0x121d64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
label_121d68:
    // 0x121d68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x121d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_121d6c:
    // 0x121d6c: 0x8c624380  lw          $v0, 0x4380($v1)
    ctx->pc = 0x121d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17280)));
label_121d70:
    // 0x121d70: 0x40f809  jalr        $v0
label_121d74:
    if (ctx->pc == 0x121D74u) {
        ctx->pc = 0x121D78u;
        goto label_121d78;
    }
    ctx->pc = 0x121D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x121D78u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121D70u, 0x121D78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x121D78u;
label_121d78:
    // 0x121d78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x121d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_121d7c:
    // 0x121d7c: 0x3e00008  jr          $ra
label_121d80:
    if (ctx->pc == 0x121D80u) {
        ctx->pc = 0x121D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121D7Cu;
        // 0x121d80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121D84u;
        goto label_121d84;
    }
    ctx->pc = 0x121D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121D7Cu;
        // 0x121d80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121D7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x121D84u;
label_121d84:
    // 0x121d84: 0x0  nop
    ctx->pc = 0x121d84u;
    // NOP
    ctx->pc = 0x121d88u;
}
