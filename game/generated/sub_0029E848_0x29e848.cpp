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

// Function: sub_0029E848
// Address: 0x29e848 - 0x29e880
void sub_0029E848_0x29e848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029E848_0x29e848");
#endif

    ctx->pc = 0x29e848u;

    // 0x29e848: 0x2ca30021  sltiu       $v1, $a1, 0x21
    ctx->pc = 0x29e848u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
    // 0x29e84c: 0x853021  addu        $a2, $a0, $a1
    ctx->pc = 0x29e84cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x29e850: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x29E850u;
    {
        const bool branch_taken_0x29e850 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E850u;
        // 0x29e854: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e850) {
            ctx->pc = 0x29E878u;
            goto label_29e878;
        }
    }
    ctx->pc = 0x29E858u;
    // 0x29e858: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x29e858u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x29e85c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x29E85Cu;
    {
        const bool branch_taken_0x29e85c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e85c) {
            ctx->pc = 0x29E878u;
            goto label_29e878;
        }
    }
    ctx->pc = 0x29E864u;
    // 0x29e864: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x29e864u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x29e868: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x29e868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x29e86c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29e86cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29e870: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x29e870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x29e874: 0x24420024  addiu       $v0, $v0, 0x24
    ctx->pc = 0x29e874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
label_29e878:
    // 0x29e878: 0x3e00008  jr          $ra
    ctx->pc = 0x29E878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E880u;
}
