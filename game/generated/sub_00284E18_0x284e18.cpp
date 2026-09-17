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

// Function: sub_00284E18
// Address: 0x284e18 - 0x284e58
void sub_00284E18_0x284e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00284E18_0x284e18");
#endif

    switch (ctx->pc) {
        case 0x284e18u: goto label_284e18;
        case 0x284e1cu: goto label_284e1c;
        case 0x284e20u: goto label_284e20;
        case 0x284e24u: goto label_284e24;
        case 0x284e28u: goto label_284e28;
        case 0x284e2cu: goto label_284e2c;
        case 0x284e30u: goto label_284e30;
        case 0x284e34u: goto label_284e34;
        case 0x284e38u: goto label_284e38;
        case 0x284e3cu: goto label_284e3c;
        case 0x284e40u: goto label_284e40;
        case 0x284e44u: goto label_284e44;
        case 0x284e48u: goto label_284e48;
        case 0x284e4cu: goto label_284e4c;
        case 0x284e50u: goto label_284e50;
        case 0x284e54u: goto label_284e54;
        default: break;
    }

    ctx->pc = 0x284e18u;

label_284e18:
    // 0x284e18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x284e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_284e1c:
    // 0x284e1c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x284e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_284e20:
    // 0x284e20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x284e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_284e24:
    // 0x284e24: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x284e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_284e28:
    // 0x284e28: 0x8ca50020  lw          $a1, 0x20($a1)
    ctx->pc = 0x284e28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
label_284e2c:
    // 0x284e2c: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_284e30:
    if (ctx->pc == 0x284E30u) {
        ctx->pc = 0x284E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284E2Cu;
        // 0x284e30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284E34u;
        goto label_284e34;
    }
    ctx->pc = 0x284E2Cu;
    {
        const bool branch_taken_0x284e2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x284E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284E2Cu;
        // 0x284e30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284e2c) {
            ctx->pc = 0x284E4Cu;
            goto label_284e4c;
        }
    }
    ctx->pc = 0x284E34u;
label_284e34:
    // 0x284e34: 0x8ca30068  lw          $v1, 0x68($a1)
    ctx->pc = 0x284e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 104)));
label_284e38:
    // 0x284e38: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x284e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_284e3c:
    // 0x284e3c: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x284e3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_284e40:
    // 0x284e40: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x284e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_284e44:
    // 0x284e44: 0x40f809  jalr        $v0
label_284e48:
    if (ctx->pc == 0x284E48u) {
        ctx->pc = 0x284E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284E44u;
        // 0x284e48: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284E4Cu;
        goto label_284e4c;
    }
    ctx->pc = 0x284E44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x284E4Cu);
        ctx->pc = 0x284E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284E44u;
        // 0x284e48: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284E44u, 0x284E4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x284E4Cu;
label_284e4c:
    // 0x284e4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x284e4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_284e50:
    // 0x284e50: 0x3e00008  jr          $ra
label_284e54:
    if (ctx->pc == 0x284E54u) {
        ctx->pc = 0x284E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284E50u;
        // 0x284e54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284E58u;
        goto label_fallthrough_0x284e50;
    }
    ctx->pc = 0x284E50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284E50u;
        // 0x284e54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284E50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x284e50:
    ctx->pc = 0x284E58u;
}
