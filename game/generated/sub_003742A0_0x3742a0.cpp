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

// Function: sub_003742A0
// Address: 0x3742a0 - 0x3742dc
void sub_003742A0_0x3742a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003742A0_0x3742a0");
#endif

    switch (ctx->pc) {
        case 0x3742c4u: goto label_3742c4;
        default: break;
    }

    ctx->pc = 0x3742a0u;

    // 0x3742a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3742a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3742a4: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x3742a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x3742a8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3742a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3742ac: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3742acu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3742b0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3742b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3742b4: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x3742b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x3742b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3742b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3742bc: 0xc0dd0cf  jal         func_37433C
    ctx->pc = 0x3742BCu;
    SET_GPR_U32(ctx, 31, 0x3742C4u);
    ctx->pc = 0x37433Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37433Cu, 0x3742BCu, 0x3742C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3742C4u;
label_3742c4:
    // 0x3742c4: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3742c4u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3742c8: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x3742c8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3742cc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3742ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3742d0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3742d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3742d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3742D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3742D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3742DCu;
}
