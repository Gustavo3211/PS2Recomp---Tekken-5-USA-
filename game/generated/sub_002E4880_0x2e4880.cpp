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

// Function: sub_002E4880
// Address: 0x2e4880 - 0x2e4ae0
void sub_002E4880_0x2e4880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4880_0x2e4880");
#endif

    switch (ctx->pc) {
        case 0x2e4918u: goto label_2e4918;
        case 0x2e4a18u: goto label_2e4a18;
        case 0x2e4a28u: goto label_2e4a28;
        case 0x2e4a38u: goto label_2e4a38;
        default: break;
    }

    ctx->pc = 0x2e4880u;

    // 0x2e4880: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e4880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e4884: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2e4884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2e4888: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2e4888u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e488c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2e488cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2e4890: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2e4890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2e4894: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2e4894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2e4898: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2e4898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x2e489c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2e489cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x2e48a0: 0x8c92005c  lw          $s2, 0x5C($a0)
    ctx->pc = 0x2e48a0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x2e48a4: 0x8c850058  lw          $a1, 0x58($a0)
    ctx->pc = 0x2e48a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x2e48a8: 0x8e420898  lw          $v0, 0x898($s2)
    ctx->pc = 0x2e48a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2200)));
    // 0x2e48ac: 0x9444006c  lhu         $a0, 0x6C($v0)
    ctx->pc = 0x2e48acu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x2e48b0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2e48b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2e48b4: 0x2c830006  sltiu       $v1, $a0, 0x6
    ctx->pc = 0x2e48b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2e48b8: 0x8e420898  lw          $v0, 0x898($s2)
    ctx->pc = 0x2e48b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2200)));
    // 0x2e48bc: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2E48BCu;
    {
        const bool branch_taken_0x2e48bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E48C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E48BCu;
        // 0x2e48c0: 0x8c540048  lw          $s4, 0x48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e48bc) {
            ctx->pc = 0x2E4904u;
            goto label_2e4904;
        }
    }
    ctx->pc = 0x2E48C4u;
    // 0x2e48c4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2e48c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2e48c8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2e48c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2e48cc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2e48ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e48d0: 0x8c63fd30  lw          $v1, -0x2D0($v1)
    ctx->pc = 0x2e48d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294966576)));
    // 0x2e48d4: 0x600008  jr          $v1
    ctx->pc = 0x2E48D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2E48E0u: goto label_2e48e0;
            case 0x2E48E8u: goto label_2e48e8;
            case 0x2E48F0u: goto label_2e48f0;
            case 0x2E48F8u: goto label_2e48f8;
            case 0x2E4900u: goto label_2e4900;
            case 0x2E4904u: goto label_2e4904;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E48D4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2E48DCu;
    // 0x2e48dc: 0x0  nop
    ctx->pc = 0x2e48dcu;
    // NOP
label_2e48e0:
    // 0x2e48e0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E48E0u;
    {
        const bool branch_taken_0x2e48e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E48E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E48E0u;
        // 0x2e48e4: 0x24130012  addiu       $s3, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e48e0) {
            ctx->pc = 0x2E4904u;
            goto label_2e4904;
        }
    }
    ctx->pc = 0x2E48E8u;
label_2e48e8:
    // 0x2e48e8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E48E8u;
    {
        const bool branch_taken_0x2e48e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E48ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E48E8u;
        // 0x2e48ec: 0x2413000f  addiu       $s3, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e48e8) {
            ctx->pc = 0x2E4904u;
            goto label_2e4904;
        }
    }
    ctx->pc = 0x2E48F0u;
label_2e48f0:
    // 0x2e48f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E48F0u;
    {
        const bool branch_taken_0x2e48f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E48F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E48F0u;
        // 0x2e48f4: 0x24130013  addiu       $s3, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e48f0) {
            ctx->pc = 0x2E4904u;
            goto label_2e4904;
        }
    }
    ctx->pc = 0x2E48F8u;
label_2e48f8:
    // 0x2e48f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E48F8u;
    {
        const bool branch_taken_0x2e48f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E48FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E48F8u;
        // 0x2e48fc: 0x2413000e  addiu       $s3, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e48f8) {
            ctx->pc = 0x2E4904u;
            goto label_2e4904;
        }
    }
    ctx->pc = 0x2E4900u;
