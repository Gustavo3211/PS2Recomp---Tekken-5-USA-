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

// Function: sub_00311AA8
// Address: 0x311aa8 - 0x311b20
void sub_00311AA8_0x311aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00311AA8_0x311aa8");
#endif

    ctx->pc = 0x311aa8u;

    // 0x311aa8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x311aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x311aac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x311aacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311ab0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x311ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x311ab4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x311ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x311ab8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x311ab8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x311abc: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x311abcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x311ac0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x311ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x311ac4: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x311ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x311ac8: 0x2442f850  addiu       $v0, $v0, -0x7B0
    ctx->pc = 0x311ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965328));
    // 0x311acc: 0x2463f860  addiu       $v1, $v1, -0x7A0
    ctx->pc = 0x311accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965344));
    // 0x311ad0: 0x2484f870  addiu       $a0, $a0, -0x790
    ctx->pc = 0x311ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965360));
    // 0x311ad4: 0x24a5f880  addiu       $a1, $a1, -0x780
    ctx->pc = 0x311ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965376));
    // 0x311ad8: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x311ad8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EF87Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EF87Cu, _value); } while (0); }
    // 0x311adc: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x311adcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EF85Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EF85Cu, _value); } while (0); }
    // 0x311ae0: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x311ae0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EF86Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EF86Cu, _value); } while (0);
    // 0x311ae4: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x311ae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EF880u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EF880u, _value); } while (0); }
    // 0x311ae8: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x311ae8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EF88Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EF88Cu, _value); } while (0);
    // 0x311aec: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x311aecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EF858u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EF858u, _value); } while (0); }
    // 0x311af0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x311af0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EF854u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EF854u, _value); } while (0); }
    // 0x311af4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x311af4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EF850u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EF850u, _value); } while (0); }
    // 0x311af8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x311af8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EF868u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EF868u, _value); } while (0); }
    // 0x311afc: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x311afcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EF864u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EF864u, _value); } while (0); }
    // 0x311b00: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x311b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EF860u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EF860u, _value); } while (0); }
    // 0x311b04: 0xe780c56c  swc1        $f0, -0x3A94($gp)
    ctx->pc = 0x311b04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294952300), bits); }
    // 0x311b08: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x311b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EF878u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EF878u, _value); } while (0); }
    // 0x311b0c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x311b0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EF874u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EF874u, _value); } while (0); }
    // 0x311b10: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x311b10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EF870u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EF870u, _value); } while (0); }
    // 0x311b14: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x311b14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EF888u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EF888u, _value); } while (0); }
    // 0x311b18: 0x3e00008  jr          $ra
    ctx->pc = 0x311B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311B18u;
        // 0x311b1c: 0xe4a00004  swc1        $f0, 0x4($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311B18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x311B20u;
}
