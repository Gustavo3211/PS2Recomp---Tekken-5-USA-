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

// Function: sub_0036F2D8
// Address: 0x36f2d8 - 0x36f3a0
void sub_0036F2D8_0x36f2d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036F2D8_0x36f2d8");
#endif

    switch (ctx->pc) {
        case 0x36f2fcu: goto label_36f2fc;
        case 0x36f314u: goto label_36f314;
        default: break;
    }

    ctx->pc = 0x36f2d8u;

    // 0x36f2d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36f2d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36f2dc: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36f2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36f2e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36f2e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36f2e4: 0x24507290  addiu       $s0, $v0, 0x7290
    ctx->pc = 0x36f2e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29328));
    // 0x36f2e8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36f2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D7290u));
    // 0x36f2ec: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36F2ECu;
    {
        const bool branch_taken_0x36f2ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36F2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F2ECu;
        // 0x36f2f0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f2ec) {
            ctx->pc = 0x36F314u;
            goto label_36f314;
        }
    }
    ctx->pc = 0x36F2F4u;
    // 0x36f2f4: 0xc0db706  jal         func_36DC18
    ctx->pc = 0x36F2F4u;
    SET_GPR_U32(ctx, 31, 0x36F2FCu);
    ctx->pc = 0x36DC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36DC18u, 0x36F2F4u, 0x36F2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F2FCu;
label_36f2fc:
    // 0x36f2fc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36f2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36f300: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x36f300u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36f304: 0x24a5fd70  addiu       $a1, $a1, -0x290
    ctx->pc = 0x36f304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966640));
    // 0x36f308: 0x24c67170  addiu       $a2, $a2, 0x7170
    ctx->pc = 0x36f308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29040));
    // 0x36f30c: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36F30Cu;
    SET_GPR_U32(ctx, 31, 0x36F314u);
    ctx->pc = 0x36F310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F30Cu;
    // 0x36f310: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36F30Cu, 0x36F314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F314u;
label_36f314:
    // 0x36f314: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36f314u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f318: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36f318u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36f31c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36f31cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36f320: 0x3e00008  jr          $ra
    ctx->pc = 0x36F320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F320u;
        // 0x36f324: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F328u;
    // 0x36f328: 0x3e00008  jr          $ra
    ctx->pc = 0x36F328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F328u;
        // 0x36f32c: 0x8c820050  lw          $v0, 0x50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F330u;
    // 0x36f330: 0x3e00008  jr          $ra
    ctx->pc = 0x36F330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F338u;
    // 0x36f338: 0x3e00008  jr          $ra
    ctx->pc = 0x36F338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F338u;
        // 0x36f33c: 0x8c820104  lw          $v0, 0x104($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F340u;
    // 0x36f340: 0x8c820104  lw          $v0, 0x104($a0)
    ctx->pc = 0x36f340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x36f344: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x36F344u;
    {
        const bool branch_taken_0x36f344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36f344) {
            ctx->pc = 0x36F348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36F344u;
            // 0x36f348: 0xac850104  sw          $a1, 0x104($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 260), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36F34Cu;
            goto label_36f34c;
        }
    }
    ctx->pc = 0x36F34Cu;
label_36f34c:
    // 0x36f34c: 0x3e00008  jr          $ra
    ctx->pc = 0x36F34Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F34Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F354u;
    // 0x36f354: 0x0  nop
    ctx->pc = 0x36f354u;
    // NOP
    // 0x36f358: 0x3e00008  jr          $ra
    ctx->pc = 0x36F358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F358u;
        // 0x36f35c: 0x8c820108  lw          $v0, 0x108($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 264)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F360u;
    // 0x36f360: 0x8c820108  lw          $v0, 0x108($a0)
    ctx->pc = 0x36f360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 264)));
    // 0x36f364: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x36F364u;
    {
        const bool branch_taken_0x36f364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36f364) {
            ctx->pc = 0x36F368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36F364u;
            // 0x36f368: 0xac850108  sw          $a1, 0x108($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 264), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36F36Cu;
            goto label_36f36c;
        }
    }
    ctx->pc = 0x36F36Cu;
label_36f36c:
    // 0x36f36c: 0x3e00008  jr          $ra
    ctx->pc = 0x36F36Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F36Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F374u;
    // 0x36f374: 0x0  nop
    ctx->pc = 0x36f374u;
    // NOP
    // 0x36f378: 0x3e00008  jr          $ra
    ctx->pc = 0x36F378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F378u;
        // 0x36f37c: 0x8c82010c  lw          $v0, 0x10C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F380u;
    // 0x36f380: 0x8c82010c  lw          $v0, 0x10C($a0)
    ctx->pc = 0x36f380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 268)));
    // 0x36f384: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x36F384u;
    {
        const bool branch_taken_0x36f384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36f384) {
            ctx->pc = 0x36F388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36F384u;
            // 0x36f388: 0xac85010c  sw          $a1, 0x10C($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 268), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36F38Cu;
            goto label_36f38c;
        }
    }
    ctx->pc = 0x36F38Cu;
label_36f38c:
    // 0x36f38c: 0x3e00008  jr          $ra
    ctx->pc = 0x36F38Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F38Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F394u;
    // 0x36f394: 0x0  nop
    ctx->pc = 0x36f394u;
    // NOP
    // 0x36f398: 0x3e00008  jr          $ra
    ctx->pc = 0x36F398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F398u;
        // 0x36f39c: 0x24820054  addiu       $v0, $a0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 84));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F3A0u;
}
