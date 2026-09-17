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

// Function: sub_00320B28
// Address: 0x320b28 - 0x320b60
void sub_00320B28_0x320b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00320B28_0x320b28");
#endif

    switch (ctx->pc) {
        case 0x320b28u: goto label_320b28;
        case 0x320b2cu: goto label_320b2c;
        case 0x320b30u: goto label_320b30;
        case 0x320b34u: goto label_320b34;
        case 0x320b38u: goto label_320b38;
        case 0x320b3cu: goto label_320b3c;
        case 0x320b40u: goto label_320b40;
        case 0x320b44u: goto label_320b44;
        case 0x320b48u: goto label_320b48;
        case 0x320b4cu: goto label_320b4c;
        case 0x320b50u: goto label_320b50;
        case 0x320b54u: goto label_320b54;
        case 0x320b58u: goto label_320b58;
        case 0x320b5cu: goto label_320b5c;
        default: break;
    }

    ctx->pc = 0x320b28u;

label_320b28:
    // 0x320b28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x320b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_320b2c:
    // 0x320b2c: 0x3c060044  lui         $a2, 0x44
    ctx->pc = 0x320b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)68 << 16));
label_320b30:
    // 0x320b30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x320b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_320b34:
    // 0x320b34: 0x24c6d6c0  addiu       $a2, $a2, -0x2940
    ctx->pc = 0x320b34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956736));
label_320b38:
    // 0x320b38: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x320b38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_320b3c:
    // 0x320b3c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x320b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_320b40:
    // 0x320b40: 0x24630058  addiu       $v1, $v1, 0x58
    ctx->pc = 0x320b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 88));
label_320b44:
    // 0x320b44: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x320b44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_320b48:
    // 0x320b48: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x320b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_320b4c:
    // 0x320b4c: 0x40f809  jalr        $v0
label_320b50:
    if (ctx->pc == 0x320B50u) {
        ctx->pc = 0x320B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320B4Cu;
        // 0x320b50: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320B54u;
        goto label_320b54;
    }
    ctx->pc = 0x320B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x320B54u);
        ctx->pc = 0x320B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320B4Cu;
        // 0x320b50: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320B4Cu, 0x320B54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x320B54u;
label_320b54:
    // 0x320b54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x320b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_320b58:
    // 0x320b58: 0x3e00008  jr          $ra
label_320b5c:
    if (ctx->pc == 0x320B5Cu) {
        ctx->pc = 0x320B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320B58u;
        // 0x320b5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320B60u;
        goto label_fallthrough_0x320b58;
    }
    ctx->pc = 0x320B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320B58u;
        // 0x320b5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320B58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x320b58:
    ctx->pc = 0x320B60u;
}