label_2e4900:
    // 0x2e4900: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2e4900u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e4904:
    // 0x2e4904: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E4904u;
    {
        const bool branch_taken_0x2e4904 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e4904) {
            ctx->pc = 0x2E4920u;
            goto label_2e4920;
        }
    }
    ctx->pc = 0x2E490Cu;
    // 0x2e490c: 0x24040052  addiu       $a0, $zero, 0x52
    ctx->pc = 0x2e490cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x2e4910: 0xc08b87a  jal         func_22E1E8
    ctx->pc = 0x2E4910u;
    SET_GPR_U32(ctx, 31, 0x2E4918u);
    ctx->pc = 0x2E4914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4910u;
    // 0x2e4914: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E1E8u, 0x2E4910u, 0x2E4918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4918u;
label_2e4918:
    // 0x2e4918: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x2E4918u;
    {
        const bool branch_taken_0x2e4918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E491Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4918u;
        // 0x2e491c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4918) {
            ctx->pc = 0x2E4AC4u;
            goto label_2e4ac4;
        }
    }
    ctx->pc = 0x2E4920u;
label_2e4920:
    // 0x2e4920: 0x14800015  bnez        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2E4920u;
    {
        const bool branch_taken_0x2e4920 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E4924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4920u;
        // 0x2e4924: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4920) {
            ctx->pc = 0x2E4978u;
            goto label_2e4978;
        }
    }
    ctx->pc = 0x2E4928u;
    // 0x2e4928: 0x8e430048  lw          $v1, 0x48($s2)
    ctx->pc = 0x2e4928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x2e492c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e492cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e4930: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2E4930u;
    {
        const bool branch_taken_0x2e4930 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E4934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4930u;
        // 0x2e4934: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4930) {
            ctx->pc = 0x2E496Cu;
            goto label_2e496c;
        }
    }
    ctx->pc = 0x2E4938u;
    // 0x2e4938: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2e4938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2e493c: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E493Cu;
    {
        const bool branch_taken_0x2e493c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E4940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E493Cu;
        // 0x2e4940: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e493c) {
            ctx->pc = 0x2E496Cu;
            goto label_2e496c;
        }
    }
    ctx->pc = 0x2E4944u;
    // 0x2e4944: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2e4944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2e4948: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E4948u;
    {
        const bool branch_taken_0x2e4948 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E494Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4948u;
        // 0x2e494c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4948) {
            ctx->pc = 0x2E496Cu;
            goto label_2e496c;
        }
    }
    ctx->pc = 0x2E4950u;
    // 0x2e4950: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2e4950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e4954: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E4954u;
    {
        const bool branch_taken_0x2e4954 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E4958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4954u;
        // 0x2e4958: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4954) {
            ctx->pc = 0x2E496Cu;
            goto label_2e496c;
        }
    }
    ctx->pc = 0x2E495Cu;
    // 0x2e495c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2e495cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2e4960: 0x5462002b  bnel        $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2E4960u;
    {
        const bool branch_taken_0x2e4960 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e4960) {
            ctx->pc = 0x2E4964u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E4960u;
            // 0x2e4964: 0x24040052  addiu       $a0, $zero, 0x52 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E4A10u;
            goto label_2e4a10;
        }
    }
    ctx->pc = 0x2E4968u;
    // 0x2e4968: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2e4968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2e496c:
    // 0x2e496c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2E496Cu;
    {
        const bool branch_taken_0x2e496c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E496Cu;
        // 0x2e4970: 0x24040012  addiu       $a0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e496c) {
            ctx->pc = 0x2E4A04u;
            goto label_2e4a04;
        }
    }
    ctx->pc = 0x2E4974u;
    // 0x2e4974: 0x0  nop
    ctx->pc = 0x2e4974u;
    // NOP
