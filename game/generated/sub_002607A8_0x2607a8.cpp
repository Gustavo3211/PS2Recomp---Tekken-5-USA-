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

// Function: sub_002607A8
// Address: 0x2607a8 - 0x2607d8
void sub_002607A8_0x2607a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002607A8_0x2607a8");
#endif

    switch (ctx->pc) {
        case 0x2607c0u: goto label_2607c0;
        default: break;
    }

    ctx->pc = 0x2607a8u;

    // 0x2607a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2607a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2607ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2607acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2607b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2607b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2607b4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2607b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2607b8: 0xc097fdc  jal         func_25FF70
    ctx->pc = 0x2607B8u;
    SET_GPR_U32(ctx, 31, 0x2607C0u);
    ctx->pc = 0x2607BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2607B8u;
    // 0x2607bc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FF70u, 0x2607B8u, 0x2607C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2607C0u;
label_2607c0:
    // 0x2607c0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2607c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2607c4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2607c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2607c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2607c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2607cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2607CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2607D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2607CCu;
        // 0x2607d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2607CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2607D4u;
    // 0x2607d4: 0x0  nop
    ctx->pc = 0x2607d4u;
    // NOP
    ctx->pc = 0x2607d8u;
}
