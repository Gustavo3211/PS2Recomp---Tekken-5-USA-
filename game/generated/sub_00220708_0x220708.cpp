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

// Function: sub_00220708
// Address: 0x220708 - 0x220758
void sub_00220708_0x220708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220708_0x220708");
#endif

    ctx->pc = 0x220708u;

    // 0x220708: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x220708u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x22070c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x22070cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x220710: 0x2421ca10  addiu       $at, $at, -0x35F0
    ctx->pc = 0x220710u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294953488));
    // 0x220714: 0x3e00008  jr          $ra
    ctx->pc = 0x220714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220714u;
        // 0x220718: 0x221021  addu        $v0, $at, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22071Cu;
    // 0x22071c: 0x0  nop
    ctx->pc = 0x22071cu;
    // NOP
    // 0x220720: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x220720u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x220724: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x220724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x220728: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x220728u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22072c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x22072cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x220730: 0x2421ca10  addiu       $at, $at, -0x35F0
    ctx->pc = 0x220730u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294953488));
    // 0x220734: 0x3e00008  jr          $ra
    ctx->pc = 0x220734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220734u;
        // 0x220738: 0x221021  addu        $v0, $at, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22073Cu;
    // 0x22073c: 0x0  nop
    ctx->pc = 0x22073cu;
    // NOP
    // 0x220740: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x220740u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x220744: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x220744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x220748: 0x2421ca40  addiu       $at, $at, -0x35C0
    ctx->pc = 0x220748u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294953536));
    // 0x22074c: 0x3e00008  jr          $ra
    ctx->pc = 0x22074Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22074Cu;
        // 0x220750: 0x221021  addu        $v0, $at, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22074Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x220754u;
    // 0x220754: 0x0  nop
    ctx->pc = 0x220754u;
    // NOP
    ctx->pc = 0x220758u;
}
