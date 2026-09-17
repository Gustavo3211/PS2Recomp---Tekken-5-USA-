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

// Function: sub_002308B0
// Address: 0x2308b0 - 0x2308d8
void sub_002308B0_0x2308b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002308B0_0x2308b0");
#endif

    ctx->pc = 0x2308b0u;

    // 0x2308b0: 0x3c070016  lui         $a3, 0x16
    ctx->pc = 0x2308b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)22 << 16));
    // 0x2308b4: 0x78880000  lq          $t0, 0x0($a0)
    ctx->pc = 0x2308b4u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2308b8: 0x24e7cf90  addiu       $a3, $a3, -0x3070
    ctx->pc = 0x2308b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954896));
    // 0x2308bc: 0x24e30100  addiu       $v1, $a3, 0x100
    ctx->pc = 0x2308bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 256));
    // 0x2308c0: 0x7c680000  sq          $t0, 0x0($v1)
    ctx->pc = 0x2308c0u;
    do { __m128i _value = (GPR_VEC(ctx, 8)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x15D090u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x15D090u, _value); } while (0);
    // 0x2308c4: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x2308c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2308c8: 0xac660020  sw          $a2, 0x20($v1)
    ctx->pc = 0x2308c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x15D0B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15D0B0u, _value); } while (0);
    // 0x2308cc: 0x7ce20110  sq          $v0, 0x110($a3)
    ctx->pc = 0x2308ccu;
    do { __m128i _value = (GPR_VEC(ctx, 2)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x15D0A0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x15D0A0u, _value); } while (0);
    // 0x2308d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2308D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2308D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2308D0u;
        // 0x2308d4: 0xe46c0024  swc1        $f12, 0x24($v1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2308D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2308D8u;
}
