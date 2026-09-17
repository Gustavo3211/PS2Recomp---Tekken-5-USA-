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

// Function: sub_002D1620
// Address: 0x2d1620 - 0x2d1648
void sub_002D1620_0x2d1620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1620_0x2d1620");
#endif

    switch (ctx->pc) {
        case 0x2d163cu: goto label_2d163c;
        default: break;
    }

    ctx->pc = 0x2d1620u;

    // 0x2d1620: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x2d1620u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x2d1624: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d1624u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d1628: 0x90625638  lbu         $v0, 0x5638($v1)
    ctx->pc = 0x2d1628u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3E5638u));
    // 0x2d162c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d162cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d1630: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2d1630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2d1634: 0xc0862ba  jal         func_218AE8
    ctx->pc = 0x2D1634u;
    SET_GPR_U32(ctx, 31, 0x2D163Cu);
    ctx->pc = 0x2D1638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1634u;
    // 0x2d1638: 0xaf82cb50  sw          $v0, -0x34B0($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953808), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218AE8u, 0x2D1634u, 0x2D163Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D163Cu;
label_2d163c:
    // 0x2d163c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d163cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d1640: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1640u;
        // 0x2d1644: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1648u;
}