label_2e4978:
    // 0x2e4978: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2e4978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e497c: 0x1486000c  bne         $a0, $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x2E497Cu;
    {
        const bool branch_taken_0x2e497c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x2E4980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E497Cu;
        // 0x2e4980: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e497c) {
            ctx->pc = 0x2E49B0u;
            goto label_2e49b0;
        }
    }
    ctx->pc = 0x2E4984u;
    // 0x2e4984: 0x8e430048  lw          $v1, 0x48($s2)
    ctx->pc = 0x2e4984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x2e4988: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2e4988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2e498c: 0x14620020  bne         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2E498Cu;
    {
        const bool branch_taken_0x2e498c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E4990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E498Cu;
        // 0x2e4990: 0x24040052  addiu       $a0, $zero, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e498c) {
            ctx->pc = 0x2E4A10u;
            goto label_2e4a10;
        }
    }
    ctx->pc = 0x2E4994u;
    // 0x2e4994: 0x94a30002  lhu         $v1, 0x2($a1)
    ctx->pc = 0x2e4994u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2e4998: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x2e4998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2e499c: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2E499Cu;
    {
        const bool branch_taken_0x2e499c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e499c) {
            ctx->pc = 0x2E4A20u;
            goto label_2e4a20;
        }
    }
    ctx->pc = 0x2E49A4u;
    // 0x2e49a4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2E49A4u;
    {
        const bool branch_taken_0x2e49a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e49a4) {
            ctx->pc = 0x2E4A10u;
            goto label_2e4a10;
        }
    }
    ctx->pc = 0x2E49ACu;
    // 0x2e49ac: 0x0  nop
    ctx->pc = 0x2e49acu;
    // NOP
label_2e49b0:
    // 0x2e49b0: 0x1482000b  bne         $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E49B0u;
    {
        const bool branch_taken_0x2e49b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E49B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E49B0u;
        // 0x2e49b4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e49b0) {
            ctx->pc = 0x2E49E0u;
            goto label_2e49e0;
        }
    }
    ctx->pc = 0x2E49B8u;
    // 0x2e49b8: 0x8e430048  lw          $v1, 0x48($s2)
    ctx->pc = 0x2e49b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x2e49bc: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2e49bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2e49c0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E49C0u;
    {
        const bool branch_taken_0x2e49c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E49C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E49C0u;
        // 0x2e49c4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e49c0) {
            ctx->pc = 0x2E49D4u;
            goto label_2e49d4;
        }
    }
    ctx->pc = 0x2E49C8u;
    // 0x2e49c8: 0x54640011  bnel        $v1, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2E49C8u;
    {
        const bool branch_taken_0x2e49c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2e49c8) {
            ctx->pc = 0x2E49CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E49C8u;
            // 0x2e49cc: 0x24040052  addiu       $a0, $zero, 0x52 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E4A10u;
            goto label_2e4a10;
        }
    }
    ctx->pc = 0x2E49D0u;
    // 0x2e49d0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2e49d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2e49d4:
    // 0x2e49d4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E49D4u;
    {
        const bool branch_taken_0x2e49d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E49D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E49D4u;
        // 0x2e49d8: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e49d4) {
            ctx->pc = 0x2E4A04u;
            goto label_2e4a04;
        }
    }
    ctx->pc = 0x2E49DCu;
    // 0x2e49dc: 0x0  nop
    ctx->pc = 0x2e49dcu;
    // NOP
label_2e49e0:
    // 0x2e49e0: 0x1482000f  bne         $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2E49E0u;
    {
        const bool branch_taken_0x2e49e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E49E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E49E0u;
        // 0x2e49e4: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e49e0) {
            ctx->pc = 0x2E4A20u;
            goto label_2e4a20;
        }
    }
    ctx->pc = 0x2E49E8u;
    // 0x2e49e8: 0x8e430048  lw          $v1, 0x48($s2)
    ctx->pc = 0x2e49e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x2e49ec: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E49ECu;
    {
        const bool branch_taken_0x2e49ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E49F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E49ECu;
        // 0x2e49f0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e49ec) {
            ctx->pc = 0x2E4A00u;
            goto label_2e4a00;
        }
    }
    ctx->pc = 0x2E49F4u;
    // 0x2e49f4: 0x14660006  bne         $v1, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E49F4u;
    {
        const bool branch_taken_0x2e49f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x2E49F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E49F4u;
        // 0x2e49f8: 0x24040052  addiu       $a0, $zero, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e49f4) {
            ctx->pc = 0x2E4A10u;
            goto label_2e4a10;
        }
    }
    ctx->pc = 0x2E49FCu;
    // 0x2e49fc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2e49fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2e4a00:
    // 0x2e4a00: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x2e4a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_2e4a04:
    // 0x2e4a04: 0x94430002  lhu         $v1, 0x2($v0)
    ctx->pc = 0x2e4a04u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2e4a08: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E4A08u;
    {
        const bool branch_taken_0x2e4a08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2E4A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4A08u;
        // 0x2e4a0c: 0x24040052  addiu       $a0, $zero, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4a08) {
            ctx->pc = 0x2E4A20u;
            goto label_2e4a20;
        }
    }
    ctx->pc = 0x2E4A10u;
