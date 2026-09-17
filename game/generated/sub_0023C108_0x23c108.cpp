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

// Function: sub_0023C108
// Address: 0x23c108 - 0x23c140
void sub_0023C108_0x23c108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023C108_0x23c108");
#endif

    switch (ctx->pc) {
        case 0x23c118u: goto label_23c118;
        default: break;
    }

    ctx->pc = 0x23c108u;

    // 0x23c108: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23c108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23c10c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23c10cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23c110: 0xc08b3e2  jal         func_22CF88
    ctx->pc = 0x23C110u;
    SET_GPR_U32(ctx, 31, 0x23C118u);
    ctx->pc = 0x22CF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CF88u, 0x23C110u, 0x23C118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C118u;
label_23c118:
    // 0x23c118: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23c118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c11c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x23c11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23c120: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23c120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23c124: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x23c124u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x23c128: 0xac440020  sw          $a0, 0x20($v0)
    ctx->pc = 0x23c128u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 4));
    // 0x23c12c: 0xa0400031  sb          $zero, 0x31($v0)
    ctx->pc = 0x23c12cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 49), (uint8_t)GPR_U32(ctx, 0));
    // 0x23c130: 0xa0400030  sb          $zero, 0x30($v0)
    ctx->pc = 0x23c130u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 48), (uint8_t)GPR_U32(ctx, 0));
    // 0x23c134: 0x3e00008  jr          $ra
    ctx->pc = 0x23C134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C134u;
        // 0x23c138: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C13Cu;
    // 0x23c13c: 0x0  nop
    ctx->pc = 0x23c13cu;
    // NOP
    ctx->pc = 0x23c140u;
}
