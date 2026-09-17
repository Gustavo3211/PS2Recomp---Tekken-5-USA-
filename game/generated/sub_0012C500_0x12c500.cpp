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

// Function: sub_0012C500
// Address: 0x12c500 - 0x12c610
void sub_0012C500_0x12c500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012C500_0x12c500");
#endif

    switch (ctx->pc) {
        case 0x12c540u: goto label_12c540;
        case 0x12c584u: goto label_12c584;
        case 0x12c5c0u: goto label_12c5c0;
        default: break;
    }

    ctx->pc = 0x12c500u;

    // 0x12c500: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12c500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12c504: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12c504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12c508: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12c508u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c50c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x12c50cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x12c510: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x12c510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x12c514: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x12C514u;
    {
        const bool branch_taken_0x12c514 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12c514) {
            ctx->pc = 0x12C518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C514u;
            // 0x12c518: 0x8c620038  lw          $v0, 0x38($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C530u;
            goto label_12c530;
        }
    }
    ctx->pc = 0x12C51Cu;
    // 0x12c51c: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x12c51cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x12c520: 0x8c434728  lw          $v1, 0x4728($v0)
    ctx->pc = 0x12c520u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x134728u));
    // 0x12c524: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x12c524u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x12c528: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x12c528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x12c52c: 0x0  nop
    ctx->pc = 0x12c52cu;
    // NOP
label_12c530:
    // 0x12c530: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x12C530u;
    {
        const bool branch_taken_0x12c530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12c530) {
            ctx->pc = 0x12C534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C530u;
            // 0x12c534: 0x9604000c  lhu         $a0, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C544u;
            goto label_12c544;
        }
    }
    ctx->pc = 0x12C538u;
    // 0x12c538: 0xc04b774  jal         func_12DDD0
    ctx->pc = 0x12C538u;
    SET_GPR_U32(ctx, 31, 0x12C540u);
    ctx->pc = 0x12C53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C538u;
    // 0x12c53c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DDD0u, 0x12C538u, 0x12C540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C540u;
label_12c540:
    // 0x12c540: 0x9604000c  lhu         $a0, 0xC($s0)
    ctx->pc = 0x12c540u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_12c544:
    // 0x12c544: 0x30820008  andi        $v0, $a0, 0x8
    ctx->pc = 0x12c544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x12c548: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x12C548u;
    {
        const bool branch_taken_0x12c548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12c548) {
            ctx->pc = 0x12C54Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C548u;
            // 0x12c54c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C5B0u;
            goto label_12c5b0;
        }
    }
    ctx->pc = 0x12C550u;
    // 0x12c550: 0x30830010  andi        $v1, $a0, 0x10
    ctx->pc = 0x12c550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x12c554: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x12C554u;
    {
        const bool branch_taken_0x12c554 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C554u;
        // 0x12c558: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c554) {
            ctx->pc = 0x12C5FCu;
            goto label_12c5fc;
        }
    }
    ctx->pc = 0x12C55Cu;
    // 0x12c55c: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x12c55cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x12c560: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x12C560u;
    {
        const bool branch_taken_0x12c560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c560) {
            ctx->pc = 0x12C564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C560u;
            // 0x12c564: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C5A8u;
            goto label_12c5a8;
        }
    }
    ctx->pc = 0x12C568u;
    // 0x12c568: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x12c568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x12c56c: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x12C56Cu;
    {
        const bool branch_taken_0x12c56c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C56Cu;
        // 0x12c570: 0x26020040  addiu       $v0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c56c) {
            ctx->pc = 0x12C58Cu;
            goto label_12c58c;
        }
    }
    ctx->pc = 0x12C574u;
    // 0x12c574: 0x50a20005  beql        $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12C574u;
    {
        const bool branch_taken_0x12c574 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x12c574) {
            ctx->pc = 0x12C578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C574u;
            // 0x12c578: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C58Cu;
            goto label_12c58c;
        }
    }
    ctx->pc = 0x12C57Cu;
    // 0x12c57c: 0xc04b798  jal         func_12DE60
    ctx->pc = 0x12C57Cu;
    SET_GPR_U32(ctx, 31, 0x12C584u);
    ctx->pc = 0x12C580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C57Cu;
    // 0x12c580: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DE60u, 0x12C57Cu, 0x12C584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C584u;
label_12c584:
    // 0x12c584: 0x9604000c  lhu         $a0, 0xC($s0)
    ctx->pc = 0x12c584u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x12c588: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x12c588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_12c58c:
    // 0x12c58c: 0x2402ffdb  addiu       $v0, $zero, -0x25
    ctx->pc = 0x12c58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967259));
    // 0x12c590: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x12c590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x12c594: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x12c594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x12c598: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x12c598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x12c59c: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x12c59cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x12c5a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12c5a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c5a4: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x12c5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_12c5a8:
    // 0x12c5a8: 0x34820008  ori         $v0, $a0, 0x8
    ctx->pc = 0x12c5a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x12c5ac: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x12c5acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_12c5b0:
    // 0x12c5b0: 0x54a00004  bnel        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x12C5B0u;
    {
        const bool branch_taken_0x12c5b0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x12c5b0) {
            ctx->pc = 0x12C5B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C5B0u;
            // 0x12c5b4: 0x9603000c  lhu         $v1, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C5C4u;
            goto label_12c5c4;
        }
    }
    ctx->pc = 0x12C5B8u;
    // 0x12c5b8: 0xc04ba0a  jal         func_12E828
    ctx->pc = 0x12C5B8u;
    SET_GPR_U32(ctx, 31, 0x12C5C0u);
    ctx->pc = 0x12C5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C5B8u;
    // 0x12c5bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E828u, 0x12C5B8u, 0x12C5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C5C0u;
label_12c5c0:
    // 0x12c5c0: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x12c5c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_12c5c4:
    // 0x12c5c4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x12c5c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x12c5c8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12C5C8u;
    {
        const bool branch_taken_0x12c5c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C5C8u;
        // 0x12c5cc: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c5c8) {
            ctx->pc = 0x12C5E8u;
            goto label_12c5e8;
        }
    }
    ctx->pc = 0x12C5D0u;
    // 0x12c5d0: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x12c5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x12c5d4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x12c5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x12c5d8: 0x21023  negu        $v0, $v0
    ctx->pc = 0x12c5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x12c5dc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x12C5DCu;
    {
        const bool branch_taken_0x12c5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C5DCu;
        // 0x12c5e0: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c5dc) {
            ctx->pc = 0x12C5F8u;
            goto label_12c5f8;
        }
    }
    ctx->pc = 0x12C5E4u;
    // 0x12c5e4: 0x0  nop
    ctx->pc = 0x12c5e4u;
    // NOP
label_12c5e8:
    // 0x12c5e8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x12C5E8u;
    {
        const bool branch_taken_0x12c5e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C5E8u;
        // 0x12c5ec: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c5e8) {
            ctx->pc = 0x12C5F4u;
            goto label_12c5f4;
        }
    }
    ctx->pc = 0x12C5F0u;
    // 0x12c5f0: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x12c5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_12c5f4:
    // 0x12c5f4: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x12c5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_12c5f8:
    // 0x12c5f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12c5f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12c5fc:
    // 0x12c5fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12c5fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c600: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x12c600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12c604: 0x3e00008  jr          $ra
    ctx->pc = 0x12C604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C604u;
        // 0x12c608: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C60Cu;
    // 0x12c60c: 0x0  nop
    ctx->pc = 0x12c60cu;
    // NOP
    ctx->pc = 0x12c610u;
}
