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

// Function: sub_001F1230
// Address: 0x1f1230 - 0x1f1250
void sub_001F1230_0x1f1230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F1230_0x1f1230");
#endif

    switch (ctx->pc) {
        case 0x1f1244u: goto label_1f1244;
        default: break;
    }

    ctx->pc = 0x1f1230u;

    // 0x1f1230: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f1230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f1234: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f1234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f1238: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f1238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f123c: 0xc07c484  jal         func_1F1210
    ctx->pc = 0x1F123Cu;
    SET_GPR_U32(ctx, 31, 0x1F1244u);
    ctx->pc = 0x1F1240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F123Cu;
    // 0x1f1240: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1210u, 0x1F123Cu, 0x1F1244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1244u;
label_1f1244:
    // 0x1f1244: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f1244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f1248: 0x3e00008  jr          $ra
    ctx->pc = 0x1F1248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F124Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1248u;
        // 0x1f124c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F1250u;
}
