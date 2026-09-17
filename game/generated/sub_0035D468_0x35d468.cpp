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

// Function: sub_0035D468
// Address: 0x35d468 - 0x35d4b8
void sub_0035D468_0x35d468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035D468_0x35d468");
#endif

    switch (ctx->pc) {
        case 0x35d488u: goto label_35d488;
        default: break;
    }

    ctx->pc = 0x35d468u;

    // 0x35d468: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x35d468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x35d46c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35d46cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d470: 0x24421378  addiu       $v0, $v0, 0x1378
    ctx->pc = 0x35d470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4984));
    // 0x35d474: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x35d474u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d478: 0x24450050  addiu       $a1, $v0, 0x50
    ctx->pc = 0x35d478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x35d47c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x35d47cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35d480: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x35d480u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1D13C8u));
    // 0x35d484: 0x0  nop
    ctx->pc = 0x35d484u;
    // NOP
label_35d488:
    // 0x35d488: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x35D488u;
    {
        const bool branch_taken_0x35d488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x35D48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D488u;
        // 0x35d48c: 0x24a5006c  addiu       $a1, $a1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d488) {
            ctx->pc = 0x35D498u;
            goto label_35d498;
        }
    }
    ctx->pc = 0x35D490u;
    // 0x35d490: 0x671014  dsllv       $v0, $a3, $v1
    ctx->pc = 0x35d490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (GPR_U32(ctx, 3) & 0x3F));
    // 0x35d494: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x35d494u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_35d498:
    // 0x35d498: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35d498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35d49c: 0x28620030  slti        $v0, $v1, 0x30
    ctx->pc = 0x35d49cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x35d4a0: 0x0  nop
    ctx->pc = 0x35d4a0u;
    // NOP
    // 0x35d4a4: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x35D4A4u;
    {
        const bool branch_taken_0x35d4a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35d4a4) {
            ctx->pc = 0x35D4A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35D4A4u;
            // 0x35d4a8: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35D488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35d488;
        }
    }
    ctx->pc = 0x35D4ACu;
    // 0x35d4ac: 0x3e00008  jr          $ra
    ctx->pc = 0x35D4ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D4ACu;
        // 0x35d4b0: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D4ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D4B4u;
    // 0x35d4b4: 0x0  nop
    ctx->pc = 0x35d4b4u;
    // NOP
    ctx->pc = 0x35d4b8u;
}