label_2e4a10:
    // 0x2e4a10: 0xc08b87a  jal         func_22E1E8
    ctx->pc = 0x2E4A10u;
    SET_GPR_U32(ctx, 31, 0x2E4A18u);
    ctx->pc = 0x2E4A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4A10u;
    // 0x2e4a14: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E1E8u, 0x2E4A10u, 0x2E4A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4A18u;
label_2e4a18:
    // 0x2e4a18: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2E4A18u;
    {
        const bool branch_taken_0x2e4a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4A18u;
        // 0x2e4a1c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4a18) {
            ctx->pc = 0x2E4AC4u;
            goto label_2e4ac4;
        }
    }
    ctx->pc = 0x2E4A20u;
label_2e4a20:
    // 0x2e4a20: 0x12600021  beqz        $s3, . + 4 + (0x21 << 2)
    ctx->pc = 0x2E4A20u;
    {
        const bool branch_taken_0x2e4a20 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4A20u;
        // 0x2e4a24: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4a20) {
            ctx->pc = 0x2E4AA8u;
            goto label_2e4aa8;
        }
    }
    ctx->pc = 0x2E4A28u;
label_2e4a28:
    // 0x2e4a28: 0x118180  sll         $s0, $s1, 6
    ctx->pc = 0x2e4a28u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x2e4a2c: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x2e4a2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x2e4a30: 0xc0849c0  jal         func_212700
    ctx->pc = 0x2E4A30u;
    SET_GPR_U32(ctx, 31, 0x2E4A38u);
    ctx->pc = 0x2E4A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4A30u;
    // 0x2e4a34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212700u, 0x2E4A30u, 0x2E4A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4A38u;
label_2e4a38:
    // 0x2e4a38: 0x112040  sll         $a0, $s1, 1
    ctx->pc = 0x2e4a38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x2e4a3c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2e4a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e4a40: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x2e4a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x2e4a44: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2e4a44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2e4a48: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x2e4a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2e4a4c: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x2e4a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e4a50: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2e4a50u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2e4a54: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x2e4a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x2e4a58: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2e4a58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2e4a5c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2e4a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2e4a60: 0x233302a  slt         $a2, $s1, $s3
    ctx->pc = 0x2e4a60u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2e4a64: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2e4a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e4a68: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2e4a68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2e4a6c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2e4a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e4a70: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2e4a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2e4a74: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2e4a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e4a78: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e4a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e4a7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e4a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e4a80: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2e4a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2e4a84: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2e4a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e4a88: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x2e4a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x2e4a8c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2e4a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e4a90: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e4a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e4a94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e4a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e4a98: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2e4a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2e4a9c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2e4a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e4aa0: 0x14c0ffe1  bnez        $a2, . + 4 + (-0x1F << 2)
    ctx->pc = 0x2E4AA0u;
    {
        const bool branch_taken_0x2e4aa0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E4AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4AA0u;
        // 0x2e4aa4: 0xe6000038  swc1        $f0, 0x38($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4aa0) {
            ctx->pc = 0x2E4A28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e4a28;
        }
    }
    ctx->pc = 0x2E4AA8u;
label_2e4aa8:
    // 0x2e4aa8: 0xae800034  sw          $zero, 0x34($s4)
    ctx->pc = 0x2e4aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 0));
    // 0x2e4aac: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2e4aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e4ab0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2e4ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e4ab4: 0xe64006c4  swc1        $f0, 0x6C4($s2)
    ctx->pc = 0x2e4ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1732), bits); }
    // 0x2e4ab8: 0xe64006c0  swc1        $f0, 0x6C0($s2)
    ctx->pc = 0x2e4ab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1728), bits); }
    // 0x2e4abc: 0xe64006c8  swc1        $f0, 0x6C8($s2)
    ctx->pc = 0x2e4abcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1736), bits); }
    // 0x2e4ac0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2e4ac0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2e4ac4:
    // 0x2e4ac4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2e4ac4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e4ac8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2e4ac8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e4acc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2e4accu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e4ad0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2e4ad0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e4ad4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2e4ad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e4ad8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4AD8u;
        // 0x2e4adc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4AD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4AE0u;
}
