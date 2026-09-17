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

// Function: sub_00308B60
// Address: 0x308b60 - 0x308bc0
void sub_00308B60_0x308b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308B60_0x308b60");
#endif

    switch (ctx->pc) {
        case 0x308b90u: goto label_308b90;
        case 0x308bacu: goto label_308bac;
        default: break;
    }

    ctx->pc = 0x308b60u;

    // 0x308b60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x308b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x308b64: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x308b64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x308b68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x308b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x308b6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x308b6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308b70: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x308b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x308b74: 0x24a588d0  addiu       $a1, $a1, -0x7730
    ctx->pc = 0x308b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936784));
    // 0x308b78: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x308b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308b7c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x308b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A88D0u));
    // 0x308b80: 0xa04001bb  sb          $zero, 0x1BB($v0)
    ctx->pc = 0x308b80u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 443), (uint8_t)GPR_U32(ctx, 0));
    // 0x308b84: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x308b84u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A88D4u));
    // 0x308b88: 0xc08b89e  jal         func_22E278
    ctx->pc = 0x308B88u;
    SET_GPR_U32(ctx, 31, 0x308B90u);
    ctx->pc = 0x308B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308B88u;
    // 0x308b8c: 0xa06001bb  sb          $zero, 0x1BB($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 443), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E278u, 0x308B88u, 0x308B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308B90u;
label_308b90:
    // 0x308b90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x308b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x308b94: 0xaf829744  sw          $v0, -0x68BC($gp)
    ctx->pc = 0x308b94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940484), GPR_U32(ctx, 2));
    // 0x308b98: 0x3c04001b  lui         $a0, 0x1B
    ctx->pc = 0x308b98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27 << 16));
    // 0x308b9c: 0xa20201bb  sb          $v0, 0x1BB($s0)
    ctx->pc = 0x308b9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 443), (uint8_t)GPR_U32(ctx, 2));
    // 0x308ba0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x308ba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308ba4: 0xc0c1690  jal         func_305A40
    ctx->pc = 0x308BA4u;
    SET_GPR_U32(ctx, 31, 0x308BACu);
    ctx->pc = 0x308BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308BA4u;
    // 0x308ba8: 0x2484ece0  addiu       $a0, $a0, -0x1320 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305A40u, 0x308BA4u, 0x308BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308BACu;
label_308bac:
    // 0x308bac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x308bacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x308bb0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x308bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x308bb4: 0x3e00008  jr          $ra
    ctx->pc = 0x308BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308BB4u;
        // 0x308bb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308BB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308BBCu;
    // 0x308bbc: 0x0  nop
    ctx->pc = 0x308bbcu;
    // NOP
    ctx->pc = 0x308bc0u;
}
