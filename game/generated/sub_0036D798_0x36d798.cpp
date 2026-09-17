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

// Function: sub_0036D798
// Address: 0x36d798 - 0x36d830
void sub_0036D798_0x36d798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036D798_0x36d798");
#endif

    switch (ctx->pc) {
        case 0x36d7bcu: goto label_36d7bc;
        case 0x36d7d4u: goto label_36d7d4;
        default: break;
    }

    ctx->pc = 0x36d798u;

    // 0x36d798: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36d798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36d79c: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36d79cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36d7a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36d7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36d7a4: 0x24507120  addiu       $s0, $v0, 0x7120
    ctx->pc = 0x36d7a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 28960));
    // 0x36d7a8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36d7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D7120u));
    // 0x36d7ac: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36D7ACu;
    {
        const bool branch_taken_0x36d7ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36D7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D7ACu;
        // 0x36d7b0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d7ac) {
            ctx->pc = 0x36D7D4u;
            goto label_36d7d4;
        }
    }
    ctx->pc = 0x36D7B4u;
    // 0x36d7b4: 0xc0db706  jal         func_36DC18
    ctx->pc = 0x36D7B4u;
    SET_GPR_U32(ctx, 31, 0x36D7BCu);
    ctx->pc = 0x36DC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36DC18u, 0x36D7B4u, 0x36D7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D7BCu;
label_36d7bc:
    // 0x36d7bc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36d7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36d7c0: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x36d7c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36d7c4: 0x24a5eaa0  addiu       $a1, $a1, -0x1560
    ctx->pc = 0x36d7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961824));
    // 0x36d7c8: 0x24c67170  addiu       $a2, $a2, 0x7170
    ctx->pc = 0x36d7c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29040));
    // 0x36d7cc: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36D7CCu;
    SET_GPR_U32(ctx, 31, 0x36D7D4u);
    ctx->pc = 0x36D7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D7CCu;
    // 0x36d7d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36D7CCu, 0x36D7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D7D4u;
label_36d7d4:
    // 0x36d7d4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36d7d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d7d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36d7d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d7dc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36d7dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36d7e0: 0x3e00008  jr          $ra
    ctx->pc = 0x36D7E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36D7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D7E0u;
        // 0x36d7e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D7E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D7E8u;
    // 0x36d7e8: 0x3e00008  jr          $ra
    ctx->pc = 0x36D7E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36D7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D7E8u;
        // 0x36d7ec: 0x2482005c  addiu       $v0, $a0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 92));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D7E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D7F0u;
    // 0x36d7f0: 0x3e00008  jr          $ra
    ctx->pc = 0x36D7F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36D7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D7F0u;
        // 0x36d7f4: 0x8c820074  lw          $v0, 0x74($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D7F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D7F8u;
    // 0x36d7f8: 0x3e00008  jr          $ra
    ctx->pc = 0x36D7F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36D7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D7F8u;
        // 0x36d7fc: 0x8c820078  lw          $v0, 0x78($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D7F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D800u;
    // 0x36d800: 0x3e00008  jr          $ra
    ctx->pc = 0x36D800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36D804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D800u;
        // 0x36d804: 0x8c82007c  lw          $v0, 0x7C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D808u;
    // 0x36d808: 0x3e00008  jr          $ra
    ctx->pc = 0x36D808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36D80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D808u;
        // 0x36d80c: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D810u;
    // 0x36d810: 0x3e00008  jr          $ra
    ctx->pc = 0x36D810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36D814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D810u;
        // 0x36d814: 0x8c820058  lw          $v0, 0x58($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D818u;
    // 0x36d818: 0x3e00008  jr          $ra
    ctx->pc = 0x36D818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36D81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D818u;
        // 0x36d81c: 0xac850054  sw          $a1, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D820u;
    // 0x36d820: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x36d820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x36d824: 0xac80008c  sw          $zero, 0x8C($a0)
    ctx->pc = 0x36d824u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 0));
    // 0x36d828: 0x3e00008  jr          $ra
    ctx->pc = 0x36D828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36D82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D828u;
        // 0x36d82c: 0xac820048  sw          $v0, 0x48($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D830u;
}
