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

// Function: sub_003221C8
// Address: 0x3221c8 - 0x322258
void sub_003221C8_0x3221c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003221C8_0x3221c8");
#endif

    ctx->pc = 0x3221c8u;

    // 0x3221c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3221c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3221cc: 0x24860048  addiu       $a2, $a0, 0x48
    ctx->pc = 0x3221ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    // 0x3221d0: 0xac850038  sw          $a1, 0x38($a0)
    ctx->pc = 0x3221d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 5));
    // 0x3221d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3221d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3221d8: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x3221d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x3221dc: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x3221dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x3221e0: 0xac85001c  sw          $a1, 0x1C($a0)
    ctx->pc = 0x3221e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 5));
    // 0x3221e4: 0xac850028  sw          $a1, 0x28($a0)
    ctx->pc = 0x3221e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 5));
    // 0x3221e8: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x3221e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3221ec: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x3221ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x3221f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3221F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3221F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3221F0u;
        // 0x3221f4: 0xacc30004  sw          $v1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3221F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3221F8u;
    // 0x3221f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3221f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3221fc: 0x24860048  addiu       $a2, $a0, 0x48
    ctx->pc = 0x3221fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    // 0x322200: 0xac850040  sw          $a1, 0x40($a0)
    ctx->pc = 0x322200u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 5));
    // 0x322204: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x322204u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322208: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x322208u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x32220c: 0xac850028  sw          $a1, 0x28($a0)
    ctx->pc = 0x32220cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 5));
    // 0x322210: 0xac850030  sw          $a1, 0x30($a0)
    ctx->pc = 0x322210u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 5));
    // 0x322214: 0xac850038  sw          $a1, 0x38($a0)
    ctx->pc = 0x322214u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 5));
    // 0x322218: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x322218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x32221c: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x32221cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x322220: 0x3e00008  jr          $ra
    ctx->pc = 0x322220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322220u;
        // 0x322224: 0xacc30004  sw          $v1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322228u;
    // 0x322228: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x322228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32222c: 0x24860048  addiu       $a2, $a0, 0x48
    ctx->pc = 0x32222cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    // 0x322230: 0xac850040  sw          $a1, 0x40($a0)
    ctx->pc = 0x322230u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 5));
    // 0x322234: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x322234u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322238: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x322238u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x32223c: 0xac850028  sw          $a1, 0x28($a0)
    ctx->pc = 0x32223cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 5));
    // 0x322240: 0xac850030  sw          $a1, 0x30($a0)
    ctx->pc = 0x322240u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 5));
    // 0x322244: 0xac850038  sw          $a1, 0x38($a0)
    ctx->pc = 0x322244u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 5));
    // 0x322248: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x322248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x32224c: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x32224cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x322250: 0x3e00008  jr          $ra
    ctx->pc = 0x322250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322250u;
        // 0x322254: 0xacc30004  sw          $v1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322258u;
}
