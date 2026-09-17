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

// Function: sub_0035A930
// Address: 0x35a930 - 0x35a950
void sub_0035A930_0x35a930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035A930_0x35a930");
#endif

    switch (ctx->pc) {
        case 0x35a944u: goto label_35a944;
        default: break;
    }

    ctx->pc = 0x35a930u;

    // 0x35a930: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35a930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35a934: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x35a934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35a938: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35a938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35a93c: 0xc0d6a36  jal         func_35A8D8
    ctx->pc = 0x35A93Cu;
    SET_GPR_U32(ctx, 31, 0x35A944u);
    ctx->pc = 0x35A940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A93Cu;
    // 0x35a940: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A8D8u, 0x35A93Cu, 0x35A944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A944u;
label_35a944:
    // 0x35a944: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35a944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a948: 0x3e00008  jr          $ra
    ctx->pc = 0x35A948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35A94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A948u;
        // 0x35a94c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35A950u;
}
