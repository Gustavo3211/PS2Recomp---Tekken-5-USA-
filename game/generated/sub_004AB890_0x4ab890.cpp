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

// Function: sub_004AB890
// Address: 0x4ab890 - 0x4ab8f0
void sub_004AB890_0x4ab890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AB890_0x4ab890");
#endif

    ctx->pc = 0x4ab890u;

    // 0x4ab890: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4ab890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4ab894: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4ab894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4ab898: 0x24630cb0  addiu       $v1, $v1, 0xCB0
    ctx->pc = 0x4ab898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3248));
    // 0x4ab89c: 0x24420cb8  addiu       $v0, $v0, 0xCB8
    ctx->pc = 0x4ab89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3256));
    // 0x4ab8a0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4ab8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0CB0u));
    // 0x4ab8a4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4ab8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0CB8u));
    // 0x4ab8a8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x4ab8a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7F0CB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0CB8u, _value); } while (0);
    // 0x4ab8ac: 0x3e00008  jr          $ra
    ctx->pc = 0x4AB8ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AB8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB8ACu;
        // 0x4ab8b0: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AB8ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AB8B4u;
    // 0x4ab8b4: 0x0  nop
    ctx->pc = 0x4ab8b4u;
    // NOP
    // 0x4ab8b8: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4ab8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4ab8bc: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4ab8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4ab8c0: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4ab8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4ab8c4: 0x24840cb0  addiu       $a0, $a0, 0xCB0
    ctx->pc = 0x4ab8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3248));
    // 0x4ab8c8: 0x24420cb4  addiu       $v0, $v0, 0xCB4
    ctx->pc = 0x4ab8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3252));
    // 0x4ab8cc: 0x24630cb8  addiu       $v1, $v1, 0xCB8
    ctx->pc = 0x4ab8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3256));
    // 0x4ab8d0: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x4ab8d0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F0CB0u));
    // 0x4ab8d4: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x4ab8d4u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x7F0CB4u));
    // 0x4ab8d8: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x4ab8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0CB8u));
    // 0x4ab8dc: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x4ab8dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x7F0CB4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0CB4u, _value); } while (0);
    // 0x4ab8e0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x4ab8e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x7F0CB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0CB0u, _value); } while (0);
    // 0x4ab8e4: 0x3e00008  jr          $ra
    ctx->pc = 0x4AB8E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AB8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB8E4u;
        // 0x4ab8e8: 0xac670000  sw          $a3, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AB8E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AB8ECu;
    // 0x4ab8ec: 0x0  nop
    ctx->pc = 0x4ab8ecu;
    // NOP
    ctx->pc = 0x4ab8f0u;
}
