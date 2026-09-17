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

// Function: sub_002411D8
// Address: 0x2411d8 - 0x241210
void sub_002411D8_0x2411d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002411D8_0x2411d8");
#endif

    switch (ctx->pc) {
        case 0x2411e8u: goto label_2411e8;
        default: break;
    }

    ctx->pc = 0x2411d8u;

    // 0x2411d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2411d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2411dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2411dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2411e0: 0xc08b3e2  jal         func_22CF88
    ctx->pc = 0x2411E0u;
    SET_GPR_U32(ctx, 31, 0x2411E8u);
    ctx->pc = 0x2411E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2411E0u;
    // 0x2411e4: 0x8c840018  lw          $a0, 0x18($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CF88u, 0x2411E0u, 0x2411E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2411E8u;
label_2411e8:
    // 0x2411e8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2411e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2411ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2411ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2411f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2411f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2411f4: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x2411f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x2411f8: 0xac440020  sw          $a0, 0x20($v0)
    ctx->pc = 0x2411f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 4));
    // 0x2411fc: 0xa0400031  sb          $zero, 0x31($v0)
    ctx->pc = 0x2411fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 49), (uint8_t)GPR_U32(ctx, 0));
    // 0x241200: 0xa0400030  sb          $zero, 0x30($v0)
    ctx->pc = 0x241200u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 48), (uint8_t)GPR_U32(ctx, 0));
    // 0x241204: 0x3e00008  jr          $ra
    ctx->pc = 0x241204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241204u;
        // 0x241208: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x241204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24120Cu;
    // 0x24120c: 0x0  nop
    ctx->pc = 0x24120cu;
    // NOP
    ctx->pc = 0x241210u;
}
