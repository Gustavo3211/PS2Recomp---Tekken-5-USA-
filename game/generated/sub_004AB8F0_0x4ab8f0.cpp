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

// Function: sub_004AB8F0
// Address: 0x4ab8f0 - 0x4ab990
void sub_004AB8F0_0x4ab8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AB8F0_0x4ab8f0");
#endif

    ctx->pc = 0x4ab8f0u;

    // 0x4ab8f0: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4ab8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4ab8f4: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4ab8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4ab8f8: 0x24630cb4  addiu       $v1, $v1, 0xCB4
    ctx->pc = 0x4ab8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3252));
    // 0x4ab8fc: 0x24420cb8  addiu       $v0, $v0, 0xCB8
    ctx->pc = 0x4ab8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3256));
    // 0x4ab900: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4ab900u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0CB4u));
    // 0x4ab904: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4ab904u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0CB8u));
    // 0x4ab908: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x4ab908u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7F0CB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0CB8u, _value); } while (0);
    // 0x4ab90c: 0x3e00008  jr          $ra
    ctx->pc = 0x4AB90Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AB910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB90Cu;
        // 0x4ab910: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AB90Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AB914u;
    // 0x4ab914: 0x0  nop
    ctx->pc = 0x4ab914u;
    // NOP
    // 0x4ab918: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4ab918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4ab91c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4ab91cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4ab920: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4ab920u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4ab924: 0x24420cb0  addiu       $v0, $v0, 0xCB0
    ctx->pc = 0x4ab924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3248));
    // 0x4ab928: 0x24630cb4  addiu       $v1, $v1, 0xCB4
    ctx->pc = 0x4ab928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3252));
    // 0x4ab92c: 0x24840cb8  addiu       $a0, $a0, 0xCB8
    ctx->pc = 0x4ab92cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3256));
    // 0x4ab930: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x4ab930u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x7F0CB0u));
    // 0x4ab934: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x4ab934u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0CB4u));
    // 0x4ab938: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x4ab938u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F0CB8u));
    // 0x4ab93c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x4ab93cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x7F0CB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0CB0u, _value); } while (0);
    // 0x4ab940: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x4ab940u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x7F0CB4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0CB4u, _value); } while (0);
    // 0x4ab944: 0x3e00008  jr          $ra
    ctx->pc = 0x4AB944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AB948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB944u;
        // 0x4ab948: 0xac870000  sw          $a3, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AB944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AB94Cu;
    // 0x4ab94c: 0x0  nop
    ctx->pc = 0x4ab94cu;
    // NOP
    // 0x4ab950: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4ab950u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4ab954: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4ab954u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4ab958: 0x24a50cb0  addiu       $a1, $a1, 0xCB0
    ctx->pc = 0x4ab958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3248));
    // 0x4ab95c: 0x24630cb8  addiu       $v1, $v1, 0xCB8
    ctx->pc = 0x4ab95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3256));
    // 0x4ab960: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x4ab960u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x7F0CB0u));
    // 0x4ab964: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4ab964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4ab968: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x4ab968u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F0CB8u));
    // 0x4ab96c: 0x24420cb4  addiu       $v0, $v0, 0xCB4
    ctx->pc = 0x4ab96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3252));
    // 0x4ab970: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x4ab970u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x7F0CB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0CB8u, _value); } while (0);
    // 0x4ab974: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x4ab974u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x7F0CB4u));
    // 0x4ab978: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4ab978u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0CB8u));
    // 0x4ab97c: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x4ab97cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x7F0CB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0CB0u, _value); } while (0);
    // 0x4ab980: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x4ab980u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7F0CB4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0CB4u, _value); } while (0);
    // 0x4ab984: 0x3e00008  jr          $ra
    ctx->pc = 0x4AB984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AB988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB984u;
        // 0x4ab988: 0xac670000  sw          $a3, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AB984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AB98Cu;
    // 0x4ab98c: 0x0  nop
    ctx->pc = 0x4ab98cu;
    // NOP
    ctx->pc = 0x4ab990u;
}
