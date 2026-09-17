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

// Function: sub_002D1728
// Address: 0x2d1728 - 0x2d1760
void sub_002D1728_0x2d1728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1728_0x2d1728");
#endif

    switch (ctx->pc) {
        case 0x2d1750u: goto label_2d1750;
        default: break;
    }

    ctx->pc = 0x2d1728u;

    // 0x2d1728: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d1728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d172c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2d172cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2d1730: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d1730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d1734: 0x2484f658  addiu       $a0, $a0, -0x9A8
    ctx->pc = 0x2d1734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964824));
    // 0x2d1738: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x2d1738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2d173c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2d173cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d1740: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2d1740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2d1744: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x2d1744u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d1748: 0xc0db644  jal         func_36D910
    ctx->pc = 0x2D1748u;
    SET_GPR_U32(ctx, 31, 0x2D1750u);
    ctx->pc = 0x2D174Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1748u;
    // 0x2d174c: 0xa32825  or          $a1, $a1, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36D910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D910u, 0x2D1748u, 0x2D1750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1750u;
label_2d1750:
    // 0x2d1750: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d1750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d1754: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1754u;
        // 0x2d1758: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D175Cu;
    // 0x2d175c: 0x0  nop
    ctx->pc = 0x2d175cu;
    // NOP
    ctx->pc = 0x2d1760u;
}
