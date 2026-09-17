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

// Function: sub_002D0B90
// Address: 0x2d0b90 - 0x2d0bd0
void sub_002D0B90_0x2d0b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0B90_0x2d0b90");
#endif

    switch (ctx->pc) {
        case 0x2d0bb0u: goto label_2d0bb0;
        case 0x2d0bb8u: goto label_2d0bb8;
        case 0x2d0bc0u: goto label_2d0bc0;
        default: break;
    }

    ctx->pc = 0x2d0b90u;

    // 0x2d0b90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d0b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d0b94: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2d0b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2d0b98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d0b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d0b9c: 0x3c100018  lui         $s0, 0x18
    ctx->pc = 0x2d0b9cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)24 << 16));
    // 0x2d0ba0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2d0ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2d0ba4: 0x26108e40  addiu       $s0, $s0, -0x71C0
    ctx->pc = 0x2d0ba4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294938176));
    // 0x2d0ba8: 0xc043c8c  jal         func_10F230
    ctx->pc = 0x2D0BA8u;
    SET_GPR_U32(ctx, 31, 0x2D0BB0u);
    ctx->pc = 0x2D0BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0BA8u;
    // 0x2d0bac: 0x8e041800  lw          $a0, 0x1800($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6144)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F230u, 0x2D0BA8u, 0x2D0BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0BB0u;
label_2d0bb0:
    // 0x2d0bb0: 0xc043c7c  jal         func_10F1F0
    ctx->pc = 0x2D0BB0u;
    SET_GPR_U32(ctx, 31, 0x2D0BB8u);
    ctx->pc = 0x2D0BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0BB0u;
    // 0x2d0bb4: 0x8e041800  lw          $a0, 0x1800($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6144)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F1F0u, 0x2D0BB0u, 0x2D0BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0BB8u;
label_2d0bb8:
    // 0x2d0bb8: 0xc043c6c  jal         func_10F1B0
    ctx->pc = 0x2D0BB8u;
    SET_GPR_U32(ctx, 31, 0x2D0BC0u);
    ctx->pc = 0x2D0BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0BB8u;
    // 0x2d0bbc: 0x8e041800  lw          $a0, 0x1800($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6144)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F1B0u, 0x2D0BB8u, 0x2D0BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0BC0u;
label_2d0bc0:
    // 0x2d0bc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d0bc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0bc4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2d0bc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d0bc8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0BC8u;
        // 0x2d0bcc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0BC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0BD0u;
}
