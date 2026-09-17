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

// Function: sub_003737C4
// Address: 0x3737c4 - 0x373804
void sub_003737C4_0x3737c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003737C4_0x3737c4");
#endif

    switch (ctx->pc) {
        case 0x3737e4u: goto label_3737e4;
        default: break;
    }

    ctx->pc = 0x3737c4u;

    // 0x3737c4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3737c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3737c8: 0xffbe0000  sd          $fp, 0x0($sp)
    ctx->pc = 0x3737c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 30));
    // 0x3737cc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3737ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3737d0: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3737d0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3737d4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3737d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3737d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3737d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3737dc: 0xc0dcf6c  jal         func_373DB0
    ctx->pc = 0x3737DCu;
    SET_GPR_U32(ctx, 31, 0x3737E4u);
    ctx->pc = 0x373DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373DB0u, 0x3737DCu, 0x3737E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3737E4u;
label_3737e4:
    // 0x3737e4: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x3737e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x3737e8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3737e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3737ec: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3737ecu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3737f0: 0xdfbe0000  ld          $fp, 0x0($sp)
    ctx->pc = 0x3737f0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3737f4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3737f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3737f8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3737f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3737fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3737FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3737FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373804u;
}
