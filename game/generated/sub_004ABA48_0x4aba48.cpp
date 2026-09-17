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

// Function: sub_004ABA48
// Address: 0x4aba48 - 0x4abae8
void sub_004ABA48_0x4aba48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ABA48_0x4aba48");
#endif

    ctx->pc = 0x4aba48u;

    // 0x4aba48: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4aba48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4aba4c: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4aba4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4aba50: 0x24630cb4  addiu       $v1, $v1, 0xCB4
    ctx->pc = 0x4aba50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3252));
    // 0x4aba54: 0x24420cb8  addiu       $v0, $v0, 0xCB8
    ctx->pc = 0x4aba54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3256));
    // 0x4aba58: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4aba58u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0CB4u));
    // 0x4aba5c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4aba5cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0CB8u));
    // 0x4aba60: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x4aba60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7F0CB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0CB8u, _value); } while (0);
    // 0x4aba64: 0x3e00008  jr          $ra
    ctx->pc = 0x4ABA64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ABA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABA64u;
        // 0x4aba68: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ABA64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ABA6Cu;
    // 0x4aba6c: 0x0  nop
    ctx->pc = 0x4aba6cu;
    // NOP
    // 0x4aba70: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4aba70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4aba74: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4aba74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4aba78: 0x24840cb4  addiu       $a0, $a0, 0xCB4
    ctx->pc = 0x4aba78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3252));
    // 0x4aba7c: 0x24420cb8  addiu       $v0, $v0, 0xCB8
    ctx->pc = 0x4aba7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3256));
    // 0x4aba80: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x4aba80u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F0CB4u));
    // 0x4aba84: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4aba84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4aba88: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4aba88u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0CB8u));
    // 0x4aba8c: 0x24630cb0  addiu       $v1, $v1, 0xCB0
    ctx->pc = 0x4aba8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3248));
    // 0x4aba90: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x4aba90u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x7F0CB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0CB8u, _value); } while (0);
    // 0x4aba94: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x4aba94u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F0CB0u));
    // 0x4aba98: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x4aba98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x7F0CB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0CB0u, _value); } while (0);
    // 0x4aba9c: 0x3e00008  jr          $ra
    ctx->pc = 0x4ABA9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ABAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABA9Cu;
        // 0x4abaa0: 0xac860000  sw          $a2, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ABA9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ABAA4u;
    // 0x4abaa4: 0x0  nop
    ctx->pc = 0x4abaa4u;
    // NOP
    // 0x4abaa8: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4abaa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4abaac: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4abaacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4abab0: 0x24a50cb4  addiu       $a1, $a1, 0xCB4
    ctx->pc = 0x4abab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3252));
    // 0x4abab4: 0x24630cb8  addiu       $v1, $v1, 0xCB8
    ctx->pc = 0x4abab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3256));
    // 0x4abab8: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x4abab8u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x7F0CB4u));
    // 0x4ababc: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4ababcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4abac0: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x4abac0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F0CB8u));
    // 0x4abac4: 0x24420cb0  addiu       $v0, $v0, 0xCB0
    ctx->pc = 0x4abac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3248));
    // 0x4abac8: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x4abac8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x7F0CB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0CB8u, _value); } while (0);
    // 0x4abacc: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x4abaccu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x7F0CB0u));
    // 0x4abad0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4abad0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0CB8u));
    // 0x4abad4: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x4abad4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x7F0CB4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0CB4u, _value); } while (0);
    // 0x4abad8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x4abad8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7F0CB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0CB0u, _value); } while (0);
    // 0x4abadc: 0x3e00008  jr          $ra
    ctx->pc = 0x4ABADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ABAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABADCu;
        // 0x4abae0: 0xac670000  sw          $a3, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ABADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ABAE4u;
    // 0x4abae4: 0x0  nop
    ctx->pc = 0x4abae4u;
    // NOP
    ctx->pc = 0x4abae8u;
}
