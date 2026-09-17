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

// Function: sub_003168B8
// Address: 0x3168b8 - 0x316904
void sub_003168B8_0x3168b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003168B8_0x3168b8");
#endif

    switch (ctx->pc) {
        case 0x3168ecu: goto label_3168ec;
        default: break;
    }

    ctx->pc = 0x3168b8u;

    // 0x3168b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3168b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3168bc: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x3168bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x3168c0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3168c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3168c4: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3168c4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3168c8: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x3168c8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x3168cc: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x3168ccu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x3168d0: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x3168d0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x3168d4: 0x8f84cbbc  lw          $a0, -0x3444($gp)
    ctx->pc = 0x3168d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953916)));
    // 0x3168d8: 0x8fc50000  lw          $a1, 0x0($fp)
    ctx->pc = 0x3168d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3168dc: 0x8fc60004  lw          $a2, 0x4($fp)
    ctx->pc = 0x3168dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x3168e0: 0x8fc70008  lw          $a3, 0x8($fp)
    ctx->pc = 0x3168e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x3168e4: 0xc0c63f0  jal         func_318FC0
    ctx->pc = 0x3168E4u;
    SET_GPR_U32(ctx, 31, 0x3168ECu);
    ctx->pc = 0x318FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x318FC0u, 0x3168E4u, 0x3168ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3168ECu;
label_3168ec:
    // 0x3168ec: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3168ecu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3168f0: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x3168f0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3168f4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3168f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3168f8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3168f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3168fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3168FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3168FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x316904u;
}
