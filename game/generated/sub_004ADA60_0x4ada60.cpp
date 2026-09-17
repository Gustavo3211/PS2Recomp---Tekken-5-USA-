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

// Function: sub_004ADA60
// Address: 0x4ada60 - 0x4ada90
void sub_004ADA60_0x4ada60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ADA60_0x4ada60");
#endif

    ctx->pc = 0x4ada60u;

    // 0x4ada60: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x4ada60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ada64: 0x84e201c2  lh          $v0, 0x1C2($a3)
    ctx->pc = 0x4ada64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 450)));
    // 0x4ada68: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4ADA68u;
    {
        const bool branch_taken_0x4ada68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ADA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ADA68u;
        // 0x4ada6c: 0x3c03ffff  lui         $v1, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ada68) {
            ctx->pc = 0x4ADA84u;
            goto label_4ada84;
        }
    }
    ctx->pc = 0x4ADA70u;
    // 0x4ada70: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4ada70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ada74: 0x94c40000  lhu         $a0, 0x0($a2)
    ctx->pc = 0x4ada74u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4ada78: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4ada78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4ada7c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4ada7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4ada80: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4ada80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_4ada84:
    // 0x4ada84: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4ada84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ada88: 0x3e00008  jr          $ra
    ctx->pc = 0x4ADA88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ADA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ADA88u;
        // 0x4ada8c: 0xa4e2000c  sh          $v0, 0xC($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ADA88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ADA90u;
}
