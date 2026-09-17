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

// Function: sub_001008C0
// Address: 0x1008c0 - 0x1008e0
void sub_001008C0_0x1008c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001008C0_0x1008c0");
#endif

    ctx->pc = 0x1008c0u;

    // 0x1008c0: 0x3c0201bd  lui         $v0, 0x1BD
    ctx->pc = 0x1008c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)445 << 16));
    // 0x1008c4: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x1008c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x1008c8: 0x3463f500  ori         $v1, $v1, 0xF500
    ctx->pc = 0x1008c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)62720);
    // 0x1008cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1008ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1008d0: 0x2442a1c0  addiu       $v0, $v0, -0x5E40
    ctx->pc = 0x1008d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943168));
    // 0x1008d4: 0xac4300bc  sw          $v1, 0xBC($v0)
    ctx->pc = 0x1008d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1BCA27Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA27Cu, _value); } while (0);
    // 0x1008d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1008D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1008DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1008D8u;
        // 0x1008dc: 0xac4400b8  sw          $a0, 0xB8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 184), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1008D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1008E0u;
}
