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

// Function: sub_00373A58
// Address: 0x373a58 - 0x373a90
void sub_00373A58_0x373a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00373A58_0x373a58");
#endif

    switch (ctx->pc) {
        case 0x373a78u: goto label_373a78;
        default: break;
    }

    ctx->pc = 0x373a58u;

    // 0x373a58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x373a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x373a5c: 0xffbe0000  sd          $fp, 0x0($sp)
    ctx->pc = 0x373a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 30));
    // 0x373a60: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x373a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x373a64: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x373a64u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373a68: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x373a68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373a6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x373a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373a70: 0xc0dd00c  jal         func_374030
    ctx->pc = 0x373A70u;
    SET_GPR_U32(ctx, 31, 0x373A78u);
    ctx->pc = 0x374030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374030u, 0x373A70u, 0x373A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373A78u;
label_373a78:
    // 0x373a78: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x373a78u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373a7c: 0xdfbe0000  ld          $fp, 0x0($sp)
    ctx->pc = 0x373a7cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x373a80: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x373a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x373a84: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x373a84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x373a88: 0x3e00008  jr          $ra
    ctx->pc = 0x373A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373A88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373A90u;
}
