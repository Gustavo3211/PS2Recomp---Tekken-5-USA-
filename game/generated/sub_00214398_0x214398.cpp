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

// Function: sub_00214398
// Address: 0x214398 - 0x2143c0
void sub_00214398_0x214398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214398_0x214398");
#endif

    ctx->pc = 0x214398u;

    // 0x214398: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x214398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x21439c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x21439cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2143a0: 0x24428858  addiu       $v0, $v0, -0x77A8
    ctx->pc = 0x2143a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936664));
    // 0x2143a4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2143a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2143a8: 0xac44002c  sw          $a0, 0x2C($v0)
    ctx->pc = 0x2143a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3A8884u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3A8884u, _value); } while (0);
    // 0x2143ac: 0xac430030  sw          $v1, 0x30($v0)
    ctx->pc = 0x2143acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3A8888u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3A8888u, _value); } while (0);
    // 0x2143b0: 0xaf80c8e8  sw          $zero, -0x3718($gp)
    ctx->pc = 0x2143b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953192), GPR_U32(ctx, 0));
    // 0x2143b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2143B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2143B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2143B4u;
        // 0x2143b8: 0xaf80c8ec  sw          $zero, -0x3714($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294953196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2143B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2143BCu;
    // 0x2143bc: 0x0  nop
    ctx->pc = 0x2143bcu;
    // NOP
    ctx->pc = 0x2143c0u;
}
