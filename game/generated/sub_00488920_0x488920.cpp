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

// Function: sub_00488920
// Address: 0x488920 - 0x488948
void sub_00488920_0x488920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00488920_0x488920");
#endif

    switch (ctx->pc) {
        case 0x488930u: goto label_488930;
        case 0x488938u: goto label_488938;
        default: break;
    }

    ctx->pc = 0x488920u;

    // 0x488920: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x488920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x488924: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x488924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x488928: 0xc1221fa  jal         func_4887E8
    ctx->pc = 0x488928u;
    SET_GPR_U32(ctx, 31, 0x488930u);
    ctx->pc = 0x4887E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4887E8u, 0x488928u, 0x488930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488930u;
label_488930:
    // 0x488930: 0xc04098c  jal         func_102630
    ctx->pc = 0x488930u;
    SET_GPR_U32(ctx, 31, 0x488938u);
    ctx->pc = 0x488934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x488930u;
    // 0x488934: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102630u, 0x488930u, 0x488938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488938u;
label_488938:
    // 0x488938: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x488938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48893c: 0x3e00008  jr          $ra
    ctx->pc = 0x48893Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x488940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48893Cu;
        // 0x488940: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48893Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x488944u;
    // 0x488944: 0x0  nop
    ctx->pc = 0x488944u;
    // NOP
    ctx->pc = 0x488948u;
}
