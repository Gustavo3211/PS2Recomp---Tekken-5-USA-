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

// Function: sub_002984B0
// Address: 0x2984b0 - 0x298538
void sub_002984B0_0x2984b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002984B0_0x2984b0");
#endif

    ctx->pc = 0x2984b0u;

    // 0x2984b0: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x2984b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x2984b4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2984b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2984b8: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x2984b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x2984bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2984bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2984c0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2984c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2984c4: 0x24427500  addiu       $v0, $v0, 0x7500
    ctx->pc = 0x2984c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29952));
    // 0x2984c8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2984c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2984cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2984ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2984d0: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x2984d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x2984d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2984d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2984d8: 0xe44201c4  swc1        $f2, 0x1C4($v0)
    ctx->pc = 0x2984d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1776C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1776C4u, _value); } while (0); }
    // 0x2984dc: 0xe4400210  swc1        $f0, 0x210($v0)
    ctx->pc = 0x2984dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x177710u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x177710u, _value); } while (0); }
    // 0x2984e0: 0xe44101d4  swc1        $f1, 0x1D4($v0)
    ctx->pc = 0x2984e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1776D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1776D4u, _value); } while (0); }
    // 0x2984e4: 0xe44301dc  swc1        $f3, 0x1DC($v0)
    ctx->pc = 0x2984e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1776DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1776DCu, _value); } while (0); }
    // 0x2984e8: 0xac400154  sw          $zero, 0x154($v0)
    ctx->pc = 0x2984e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x177654u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x177654u, _value); } while (0);
    // 0x2984ec: 0xac400158  sw          $zero, 0x158($v0)
    ctx->pc = 0x2984ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x177658u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x177658u, _value); } while (0);
    // 0x2984f0: 0xac400160  sw          $zero, 0x160($v0)
    ctx->pc = 0x2984f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x177660u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x177660u, _value); } while (0);
    // 0x2984f4: 0xac40015c  sw          $zero, 0x15C($v0)
    ctx->pc = 0x2984f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x17765Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x17765Cu, _value); } while (0);
    // 0x2984f8: 0xac400164  sw          $zero, 0x164($v0)
    ctx->pc = 0x2984f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x177664u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x177664u, _value); } while (0);
    // 0x2984fc: 0xac40016c  sw          $zero, 0x16C($v0)
    ctx->pc = 0x2984fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x17766Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x17766Cu, _value); } while (0);
    // 0x298500: 0xac400080  sw          $zero, 0x80($v0)
    ctx->pc = 0x298500u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x177580u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x177580u, _value); } while (0);
    // 0x298504: 0xac4001a8  sw          $zero, 0x1A8($v0)
    ctx->pc = 0x298504u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1776A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1776A8u, _value); } while (0);
    // 0x298508: 0xac4001a4  sw          $zero, 0x1A4($v0)
    ctx->pc = 0x298508u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1776A4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1776A4u, _value); } while (0);
    // 0x29850c: 0xac4001ac  sw          $zero, 0x1AC($v0)
    ctx->pc = 0x29850cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1776ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1776ACu, _value); } while (0);
    // 0x298510: 0xac4001b0  sw          $zero, 0x1B0($v0)
    ctx->pc = 0x298510u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1776B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1776B0u, _value); } while (0);
    // 0x298514: 0xe44201b4  swc1        $f2, 0x1B4($v0)
    ctx->pc = 0x298514u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1776B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1776B4u, _value); } while (0); }
    // 0x298518: 0xe44201b8  swc1        $f2, 0x1B8($v0)
    ctx->pc = 0x298518u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1776B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1776B8u, _value); } while (0); }
    // 0x29851c: 0xe44301bc  swc1        $f3, 0x1BC($v0)
    ctx->pc = 0x29851cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1776BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1776BCu, _value); } while (0); }
    // 0x298520: 0xac4001c0  sw          $zero, 0x1C0($v0)
    ctx->pc = 0x298520u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1776C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1776C0u, _value); } while (0);
    // 0x298524: 0xac4001c8  sw          $zero, 0x1C8($v0)
    ctx->pc = 0x298524u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1776C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1776C8u, _value); } while (0);
    // 0x298528: 0xe44301cc  swc1        $f3, 0x1CC($v0)
    ctx->pc = 0x298528u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1776CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1776CCu, _value); } while (0); }
    // 0x29852c: 0xac4001d0  sw          $zero, 0x1D0($v0)
    ctx->pc = 0x29852cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1776D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1776D0u, _value); } while (0);
    // 0x298530: 0x3e00008  jr          $ra
    ctx->pc = 0x298530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298530u;
        // 0x298534: 0xac4001d8  sw          $zero, 0x1D8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 472), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298538u;
}
