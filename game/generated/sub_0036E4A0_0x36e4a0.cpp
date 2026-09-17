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

// Function: sub_0036E4A0
// Address: 0x36e4a0 - 0x36e5d0
void sub_0036E4A0_0x36e4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036E4A0_0x36e4a0");
#endif

    switch (ctx->pc) {
        case 0x36e4c4u: goto label_36e4c4;
        case 0x36e4dcu: goto label_36e4dc;
        case 0x36e550u: goto label_36e550;
        default: break;
    }

    ctx->pc = 0x36e4a0u;

    // 0x36e4a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36e4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36e4a4: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36e4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36e4a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36e4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36e4ac: 0x245071c0  addiu       $s0, $v0, 0x71C0
    ctx->pc = 0x36e4acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29120));
    // 0x36e4b0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36e4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D71C0u));
    // 0x36e4b4: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36E4B4u;
    {
        const bool branch_taken_0x36e4b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36E4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E4B4u;
        // 0x36e4b8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e4b4) {
            ctx->pc = 0x36E4DCu;
            goto label_36e4dc;
        }
    }
    ctx->pc = 0x36E4BCu;
    // 0x36e4bc: 0xc0db706  jal         func_36DC18
    ctx->pc = 0x36E4BCu;
    SET_GPR_U32(ctx, 31, 0x36E4C4u);
    ctx->pc = 0x36DC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36DC18u, 0x36E4BCu, 0x36E4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E4C4u;
label_36e4c4:
    // 0x36e4c4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36e4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36e4c8: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x36e4c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36e4cc: 0x24a5fb58  addiu       $a1, $a1, -0x4A8
    ctx->pc = 0x36e4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966104));
    // 0x36e4d0: 0x24c67170  addiu       $a2, $a2, 0x7170
    ctx->pc = 0x36e4d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29040));
    // 0x36e4d4: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36E4D4u;
    SET_GPR_U32(ctx, 31, 0x36E4DCu);
    ctx->pc = 0x36E4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E4D4u;
    // 0x36e4d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36E4D4u, 0x36E4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E4DCu;
label_36e4dc:
    // 0x36e4dc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36e4dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e4e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36e4e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36e4e4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36e4e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36e4e8: 0x3e00008  jr          $ra
    ctx->pc = 0x36E4E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E4E8u;
        // 0x36e4ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E4E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E4F0u;
    // 0x36e4f0: 0x3e00008  jr          $ra
    ctx->pc = 0x36E4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E4F0u;
        // 0x36e4f4: 0x8c820050  lw          $v0, 0x50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E4F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E4F8u;
    // 0x36e4f8: 0x3e00008  jr          $ra
    ctx->pc = 0x36E4F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E4F8u;
        // 0x36e4fc: 0xac850050  sw          $a1, 0x50($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E4F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E500u;
    // 0x36e500: 0x3e00008  jr          $ra
    ctx->pc = 0x36E500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E500u;
        // 0x36e504: 0x8c820088  lw          $v0, 0x88($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E508u;
    // 0x36e508: 0x3e00008  jr          $ra
    ctx->pc = 0x36E508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E508u;
        // 0x36e50c: 0x8c82008c  lw          $v0, 0x8C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E510u;
    // 0x36e510: 0x3e00008  jr          $ra
    ctx->pc = 0x36E510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E510u;
        // 0x36e514: 0x8c820090  lw          $v0, 0x90($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E518u;
    // 0x36e518: 0x3e00008  jr          $ra
    ctx->pc = 0x36E518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E518u;
        // 0x36e51c: 0x8c820094  lw          $v0, 0x94($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E520u;
    // 0x36e520: 0x3e00008  jr          $ra
    ctx->pc = 0x36E520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E520u;
        // 0x36e524: 0x8c820054  lw          $v0, 0x54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E528u;
    // 0x36e528: 0x3e00008  jr          $ra
    ctx->pc = 0x36E528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E528u;
        // 0x36e52c: 0xac850054  sw          $a1, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E530u;
    // 0x36e530: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36e530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36e534: 0xac800054  sw          $zero, 0x54($a0)
    ctx->pc = 0x36e534u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
    // 0x36e538: 0x2442eb68  addiu       $v0, $v0, -0x1498
    ctx->pc = 0x36e538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962024));
    // 0x36e53c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x36e53cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x36e540: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x36e540u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x36e544: 0x24820058  addiu       $v0, $a0, 0x58
    ctx->pc = 0x36e544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
    // 0x36e548: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x36e548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x36e54c: 0x0  nop
    ctx->pc = 0x36e54cu;
    // NOP
