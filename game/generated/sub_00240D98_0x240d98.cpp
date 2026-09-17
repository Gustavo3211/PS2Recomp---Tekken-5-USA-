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

// Function: sub_00240D98
// Address: 0x240d98 - 0x240dc8
void sub_00240D98_0x240d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00240D98_0x240d98");
#endif

    ctx->pc = 0x240d98u;

    // 0x240d98: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x240d98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x240d9c: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x240d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x240da0: 0x246336c0  addiu       $v1, $v1, 0x36C0
    ctx->pc = 0x240da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14016));
    // 0x240da4: 0x24620080  addiu       $v0, $v1, 0x80
    ctx->pc = 0x240da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x240da8: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x240da8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x163740u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x163740u, _value); } while (0); }
    // 0x240dac: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x240dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x240db0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x240db0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x163744u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x163744u, _value); } while (0); }
    // 0x240db4: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x240db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x240db8: 0xac60008c  sw          $zero, 0x8C($v1)
    ctx->pc = 0x240db8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x16374Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x16374Cu, _value); } while (0);
    // 0x240dbc: 0x3e00008  jr          $ra
    ctx->pc = 0x240DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240DBCu;
        // 0x240dc0: 0xe4410008  swc1        $f1, 0x8($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240DBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240DC4u;
    // 0x240dc4: 0x0  nop
    ctx->pc = 0x240dc4u;
    // NOP
    ctx->pc = 0x240dc8u;
}
