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

// Function: sub_002DAD40
// Address: 0x2dad40 - 0x2dad68
void sub_002DAD40_0x2dad40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DAD40_0x2dad40");
#endif

    switch (ctx->pc) {
        case 0x2dad58u: goto label_2dad58;
        default: break;
    }

    ctx->pc = 0x2dad40u;

    // 0x2dad40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dad40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dad44: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2dad44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dad48: 0x2784cb58  addiu       $a0, $gp, -0x34A8
    ctx->pc = 0x2dad48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953816));
    // 0x2dad4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dad4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dad50: 0xc0b6b7a  jal         func_2DADE8
    ctx->pc = 0x2DAD50u;
    SET_GPR_U32(ctx, 31, 0x2DAD58u);
    ctx->pc = 0x2DADE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DADE8u, 0x2DAD50u, 0x2DAD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAD58u;
label_2dad58:
    // 0x2dad58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dad58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dad5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DAD5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DAD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAD5Cu;
        // 0x2dad60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DAD5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DAD64u;
    // 0x2dad64: 0x0  nop
    ctx->pc = 0x2dad64u;
    // NOP
    ctx->pc = 0x2dad68u;
}
