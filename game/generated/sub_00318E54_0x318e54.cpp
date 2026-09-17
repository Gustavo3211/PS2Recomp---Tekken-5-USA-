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

// Function: sub_00318E54
// Address: 0x318e54 - 0x318e90
void sub_00318E54_0x318e54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00318E54_0x318e54");
#endif

    switch (ctx->pc) {
        case 0x318e74u: goto label_318e74;
        default: break;
    }

    ctx->pc = 0x318e54u;

    // 0x318e54: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x318e54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x318e58: 0xffbe0000  sd          $fp, 0x0($sp)
    ctx->pc = 0x318e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 30));
    // 0x318e5c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x318e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x318e60: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x318e60u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318e64: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x318e64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318e68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x318e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318e6c: 0xc0c5eaf  jal         func_317ABC
    ctx->pc = 0x318E6Cu;
    SET_GPR_U32(ctx, 31, 0x318E74u);
    ctx->pc = 0x317ABCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x317ABCu, 0x318E6Cu, 0x318E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318E74u;
label_318e74:
    // 0x318e74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x318e74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318e78: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x318e78u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318e7c: 0xdfbe0000  ld          $fp, 0x0($sp)
    ctx->pc = 0x318e7cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x318e80: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x318e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x318e84: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x318e84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x318e88: 0x3e00008  jr          $ra
    ctx->pc = 0x318E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x318E88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x318E90u;
}
