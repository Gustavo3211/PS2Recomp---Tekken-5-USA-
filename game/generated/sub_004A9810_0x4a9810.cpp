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

// Function: sub_004A9810
// Address: 0x4a9810 - 0x4a9930
void sub_004A9810_0x4a9810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A9810_0x4a9810");
#endif

    switch (ctx->pc) {
        case 0x4a983cu: goto label_4a983c;
        default: break;
    }

    ctx->pc = 0x4a9810u;

    // 0x4a9810: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4a9810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4a9814: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4a9814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4a9818: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4a9818u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4a981c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4a981cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4a9820: 0x26710c68  addiu       $s1, $s3, 0xC68
    ctx->pc = 0x4a9820u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 3176));
    // 0x4a9824: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4a9824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4a9828: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4a9828u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a982c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4a982cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4a9830: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4a9830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4a9834: 0xc123332  jal         func_48CCC8
    ctx->pc = 0x4A9834u;
    SET_GPR_U32(ctx, 31, 0x4A983Cu);
    ctx->pc = 0x4A9838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A9834u;
    // 0x4a9838: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CCC8u, 0x4A9834u, 0x4A983Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A983Cu;
label_4a983c:
    // 0x4a983c: 0x108400  sll         $s0, $s0, 16
    ctx->pc = 0x4a983cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x4a9840: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4a9840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4a9844: 0x240300e9  addiu       $v1, $zero, 0xE9
    ctx->pc = 0x4a9844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 233));
    // 0x4a9848: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x4a9848u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x4a984c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a984cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a9850: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4a9850u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9854: 0x12020012  beq         $s0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x4A9854u;
    {
        const bool branch_taken_0x4a9854 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x4A9858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9854u;
        // 0x4a9858: 0xa4830008  sh          $v1, 0x8($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9854) {
            ctx->pc = 0x4A98A0u;
            goto label_4a98a0;
        }
    }
    ctx->pc = 0x4A985Cu;
    // 0x4a985c: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x4a985cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x4a9860: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A9860u;
    {
        const bool branch_taken_0x4a9860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9860u;
        // 0x4a9864: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9860) {
            ctx->pc = 0x4A9878u;
            goto label_4a9878;
        }
    }
    ctx->pc = 0x4A9868u;
    // 0x4a9868: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4A9868u;
    {
        const bool branch_taken_0x4a9868 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A986Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9868u;
        // 0x4a986c: 0x3c02004b  lui         $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9868) {
            ctx->pc = 0x4A9890u;
            goto label_4a9890;
        }
    }
    ctx->pc = 0x4A9870u;
    // 0x4a9870: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x4A9870u;
    {
        const bool branch_taken_0x4a9870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9870u;
        // 0x4a9874: 0x26640c68  addiu       $a0, $s3, 0xC68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 3176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9870) {
            ctx->pc = 0x4A98F4u;
            goto label_4a98f4;
        }
    }
    ctx->pc = 0x4A9878u;
label_4a9878:
    // 0x4a9878: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4A9878u;
    {
        const bool branch_taken_0x4a9878 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x4A987Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9878u;
        // 0x4a987c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9878) {
            ctx->pc = 0x4A98B8u;
            goto label_4a98b8;
        }
    }
    ctx->pc = 0x4A9880u;
    // 0x4a9880: 0x12020013  beq         $s0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x4A9880u;
    {
        const bool branch_taken_0x4a9880 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x4A9884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9880u;
        // 0x4a9884: 0x26640c68  addiu       $a0, $s3, 0xC68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 3176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9880) {
            ctx->pc = 0x4A98D0u;
            goto label_4a98d0;
        }
    }
    ctx->pc = 0x4A9888u;
    // 0x4a9888: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x4A9888u;
    {
        const bool branch_taken_0x4a9888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A988Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9888u;
        // 0x4a988c: 0xdfb30018  ld          $s3, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9888) {
            ctx->pc = 0x4A98F8u;
            goto label_4a98f8;
        }
    }
    ctx->pc = 0x4A9890u;
