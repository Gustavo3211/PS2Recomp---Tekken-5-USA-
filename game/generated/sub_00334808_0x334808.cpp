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

// Function: sub_00334808
// Address: 0x334808 - 0x334838
void sub_00334808_0x334808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00334808_0x334808");
#endif

    switch (ctx->pc) {
        case 0x33482cu: goto label_33482c;
        default: break;
    }

    ctx->pc = 0x334808u;

    // 0x334808: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x334808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33480c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x33480cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334810: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x334810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x334814: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x334814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x334818: 0x31cb8  dsll        $v1, $v1, 18
    ctx->pc = 0x334818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 18);
    // 0x33481c: 0xdca20408  ld          $v0, 0x408($a1)
    ctx->pc = 0x33481cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 1032)));
    // 0x334820: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x334820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x334824: 0xc0cd2b6  jal         func_334AD8
    ctx->pc = 0x334824u;
    SET_GPR_U32(ctx, 31, 0x33482Cu);
    ctx->pc = 0x334828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334824u;
    // 0x334828: 0xfca20408  sd          $v0, 0x408($a1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 5), 1032), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x334AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334AD8u, 0x334824u, 0x33482Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33482Cu;
label_33482c:
    // 0x33482c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33482cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x334830: 0x3e00008  jr          $ra
    ctx->pc = 0x334830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x334834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334830u;
        // 0x334834: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x334830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x334838u;
}
