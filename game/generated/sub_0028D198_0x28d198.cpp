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

// Function: sub_0028D198
// Address: 0x28d198 - 0x28d1d8
void sub_0028D198_0x28d198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028D198_0x28d198");
#endif

    switch (ctx->pc) {
        case 0x28d1c8u: goto label_28d1c8;
        default: break;
    }

    ctx->pc = 0x28d198u;

    // 0x28d198: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x28d198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x28d19c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28d19cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28d1a0: 0x8c4383c0  lw          $v1, -0x7C40($v0)
    ctx->pc = 0x28d1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x28d1a4: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x28D1A4u;
    {
        const bool branch_taken_0x28d1a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D1A4u;
        // 0x28d1a8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d1a4) {
            ctx->pc = 0x28D1C8u;
            goto label_28d1c8;
        }
    }
    ctx->pc = 0x28D1ACu;
    // 0x28d1ac: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x28d1acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x28d1b0: 0x24426ef8  addiu       $v0, $v0, 0x6EF8
    ctx->pc = 0x28d1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28408));
    // 0x28d1b4: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x28d1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x176F30u));
    // 0x28d1b8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28D1B8u;
    {
        const bool branch_taken_0x28d1b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D1B8u;
        // 0x28d1bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d1b8) {
            ctx->pc = 0x28D1C8u;
            goto label_28d1c8;
        }
    }
    ctx->pc = 0x28D1C0u;
    // 0x28d1c0: 0xc0a32e8  jal         func_28CBA0
    ctx->pc = 0x28D1C0u;
    SET_GPR_U32(ctx, 31, 0x28D1C8u);
    ctx->pc = 0x28CBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CBA0u, 0x28D1C0u, 0x28D1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D1C8u;
label_28d1c8:
    // 0x28d1c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28d1c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28d1cc: 0x3e00008  jr          $ra
    ctx->pc = 0x28D1CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D1CCu;
        // 0x28d1d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D1CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28D1D4u;
    // 0x28d1d4: 0x0  nop
    ctx->pc = 0x28d1d4u;
    // NOP
    ctx->pc = 0x28d1d8u;
}
