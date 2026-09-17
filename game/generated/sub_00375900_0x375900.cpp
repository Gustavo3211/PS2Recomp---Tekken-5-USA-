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

// Function: sub_00375900
// Address: 0x375900 - 0x375938
void sub_00375900_0x375900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00375900_0x375900");
#endif

    ctx->pc = 0x375900u;

    // 0x375900: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x375900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x375904: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x375904u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x375908: 0x244222a0  addiu       $v0, $v0, 0x22A0
    ctx->pc = 0x375908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8864));
    // 0x37590c: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x37590cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x375910: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x375910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x375914: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x375914u;
    {
        const bool branch_taken_0x375914 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x375918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375914u;
        // 0x375918: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375914) {
            ctx->pc = 0x375928u;
            goto label_375928;
        }
    }
    ctx->pc = 0x37591Cu;
    // 0x37591c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37591cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x375920: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x375920u;
    ctx->pc = 0x375924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375920u;
    // 0x375924: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x375928u;
label_375928:
    // 0x375928: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x375928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37592c: 0x3e00008  jr          $ra
    ctx->pc = 0x37592Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37592Cu;
        // 0x375930: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37592Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375934u;
    // 0x375934: 0x0  nop
    ctx->pc = 0x375934u;
    // NOP
    ctx->pc = 0x375938u;
}
