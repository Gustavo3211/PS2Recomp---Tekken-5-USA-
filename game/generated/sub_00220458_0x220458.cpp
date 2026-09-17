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

// Function: sub_00220458
// Address: 0x220458 - 0x220488
void sub_00220458_0x220458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220458_0x220458");
#endif

    ctx->pc = 0x220458u;

    // 0x220458: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x220458u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x22045c: 0x2c84006b  sltiu       $a0, $a0, 0x6B
    ctx->pc = 0x22045cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)107) ? 1 : 0);
    // 0x220460: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x220460u;
    {
        const bool branch_taken_0x220460 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x220464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220460u;
        // 0x220464: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220460) {
            ctx->pc = 0x220474u;
            goto label_220474;
        }
    }
    ctx->pc = 0x220468u;
    // 0x220468: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x220468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x22046c: 0x24636ea8  addiu       $v1, $v1, 0x6EA8
    ctx->pc = 0x22046cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28328));
    // 0x220470: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x220470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_220474:
    // 0x220474: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x220474u;
    {
        const bool branch_taken_0x220474 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x220478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220474u;
        // 0x220478: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220474) {
            ctx->pc = 0x220480u;
            goto label_220480;
        }
    }
    ctx->pc = 0x22047Cu;
    // 0x22047c: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x22047cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_220480:
    // 0x220480: 0x3e00008  jr          $ra
    ctx->pc = 0x220480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x220488u;
}
