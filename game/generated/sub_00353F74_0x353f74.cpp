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

// Function: sub_00353F74
// Address: 0x353f74 - 0x353fa4
void sub_00353F74_0x353f74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00353F74_0x353f74");
#endif

    switch (ctx->pc) {
        case 0x353f8cu: goto label_353f8c;
        default: break;
    }

    ctx->pc = 0x353f74u;

    // 0x353f74: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x353f74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x353f78: 0xffbe0000  sd          $fp, 0x0($sp)
    ctx->pc = 0x353f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 30));
    // 0x353f7c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x353f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x353f80: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x353f80u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353f84: 0xc0d5388  jal         func_354E20
    ctx->pc = 0x353F84u;
    SET_GPR_U32(ctx, 31, 0x353F8Cu);
    ctx->pc = 0x354E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354E20u, 0x353F84u, 0x353F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353F8Cu;
label_353f8c:
    // 0x353f8c: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x353f8cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353f90: 0xdfbe0000  ld          $fp, 0x0($sp)
    ctx->pc = 0x353f90u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x353f94: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x353f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x353f98: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x353f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x353f9c: 0x3e00008  jr          $ra
    ctx->pc = 0x353F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353F9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x353FA4u;
}
