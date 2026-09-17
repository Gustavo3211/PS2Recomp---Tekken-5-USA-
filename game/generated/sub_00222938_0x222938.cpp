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

// Function: sub_00222938
// Address: 0x222938 - 0x222970
void sub_00222938_0x222938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222938_0x222938");
#endif

    switch (ctx->pc) {
        case 0x222960u: goto label_222960;
        default: break;
    }

    ctx->pc = 0x222938u;

    // 0x222938: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x222938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22293c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22293cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x222940: 0x9082005c  lbu         $v0, 0x5C($a0)
    ctx->pc = 0x222940u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x222944: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x222944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x222948: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x222948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22294c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22294Cu;
    {
        const bool branch_taken_0x22294c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22294Cu;
        // 0x222950: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22294c) {
            ctx->pc = 0x222960u;
            goto label_222960;
        }
    }
    ctx->pc = 0x222954u;
    // 0x222954: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x222954u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x222958: 0xc0891ba  jal         func_2246E8
    ctx->pc = 0x222958u;
    SET_GPR_U32(ctx, 31, 0x222960u);
    ctx->pc = 0x22295Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222958u;
    // 0x22295c: 0x2484d420  addiu       $a0, $a0, -0x2BE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2246E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2246E8u, 0x222958u, 0x222960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222960u;
label_222960:
    // 0x222960: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x222960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222964: 0x3e00008  jr          $ra
    ctx->pc = 0x222964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222964u;
        // 0x222968: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22296Cu;
    // 0x22296c: 0x0  nop
    ctx->pc = 0x22296cu;
    // NOP
    ctx->pc = 0x222970u;
}
