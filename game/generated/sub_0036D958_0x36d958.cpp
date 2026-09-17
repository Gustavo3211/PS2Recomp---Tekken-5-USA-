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

// Function: sub_0036D958
// Address: 0x36d958 - 0x36d990
void sub_0036D958_0x36d958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036D958_0x36d958");
#endif

    ctx->pc = 0x36d958u;

    // 0x36d958: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36d958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36d95c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36d95cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36d960: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x36d960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x36d964: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x36d964u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x36d968: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36d968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36d96c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x36D96Cu;
    {
        const bool branch_taken_0x36d96c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D96Cu;
        // 0x36d970: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d96c) {
            ctx->pc = 0x36D980u;
            goto label_36d980;
        }
    }
    ctx->pc = 0x36D974u;
    // 0x36d974: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36d974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d978: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x36D978u;
    ctx->pc = 0x36D97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D978u;
    // 0x36d97c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x36D980u;
label_36d980:
    // 0x36d980: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36d980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d984: 0x3e00008  jr          $ra
    ctx->pc = 0x36D984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36D988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D984u;
        // 0x36d988: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D98Cu;
    // 0x36d98c: 0x0  nop
    ctx->pc = 0x36d98cu;
    // NOP
    ctx->pc = 0x36d990u;
}
