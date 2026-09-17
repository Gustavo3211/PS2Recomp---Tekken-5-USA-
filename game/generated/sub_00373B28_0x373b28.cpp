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

// Function: sub_00373B28
// Address: 0x373b28 - 0x373b68
void sub_00373B28_0x373b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00373B28_0x373b28");
#endif

    switch (ctx->pc) {
        case 0x373b48u: goto label_373b48;
        default: break;
    }

    ctx->pc = 0x373b28u;

    // 0x373b28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x373b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x373b2c: 0xffbe0000  sd          $fp, 0x0($sp)
    ctx->pc = 0x373b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 30));
    // 0x373b30: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x373b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x373b34: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x373b34u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373b38: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x373b38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373b3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x373b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373b40: 0xc0dcec0  jal         func_373B00
    ctx->pc = 0x373B40u;
    SET_GPR_U32(ctx, 31, 0x373B48u);
    ctx->pc = 0x373B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373B00u, 0x373B40u, 0x373B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373B48u;
label_373b48:
    // 0x373b48: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x373b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x373b4c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x373b4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x373b50: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x373b50u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373b54: 0xdfbe0000  ld          $fp, 0x0($sp)
    ctx->pc = 0x373b54u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x373b58: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x373b58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x373b5c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x373b5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x373b60: 0x3e00008  jr          $ra
    ctx->pc = 0x373B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373B60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373B68u;
}
