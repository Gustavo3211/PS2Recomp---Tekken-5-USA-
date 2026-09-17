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

// Function: sub_00276510
// Address: 0x276510 - 0x276590
void sub_00276510_0x276510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276510_0x276510");
#endif

    switch (ctx->pc) {
        case 0x276568u: goto label_276568;
        case 0x276578u: goto label_276578;
        default: break;
    }

    ctx->pc = 0x276510u;

label_276510:
    // 0x276510: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x276510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x276514: 0x3e00008  jr          $ra
    ctx->pc = 0x276514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276514u;
        // 0x276518: 0x8c623360  lw          $v0, 0x3360($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13152)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27651Cu;
    // 0x27651c: 0x0  nop
    ctx->pc = 0x27651cu;
    // NOP
    // 0x276520: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x276520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x276524: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x276524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x276528: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x276528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27652c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x27652cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x276530: 0x244488d0  addiu       $a0, $v0, -0x7730
    ctx->pc = 0x276530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x276534: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x276534u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A88D0u));
    // 0x276538: 0x8c62069c  lw          $v0, 0x69C($v1)
    ctx->pc = 0x276538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1692)));
    // 0x27653c: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x27653Cu;
    {
        const bool branch_taken_0x27653c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x276540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27653Cu;
        // 0x276540: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27653c) {
            ctx->pc = 0x27657Cu;
            goto label_27657c;
        }
    }
    ctx->pc = 0x276544u;
    // 0x276544: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x276544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x276548: 0x8c43069c  lw          $v1, 0x69C($v0)
    ctx->pc = 0x276548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1692)));
    // 0x27654c: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x27654Cu;
    {
        const bool branch_taken_0x27654c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x276550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27654Cu;
        // 0x276550: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27654c) {
            ctx->pc = 0x276580u;
            goto label_276580;
        }
    }
    ctx->pc = 0x276554u;
    // 0x276554: 0x8f829728  lw          $v0, -0x68D8($gp)
    ctx->pc = 0x276554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940456)));
    // 0x276558: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x276558u;
    {
        const bool branch_taken_0x276558 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x27655Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276558u;
        // 0x27655c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276558) {
            ctx->pc = 0x276580u;
            goto label_276580;
        }
    }
    ctx->pc = 0x276560u;
    // 0x276560: 0xc09d940  jal         func_276500
    ctx->pc = 0x276560u;
    SET_GPR_U32(ctx, 31, 0x276568u);
    ctx->pc = 0x276500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276500u, 0x276560u, 0x276568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276568u;
label_276568:
    // 0x276568: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x276568u;
    {
        const bool branch_taken_0x276568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27656Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276568u;
        // 0x27656c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276568) {
            ctx->pc = 0x276580u;
            goto label_276580;
        }
    }
    ctx->pc = 0x276570u;
    // 0x276570: 0xc09d944  jal         func_276510
    ctx->pc = 0x276570u;
    SET_GPR_U32(ctx, 31, 0x276578u);
    ctx->pc = 0x276510u;
    goto label_276510;
    ctx->pc = 0x276578u;
label_276578:
    // 0x276578: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x276578u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_27657c:
    // 0x27657c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x27657cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_276580:
    // 0x276580: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x276580u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x276584: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x276584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x276588: 0x3e00008  jr          $ra
    ctx->pc = 0x276588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27658Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276588u;
        // 0x27658c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276590u;
}
