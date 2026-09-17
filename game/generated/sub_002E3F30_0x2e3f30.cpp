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

// Function: sub_002E3F30
// Address: 0x2e3f30 - 0x2e3f60
void sub_002E3F30_0x2e3f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3F30_0x2e3f30");
#endif

    switch (ctx->pc) {
        case 0x2e3f30u: goto label_2e3f30;
        case 0x2e3f34u: goto label_2e3f34;
        case 0x2e3f38u: goto label_2e3f38;
        case 0x2e3f3cu: goto label_2e3f3c;
        case 0x2e3f40u: goto label_2e3f40;
        case 0x2e3f44u: goto label_2e3f44;
        case 0x2e3f48u: goto label_2e3f48;
        case 0x2e3f4cu: goto label_2e3f4c;
        case 0x2e3f50u: goto label_2e3f50;
        case 0x2e3f54u: goto label_2e3f54;
        case 0x2e3f58u: goto label_2e3f58;
        case 0x2e3f5cu: goto label_2e3f5c;
        default: break;
    }

    ctx->pc = 0x2e3f30u;

label_2e3f30:
    // 0x2e3f30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e3f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2e3f34:
    // 0x2e3f34: 0x24850074  addiu       $a1, $a0, 0x74
    ctx->pc = 0x2e3f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 116));
label_2e3f38:
    // 0x2e3f38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e3f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2e3f3c:
    // 0x2e3f3c: 0x8ca2003c  lw          $v0, 0x3C($a1)
    ctx->pc = 0x2e3f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
label_2e3f40:
    // 0x2e3f40: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x2e3f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_2e3f44:
    // 0x2e3f44: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2e3f44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2e3f48:
    // 0x2e3f48: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2e3f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2e3f4c:
    // 0x2e3f4c: 0x60f809  jalr        $v1
label_2e3f50:
    if (ctx->pc == 0x2E3F50u) {
        ctx->pc = 0x2E3F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3F4Cu;
        // 0x2e3f50: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3F54u;
        goto label_2e3f54;
    }
    ctx->pc = 0x2E3F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2E3F54u);
        ctx->pc = 0x2E3F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3F4Cu;
        // 0x2e3f50: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3F4Cu, 0x2E3F54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E3F54u;
label_2e3f54:
    // 0x2e3f54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e3f54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e3f58:
    // 0x2e3f58: 0x3e00008  jr          $ra
label_2e3f5c:
    if (ctx->pc == 0x2E3F5Cu) {
        ctx->pc = 0x2E3F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3F58u;
        // 0x2e3f5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3F60u;
        goto label_fallthrough_0x2e3f58;
    }
    ctx->pc = 0x2E3F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3F58u;
        // 0x2e3f5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3F58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2e3f58:
    ctx->pc = 0x2E3F60u;
}
