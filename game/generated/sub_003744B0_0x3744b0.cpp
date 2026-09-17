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

// Function: sub_003744B0
// Address: 0x3744b0 - 0x374510
void sub_003744B0_0x3744b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003744B0_0x3744b0");
#endif

    switch (ctx->pc) {
        case 0x3744e4u: goto label_3744e4;
        default: break;
    }

    ctx->pc = 0x3744b0u;

    // 0x3744b0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x3744b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x3744b4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3744b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3744b8: 0x24a515b0  addiu       $a1, $a1, 0x15B0
    ctx->pc = 0x3744b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5552));
    // 0x3744bc: 0x244212d8  addiu       $v0, $v0, 0x12D8
    ctx->pc = 0x3744bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4824));
    // 0x3744c0: 0xac820050  sw          $v0, 0x50($a0)
    ctx->pc = 0x3744c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 2));
    // 0x3744c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3744C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3744C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3744C4u;
        // 0x3744c8: 0xac8500b0  sw          $a1, 0xB0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3744C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3744CCu;
    // 0x3744cc: 0x0  nop
    ctx->pc = 0x3744ccu;
    // NOP
    // 0x3744d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3744d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3744d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3744d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3744d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3744d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3744dc: 0xc0c6b92  jal         func_31AE48
    ctx->pc = 0x3744DCu;
    SET_GPR_U32(ctx, 31, 0x3744E4u);
    ctx->pc = 0x3744E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3744DCu;
    // 0x3744e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31AE48u, 0x3744DCu, 0x3744E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3744E4u;
label_3744e4:
    // 0x3744e4: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x3744e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x3744e8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3744e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3744ec: 0x24422480  addiu       $v0, $v0, 0x2480
    ctx->pc = 0x3744ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9344));
    // 0x3744f0: 0x24631548  addiu       $v1, $v1, 0x1548
    ctx->pc = 0x3744f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5448));
    // 0x3744f4: 0xae0200b0  sw          $v0, 0xB0($s0)
    ctx->pc = 0x3744f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
    // 0x3744f8: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x3744f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    // 0x3744fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3744fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x374500: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x374500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x374504: 0x3e00008  jr          $ra
    ctx->pc = 0x374504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374504u;
        // 0x374508: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37450Cu;
    // 0x37450c: 0x0  nop
    ctx->pc = 0x37450cu;
    // NOP
    ctx->pc = 0x374510u;
}
