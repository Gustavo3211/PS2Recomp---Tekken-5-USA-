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

// Function: sub_00299840
// Address: 0x299840 - 0x299968
void sub_00299840_0x299840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299840_0x299840");
#endif

    switch (ctx->pc) {
        case 0x299888u: goto label_299888;
        case 0x299894u: goto label_299894;
        case 0x2998b0u: goto label_2998b0;
        case 0x2998d0u: goto label_2998d0;
        case 0x2998fcu: goto label_2998fc;
        case 0x299920u: goto label_299920;
        default: break;
    }

    ctx->pc = 0x299840u;

    // 0x299840: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x299840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x299844: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x299844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x299848: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x299848u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29984c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x29984cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x299850: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x299850u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299854: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x299854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x299858: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x299858u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29985c: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x29985cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x299860: 0x2415efff  addiu       $s5, $zero, -0x1001
    ctx->pc = 0x299860u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x299864: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x299864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x299868: 0x3c160048  lui         $s6, 0x48
    ctx->pc = 0x299868u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)72 << 16));
    // 0x29986c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x29986cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x299870: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x299870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x299874: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x299874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x299878: 0x8e330154  lw          $s3, 0x154($s1)
    ctx->pc = 0x299878u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
    // 0x29987c: 0x8e320158  lw          $s2, 0x158($s1)
    ctx->pc = 0x29987cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x299880: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x299880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299884: 0x0  nop
    ctx->pc = 0x299884u;
    // NOP
label_299888:
    // 0x299888: 0x26c5c018  addiu       $a1, $s6, -0x3FE8
    ctx->pc = 0x299888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294950936));
    // 0x29988c: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x29988Cu;
    SET_GPR_U32(ctx, 31, 0x299894u);
    ctx->pc = 0x299890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29988Cu;
    // 0x299890: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x29988Cu, 0x299894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299894u;
label_299894:
    // 0x299894: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x299894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299898: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x299898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x29989c: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x29989cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2998a0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2998A0u;
    {
        const bool branch_taken_0x2998a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2998A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2998A0u;
        // 0x2998a4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2998a0) {
            ctx->pc = 0x2998C8u;
            goto label_2998c8;
        }
    }
    ctx->pc = 0x2998A8u;
    // 0x2998a8: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2998A8u;
    SET_GPR_U32(ctx, 31, 0x2998B0u);
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2998A8u, 0x2998B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2998B0u;
label_2998b0:
    // 0x2998b0: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x2998b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x2998b4: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x2998b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2998b8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2998b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2998bc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2998BCu;
    {
        const bool branch_taken_0x2998bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2998C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2998BCu;
        // 0x2998c0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2998bc) {
            ctx->pc = 0x2998F0u;
            goto label_2998f0;
        }
    }
    ctx->pc = 0x2998C4u;
    // 0x2998c4: 0x0  nop
    ctx->pc = 0x2998c4u;
    // NOP
label_2998c8:
    // 0x2998c8: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2998C8u;
    SET_GPR_U32(ctx, 31, 0x2998D0u);
    ctx->pc = 0x2998CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2998C8u;
    // 0x2998cc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2998C8u, 0x2998D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2998D0u;
label_2998d0:
    // 0x2998d0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2998D0u;
    {
        const bool branch_taken_0x2998d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2998D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2998D0u;
        // 0x2998d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2998d0) {
            ctx->pc = 0x2998F4u;
            goto label_2998f4;
        }
    }
    ctx->pc = 0x2998D8u;
    // 0x2998d8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2998d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2998dc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2998DCu;
    {
        const bool branch_taken_0x2998dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2998dc) {
            ctx->pc = 0x2998F4u;
            goto label_2998f4;
        }
    }
    ctx->pc = 0x2998E4u;
    // 0x2998e4: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2998e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2998e8: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x2998e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x2998ec: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2998ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_2998f0:
    // 0x2998f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2998f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2998f4:
    // 0x2998f4: 0xc0a5b8c  jal         func_296E30
    ctx->pc = 0x2998F4u;
    SET_GPR_U32(ctx, 31, 0x2998FCu);
    ctx->pc = 0x2998F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2998F4u;
    // 0x2998f8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296E30u, 0x2998F4u, 0x2998FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2998FCu;
label_2998fc:
    // 0x2998fc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2998fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x299900: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x299900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x299904: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x299904u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x299908: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x299908u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x29990c: 0x2a02000a  slti        $v0, $s0, 0xA
    ctx->pc = 0x29990cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x299910: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x299910u;
    {
        const bool branch_taken_0x299910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x299914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299910u;
        // 0x299914: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299910) {
            ctx->pc = 0x299888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_299888;
        }
    }
    ctx->pc = 0x299918u;
    // 0x299918: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x299918u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29991c: 0x0  nop
    ctx->pc = 0x29991cu;
    // NOP
label_299920:
    // 0x299920: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x299920u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x299924: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x299924u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x299928: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x299928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x29992c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x29992cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x299930: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x299930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x299934: 0x2a040006  slti        $a0, $s0, 0x6
    ctx->pc = 0x299934u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x299938: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x299938u;
    {
        const bool branch_taken_0x299938 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x29993Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299938u;
        // 0x29993c: 0xac650078  sw          $a1, 0x78($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 120), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299938) {
            ctx->pc = 0x299920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_299920;
        }
    }
    ctx->pc = 0x299940u;
    // 0x299940: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x299940u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x299944: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x299944u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x299948: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x299948u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29994c: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x29994cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x299950: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x299950u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x299954: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x299954u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x299958: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x299958u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29995c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x29995cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x299960: 0x3e00008  jr          $ra
    ctx->pc = 0x299960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299960u;
        // 0x299964: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299968u;
}
