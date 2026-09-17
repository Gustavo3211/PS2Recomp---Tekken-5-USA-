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

// Function: sub_002DB420
// Address: 0x2db420 - 0x2db448
void sub_002DB420_0x2db420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB420_0x2db420");
#endif

    switch (ctx->pc) {
        case 0x2db43cu: goto label_2db43c;
        default: break;
    }

    ctx->pc = 0x2db420u;

    // 0x2db420: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x2db420u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
    // 0x2db424: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2db424u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2db428: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x2db428u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2db42c: 0x24e7f310  addiu       $a3, $a3, -0xCF0
    ctx->pc = 0x2db42cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294963984));
    // 0x2db430: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2db430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2db434: 0xc0b6d60  jal         func_2DB580
    ctx->pc = 0x2DB434u;
    SET_GPR_U32(ctx, 31, 0x2DB43Cu);
    ctx->pc = 0x2DB438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB434u;
    // 0x2db438: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB580u, 0x2DB434u, 0x2DB43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB43Cu;
label_2db43c:
    // 0x2db43c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2db43cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2db440: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB440u;
        // 0x2db444: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB448u;
}
