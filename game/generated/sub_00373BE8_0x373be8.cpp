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

// Function: sub_00373BE8
// Address: 0x373be8 - 0x373c20
void sub_00373BE8_0x373be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00373BE8_0x373be8");
#endif

    switch (ctx->pc) {
        case 0x373c08u: goto label_373c08;
        default: break;
    }

    ctx->pc = 0x373be8u;

    // 0x373be8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x373be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x373bec: 0xffbe0000  sd          $fp, 0x0($sp)
    ctx->pc = 0x373becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 30));
    // 0x373bf0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x373bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x373bf4: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x373bf4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373bf8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x373bf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373bfc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x373bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373c00: 0xc0dcf08  jal         func_373C20
    ctx->pc = 0x373C00u;
    SET_GPR_U32(ctx, 31, 0x373C08u);
    ctx->pc = 0x373C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373C20u, 0x373C00u, 0x373C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373C08u;
label_373c08:
    // 0x373c08: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x373c08u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373c0c: 0xdfbe0000  ld          $fp, 0x0($sp)
    ctx->pc = 0x373c0cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x373c10: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x373c10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x373c14: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x373c14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x373c18: 0x3e00008  jr          $ra
    ctx->pc = 0x373C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373C18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373C20u;
}
