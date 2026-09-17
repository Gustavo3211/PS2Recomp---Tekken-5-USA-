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

// Function: sub_00320CE0
// Address: 0x320ce0 - 0x320d18
void sub_00320CE0_0x320ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00320CE0_0x320ce0");
#endif

    switch (ctx->pc) {
        case 0x320ce0u: goto label_320ce0;
        case 0x320ce4u: goto label_320ce4;
        case 0x320ce8u: goto label_320ce8;
        case 0x320cecu: goto label_320cec;
        case 0x320cf0u: goto label_320cf0;
        case 0x320cf4u: goto label_320cf4;
        case 0x320cf8u: goto label_320cf8;
        case 0x320cfcu: goto label_320cfc;
        case 0x320d00u: goto label_320d00;
        case 0x320d04u: goto label_320d04;
        case 0x320d08u: goto label_320d08;
        case 0x320d0cu: goto label_320d0c;
        case 0x320d10u: goto label_320d10;
        case 0x320d14u: goto label_320d14;
        default: break;
    }

    ctx->pc = 0x320ce0u;

label_320ce0:
    // 0x320ce0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x320ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_320ce4:
    // 0x320ce4: 0x3c060044  lui         $a2, 0x44
    ctx->pc = 0x320ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)68 << 16));
label_320ce8:
    // 0x320ce8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x320ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_320cec:
    // 0x320cec: 0x24c6d6c0  addiu       $a2, $a2, -0x2940
    ctx->pc = 0x320cecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956736));
label_320cf0:
    // 0x320cf0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x320cf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_320cf4:
    // 0x320cf4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x320cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_320cf8:
    // 0x320cf8: 0x24630090  addiu       $v1, $v1, 0x90
    ctx->pc = 0x320cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
label_320cfc:
    // 0x320cfc: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x320cfcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_320d00:
    // 0x320d00: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x320d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_320d04:
    // 0x320d04: 0x40f809  jalr        $v0
label_320d08:
    if (ctx->pc == 0x320D08u) {
        ctx->pc = 0x320D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320D04u;
        // 0x320d08: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320D0Cu;
        goto label_320d0c;
    }
    ctx->pc = 0x320D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x320D0Cu);
        ctx->pc = 0x320D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320D04u;
        // 0x320d08: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320D04u, 0x320D0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x320D0Cu;
label_320d0c:
    // 0x320d0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x320d0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_320d10:
    // 0x320d10: 0x3e00008  jr          $ra
label_320d14:
    if (ctx->pc == 0x320D14u) {
        ctx->pc = 0x320D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320D10u;
        // 0x320d14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320D18u;
        goto label_fallthrough_0x320d10;
    }
    ctx->pc = 0x320D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320D10u;
        // 0x320d14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320D10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x320d10:
    ctx->pc = 0x320D18u;
}
