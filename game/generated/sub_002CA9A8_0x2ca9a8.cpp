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

// Function: sub_002CA9A8
// Address: 0x2ca9a8 - 0x2ca9d8
void sub_002CA9A8_0x2ca9a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CA9A8_0x2ca9a8");
#endif

    switch (ctx->pc) {
        case 0x2ca9b8u: goto label_2ca9b8;
        case 0x2ca9c8u: goto label_2ca9c8;
        default: break;
    }

    ctx->pc = 0x2ca9a8u;

    // 0x2ca9a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ca9a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ca9ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ca9acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ca9b0: 0xc0b2788  jal         func_2C9E20
    ctx->pc = 0x2CA9B0u;
    SET_GPR_U32(ctx, 31, 0x2CA9B8u);
    ctx->pc = 0x2C9E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9E20u, 0x2CA9B0u, 0x2CA9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA9B8u;
label_2ca9b8:
    // 0x2ca9b8: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x2ca9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x2ca9bc: 0x348486a0  ori         $a0, $a0, 0x86A0
    ctx->pc = 0x2ca9bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34464);
    // 0x2ca9c0: 0xc0b278e  jal         func_2C9E38
    ctx->pc = 0x2CA9C0u;
    SET_GPR_U32(ctx, 31, 0x2CA9C8u);
    ctx->pc = 0x2CA9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA9C0u;
    // 0x2ca9c4: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9E38u, 0x2CA9C0u, 0x2CA9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA9C8u;
label_2ca9c8:
    // 0x2ca9c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ca9c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca9cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA9CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA9CCu;
        // 0x2ca9d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA9CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA9D4u;
    // 0x2ca9d4: 0x0  nop
    ctx->pc = 0x2ca9d4u;
    // NOP
    ctx->pc = 0x2ca9d8u;
}
