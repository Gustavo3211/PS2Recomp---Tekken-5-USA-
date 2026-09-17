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

// Function: sub_002416B8
// Address: 0x2416b8 - 0x241760
void sub_002416B8_0x2416b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002416B8_0x2416b8");
#endif

    ctx->pc = 0x2416b8u;

    // 0x2416b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2416b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2416bc: 0x10820016  beq         $a0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2416BCu;
    {
        const bool branch_taken_0x2416bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2416C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2416BCu;
        // 0x2416c0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2416bc) {
            ctx->pc = 0x241718u;
            goto label_241718;
        }
    }
    ctx->pc = 0x2416C4u;
    // 0x2416c4: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x2416c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2416c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2416C8u;
    {
        const bool branch_taken_0x2416c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2416CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2416C8u;
        // 0x2416cc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2416c8) {
            ctx->pc = 0x2416E0u;
            goto label_2416e0;
        }
    }
    ctx->pc = 0x2416D0u;
    // 0x2416d0: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2416D0u;
    {
        const bool branch_taken_0x2416d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2416d0) {
            ctx->pc = 0x2416D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2416D0u;
            // 0x2416d4: 0x511c0  sll         $v0, $a1, 7 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x241700u;
            goto label_241700;
        }
    }
    ctx->pc = 0x2416D8u;
    // 0x2416d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2416D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2416DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2416D8u;
        // 0x2416dc: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2416D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2416E0u;
label_2416e0:
    // 0x2416e0: 0x10820013  beq         $a0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2416E0u;
    {
        const bool branch_taken_0x2416e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2416E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2416E0u;
        // 0x2416e4: 0x511c0  sll         $v0, $a1, 7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2416e0) {
            ctx->pc = 0x241730u;
            goto label_241730;
        }
    }
    ctx->pc = 0x2416E8u;
    // 0x2416e8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2416e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2416ec: 0x50820016  beql        $a0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2416ECu;
    {
        const bool branch_taken_0x2416ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2416ec) {
            ctx->pc = 0x2416F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2416ECu;
            // 0x2416f0: 0x511c0  sll         $v0, $a1, 7 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x241748u;
            goto label_241748;
        }
    }
    ctx->pc = 0x2416F4u;
    // 0x2416f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2416F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2416F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2416F4u;
        // 0x2416f8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2416F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2416FCu;
    // 0x2416fc: 0x0  nop
    ctx->pc = 0x2416fcu;
    // NOP
label_241700:
    // 0x241700: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x241700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x241704: 0x24633b30  addiu       $v1, $v1, 0x3B30
    ctx->pc = 0x241704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15152));
    // 0x241708: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x241708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24170c: 0x3e00008  jr          $ra
    ctx->pc = 0x24170Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24170Cu;
        // 0x241710: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24170Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x241714u;
    // 0x241714: 0x0  nop
    ctx->pc = 0x241714u;
    // NOP
label_241718:
    // 0x241718: 0x511c0  sll         $v0, $a1, 7
    ctx->pc = 0x241718u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
    // 0x24171c: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x24171cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x241720: 0x24634a30  addiu       $v1, $v1, 0x4A30
    ctx->pc = 0x241720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18992));
    // 0x241724: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x241724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x241728: 0x3e00008  jr          $ra
    ctx->pc = 0x241728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24172Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241728u;
        // 0x24172c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x241728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x241730u;
label_241730:
    // 0x241730: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x241730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x241734: 0x24634e30  addiu       $v1, $v1, 0x4E30
    ctx->pc = 0x241734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20016));
    // 0x241738: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x241738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24173c: 0x3e00008  jr          $ra
    ctx->pc = 0x24173Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24173Cu;
        // 0x241740: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24173Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x241744u;
    // 0x241744: 0x0  nop
    ctx->pc = 0x241744u;
    // NOP
label_241748:
    // 0x241748: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x241748u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x24174c: 0x24635230  addiu       $v1, $v1, 0x5230
    ctx->pc = 0x24174cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21040));
    // 0x241750: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x241750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x241754: 0x3e00008  jr          $ra
    ctx->pc = 0x241754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241754u;
        // 0x241758: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x241754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24175Cu;
    // 0x24175c: 0x0  nop
    ctx->pc = 0x24175cu;
    // NOP
    ctx->pc = 0x241760u;
}
