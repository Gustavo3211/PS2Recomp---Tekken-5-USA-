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

// Function: sub_003766C8
// Address: 0x3766c8 - 0x376700
void sub_003766C8_0x3766c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003766C8_0x3766c8");
#endif

    switch (ctx->pc) {
        case 0x3766d8u: goto label_3766d8;
        case 0x3766e8u: goto label_3766e8;
        default: break;
    }

    ctx->pc = 0x3766c8u;

    // 0x3766c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3766c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3766cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3766ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3766d0: 0xc0cb174  jal         func_32C5D0
    ctx->pc = 0x3766D0u;
    SET_GPR_U32(ctx, 31, 0x3766D8u);
    ctx->pc = 0x32C5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C5D0u, 0x3766D0u, 0x3766D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3766D8u;
label_3766d8:
    // 0x3766d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3766d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3766dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3766DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3766E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3766DCu;
        // 0x3766e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3766DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3766E4u;
    // 0x3766e4: 0x0  nop
    ctx->pc = 0x3766e4u;
    // NOP
label_3766e8:
    // 0x3766e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3766e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3766ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3766ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3766f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3766f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3766f4: 0x80cb170  j           func_32C5C0
    ctx->pc = 0x3766F4u;
    ctx->pc = 0x3766F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3766F4u;
    // 0x3766f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C5C0u;
    sub_0032C5C0_0x32c5c0(rdram, ctx, runtime); return;
    ctx->pc = 0x3766FCu;
    // 0x3766fc: 0x0  nop
    ctx->pc = 0x3766fcu;
    // NOP
    ctx->pc = 0x376700u;
}
