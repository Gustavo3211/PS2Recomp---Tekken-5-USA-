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

// Function: sub_00297DB0
// Address: 0x297db0 - 0x297de0
void sub_00297DB0_0x297db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00297DB0_0x297db0");
#endif

    ctx->pc = 0x297db0u;

    // 0x297db0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x297db0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x297db4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x297db4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x297db8: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x297db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x297dbc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x297dbcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x297dc0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x297dc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x297dc4: 0x244274e8  addiu       $v0, $v0, 0x74E8
    ctx->pc = 0x297dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29928));
    // 0x297dc8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x297dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x297dcc: 0xe44c000c  swc1        $f12, 0xC($v0)
    ctx->pc = 0x297dccu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1774F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1774F4u, _value); } while (0); }
    // 0x297dd0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x297dd0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1774E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1774E8u, _value); } while (0);
    // 0x297dd4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x297dd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1774ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1774ECu, _value); } while (0); }
    // 0x297dd8: 0x3e00008  jr          $ra
    ctx->pc = 0x297DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297DD8u;
        // 0x297ddc: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297DD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297DE0u;
}
