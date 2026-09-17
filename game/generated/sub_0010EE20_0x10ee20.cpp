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

// Function: sub_0010EE20
// Address: 0x10ee20 - 0x10ee50
void sub_0010EE20_0x10ee20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010EE20_0x10ee20");
#endif

    ctx->pc = 0x10ee20u;

    // 0x10ee20: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x10ee20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ee24: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x10ee24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x10ee28: 0x90a30003  lbu         $v1, 0x3($a1)
    ctx->pc = 0x10ee28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x10ee2c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x10ee2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x10ee30: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x10ee30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x10ee34: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10EE34u;
    {
        const bool branch_taken_0x10ee34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x10EE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EE34u;
        // 0x10ee38: 0xa0a30003  sb          $v1, 0x3($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ee34) {
            ctx->pc = 0x10EE48u;
            goto label_10ee48;
        }
    }
    ctx->pc = 0x10EE3Cu;
    // 0x10ee3c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10ee3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ee40: 0x8043b30  j           func_10ECC0
    ctx->pc = 0x10EE40u;
    ctx->pc = 0x10EE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EE40u;
    // 0x10ee44: 0xa0a00003  sb          $zero, 0x3($a1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ECC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ECC0u, 0x10EE40u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x10EE48u;
label_10ee48:
    // 0x10ee48: 0x3e00008  jr          $ra
    ctx->pc = 0x10EE48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EE48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10EE50u;
}
