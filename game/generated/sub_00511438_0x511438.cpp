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

// Function: sub_00511438
// Address: 0x511438 - 0x511480
void sub_00511438_0x511438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00511438_0x511438");
#endif

    switch (ctx->pc) {
        case 0x511448u: goto label_511448;
        case 0x511458u: goto label_511458;
        default: break;
    }

    ctx->pc = 0x511438u;

    // 0x511438: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x511438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x51143c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x51143cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x511440: 0xc144b0e  jal         func_512C38
    ctx->pc = 0x511440u;
    SET_GPR_U32(ctx, 31, 0x511448u);
    ctx->pc = 0x512C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512C38u, 0x511440u, 0x511448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x511448u;
label_511448:
    // 0x511448: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x511448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x51144c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x51144cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x511450: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x511450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x511454: 0x2445f080  addiu       $a1, $v0, -0xF80
    ctx->pc = 0x511454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963328));
label_511458:
    // 0x511458: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x511458u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x51145c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x51145cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x511460: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x511460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x511464: 0x28830200  slti        $v1, $a0, 0x200
    ctx->pc = 0x511464u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x511468: 0x0  nop
    ctx->pc = 0x511468u;
    // NOP
    // 0x51146c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x51146Cu;
    {
        const bool branch_taken_0x51146c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x511470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x51146Cu;
        // 0x511470: 0xac4640c0  sw          $a2, 0x40C0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16576), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51146c) {
            ctx->pc = 0x511458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_511458;
        }
    }
    ctx->pc = 0x511474u;
    // 0x511474: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x511474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x511478: 0x3e00008  jr          $ra
    ctx->pc = 0x511478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51147Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x511478u;
        // 0x51147c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x511478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x511480u;
}
