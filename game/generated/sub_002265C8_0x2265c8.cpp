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

// Function: sub_002265C8
// Address: 0x2265c8 - 0x226608
void sub_002265C8_0x2265c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002265C8_0x2265c8");
#endif

    ctx->pc = 0x2265c8u;

    // 0x2265c8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2265c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2265cc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2265ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2265d0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2265d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2265d4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2265d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2265d8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2265d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2265dc: 0x3c010015  lui         $at, 0x15
    ctx->pc = 0x2265dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)21 << 16));
    // 0x2265e0: 0x242161b0  addiu       $at, $at, 0x61B0
    ctx->pc = 0x2265e0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 25008));
    // 0x2265e4: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x2265e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x2265e8: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x2265e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x2265ec: 0xac450020  sw          $a1, 0x20($v0)
    ctx->pc = 0x2265ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 5));
    // 0x2265f0: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x2265f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    // 0x2265f4: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x2265f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x2265f8: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x2265f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x2265fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2265FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2265FCu;
        // 0x226600: 0xac45001c  sw          $a1, 0x1C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2265FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226604u;
    // 0x226604: 0x0  nop
    ctx->pc = 0x226604u;
    // NOP
    ctx->pc = 0x226608u;
}
