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

// Function: sub_00358C48
// Address: 0x358c48 - 0x358cb0
void sub_00358C48_0x358c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358C48_0x358c48");
#endif

    switch (ctx->pc) {
        case 0x358c58u: goto label_358c58;
        default: break;
    }

    ctx->pc = 0x358c48u;

    // 0x358c48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x358c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x358c4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x358c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x358c50: 0xc0d8a92  jal         func_362A48
    ctx->pc = 0x358C50u;
    SET_GPR_U32(ctx, 31, 0x358C58u);
    ctx->pc = 0x362A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362A48u, 0x358C50u, 0x358C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358C58u;
label_358c58:
    // 0x358c58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x358c58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358c5c: 0x3e00008  jr          $ra
    ctx->pc = 0x358C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358C5Cu;
        // 0x358c60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358C5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x358C64u;
    // 0x358c64: 0x0  nop
    ctx->pc = 0x358c64u;
    // NOP
    // 0x358c68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x358c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x358c6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x358c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x358c70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x358c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358c74: 0x80d8a9a  j           func_362A68
    ctx->pc = 0x358C74u;
    ctx->pc = 0x358C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358C74u;
    // 0x358c78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362A68u, 0x358C74u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x358C7Cu;
    // 0x358c7c: 0x0  nop
    ctx->pc = 0x358c7cu;
    // NOP
    // 0x358c80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x358c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x358c84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x358c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x358c88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x358c88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358c8c: 0x80d8aba  j           func_362AE8
    ctx->pc = 0x358C8Cu;
    ctx->pc = 0x358C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358C8Cu;
    // 0x358c90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362AE8u;
    sub_00362AE8_0x362ae8(rdram, ctx, runtime); return;
    ctx->pc = 0x358C94u;
    // 0x358c94: 0x0  nop
    ctx->pc = 0x358c94u;
    // NOP
    // 0x358c98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x358c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x358c9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x358c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x358ca0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x358ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358ca4: 0x80d800c  j           func_360030
    ctx->pc = 0x358CA4u;
    ctx->pc = 0x358CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358CA4u;
    // 0x358ca8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360030u, 0x358CA4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x358CACu;
    // 0x358cac: 0x0  nop
    ctx->pc = 0x358cacu;
    // NOP
    ctx->pc = 0x358cb0u;
}
