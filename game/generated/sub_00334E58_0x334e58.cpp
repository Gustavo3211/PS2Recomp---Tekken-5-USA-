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

// Function: sub_00334E58
// Address: 0x334e58 - 0x334e88
void sub_00334E58_0x334e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00334E58_0x334e58");
#endif

    switch (ctx->pc) {
        case 0x334e58u: goto label_334e58;
        case 0x334e5cu: goto label_334e5c;
        case 0x334e60u: goto label_334e60;
        case 0x334e64u: goto label_334e64;
        case 0x334e68u: goto label_334e68;
        case 0x334e6cu: goto label_334e6c;
        case 0x334e70u: goto label_334e70;
        case 0x334e74u: goto label_334e74;
        case 0x334e78u: goto label_334e78;
        case 0x334e7cu: goto label_334e7c;
        case 0x334e80u: goto label_334e80;
        case 0x334e84u: goto label_334e84;
        default: break;
    }

    ctx->pc = 0x334e58u;

label_334e58:
    // 0x334e58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x334e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_334e5c:
    // 0x334e5c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x334e5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_334e60:
    // 0x334e60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x334e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_334e64:
    // 0x334e64: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x334e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_334e68:
    // 0x334e68: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x334e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_334e6c:
    // 0x334e6c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x334e6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_334e70:
    // 0x334e70: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x334e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_334e74:
    // 0x334e74: 0x60f809  jalr        $v1
label_334e78:
    if (ctx->pc == 0x334E78u) {
        ctx->pc = 0x334E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334E74u;
        // 0x334e78: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334E7Cu;
        goto label_334e7c;
    }
    ctx->pc = 0x334E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x334E7Cu);
        ctx->pc = 0x334E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334E74u;
        // 0x334e78: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x334E74u, 0x334E7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x334E7Cu;
label_334e7c:
    // 0x334e7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x334e7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_334e80:
    // 0x334e80: 0x3e00008  jr          $ra
label_334e84:
    if (ctx->pc == 0x334E84u) {
        ctx->pc = 0x334E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334E80u;
        // 0x334e84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334E88u;
        goto label_fallthrough_0x334e80;
    }
    ctx->pc = 0x334E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x334E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334E80u;
        // 0x334e84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x334E80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x334e80:
    ctx->pc = 0x334E88u;
}
