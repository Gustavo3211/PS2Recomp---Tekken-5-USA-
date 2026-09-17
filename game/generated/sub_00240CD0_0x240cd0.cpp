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

// Function: sub_00240CD0
// Address: 0x240cd0 - 0x240d10
void sub_00240CD0_0x240cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00240CD0_0x240cd0");
#endif

    ctx->pc = 0x240cd0u;

    // 0x240cd0: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x240cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x240cd4: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x240cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
    // 0x240cd8: 0x246336c0  addiu       $v1, $v1, 0x36C0
    ctx->pc = 0x240cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14016));
    // 0x240cdc: 0x248436b0  addiu       $a0, $a0, 0x36B0
    ctx->pc = 0x240cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14000));
    // 0x240ce0: 0x246300a0  addiu       $v1, $v1, 0xA0
    ctx->pc = 0x240ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x240ce4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x240ce4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240ce8: 0xc463000c  lwc1        $f3, 0xC($v1)
    ctx->pc = 0x240ce8u;
    { uint32_t bits = FAST_READ32(0x16376Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x240cec: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x240cecu;
    { uint32_t bits = FAST_READ32(0x163760u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x240cf0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x240cf0u;
    { uint32_t bits = FAST_READ32(0x163764u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x240cf4: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x240cf4u;
    { uint32_t bits = FAST_READ32(0x163768u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x240cf8: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x240cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1636B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1636B0u, _value); } while (0); }
    // 0x240cfc: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x240cfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1636B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1636B4u, _value); } while (0); }
    // 0x240d00: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x240d00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1636B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1636B8u, _value); } while (0); }
    // 0x240d04: 0x3e00008  jr          $ra
    ctx->pc = 0x240D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240D04u;
        // 0x240d08: 0xe483000c  swc1        $f3, 0xC($a0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240D04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240D0Cu;
    // 0x240d0c: 0x0  nop
    ctx->pc = 0x240d0cu;
    // NOP
    ctx->pc = 0x240d10u;
}
