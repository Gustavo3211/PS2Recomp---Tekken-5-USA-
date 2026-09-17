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

// Function: sub_002DB3F8
// Address: 0x2db3f8 - 0x2db420
void sub_002DB3F8_0x2db3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB3F8_0x2db3f8");
#endif

    switch (ctx->pc) {
        case 0x2db414u: goto label_2db414;
        default: break;
    }

    ctx->pc = 0x2db3f8u;

    // 0x2db3f8: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x2db3f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
    // 0x2db3fc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2db3fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2db400: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x2db400u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2db404: 0x24e7f320  addiu       $a3, $a3, -0xCE0
    ctx->pc = 0x2db404u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964000));
    // 0x2db408: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2db408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2db40c: 0xc0b6d60  jal         func_2DB580
    ctx->pc = 0x2DB40Cu;
    SET_GPR_U32(ctx, 31, 0x2DB414u);
    ctx->pc = 0x2DB410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB40Cu;
    // 0x2db410: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB580u, 0x2DB40Cu, 0x2DB414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB414u;
label_2db414:
    // 0x2db414: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2db414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2db418: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB418u;
        // 0x2db41c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB420u;
}
