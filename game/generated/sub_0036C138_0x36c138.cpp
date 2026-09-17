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

// Function: sub_0036C138
// Address: 0x36c138 - 0x36c170
void sub_0036C138_0x36c138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C138_0x36c138");
#endif

    ctx->pc = 0x36c138u;

    // 0x36c138: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36c138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36c13c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36c13cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36c140: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x36c140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x36c144: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x36c144u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x36c148: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36c148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36c14c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x36C14Cu;
    {
        const bool branch_taken_0x36c14c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x36C150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C14Cu;
        // 0x36c150: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c14c) {
            ctx->pc = 0x36C160u;
            goto label_36c160;
        }
    }
    ctx->pc = 0x36C154u;
    // 0x36c154: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36c154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c158: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x36C158u;
    ctx->pc = 0x36C15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C158u;
    // 0x36c15c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x36C160u;
label_36c160:
    // 0x36c160: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36c160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c164: 0x3e00008  jr          $ra
    ctx->pc = 0x36C164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C164u;
        // 0x36c168: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C16Cu;
    // 0x36c16c: 0x0  nop
    ctx->pc = 0x36c16cu;
    // NOP
    ctx->pc = 0x36c170u;
}
