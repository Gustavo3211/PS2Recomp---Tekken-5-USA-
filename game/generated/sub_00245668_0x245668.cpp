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

// Function: sub_00245668
// Address: 0x245668 - 0x2456d8
void sub_00245668_0x245668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245668_0x245668");
#endif

    ctx->pc = 0x245668u;

    // 0x245668: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x245668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x24566c: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x24566cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x245670: 0x246368d0  addiu       $v1, $v1, 0x68D0
    ctx->pc = 0x245670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26832));
    // 0x245674: 0x3c013c00  lui         $at, 0x3C00
    ctx->pc = 0x245674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15360 << 16));
    // 0x245678: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x245678u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x24567c: 0xac620020  sw          $v0, 0x20($v1)
    ctx->pc = 0x24567cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1668F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1668F0u, _value); } while (0);
    // 0x245680: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x245680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245684: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x245684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1668D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1668D0u, _value); } while (0); }
    // 0x245688: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x245688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24568c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x24568cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1668D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1668D4u, _value); } while (0); }
    // 0x245690: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x245690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245694: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x245694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1668D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1668D8u, _value); } while (0); }
    // 0x245698: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x245698u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x24569c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24569cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2456a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2456a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2456a4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2456a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2456a8: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x2456a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1668E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1668E0u, _value); } while (0); }
    // 0x2456ac: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x2456acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x2456b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2456b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2456b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2456b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2456b8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2456b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2456bc: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x2456bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1668E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1668E4u, _value); } while (0); }
    // 0x2456c0: 0x90a20002  lbu         $v0, 0x2($a1)
    ctx->pc = 0x2456c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2456c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2456c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2456c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2456c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2456cc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2456ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2456d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2456D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2456D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2456D0u;
        // 0x2456d4: 0xe4600018  swc1        $f0, 0x18($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2456D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2456D8u;
}
