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

// Function: sub_0050D8A0
// Address: 0x50d8a0 - 0x50d8e8
void sub_0050D8A0_0x50d8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050D8A0_0x50d8a0");
#endif

    switch (ctx->pc) {
        case 0x50d8c0u: goto label_50d8c0;
        default: break;
    }

    ctx->pc = 0x50d8a0u;

    // 0x50d8a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x50d8a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50d8a4: 0x3e00008  jr          $ra
    ctx->pc = 0x50D8A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50D8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50D8A4u;
        // 0x50d8a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50D8A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x50D8ACu;
    // 0x50d8ac: 0x0  nop
    ctx->pc = 0x50d8acu;
    // NOP
    // 0x50d8b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x50d8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x50d8b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x50d8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x50d8b8: 0xc12462c  jal         func_4918B0
    ctx->pc = 0x50D8B8u;
    SET_GPR_U32(ctx, 31, 0x50D8C0u);
    ctx->pc = 0x4918B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4918B0u, 0x50D8B8u, 0x50D8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50D8C0u;
label_50d8c0:
    // 0x50d8c0: 0x244400f2  addiu       $a0, $v0, 0xF2
    ctx->pc = 0x50d8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 242));
    // 0x50d8c4: 0x24036c64  addiu       $v1, $zero, 0x6C64
    ctx->pc = 0x50d8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27748));
    // 0x50d8c8: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x50d8c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x50d8cc: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x50D8CCu;
    {
        const bool branch_taken_0x50d8cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x50D8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50D8CCu;
        // 0x50d8d0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50d8cc) {
            ctx->pc = 0x50D8DCu;
            goto label_50d8dc;
        }
    }
    ctx->pc = 0x50D8D4u;
    // 0x50d8d4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x50d8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x50d8d8: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x50d8d8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_50d8dc:
    // 0x50d8dc: 0x3e00008  jr          $ra
    ctx->pc = 0x50D8DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50D8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50D8DCu;
        // 0x50d8e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50D8DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x50D8E4u;
    // 0x50d8e4: 0x0  nop
    ctx->pc = 0x50d8e4u;
    // NOP
    ctx->pc = 0x50d8e8u;
}
