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

// Function: sub_00122548
// Address: 0x122548 - 0x1225a0
void sub_00122548_0x122548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122548_0x122548");
#endif

    switch (ctx->pc) {
        case 0x122548u: goto label_122548;
        case 0x12254cu: goto label_12254c;
        case 0x122550u: goto label_122550;
        case 0x122554u: goto label_122554;
        case 0x122558u: goto label_122558;
        case 0x12255cu: goto label_12255c;
        case 0x122560u: goto label_122560;
        case 0x122564u: goto label_122564;
        case 0x122568u: goto label_122568;
        case 0x12256cu: goto label_12256c;
        case 0x122570u: goto label_122570;
        case 0x122574u: goto label_122574;
        case 0x122578u: goto label_122578;
        case 0x12257cu: goto label_12257c;
        case 0x122580u: goto label_122580;
        case 0x122584u: goto label_122584;
        case 0x122588u: goto label_122588;
        case 0x12258cu: goto label_12258c;
        case 0x122590u: goto label_122590;
        case 0x122594u: goto label_122594;
        case 0x122598u: goto label_122598;
        case 0x12259cu: goto label_12259c;
        default: break;
    }

    ctx->pc = 0x122548u;

label_122548:
    // 0x122548: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x122548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_12254c:
    // 0x12254c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12254cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_122550:
    // 0x122550: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x122550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_122554:
    // 0x122554: 0xc048762  jal         func_121D88
label_122558:
    if (ctx->pc == 0x122558u) {
        ctx->pc = 0x122558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122554u;
        // 0x122558: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12255Cu;
        goto label_12255c;
    }
    ctx->pc = 0x122554u;
    SET_GPR_U32(ctx, 31, 0x12255Cu);
    ctx->pc = 0x122558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122554u;
    // 0x122558: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121D88u, 0x122554u, 0x12255Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12255Cu;
label_12255c:
    // 0x12255c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x12255cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_122560:
    // 0x122560: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x122560u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_122564:
    // 0x122564: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x122564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_122568:
    // 0x122568: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x122568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_12256c:
    // 0x12256c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_122570:
    if (ctx->pc == 0x122570u) {
        ctx->pc = 0x122570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12256Cu;
        // 0x122570: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122574u;
        goto label_122574;
    }
    ctx->pc = 0x12256Cu;
    {
        const bool branch_taken_0x12256c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x122570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12256Cu;
        // 0x122570: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12256c) {
            ctx->pc = 0x122580u;
            goto label_122580;
        }
    }
    ctx->pc = 0x122574u;
label_122574:
    // 0x122574: 0x60f809  jalr        $v1
label_122578:
    if (ctx->pc == 0x122578u) {
        ctx->pc = 0x12257Cu;
        goto label_12257c;
    }
    ctx->pc = 0x122574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x12257Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122574u, 0x12257Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12257Cu;
label_12257c:
    // 0x12257c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x12257cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_122580:
    // 0x122580: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x122580u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_122584:
    // 0x122584: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x122584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_122588:
    // 0x122588: 0x3e00008  jr          $ra
label_12258c:
    if (ctx->pc == 0x12258Cu) {
        ctx->pc = 0x12258Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122588u;
        // 0x12258c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122590u;
        goto label_122590;
    }
    ctx->pc = 0x122588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12258Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122588u;
        // 0x12258c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122590u;
label_122590:
    // 0x122590: 0x3e00008  jr          $ra
label_122594:
    if (ctx->pc == 0x122594u) {
        ctx->pc = 0x122594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122590u;
        // 0x122594: 0x84820006  lh          $v0, 0x6($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122598u;
        goto label_122598;
    }
    ctx->pc = 0x122590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122590u;
        // 0x122594: 0x84820006  lh          $v0, 0x6($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122598u;
label_122598:
    // 0x122598: 0x3e00008  jr          $ra
label_12259c:
    if (ctx->pc == 0x12259Cu) {
        ctx->pc = 0x12259Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122598u;
        // 0x12259c: 0x84820004  lh          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1225A0u;
        goto label_fallthrough_0x122598;
    }
    ctx->pc = 0x122598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12259Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122598u;
        // 0x12259c: 0x84820004  lh          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x122598:
    ctx->pc = 0x1225A0u;
}
