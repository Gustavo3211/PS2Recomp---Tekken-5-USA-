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

// Function: sub_002C9510
// Address: 0x2c9510 - 0x2c95b8
void sub_002C9510_0x2c9510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C9510_0x2c9510");
#endif

    switch (ctx->pc) {
        case 0x2c9548u: goto label_2c9548;
        case 0x2c9560u: goto label_2c9560;
        case 0x2c9594u: goto label_2c9594;
        default: break;
    }

    ctx->pc = 0x2c9510u;

    // 0x2c9510: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c9510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c9514: 0x3c020018  lui         $v0, 0x18
    ctx->pc = 0x2c9514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
    // 0x2c9518: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2c9518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2c951c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c951cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c9520: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2c9520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2c9524: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c9524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2c9528: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2c9528u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c952c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2c952cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2c9530: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x2c9530u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c9534: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2c9534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2c9538: 0x247388d0  addiu       $s3, $v1, -0x7730
    ctx->pc = 0x2c9538u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936784));
    // 0x2c953c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2c953cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2c9540: 0x24548dc8  addiu       $s4, $v0, -0x7238
    ctx->pc = 0x2c9540u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938056));
    // 0x2c9544: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x2c9544u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_2c9548:
    // 0x2c9548: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c9548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c954c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2c954cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2c9550: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2c9550u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2c9554: 0x548021  addu        $s0, $v0, $s4
    ctx->pc = 0x2c9554u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2c9558: 0xc0b21de  jal         func_2C8778
    ctx->pc = 0x2C9558u;
    SET_GPR_U32(ctx, 31, 0x2C9560u);
    ctx->pc = 0x2C955Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9558u;
    // 0x2c955c: 0xae12000c  sw          $s2, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8778u, 0x2C9558u, 0x2C9560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9560u;
label_2c9560:
    // 0x2c9560: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2c9560u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2c9564: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2c9564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2c9568: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x2c9568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2c956c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2c956cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2c9570: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2c9570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c9574: 0x908201bc  lbu         $v0, 0x1BC($a0)
    ctx->pc = 0x2c9574u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 444)));
    // 0x2c9578: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C9578u;
    {
        const bool branch_taken_0x2c9578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C957Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9578u;
        // 0x2c957c: 0x2a230002  slti        $v1, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9578) {
            ctx->pc = 0x2C9584u;
            goto label_2c9584;
        }
    }
    ctx->pc = 0x2C9580u;
    // 0x2c9580: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2c9580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_2c9584:
    // 0x2c9584: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2C9584u;
    {
        const bool branch_taken_0x2c9584 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9584u;
        // 0x2c9588: 0x111040  sll         $v0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9584) {
            ctx->pc = 0x2C9548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c9548;
        }
    }
    ctx->pc = 0x2C958Cu;
    // 0x2c958c: 0xc0b256e  jal         func_2C95B8
    ctx->pc = 0x2C958Cu;
    SET_GPR_U32(ctx, 31, 0x2C9594u);
    ctx->pc = 0x2C95B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C95B8u, 0x2C958Cu, 0x2C9594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9594u;
label_2c9594:
    // 0x2c9594: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c9594u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c9598: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c9598u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c959c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2c959cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c95a0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2c95a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c95a4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2c95a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c95a8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2c95a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c95ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2C95ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C95B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C95ACu;
        // 0x2c95b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C95ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C95B4u;
    // 0x2c95b4: 0x0  nop
    ctx->pc = 0x2c95b4u;
    // NOP
    ctx->pc = 0x2c95b8u;
}
