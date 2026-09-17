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

// Function: sub_00373A14
// Address: 0x373a14 - 0x373a58
void sub_00373A14_0x373a14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00373A14_0x373a14");
#endif

    switch (ctx->pc) {
        case 0x373a40u: goto label_373a40;
        default: break;
    }

    ctx->pc = 0x373a14u;

    // 0x373a14: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x373a14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x373a18: 0xffbe0000  sd          $fp, 0x0($sp)
    ctx->pc = 0x373a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 30));
    // 0x373a1c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x373a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x373a20: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x373a20u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373a24: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x373a24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373a28: 0x24430024  addiu       $v1, $v0, 0x24
    ctx->pc = 0x373a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x373a2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x373a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373a30: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x373a30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373a34: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x373a34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x373a38: 0xc0dcfc4  jal         func_373F10
    ctx->pc = 0x373A38u;
    SET_GPR_U32(ctx, 31, 0x373A40u);
    ctx->pc = 0x373F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373F10u, 0x373A38u, 0x373A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373A40u;
label_373a40:
    // 0x373a40: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x373a40u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373a44: 0xdfbe0000  ld          $fp, 0x0($sp)
    ctx->pc = 0x373a44u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x373a48: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x373a48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x373a4c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x373a4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x373a50: 0x3e00008  jr          $ra
    ctx->pc = 0x373A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373A50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373A58u;
}
