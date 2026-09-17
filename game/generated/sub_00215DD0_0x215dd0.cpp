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

// Function: sub_00215DD0
// Address: 0x215dd0 - 0x215df8
void sub_00215DD0_0x215dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00215DD0_0x215dd0");
#endif

    ctx->pc = 0x215dd0u;

    // 0x215dd0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x215dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x215dd4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x215dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x215dd8: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x215dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x215ddc: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x215ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x215de0: 0xac45c500  sw          $a1, -0x3B00($v0)
    ctx->pc = 0x215de0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x3BC500u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3BC500u, _value); } while (0);
    // 0x215de4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x215de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x215de8: 0xac83886c  sw          $v1, -0x7794($a0)
    ctx->pc = 0x215de8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3A886Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3A886Cu, _value); } while (0);
    // 0x215dec: 0x3e00008  jr          $ra
    ctx->pc = 0x215DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215DECu;
        // 0x215df0: 0xaf85c91c  sw          $a1, -0x36E4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294953244), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215DECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215DF4u;
    // 0x215df4: 0x0  nop
    ctx->pc = 0x215df4u;
    // NOP
    ctx->pc = 0x215df8u;
}
