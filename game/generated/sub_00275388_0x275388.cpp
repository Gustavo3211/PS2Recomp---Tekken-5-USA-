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

// Function: sub_00275388
// Address: 0x275388 - 0x275470
void sub_00275388_0x275388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275388_0x275388");
#endif

    switch (ctx->pc) {
        case 0x2753acu: goto label_2753ac;
        case 0x2753c0u: goto label_2753c0;
        case 0x275408u: goto label_275408;
        case 0x275418u: goto label_275418;
        default: break;
    }

    ctx->pc = 0x275388u;

    // 0x275388: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x275388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27538c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27538cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x275390: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x275390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x275394: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x275394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x275398: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x275398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x27539c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x27539cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2753a0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2753a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2753a4: 0xc091726  jal         func_245C98
    ctx->pc = 0x2753A4u;
    SET_GPR_U32(ctx, 31, 0x2753ACu);
    ctx->pc = 0x2753A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2753A4u;
    // 0x2753a8: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245C98u, 0x2753A4u, 0x2753ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2753ACu;
label_2753ac:
    // 0x2753ac: 0xaf82ae90  sw          $v0, -0x5170($gp)
    ctx->pc = 0x2753acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946448), GPR_U32(ctx, 2));
    // 0x2753b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2753b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2753b4: 0xaf80ae98  sw          $zero, -0x5168($gp)
    ctx->pc = 0x2753b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946456), GPR_U32(ctx, 0));
    // 0x2753b8: 0x2785ca48  addiu       $a1, $gp, -0x35B8
    ctx->pc = 0x2753b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953544));
    // 0x2753bc: 0x0  nop
    ctx->pc = 0x2753bcu;
    // NOP
label_2753c0:
    // 0x2753c0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2753c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2753c4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2753c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2753c8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2753c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2753cc: 0x28830002  slti        $v1, $a0, 0x2
    ctx->pc = 0x2753ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2753d0: 0x0  nop
    ctx->pc = 0x2753d0u;
    // NOP
    // 0x2753d4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2753D4u;
    {
        const bool branch_taken_0x2753d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2753D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2753D4u;
        // 0x2753d8: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2753d4) {
            ctx->pc = 0x2753C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2753c0;
        }
    }
    ctx->pc = 0x2753DCu;
    // 0x2753dc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2753dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2753e0: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2753e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2753e4: 0x8c43885c  lw          $v1, -0x77A4($v0)
    ctx->pc = 0x2753e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A885Cu));
    // 0x2753e8: 0x10640016  beq         $v1, $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2753E8u;
    {
        const bool branch_taken_0x2753e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2753ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2753E8u;
        // 0x2753ec: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2753e8) {
            ctx->pc = 0x275444u;
            goto label_275444;
        }
    }
    ctx->pc = 0x2753F0u;
    // 0x2753f0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2753f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2753f4: 0x245488d0  addiu       $s4, $v0, -0x7730
    ctx->pc = 0x2753f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x2753f8: 0x24130014  addiu       $s3, $zero, 0x14
    ctx->pc = 0x2753f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2753fc: 0x2792ae98  addiu       $s2, $gp, -0x5168
    ctx->pc = 0x2753fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946456));
    // 0x275400: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x275400u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x275404: 0x0  nop
    ctx->pc = 0x275404u;
    // NOP
label_275408:
    // 0x275408: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x275408u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x27540c: 0x548021  addu        $s0, $v0, $s4
    ctx->pc = 0x27540cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x275410: 0xc086308  jal         func_218C20
    ctx->pc = 0x275410u;
    SET_GPR_U32(ctx, 31, 0x275418u);
    ctx->pc = 0x275414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275410u;
    // 0x275414: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218C20u, 0x275410u, 0x275418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275418u;
label_275418:
    // 0x275418: 0x14530008  bne         $v0, $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x275418u;
    {
        const bool branch_taken_0x275418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x27541Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275418u;
        // 0x27541c: 0x2a250002  slti        $a1, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x275418) {
            ctx->pc = 0x27543Cu;
            goto label_27543c;
        }
    }
    ctx->pc = 0x275420u;
    // 0x275420: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x275420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x275424: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x275424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x275428: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x275428u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x27542c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27542cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x275430: 0x7c0821  addu        $at, $v1, $gp
    ctx->pc = 0x275430u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 28)));
    // 0x275434: 0xac24ca48  sw          $a0, -0x35B8($at)
    ctx->pc = 0x275434u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953544), GPR_U32(ctx, 4));
    // 0x275438: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x275438u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_27543c:
    // 0x27543c: 0x14a0fff2  bnez        $a1, . + 4 + (-0xE << 2)
    ctx->pc = 0x27543Cu;
    {
        const bool branch_taken_0x27543c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x275440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27543Cu;
        // 0x275440: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27543c) {
            ctx->pc = 0x275408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_275408;
        }
    }
    ctx->pc = 0x275444u;
label_275444:
    // 0x275444: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x275444u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275448: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x275448u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27544c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x27544cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275450: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x275450u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x275454: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x275454u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x275458: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x275458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x27545c: 0x3e00008  jr          $ra
    ctx->pc = 0x27545Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27545Cu;
        // 0x275460: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27545Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275464u;
    // 0x275464: 0x0  nop
    ctx->pc = 0x275464u;
    // NOP
    // 0x275468: 0x3e00008  jr          $ra
    ctx->pc = 0x275468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27546Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275468u;
        // 0x27546c: 0xaf80ae90  sw          $zero, -0x5170($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946448), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275470u;
}
