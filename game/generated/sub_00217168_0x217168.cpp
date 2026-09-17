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

// Function: sub_00217168
// Address: 0x217168 - 0x2171b8
void sub_00217168_0x217168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217168_0x217168");
#endif

    switch (ctx->pc) {
        case 0x21718cu: goto label_21718c;
        default: break;
    }

    ctx->pc = 0x217168u;

    // 0x217168: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x217168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21716c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x21716cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217170: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x217170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x217174: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x217174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x217178: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x217178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21717c: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21717Cu;
    {
        const bool branch_taken_0x21717c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x21717c) {
            ctx->pc = 0x217180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21717Cu;
            // 0x217180: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217190u;
            goto label_217190;
        }
    }
    ctx->pc = 0x217184u;
    // 0x217184: 0xc087478  jal         func_21D1E0
    ctx->pc = 0x217184u;
    SET_GPR_U32(ctx, 31, 0x21718Cu);
    ctx->pc = 0x21D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D1E0u, 0x217184u, 0x21718Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21718Cu;
label_21718c:
    // 0x21718c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21718cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_217190:
    // 0x217190: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x217190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x217194: 0x3e00008  jr          $ra
    ctx->pc = 0x217194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217194u;
        // 0x217198: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21719Cu;
    // 0x21719c: 0x0  nop
    ctx->pc = 0x21719cu;
    // NOP
    // 0x2171a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2171a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2171a4: 0xa384c920  sb          $a0, -0x36E0($gp)
    ctx->pc = 0x2171a4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294953248), (uint8_t)GPR_U32(ctx, 4));
    // 0x2171a8: 0xa382a2d8  sb          $v0, -0x5D28($gp)
    ctx->pc = 0x2171a8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294943448), (uint8_t)GPR_U32(ctx, 2));
    // 0x2171ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2171ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2171B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2171ACu;
        // 0x2171b0: 0xa385c921  sb          $a1, -0x36DF($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294953249), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2171ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2171B4u;
    // 0x2171b4: 0x0  nop
    ctx->pc = 0x2171b4u;
    // NOP
    ctx->pc = 0x2171b8u;
}
