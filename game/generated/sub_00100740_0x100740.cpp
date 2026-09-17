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

// Function: sub_00100740
// Address: 0x100740 - 0x100768
void sub_00100740_0x100740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100740_0x100740");
#endif

    ctx->pc = 0x100740u;

    // 0x100740: 0x3c0201bd  lui         $v0, 0x1BD
    ctx->pc = 0x100740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)445 << 16));
    // 0x100744: 0x2442a1c0  addiu       $v0, $v0, -0x5E40
    ctx->pc = 0x100744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943168));
    // 0x100748: 0xac400160  sw          $zero, 0x160($v0)
    ctx->pc = 0x100748u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1BCA320u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA320u, _value); } while (0);
    // 0x10074c: 0xac40014c  sw          $zero, 0x14C($v0)
    ctx->pc = 0x10074cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1BCA30Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA30Cu, _value); } while (0);
    // 0x100750: 0xac400150  sw          $zero, 0x150($v0)
    ctx->pc = 0x100750u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1BCA310u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA310u, _value); } while (0);
    // 0x100754: 0xac400154  sw          $zero, 0x154($v0)
    ctx->pc = 0x100754u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1BCA314u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA314u, _value); } while (0);
    // 0x100758: 0xac400158  sw          $zero, 0x158($v0)
    ctx->pc = 0x100758u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1BCA318u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA318u, _value); } while (0);
    // 0x10075c: 0x3e00008  jr          $ra
    ctx->pc = 0x10075Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10075Cu;
        // 0x100760: 0xac40015c  sw          $zero, 0x15C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 348), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10075Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100764u;
    // 0x100764: 0x0  nop
    ctx->pc = 0x100764u;
    // NOP
    ctx->pc = 0x100768u;
}
