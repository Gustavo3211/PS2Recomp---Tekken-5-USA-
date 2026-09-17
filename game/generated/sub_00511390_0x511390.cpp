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

// Function: sub_00511390
// Address: 0x511390 - 0x511438
void sub_00511390_0x511390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00511390_0x511390");
#endif

    switch (ctx->pc) {
        case 0x5113c0u: goto label_5113c0;
        case 0x5113e0u: goto label_5113e0;
        case 0x5113ecu: goto label_5113ec;
        default: break;
    }

    ctx->pc = 0x511390u;

    // 0x511390: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x511390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x511394: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x511394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x511398: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x511398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x51139c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x51139cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x5113a0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x5113a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x5113a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x5113a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x5113a8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x5113a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x5113ac: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x5113acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5113b0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x5113b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x5113b4: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x5113b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x5113b8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x5113b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x5113bc: 0x2455f080  addiu       $s5, $v0, -0xF80
    ctx->pc = 0x5113bcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963328));
label_5113c0:
    // 0x5113c0: 0x139080  sll         $s2, $s3, 2
    ctx->pc = 0x5113c0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x5113c4: 0x2551021  addu        $v0, $s2, $s5
    ctx->pc = 0x5113c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    // 0x5113c8: 0x8c5040c0  lw          $s0, 0x40C0($v0)
    ctx->pc = 0x5113c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16576)));
    // 0x5113cc: 0x5214000d  beql        $s0, $s4, . + 4 + (0xD << 2)
    ctx->pc = 0x5113CCu;
    {
        const bool branch_taken_0x5113cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 20));
        if (branch_taken_0x5113cc) {
            ctx->pc = 0x5113D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5113CCu;
            // 0x5113d0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x511404u;
            goto label_511404;
        }
    }
    ctx->pc = 0x5113D4u;
    // 0x5113d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x5113D4u;
    {
        const bool branch_taken_0x5113d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5113D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5113D4u;
        // 0x5113d8: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5113d4) {
            ctx->pc = 0x5113E4u;
            goto label_5113e4;
        }
    }
    ctx->pc = 0x5113DCu;
    // 0x5113dc: 0x0  nop
    ctx->pc = 0x5113dcu;
    // NOP
label_5113e0:
    // 0x5113e0: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x5113e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
label_5113e4:
    // 0x5113e4: 0xc144af2  jal         func_512BC8
    ctx->pc = 0x5113E4u;
    SET_GPR_U32(ctx, 31, 0x5113ECu);
    ctx->pc = 0x5113E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5113E4u;
    // 0x5113e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512BC8u, 0x5113E4u, 0x5113ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5113ECu;
label_5113ec:
    // 0x5113ec: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x5113ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x5113f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x5113f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x5113f4: 0x1451fffa  bne         $v0, $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x5113F4u;
    {
        const bool branch_taken_0x5113f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x5113F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5113F4u;
        // 0x5113f8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5113f4) {
            ctx->pc = 0x5113E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_5113e0;
        }
    }
    ctx->pc = 0x5113FCu;
    // 0x5113fc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x5113fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x511400: 0x2551021  addu        $v0, $s2, $s5
    ctx->pc = 0x511400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_511404:
    // 0x511404: 0x2a630200  slti        $v1, $s3, 0x200
    ctx->pc = 0x511404u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x511408: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x511408u;
    {
        const bool branch_taken_0x511408 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x51140Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x511408u;
        // 0x51140c: 0xac5440c0  sw          $s4, 0x40C0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16576), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511408) {
            ctx->pc = 0x5113C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_5113c0;
        }
    }
    ctx->pc = 0x511410u;
    // 0x511410: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x511410u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x511414: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x511414u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x511418: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x511418u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x51141c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x51141cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x511420: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x511420u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x511424: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x511424u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x511428: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x511428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x51142c: 0x3e00008  jr          $ra
    ctx->pc = 0x51142Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x511430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x51142Cu;
        // 0x511430: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x51142Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x511434u;
    // 0x511434: 0x0  nop
    ctx->pc = 0x511434u;
    // NOP
    ctx->pc = 0x511438u;
}
