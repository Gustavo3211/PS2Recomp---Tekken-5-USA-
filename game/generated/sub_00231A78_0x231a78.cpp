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

// Function: sub_00231A78
// Address: 0x231a78 - 0x231a98
void sub_00231A78_0x231a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231A78_0x231a78");
#endif

    ctx->pc = 0x231a78u;

    // 0x231a78: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x231a78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x231a7c: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x231a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x231a80: 0x2463d350  addiu       $v1, $v1, -0x2CB0
    ctx->pc = 0x231a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955856));
    // 0x231a84: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x231a84u;
    do { __m128i _value = (GPR_VEC(ctx, 2)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x15D350u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x15D350u, _value); } while (0);
    // 0x231a88: 0x78a40000  lq          $a0, 0x0($a1)
    ctx->pc = 0x231a88u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x231a8c: 0xe46c0020  swc1        $f12, 0x20($v1)
    ctx->pc = 0x231a8cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x15D370u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15D370u, _value); } while (0); }
    // 0x231a90: 0x3e00008  jr          $ra
    ctx->pc = 0x231A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231A90u;
        // 0x231a94: 0x7c640010  sq          $a0, 0x10($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231A90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231A98u;
}
