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

// Function: sub_003674B0
// Address: 0x3674b0 - 0x367500
void sub_003674B0_0x3674b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003674B0_0x3674b0");
#endif

    switch (ctx->pc) {
        case 0x3674e8u: goto label_3674e8;
        default: break;
    }

    ctx->pc = 0x3674b0u;

    // 0x3674b0: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x3674b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x3674b4: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x3674b4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x3674b8: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x3674b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3674bc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3674BCu;
    {
        const bool branch_taken_0x3674bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3674bc) {
            ctx->pc = 0x3674E0u;
            goto label_3674e0;
        }
    }
    ctx->pc = 0x3674C4u;
    // 0x3674c4: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3674C4u;
    {
        const bool branch_taken_0x3674c4 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x3674c4) {
            ctx->pc = 0x3674E0u;
            goto label_3674e0;
        }
    }
    ctx->pc = 0x3674CCu;
    // 0x3674cc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3674ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x3674d0: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x3674d0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x3674d4: 0xa425a808  sh          $a1, -0x57F8($at)
    ctx->pc = 0x3674d4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294944776), (uint16_t)GPR_U32(ctx, 5));
    // 0x3674d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3674D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3674DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3674D8u;
        // 0x3674dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3674D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3674E0u;
label_3674e0:
    // 0x3674e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3674E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3674E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3674E0u;
        // 0x3674e4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3674E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3674E8u;
label_3674e8:
    // 0x3674e8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3674e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3674ec: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3674ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3674f0: 0x8442a808  lh          $v0, -0x57F8($v0)
    ctx->pc = 0x3674f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294944776)));
    // 0x3674f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3674F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3674F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3674FCu;
    // 0x3674fc: 0x0  nop
    ctx->pc = 0x3674fcu;
    // NOP
    ctx->pc = 0x367500u;
}
