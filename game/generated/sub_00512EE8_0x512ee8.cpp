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

// Function: sub_00512EE8
// Address: 0x512ee8 - 0x512f08
void sub_00512EE8_0x512ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00512EE8_0x512ee8");
#endif

    ctx->pc = 0x512ee8u;

    // 0x512ee8: 0x3c02007e  lui         $v0, 0x7E
    ctx->pc = 0x512ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)126 << 16));
    // 0x512eec: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x512eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x512ef0: 0x2442f650  addiu       $v0, $v0, -0x9B0
    ctx->pc = 0x512ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964816));
    // 0x512ef4: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x512ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x512ef8: 0xa443081e  sh          $v1, 0x81E($v0)
    ctx->pc = 0x512ef8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7DFE6Eu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7DFE6Eu, _value); } while (0);
    // 0x512efc: 0x3e00008  jr          $ra
    ctx->pc = 0x512EFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x512F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x512EFCu;
        // 0x512f00: 0xa444081c  sh          $a0, 0x81C($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 2076), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x512EFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x512F04u;
    // 0x512f04: 0x0  nop
    ctx->pc = 0x512f04u;
    // NOP
    ctx->pc = 0x512f08u;
}
