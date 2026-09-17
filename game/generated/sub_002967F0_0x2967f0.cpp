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

// Function: sub_002967F0
// Address: 0x2967f0 - 0x296820
void sub_002967F0_0x2967f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002967F0_0x2967f0");
#endif

    switch (ctx->pc) {
        case 0x296808u: goto label_296808;
        default: break;
    }

    ctx->pc = 0x2967f0u;

    // 0x2967f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2967f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2967f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2967f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2967f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2967f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2967fc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2967fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x296800: 0xc0c82d8  jal         func_320B60
    ctx->pc = 0x296800u;
    SET_GPR_U32(ctx, 31, 0x296808u);
    ctx->pc = 0x296804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296800u;
    // 0x296804: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320B60u, 0x296800u, 0x296808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296808u;
label_296808:
    // 0x296808: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x296808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x29680c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x29680cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x296810: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x296810u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296814: 0x3e00008  jr          $ra
    ctx->pc = 0x296814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296814u;
        // 0x296818: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29681Cu;
    // 0x29681c: 0x0  nop
    ctx->pc = 0x29681cu;
    // NOP
    ctx->pc = 0x296820u;
}
