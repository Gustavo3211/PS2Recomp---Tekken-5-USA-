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

// Function: sub_00105510
// Address: 0x105510 - 0x105540
void sub_00105510_0x105510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00105510_0x105510");
#endif

    switch (ctx->pc) {
        case 0x10551cu: goto label_10551c;
        case 0x105520u: goto label_105520;
        default: break;
    }

    ctx->pc = 0x105510u;

    // 0x105510: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x105510u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x105514: 0xc0413f4  jal         func_104FD0
    ctx->pc = 0x105514u;
    SET_GPR_U32(ctx, 31, 0x10551Cu);
    ctx->pc = 0x105518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105514u;
    // 0x105518: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104FD0u, 0x105514u, 0x10551Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10551Cu;
label_10551c:
    // 0x10551c: 0x8e030108  lw          $v1, 0x108($s0)
    ctx->pc = 0x10551cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_105520:
    // 0x105520: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x105520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x105524: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x105524u;
    {
        const bool branch_taken_0x105524 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x105528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105524u;
        // 0x105528: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105524) {
            ctx->pc = 0x105534u;
            goto label_105534;
        }
    }
    ctx->pc = 0x10552Cu;
    // 0x10552c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10552cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x105530: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x105530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
label_105534:
    // 0x105534: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x105534u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105538: 0x3e00008  jr          $ra
    ctx->pc = 0x105538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10553Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105538u;
        // 0x10553c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105540u;
}
