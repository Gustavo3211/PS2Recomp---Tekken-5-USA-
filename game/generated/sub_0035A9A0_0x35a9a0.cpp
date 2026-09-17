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

// Function: sub_0035A9A0
// Address: 0x35a9a0 - 0x35a9f0
void sub_0035A9A0_0x35a9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035A9A0_0x35a9a0");
#endif

    switch (ctx->pc) {
        case 0x35a9b4u: goto label_35a9b4;
        case 0x35a9d8u: goto label_35a9d8;
        default: break;
    }

    ctx->pc = 0x35a9a0u;

    // 0x35a9a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35a9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35a9a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35a9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35a9a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x35a9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x35a9ac: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x35A9ACu;
    SET_GPR_U32(ctx, 31, 0x35A9B4u);
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x35A9ACu, 0x35A9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A9B4u;
label_35a9b4:
    // 0x35a9b4: 0x2783c7b8  addiu       $v1, $gp, -0x3848
    ctx->pc = 0x35a9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294952888));
    // 0x35a9b8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35a9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35a9bc: 0x28180  sll         $s0, $v0, 6
    ctx->pc = 0x35a9bcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x35a9c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x35a9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x35a9c4: 0x3c01001d  lui         $at, 0x1D
    ctx->pc = 0x35a9c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29 << 16));
    // 0x35a9c8: 0x2421f2c0  addiu       $at, $at, -0xD40
    ctx->pc = 0x35a9c8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294963904));
    // 0x35a9cc: 0x308021  addu        $s0, $at, $s0
    ctx->pc = 0x35a9ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x35a9d0: 0xc04627e  jal         func_1189F8
    ctx->pc = 0x35A9D0u;
    SET_GPR_U32(ctx, 31, 0x35A9D8u);
    ctx->pc = 0x35A9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A9D0u;
    // 0x35a9d4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189F8u, 0x35A9D0u, 0x35A9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A9D8u;
label_35a9d8:
    // 0x35a9d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x35a9d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a9dc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x35a9dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a9e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35a9e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a9e4: 0x3e00008  jr          $ra
    ctx->pc = 0x35A9E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35A9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A9E4u;
        // 0x35a9e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A9E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35A9ECu;
    // 0x35a9ec: 0x0  nop
    ctx->pc = 0x35a9ecu;
    // NOP
    ctx->pc = 0x35a9f0u;
}
