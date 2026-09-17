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

// Function: sub_0023C278
// Address: 0x23c278 - 0x23c298
void sub_0023C278_0x23c278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023C278_0x23c278");
#endif

    ctx->pc = 0x23c278u;

    // 0x23c278: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x23c278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x23c27c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x23c27cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x23c280: 0x2442e120  addiu       $v0, $v0, -0x1EE0
    ctx->pc = 0x23c280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959392));
    // 0x23c284: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x23c284u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3AE124u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3AE124u, _value); } while (0);
    // 0x23c288: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x23c288u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3AE120u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3AE120u, _value); } while (0);
    // 0x23c28c: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x23c28cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x3AE12Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3AE12Cu, _value); } while (0);
    // 0x23c290: 0x3e00008  jr          $ra
    ctx->pc = 0x23C290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C290u;
        // 0x23c294: 0xac450008  sw          $a1, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C298u;
}
