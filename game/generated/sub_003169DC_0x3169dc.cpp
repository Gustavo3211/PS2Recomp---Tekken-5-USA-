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

// Function: sub_003169DC
// Address: 0x3169dc - 0x316aac
void sub_003169DC_0x3169dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003169DC_0x3169dc");
#endif

    switch (ctx->pc) {
        case 0x3169f8u: goto label_3169f8;
        case 0x316a2cu: goto label_316a2c;
        case 0x316a60u: goto label_316a60;
        case 0x316a94u: goto label_316a94;
        default: break;
    }

    ctx->pc = 0x3169dcu;

    // 0x3169dc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3169dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3169e0: 0xffbe0000  sd          $fp, 0x0($sp)
    ctx->pc = 0x3169e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 30));
    // 0x3169e4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3169e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3169e8: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3169e8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3169ec: 0x8f84cbbc  lw          $a0, -0x3444($gp)
    ctx->pc = 0x3169ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953916)));
    // 0x3169f0: 0xc0c645b  jal         func_31916C
    ctx->pc = 0x3169F0u;
    SET_GPR_U32(ctx, 31, 0x3169F8u);
    ctx->pc = 0x31916Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31916Cu, 0x3169F0u, 0x3169F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3169F8u;
label_3169f8:
    // 0x3169f8: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3169f8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3169fc: 0xdfbe0000  ld          $fp, 0x0($sp)
    ctx->pc = 0x3169fcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x316a00: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x316a00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x316a04: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x316a04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x316a08: 0x3e00008  jr          $ra
    ctx->pc = 0x316A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316A08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x316A10u;
    // 0x316a10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x316a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x316a14: 0xffbe0000  sd          $fp, 0x0($sp)
    ctx->pc = 0x316a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 30));
    // 0x316a18: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x316a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x316a1c: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x316a1cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316a20: 0x8f84cbbc  lw          $a0, -0x3444($gp)
    ctx->pc = 0x316a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953916)));
    // 0x316a24: 0xc0c6470  jal         func_3191C0
    ctx->pc = 0x316A24u;
    SET_GPR_U32(ctx, 31, 0x316A2Cu);
    ctx->pc = 0x3191C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3191C0u, 0x316A24u, 0x316A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316A2Cu;
label_316a2c:
    // 0x316a2c: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x316a2cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316a30: 0xdfbe0000  ld          $fp, 0x0($sp)
    ctx->pc = 0x316a30u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x316a34: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x316a34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x316a38: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x316a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x316a3c: 0x3e00008  jr          $ra
    ctx->pc = 0x316A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316A3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x316A44u;
    // 0x316a44: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x316a44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x316a48: 0xffbe0000  sd          $fp, 0x0($sp)
    ctx->pc = 0x316a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 30));
    // 0x316a4c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x316a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x316a50: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x316a50u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316a54: 0x8f84cbbc  lw          $a0, -0x3444($gp)
    ctx->pc = 0x316a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953916)));
    // 0x316a58: 0xc0c6486  jal         func_319218
    ctx->pc = 0x316A58u;
    SET_GPR_U32(ctx, 31, 0x316A60u);
    ctx->pc = 0x319218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319218u, 0x316A58u, 0x316A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316A60u;
label_316a60:
    // 0x316a60: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x316a60u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316a64: 0xdfbe0000  ld          $fp, 0x0($sp)
    ctx->pc = 0x316a64u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x316a68: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x316a68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x316a6c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x316a6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x316a70: 0x3e00008  jr          $ra
    ctx->pc = 0x316A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316A70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x316A78u;
    // 0x316a78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x316a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x316a7c: 0xffbe0000  sd          $fp, 0x0($sp)
    ctx->pc = 0x316a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 30));
    // 0x316a80: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x316a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x316a84: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x316a84u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316a88: 0x8f84cbbc  lw          $a0, -0x3444($gp)
    ctx->pc = 0x316a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953916)));
    // 0x316a8c: 0xc0c649e  jal         func_319278
    ctx->pc = 0x316A8Cu;
    SET_GPR_U32(ctx, 31, 0x316A94u);
    ctx->pc = 0x319278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319278u, 0x316A8Cu, 0x316A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316A94u;
label_316a94:
    // 0x316a94: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x316a94u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316a98: 0xdfbe0000  ld          $fp, 0x0($sp)
    ctx->pc = 0x316a98u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x316a9c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x316a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x316aa0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x316aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x316aa4: 0x3e00008  jr          $ra
    ctx->pc = 0x316AA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316AA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x316AACu;
}
