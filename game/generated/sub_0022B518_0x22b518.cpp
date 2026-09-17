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

// Function: sub_0022B518
// Address: 0x22b518 - 0x22b598
void sub_0022B518_0x22b518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022B518_0x22b518");
#endif

    switch (ctx->pc) {
        case 0x22b540u: goto label_22b540;
        case 0x22b580u: goto label_22b580;
        default: break;
    }

    ctx->pc = 0x22b518u;

    // 0x22b518: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22b518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22b51c: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x22b51cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x22b520: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22b520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22b524: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x22b524u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b528: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22b528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22b52c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22b52cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b530: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22b530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22b534: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22b534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22b538: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x22B538u;
    SET_GPR_U32(ctx, 31, 0x22B540u);
    ctx->pc = 0x22B53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B538u;
    // 0x22b53c: 0x244437e0  addiu       $a0, $v0, 0x37E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 14304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x22B538u, 0x22B540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B540u;
label_22b540:
    // 0x22b540: 0x86230006  lh          $v1, 0x6($s1)
    ctx->pc = 0x22b540u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x22b544: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x22b544u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x22b548: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22b548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22b54c: 0x24460070  addiu       $a2, $v0, 0x70
    ctx->pc = 0x22b54cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x22b550: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x22b550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x22b554: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22B554u;
    {
        const bool branch_taken_0x22b554 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B554u;
        // 0x22b558: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b554) {
            ctx->pc = 0x22B56Cu;
            goto label_22b56c;
        }
    }
    ctx->pc = 0x22B55Cu;
    // 0x22b55c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x22b55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x22b560: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x22b560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x22b564: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22B564u;
    {
        const bool branch_taken_0x22b564 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x22b564) {
            ctx->pc = 0x22B578u;
            goto label_22b578;
        }
    }
    ctx->pc = 0x22B56Cu;
label_22b56c:
    // 0x22b56c: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x22b56cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x22b570: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x22b570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b574: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x22b574u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_22b578:
    // 0x22b578: 0xc0b8974  jal         func_2E25D0
    ctx->pc = 0x22B578u;
    SET_GPR_U32(ctx, 31, 0x22B580u);
    ctx->pc = 0x2E25D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E25D0u, 0x22B578u, 0x22B580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B580u;
label_22b580:
    // 0x22b580: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22b580u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22b584: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22b584u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22b588: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22b588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22b58c: 0x3e00008  jr          $ra
    ctx->pc = 0x22B58Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B58Cu;
        // 0x22b590: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B58Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22B594u;
    // 0x22b594: 0x0  nop
    ctx->pc = 0x22b594u;
    // NOP
    ctx->pc = 0x22b598u;
}
