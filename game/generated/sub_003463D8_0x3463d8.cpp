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

// Function: sub_003463D8
// Address: 0x3463d8 - 0x346478
void sub_003463D8_0x3463d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003463D8_0x3463d8");
#endif

    switch (ctx->pc) {
        case 0x3463f8u: goto label_3463f8;
        case 0x34640cu: goto label_34640c;
        case 0x346428u: goto label_346428;
        case 0x346438u: goto label_346438;
        case 0x346448u: goto label_346448;
        default: break;
    }

    ctx->pc = 0x3463d8u;

    // 0x3463d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3463d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3463dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3463dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3463e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3463e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3463e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3463e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3463e8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3463e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3463ec: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3463ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3463f0: 0xc0d2436  jal         func_3490D8
    ctx->pc = 0x3463F0u;
    SET_GPR_U32(ctx, 31, 0x3463F8u);
    ctx->pc = 0x3463F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3463F0u;
    // 0x3463f4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3490D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3490D8u, 0x3463F0u, 0x3463F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3463F8u;
label_3463f8:
    // 0x3463f8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3463F8u;
    {
        const bool branch_taken_0x3463f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3463f8) {
            ctx->pc = 0x3463FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3463F8u;
            // 0x3463fc: 0x96320002  lhu         $s2, 0x2($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x346418u;
            goto label_346418;
        }
    }
    ctx->pc = 0x346400u;
    // 0x346400: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x346400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346404: 0xc0d2404  jal         func_349010
    ctx->pc = 0x346404u;
    SET_GPR_U32(ctx, 31, 0x34640Cu);
    ctx->pc = 0x346408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346404u;
    // 0x346408: 0x94850002  lhu         $a1, 0x2($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349010u, 0x346404u, 0x34640Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34640Cu;
label_34640c:
    // 0x34640c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x34640Cu;
    {
        const bool branch_taken_0x34640c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34640Cu;
        // 0x346410: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34640c) {
            ctx->pc = 0x34645Cu;
            goto label_34645c;
        }
    }
    ctx->pc = 0x346414u;
    // 0x346414: 0x0  nop
    ctx->pc = 0x346414u;
    // NOP
label_346418:
    // 0x346418: 0x26300018  addiu       $s0, $s1, 0x18
    ctx->pc = 0x346418u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x34641c: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x34641Cu;
    {
        const bool branch_taken_0x34641c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x346420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34641Cu;
        // 0x346420: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34641c) {
            ctx->pc = 0x346454u;
            goto label_346454;
        }
    }
    ctx->pc = 0x346424u;
    // 0x346424: 0x0  nop
    ctx->pc = 0x346424u;
    // NOP
label_346428:
    // 0x346428: 0xce000028  pref        0x00, 0x28($s0)
    ctx->pc = 0x346428u;
    // PREF instruction (ignored)
    // 0x34642c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34642cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346430: 0xc0d2476  jal         func_3491D8
    ctx->pc = 0x346430u;
    SET_GPR_U32(ctx, 31, 0x346438u);
    ctx->pc = 0x346434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346430u;
    // 0x346434: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3491D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3491D8u, 0x346430u, 0x346438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346438u;
label_346438:
    // 0x346438: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x346438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34643c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x34643cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346440: 0xc0d18ca  jal         func_346328
    ctx->pc = 0x346440u;
    SET_GPR_U32(ctx, 31, 0x346448u);
    ctx->pc = 0x346444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346440u;
    // 0x346444: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346328u, 0x346440u, 0x346448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346448u;
label_346448:
    // 0x346448: 0x272102b  sltu        $v0, $s3, $s2
    ctx->pc = 0x346448u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x34644c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x34644Cu;
    {
        const bool branch_taken_0x34644c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34644c) {
            ctx->pc = 0x346428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_346428;
        }
    }
    ctx->pc = 0x346454u;
label_346454:
    // 0x346454: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x346454u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346458: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x346458u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_34645c:
    // 0x34645c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34645cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x346460: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x346460u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x346464: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x346464u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x346468: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x346468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34646c: 0x3e00008  jr          $ra
    ctx->pc = 0x34646Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x346470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34646Cu;
        // 0x346470: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34646Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x346474u;
    // 0x346474: 0x0  nop
    ctx->pc = 0x346474u;
    // NOP
    ctx->pc = 0x346478u;
}
