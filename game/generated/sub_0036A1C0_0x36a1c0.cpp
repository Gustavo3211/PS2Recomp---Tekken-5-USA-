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

// Function: sub_0036A1C0
// Address: 0x36a1c0 - 0x36a290
void sub_0036A1C0_0x36a1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036A1C0_0x36a1c0");
#endif

    switch (ctx->pc) {
        case 0x36a1e4u: goto label_36a1e4;
        case 0x36a208u: goto label_36a208;
        default: break;
    }

    ctx->pc = 0x36a1c0u;

    // 0x36a1c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36a1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36a1c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36a1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36a1c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36a1c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a1cc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x36a1ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x36a1d0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36a1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36a1d4: 0x2442d840  addiu       $v0, $v0, -0x27C0
    ctx->pc = 0x36a1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957120));
    // 0x36a1d8: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x36a1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x36a1dc: 0xc0be9a6  jal         func_2FA698
    ctx->pc = 0x36A1DCu;
    SET_GPR_U32(ctx, 31, 0x36A1E4u);
    ctx->pc = 0x36A1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A1DCu;
    // 0x36a1e0: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA698u, 0x36A1DCu, 0x36A1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A1E4u;
label_36a1e4:
    // 0x36a1e4: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x36a1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
    // 0x36a1e8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x36A1E8u;
    {
        const bool branch_taken_0x36a1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A1E8u;
        // 0x36a1ec: 0xae000070  sw          $zero, 0x70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a1e8) {
            ctx->pc = 0x36A208u;
            goto label_36a208;
        }
    }
    ctx->pc = 0x36A1F0u;
    // 0x36a1f0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36a1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36a1f4: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x36a1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x36a1f8: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x36a1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x36a1fc: 0x2484fc50  addiu       $a0, $a0, -0x3B0
    ctx->pc = 0x36a1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966352));
    // 0x36a200: 0xc048b90  jal         func_122E40
    ctx->pc = 0x36A200u;
    SET_GPR_U32(ctx, 31, 0x36A208u);
    ctx->pc = 0x36A204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A200u;
    // 0x36a204: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x36A200u, 0x36A208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A208u;
label_36a208:
    // 0x36a208: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36a208u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36a20c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36a20cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36a210: 0x3e00008  jr          $ra
    ctx->pc = 0x36A210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A210u;
        // 0x36a214: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A218u;
    // 0x36a218: 0x3e00008  jr          $ra
    ctx->pc = 0x36A218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A218u;
        // 0x36a21c: 0xac850050  sw          $a1, 0x50($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A220u;
    // 0x36a220: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x36a220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x36a224: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x36A224u;
    {
        const bool branch_taken_0x36a224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a224) {
            ctx->pc = 0x36A228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36A224u;
            // 0x36a228: 0xac850054  sw          $a1, 0x54($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36A22Cu;
            goto label_36a22c;
        }
    }
    ctx->pc = 0x36A22Cu;
label_36a22c:
    // 0x36a22c: 0x3e00008  jr          $ra
    ctx->pc = 0x36A22Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A22Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A234u;
    // 0x36a234: 0x0  nop
    ctx->pc = 0x36a234u;
    // NOP
    // 0x36a238: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x36a238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x36a23c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x36A23Cu;
    {
        const bool branch_taken_0x36a23c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a23c) {
            ctx->pc = 0x36A240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36A23Cu;
            // 0x36a240: 0xac850058  sw          $a1, 0x58($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36A244u;
            goto label_36a244;
        }
    }
    ctx->pc = 0x36A244u;
label_36a244:
    // 0x36a244: 0x3e00008  jr          $ra
    ctx->pc = 0x36A244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A24Cu;
    // 0x36a24c: 0x0  nop
    ctx->pc = 0x36a24cu;
    // NOP
    // 0x36a250: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x36a250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x36a254: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x36A254u;
    {
        const bool branch_taken_0x36a254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a254) {
            ctx->pc = 0x36A258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36A254u;
            // 0x36a258: 0xac85005c  sw          $a1, 0x5C($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36A25Cu;
            goto label_36a25c;
        }
    }
    ctx->pc = 0x36A25Cu;
label_36a25c:
    // 0x36a25c: 0x3e00008  jr          $ra
    ctx->pc = 0x36A25Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A25Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A264u;
    // 0x36a264: 0x0  nop
    ctx->pc = 0x36a264u;
    // NOP
    // 0x36a268: 0x3e00008  jr          $ra
    ctx->pc = 0x36A268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A268u;
        // 0x36a26c: 0xac850078  sw          $a1, 0x78($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A270u;
    // 0x36a270: 0x3e00008  jr          $ra
    ctx->pc = 0x36A270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A270u;
        // 0x36a274: 0x8c820078  lw          $v0, 0x78($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A278u;
    // 0x36a278: 0x3e00008  jr          $ra
    ctx->pc = 0x36A278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A278u;
        // 0x36a27c: 0x8c820070  lw          $v0, 0x70($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A280u;
    // 0x36a280: 0x3e00008  jr          $ra
    ctx->pc = 0x36A280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A280u;
        // 0x36a284: 0xac85007c  sw          $a1, 0x7C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A288u;
    // 0x36a288: 0x3e00008  jr          $ra
    ctx->pc = 0x36A288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A288u;
        // 0x36a28c: 0x8c82007c  lw          $v0, 0x7C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A290u;
}