label_4a9890:
    // 0x4a9890: 0x3c030052  lui         $v1, 0x52
    ctx->pc = 0x4a9890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)82 << 16));
    // 0x4a9894: 0x24449218  addiu       $a0, $v0, -0x6DE8
    ctx->pc = 0x4a9894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939160));
    // 0x4a9898: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x4A9898u;
    {
        const bool branch_taken_0x4a9898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A989Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9898u;
        // 0x4a989c: 0x24632940  addiu       $v1, $v1, 0x2940 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9898) {
            ctx->pc = 0x4A98E0u;
            goto label_4a98e0;
        }
    }
    ctx->pc = 0x4A98A0u;
label_4a98a0:
    // 0x4a98a0: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x4a98a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x4a98a4: 0x3c030052  lui         $v1, 0x52
    ctx->pc = 0x4a98a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)82 << 16));
    // 0x4a98a8: 0x24449668  addiu       $a0, $v0, -0x6998
    ctx->pc = 0x4a98a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940264));
    // 0x4a98ac: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4A98ACu;
    {
        const bool branch_taken_0x4a98ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A98B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A98ACu;
        // 0x4a98b0: 0x24632980  addiu       $v1, $v1, 0x2980 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a98ac) {
            ctx->pc = 0x4A98E0u;
            goto label_4a98e0;
        }
    }
    ctx->pc = 0x4A98B4u;
    // 0x4a98b4: 0x0  nop
    ctx->pc = 0x4a98b4u;
    // NOP
label_4a98b8:
    // 0x4a98b8: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x4a98b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x4a98bc: 0x3c030052  lui         $v1, 0x52
    ctx->pc = 0x4a98bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)82 << 16));
    // 0x4a98c0: 0x24449748  addiu       $a0, $v0, -0x68B8
    ctx->pc = 0x4a98c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940488));
    // 0x4a98c4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4A98C4u;
    {
        const bool branch_taken_0x4a98c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A98C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A98C4u;
        // 0x4a98c8: 0x246329c0  addiu       $v1, $v1, 0x29C0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a98c4) {
            ctx->pc = 0x4A98E0u;
            goto label_4a98e0;
        }
    }
    ctx->pc = 0x4A98CCu;
    // 0x4a98cc: 0x0  nop
    ctx->pc = 0x4a98ccu;
    // NOP
label_4a98d0:
    // 0x4a98d0: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x4a98d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x4a98d4: 0x3c030052  lui         $v1, 0x52
    ctx->pc = 0x4a98d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)82 << 16));
    // 0x4a98d8: 0x244496e0  addiu       $a0, $v0, -0x6920
    ctx->pc = 0x4a98d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940384));
    // 0x4a98dc: 0x24632a00  addiu       $v1, $v1, 0x2A00
    ctx->pc = 0x4a98dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10752));
label_4a98e0:
    // 0x4a98e0: 0x41402  srl         $v0, $a0, 16
    ctx->pc = 0x4a98e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x4a98e4: 0xa4640002  sh          $a0, 0x2($v1)
    ctx->pc = 0x4a98e4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x4a98e8: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4a98e8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a98ec: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x4a98ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a98f0: 0x26640c68  addiu       $a0, $s3, 0xC68
    ctx->pc = 0x4a98f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 3176));
label_4a98f4:
    // 0x4a98f4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4a98f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_4a98f8:
    // 0x4a98f8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4a98f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a98fc: 0x122c02  srl         $a1, $s2, 16
    ctx->pc = 0x4a98fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 18), 16));
    // 0x4a9900: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4a9900u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a9904: 0xa445000a  sh          $a1, 0xA($v0)
    ctx->pc = 0x4a9904u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 5));
    // 0x4a9908: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4a9908u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a990c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4a990cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a9910: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4a9910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a9914: 0xa472000c  sh          $s2, 0xC($v1)
    ctx->pc = 0x4a9914u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 18));
    // 0x4a9918: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4a9918u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a991c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4a991cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a9920: 0xa440000e  sh          $zero, 0xE($v0)
    ctx->pc = 0x4a9920u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x4a9924: 0x3e00008  jr          $ra
    ctx->pc = 0x4A9924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A9928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9924u;
        // 0x4a9928: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A9924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A992Cu;
    // 0x4a992c: 0x0  nop
    ctx->pc = 0x4a992cu;
    // NOP
    ctx->pc = 0x4a9930u;
}
