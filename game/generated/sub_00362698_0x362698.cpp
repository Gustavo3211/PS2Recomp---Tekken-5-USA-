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

// Function: sub_00362698
// Address: 0x362698 - 0x3626d8
void sub_00362698_0x362698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00362698_0x362698");
#endif

    ctx->pc = 0x362698u;

    // 0x362698: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x362698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x36269c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x36269cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3626a0: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x3626a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x3626a4: 0x24425cf0  addiu       $v0, $v0, 0x5CF0
    ctx->pc = 0x3626a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23792));
    // 0x3626a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3626a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3626ac: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x3626acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1D5D0Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1D5D0Cu, _value); } while (0); }
    // 0x3626b0: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x3626b0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1D5CF0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1D5CF0u, _value); } while (0);
    // 0x3626b4: 0xa4400002  sh          $zero, 0x2($v0)
    ctx->pc = 0x3626b4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1D5CF2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1D5CF2u, _value); } while (0);
    // 0x3626b8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3626b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1D5CF4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1D5CF4u, _value); } while (0);
    // 0x3626bc: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x3626bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1D5CF8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1D5CF8u, _value); } while (0);
    // 0x3626c0: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x3626c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1D5CFCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1D5CFCu, _value); } while (0);
    // 0x3626c4: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x3626c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1D5D00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1D5D00u, _value); } while (0);
    // 0x3626c8: 0xa4400014  sh          $zero, 0x14($v0)
    ctx->pc = 0x3626c8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1D5D04u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1D5D04u, _value); } while (0);
    // 0x3626cc: 0xa4400016  sh          $zero, 0x16($v0)
    ctx->pc = 0x3626ccu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1D5D06u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x1D5D06u, _value); } while (0);
    // 0x3626d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3626D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3626D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3626D0u;
        // 0x3626d4: 0xe4400018  swc1        $f0, 0x18($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3626D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3626D8u;
}
