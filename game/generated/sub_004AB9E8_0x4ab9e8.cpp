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

// Function: sub_004AB9E8
// Address: 0x4ab9e8 - 0x4aba48
void sub_004AB9E8_0x4ab9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AB9E8_0x4ab9e8");
#endif

    ctx->pc = 0x4ab9e8u;

    // 0x4ab9e8: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4ab9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4ab9ec: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4ab9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4ab9f0: 0x24630cb0  addiu       $v1, $v1, 0xCB0
    ctx->pc = 0x4ab9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3248));
    // 0x4ab9f4: 0x24420cb8  addiu       $v0, $v0, 0xCB8
    ctx->pc = 0x4ab9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3256));
    // 0x4ab9f8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4ab9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0CB0u));
    // 0x4ab9fc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4ab9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0CB8u));
    // 0x4aba00: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x4aba00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7F0CB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0CB8u, _value); } while (0);
    // 0x4aba04: 0x3e00008  jr          $ra
    ctx->pc = 0x4ABA04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ABA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABA04u;
        // 0x4aba08: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ABA04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ABA0Cu;
    // 0x4aba0c: 0x0  nop
    ctx->pc = 0x4aba0cu;
    // NOP
    // 0x4aba10: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4aba10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4aba14: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4aba14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4aba18: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4aba18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4aba1c: 0x24840cb0  addiu       $a0, $a0, 0xCB0
    ctx->pc = 0x4aba1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3248));
    // 0x4aba20: 0x24420cb8  addiu       $v0, $v0, 0xCB8
    ctx->pc = 0x4aba20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3256));
    // 0x4aba24: 0x24630cb4  addiu       $v1, $v1, 0xCB4
    ctx->pc = 0x4aba24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3252));
    // 0x4aba28: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x4aba28u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F0CB0u));
    // 0x4aba2c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x4aba2cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x7F0CB8u));
    // 0x4aba30: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x4aba30u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0CB4u));
    // 0x4aba34: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x4aba34u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x7F0CB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0CB8u, _value); } while (0);
    // 0x4aba38: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x4aba38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x7F0CB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0CB0u, _value); } while (0);
    // 0x4aba3c: 0x3e00008  jr          $ra
    ctx->pc = 0x4ABA3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ABA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABA3Cu;
        // 0x4aba40: 0xac670000  sw          $a3, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ABA3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ABA44u;
    // 0x4aba44: 0x0  nop
    ctx->pc = 0x4aba44u;
    // NOP
    ctx->pc = 0x4aba48u;
}
