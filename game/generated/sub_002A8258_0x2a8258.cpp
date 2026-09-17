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

// Function: sub_002A8258
// Address: 0x2a8258 - 0x2a8288
void sub_002A8258_0x2a8258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A8258_0x2a8258");
#endif

    switch (ctx->pc) {
        case 0x2a8268u: goto label_2a8268;
        default: break;
    }

    ctx->pc = 0x2a8258u;

    // 0x2a8258: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a8258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a825c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a825cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a8260: 0xc0aa0ba  jal         func_2A82E8
    ctx->pc = 0x2A8260u;
    SET_GPR_U32(ctx, 31, 0x2A8268u);
    ctx->pc = 0x2A82E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A82E8u, 0x2A8260u, 0x2A8268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8268u;
label_2a8268:
    // 0x2a8268: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a8268u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a826c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A826Cu;
    {
        const bool branch_taken_0x2a826c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A826Cu;
        // 0x2a8270: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a826c) {
            ctx->pc = 0x2A8278u;
            goto label_2a8278;
        }
    }
    ctx->pc = 0x2A8274u;
    // 0x2a8274: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x2a8274u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_2a8278:
    // 0x2a8278: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a8278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a827c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A827Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A827Cu;
        // 0x2a8280: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A827Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8284u;
    // 0x2a8284: 0x0  nop
    ctx->pc = 0x2a8284u;
    // NOP
    ctx->pc = 0x2a8288u;
}
