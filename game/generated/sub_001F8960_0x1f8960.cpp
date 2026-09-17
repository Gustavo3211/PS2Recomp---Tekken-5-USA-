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

// Function: sub_001F8960
// Address: 0x1f8960 - 0x1f8988
void sub_001F8960_0x1f8960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8960_0x1f8960");
#endif

    ctx->pc = 0x1f8960u;

    // 0x1f8960: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x1f8960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x1f8964: 0x244255b0  addiu       $v0, $v0, 0x55B0
    ctx->pc = 0x1f8964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21936));
    // 0x1f8968: 0xa445002c  sh          $a1, 0x2C($v0)
    ctx->pc = 0x1f8968u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x1555DCu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1555DCu, _value); } while (0);
    // 0x1f896c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F896Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F896Cu;
        // 0x1f8970: 0xac44001c  sw          $a0, 0x1C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F896Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8974u;
    // 0x1f8974: 0x0  nop
    ctx->pc = 0x1f8974u;
    // NOP
    // 0x1f8978: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x1f8978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x1f897c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F897Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F897Cu;
        // 0x1f8980: 0xa44455dc  sh          $a0, 0x55DC($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 21980), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F897Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8984u;
    // 0x1f8984: 0x0  nop
    ctx->pc = 0x1f8984u;
    // NOP
    ctx->pc = 0x1f8988u;
}
