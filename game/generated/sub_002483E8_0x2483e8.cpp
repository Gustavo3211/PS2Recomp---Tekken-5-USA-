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

// Function: sub_002483E8
// Address: 0x2483e8 - 0x248410
void sub_002483E8_0x2483e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002483E8_0x2483e8");
#endif

    ctx->pc = 0x2483e8u;

    // 0x2483e8: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2483e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2483ec: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x2483ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x2483f0: 0x24426fe0  addiu       $v0, $v0, 0x6FE0
    ctx->pc = 0x2483f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28640));
    // 0x2483f4: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x2483f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x166FE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x166FE0u, _value); } while (0); }
    // 0x2483f8: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x2483f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2483fc: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2483fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x166FE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x166FE4u, _value); } while (0); }
    // 0x248400: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x248400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x248404: 0x3e00008  jr          $ra
    ctx->pc = 0x248404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248404u;
        // 0x248408: 0xe4410008  swc1        $f1, 0x8($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24840Cu;
    // 0x24840c: 0x0  nop
    ctx->pc = 0x24840cu;
    // NOP
    ctx->pc = 0x248410u;
}
