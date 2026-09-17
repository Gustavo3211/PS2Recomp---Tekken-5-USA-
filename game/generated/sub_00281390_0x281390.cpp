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

// Function: sub_00281390
// Address: 0x281390 - 0x2813e8
void sub_00281390_0x281390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281390_0x281390");
#endif

    switch (ctx->pc) {
        case 0x2813b8u: goto label_2813b8;
        case 0x2813c8u: goto label_2813c8;
        default: break;
    }

    ctx->pc = 0x281390u;

    // 0x281390: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x281390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x281394: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x281394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x281398: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x281398u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x28139c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28139cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2813a0: 0xaf82974c  sw          $v0, -0x68B4($gp)
    ctx->pc = 0x2813a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940492), GPR_U32(ctx, 2));
    // 0x2813a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2813a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2813a8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2813a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2813ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2813acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2813b0: 0x247188d0  addiu       $s1, $v1, -0x7730
    ctx->pc = 0x2813b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936784));
    // 0x2813b4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2813b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2813b8:
    // 0x2813b8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2813b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2813bc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2813bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2813c0: 0xc0a04b6  jal         func_2812D8
    ctx->pc = 0x2813C0u;
    SET_GPR_U32(ctx, 31, 0x2813C8u);
    ctx->pc = 0x2813C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2813C0u;
    // 0x2813c4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2812D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2812D8u, 0x2813C0u, 0x2813C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2813C8u;
label_2813c8:
    // 0x2813c8: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x2813c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2813cc: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2813CCu;
    {
        const bool branch_taken_0x2813cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2813cc) {
            ctx->pc = 0x2813D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2813CCu;
            // 0x2813d0: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2813B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2813b8;
        }
    }
    ctx->pc = 0x2813D4u;
    // 0x2813d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2813d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2813d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2813d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2813dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2813dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2813e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2813E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2813E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2813E0u;
        // 0x2813e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2813E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2813E8u;
}
