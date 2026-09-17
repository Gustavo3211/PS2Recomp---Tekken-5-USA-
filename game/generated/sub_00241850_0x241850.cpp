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

// Function: sub_00241850
// Address: 0x241850 - 0x241920
void sub_00241850_0x241850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00241850_0x241850");
#endif

    ctx->pc = 0x241850u;

    // 0x241850: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x241850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x241854: 0x1082001a  beq         $a0, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x241854u;
    {
        const bool branch_taken_0x241854 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x241858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241854u;
        // 0x241858: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241854) {
            ctx->pc = 0x2418C0u;
            goto label_2418c0;
        }
    }
    ctx->pc = 0x24185Cu;
    // 0x24185c: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x24185cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x241860: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x241860u;
    {
        const bool branch_taken_0x241860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x241864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241860u;
        // 0x241864: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241860) {
            ctx->pc = 0x241878u;
            goto label_241878;
        }
    }
    ctx->pc = 0x241868u;
    // 0x241868: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x241868u;
    {
        const bool branch_taken_0x241868 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x241868) {
            ctx->pc = 0x24186Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241868u;
            // 0x24186c: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x241898u;
            goto label_241898;
        }
    }
    ctx->pc = 0x241870u;
    // 0x241870: 0x3e00008  jr          $ra
    ctx->pc = 0x241870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241870u;
        // 0x241874: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x241870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x241878u;
label_241878:
    // 0x241878: 0x10820019  beq         $a0, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x241878u;
    {
        const bool branch_taken_0x241878 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x24187Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241878u;
        // 0x24187c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241878) {
            ctx->pc = 0x2418E0u;
            goto label_2418e0;
        }
    }
    ctx->pc = 0x241880u;
    // 0x241880: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x241880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x241884: 0x5082001e  beql        $a0, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x241884u;
    {
        const bool branch_taken_0x241884 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x241884) {
            ctx->pc = 0x241888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241884u;
            // 0x241888: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x241900u;
            goto label_241900;
        }
    }
    ctx->pc = 0x24188Cu;
    // 0x24188c: 0x3e00008  jr          $ra
    ctx->pc = 0x24188Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24188Cu;
        // 0x241890: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24188Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x241894u;
    // 0x241894: 0x0  nop
    ctx->pc = 0x241894u;
    // NOP
label_241898:
    // 0x241898: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x241898u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x24189c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24189cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2418a0: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2418a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2418a4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2418a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2418a8: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x2418a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x2418ac: 0x24635630  addiu       $v1, $v1, 0x5630
    ctx->pc = 0x2418acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22064));
    // 0x2418b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2418b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2418b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2418B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2418B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2418B4u;
        // 0x2418b8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2418B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2418BCu;
    // 0x2418bc: 0x0  nop
    ctx->pc = 0x2418bcu;
    // NOP
label_2418c0:
    // 0x2418c0: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x2418c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2418c4: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2418c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2418c8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2418c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2418cc: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x2418ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x2418d0: 0x24635c88  addiu       $v1, $v1, 0x5C88
    ctx->pc = 0x2418d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23688));
    // 0x2418d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2418d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2418d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2418D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2418DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2418D8u;
        // 0x2418dc: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2418D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2418E0u;
label_2418e0:
    // 0x2418e0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2418e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2418e4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2418e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2418e8: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x2418e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x2418ec: 0x24635cf8  addiu       $v1, $v1, 0x5CF8
    ctx->pc = 0x2418ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23800));
    // 0x2418f0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2418f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2418f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2418F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2418F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2418F4u;
        // 0x2418f8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2418F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2418FCu;
    // 0x2418fc: 0x0  nop
    ctx->pc = 0x2418fcu;
    // NOP
label_241900:
    // 0x241900: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x241900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x241904: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x241904u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x241908: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x241908u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x24190c: 0x24635d48  addiu       $v1, $v1, 0x5D48
    ctx->pc = 0x24190cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23880));
    // 0x241910: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x241910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x241914: 0x3e00008  jr          $ra
    ctx->pc = 0x241914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241914u;
        // 0x241918: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x241914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24191Cu;
    // 0x24191c: 0x0  nop
    ctx->pc = 0x24191cu;
    // NOP
    ctx->pc = 0x241920u;
}
