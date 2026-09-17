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

// Function: sub_0035A950
// Address: 0x35a950 - 0x35a970
void sub_0035A950_0x35a950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035A950_0x35a950");
#endif

    switch (ctx->pc) {
        case 0x35a964u: goto label_35a964;
        default: break;
    }

    ctx->pc = 0x35a950u;

    // 0x35a950: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35a950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35a954: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x35a954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a958: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35a958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35a95c: 0xc0d6a36  jal         func_35A8D8
    ctx->pc = 0x35A95Cu;
    SET_GPR_U32(ctx, 31, 0x35A964u);
    ctx->pc = 0x35A960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A95Cu;
    // 0x35a960: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A8D8u, 0x35A95Cu, 0x35A964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A964u;
label_35a964:
    // 0x35a964: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35a964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a968: 0x3e00008  jr          $ra
    ctx->pc = 0x35A968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35A96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A968u;
        // 0x35a96c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35A970u;
}
