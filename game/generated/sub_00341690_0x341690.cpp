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

// Function: sub_00341690
// Address: 0x341690 - 0x3416b8
void sub_00341690_0x341690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341690_0x341690");
#endif

    ctx->pc = 0x341690u;

    // 0x341690: 0x9083000c  lbu         $v1, 0xC($a0)
    ctx->pc = 0x341690u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x341694: 0x34650001  ori         $a1, $v1, 0x1
    ctx->pc = 0x341694u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x341698: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x341698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x34169c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x34169cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3416a0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3416A0u;
    {
        const bool branch_taken_0x3416a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3416A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3416A0u;
        // 0x3416a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3416a0) {
            ctx->pc = 0x3416B0u;
            goto label_3416b0;
        }
    }
    ctx->pc = 0x3416A8u;
    // 0x3416a8: 0xa085000c  sb          $a1, 0xC($a0)
    ctx->pc = 0x3416a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 5));
    // 0x3416ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3416acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3416b0:
    // 0x3416b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3416B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3416B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3416B8u;
}