label_36e550:
    // 0x36e550: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x36e550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x36e554: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x36e554u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x36e558: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x36e558u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x36e55c: 0x0  nop
    ctx->pc = 0x36e55cu;
    // NOP
    // 0x36e560: 0x0  nop
    ctx->pc = 0x36e560u;
    // NOP
    // 0x36e564: 0x1465fffa  bne         $v1, $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36E564u;
    {
        const bool branch_taken_0x36e564 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x36E568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E564u;
        // 0x36e568: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e564) {
            ctx->pc = 0x36E550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36e550;
        }
    }
    ctx->pc = 0x36E56Cu;
    // 0x36e56c: 0xac800094  sw          $zero, 0x94($a0)
    ctx->pc = 0x36e56cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 0));
    // 0x36e570: 0xac800088  sw          $zero, 0x88($a0)
    ctx->pc = 0x36e570u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 0));
    // 0x36e574: 0xac80008c  sw          $zero, 0x8C($a0)
    ctx->pc = 0x36e574u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 0));
    // 0x36e578: 0x3e00008  jr          $ra
    ctx->pc = 0x36E578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E578u;
        // 0x36e57c: 0xac800090  sw          $zero, 0x90($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E580u;
    // 0x36e580: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x36e580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x36e584: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x36E584u;
    {
        const bool branch_taken_0x36e584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36e584) {
            ctx->pc = 0x36E588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36E584u;
            // 0x36e588: 0xac850088  sw          $a1, 0x88($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36E58Cu;
            goto label_36e58c;
        }
    }
    ctx->pc = 0x36E58Cu;
label_36e58c:
    // 0x36e58c: 0x3e00008  jr          $ra
    ctx->pc = 0x36E58Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E58Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E594u;
    // 0x36e594: 0x0  nop
    ctx->pc = 0x36e594u;
    // NOP
    // 0x36e598: 0x8c82008c  lw          $v0, 0x8C($a0)
    ctx->pc = 0x36e598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x36e59c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x36E59Cu;
    {
        const bool branch_taken_0x36e59c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36e59c) {
            ctx->pc = 0x36E5A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36E59Cu;
            // 0x36e5a0: 0xac85008c  sw          $a1, 0x8C($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36E5A4u;
            goto label_36e5a4;
        }
    }
    ctx->pc = 0x36E5A4u;
label_36e5a4:
    // 0x36e5a4: 0x3e00008  jr          $ra
    ctx->pc = 0x36E5A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E5A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E5ACu;
    // 0x36e5ac: 0x0  nop
    ctx->pc = 0x36e5acu;
    // NOP
    // 0x36e5b0: 0x8c820090  lw          $v0, 0x90($a0)
    ctx->pc = 0x36e5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x36e5b4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x36E5B4u;
    {
        const bool branch_taken_0x36e5b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36e5b4) {
            ctx->pc = 0x36E5B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36E5B4u;
            // 0x36e5b8: 0xac850090  sw          $a1, 0x90($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36E5BCu;
            goto label_36e5bc;
        }
    }
    ctx->pc = 0x36E5BCu;
label_36e5bc:
    // 0x36e5bc: 0x3e00008  jr          $ra
    ctx->pc = 0x36E5BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E5BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E5C4u;
    // 0x36e5c4: 0x0  nop
    ctx->pc = 0x36e5c4u;
    // NOP
    // 0x36e5c8: 0x3e00008  jr          $ra
    ctx->pc = 0x36E5C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E5C8u;
        // 0x36e5cc: 0xac850094  sw          $a1, 0x94($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E5C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E5D0u;
}
