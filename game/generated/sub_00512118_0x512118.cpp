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

// Function: sub_00512118
// Address: 0x512118 - 0x512150
void sub_00512118_0x512118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00512118_0x512118");
#endif

    switch (ctx->pc) {
        case 0x512128u: goto label_512128;
        default: break;
    }

    ctx->pc = 0x512118u;

    // 0x512118: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x512118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x51211c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x51211cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x512120: 0x2446f080  addiu       $a2, $v0, -0xF80
    ctx->pc = 0x512120u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963328));
    // 0x512124: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x512124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_512128:
    // 0x512128: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x512128u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x51212c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x51212cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x512130: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x512130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x512134: 0x28830200  slti        $v1, $a0, 0x200
    ctx->pc = 0x512134u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x512138: 0x0  nop
    ctx->pc = 0x512138u;
    // NOP
    // 0x51213c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x51213Cu;
    {
        const bool branch_taken_0x51213c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x512140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x51213Cu;
        // 0x512140: 0xac4540c0  sw          $a1, 0x40C0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16576), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51213c) {
            ctx->pc = 0x512128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_512128;
        }
    }
    ctx->pc = 0x512144u;
    // 0x512144: 0x3e00008  jr          $ra
    ctx->pc = 0x512144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x512144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x51214Cu;
    // 0x51214c: 0x0  nop
    ctx->pc = 0x51214cu;
    // NOP
    ctx->pc = 0x512150u;
}
