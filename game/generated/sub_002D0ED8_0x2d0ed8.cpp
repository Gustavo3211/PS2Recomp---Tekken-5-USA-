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

// Function: sub_002D0ED8
// Address: 0x2d0ed8 - 0x2d0f00
void sub_002D0ED8_0x2d0ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0ED8_0x2d0ed8");
#endif

    ctx->pc = 0x2d0ed8u;

    // 0x2d0ed8: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2d0ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2d0edc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d0edcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0ee0: 0x8c8388a8  lw          $v1, -0x7758($a0)
    ctx->pc = 0x2d0ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A88A8u));
    // 0x2d0ee4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2d0ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2d0ee8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2d0ee8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d0eec: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D0EECu;
    {
        const bool branch_taken_0x2d0eec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D0EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0EECu;
        // 0x2d0ef0: 0x30630002  andi        $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0eec) {
            ctx->pc = 0x2D0EF8u;
            goto label_2d0ef8;
        }
    }
    ctx->pc = 0x2D0EF4u;
    // 0x2d0ef4: 0x2c650001  sltiu       $a1, $v1, 0x1
    ctx->pc = 0x2d0ef4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2d0ef8:
    // 0x2d0ef8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0EF8u;
        // 0x2d0efc: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0EF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0F00u;
}
