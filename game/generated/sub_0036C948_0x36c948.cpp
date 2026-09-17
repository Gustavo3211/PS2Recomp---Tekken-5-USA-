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

// Function: sub_0036C948
// Address: 0x36c948 - 0x36c980
void sub_0036C948_0x36c948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C948_0x36c948");
#endif

    ctx->pc = 0x36c948u;

    // 0x36c948: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36c948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36c94c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36c94cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36c950: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x36c950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x36c954: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x36c954u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x36c958: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36c958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36c95c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x36C95Cu;
    {
        const bool branch_taken_0x36c95c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x36C960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C95Cu;
        // 0x36c960: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c95c) {
            ctx->pc = 0x36C970u;
            goto label_36c970;
        }
    }
    ctx->pc = 0x36C964u;
    // 0x36c964: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36c964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c968: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x36C968u;
    ctx->pc = 0x36C96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C968u;
    // 0x36c96c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x36C970u;
label_36c970:
    // 0x36c970: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36c970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c974: 0x3e00008  jr          $ra
    ctx->pc = 0x36C974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C974u;
        // 0x36c978: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C97Cu;
    // 0x36c97c: 0x0  nop
    ctx->pc = 0x36c97cu;
    // NOP
    ctx->pc = 0x36c980u;
}
