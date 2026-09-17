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

// Function: sub_00300138
// Address: 0x300138 - 0x3001b0
void sub_00300138_0x300138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00300138_0x300138");
#endif

    ctx->pc = 0x300138u;

    // 0x300138: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x300138u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x30013c: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x30013cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x300140: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x300140u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x300144: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x300144u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x300148: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x300148u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x30014c: 0xac800080  sw          $zero, 0x80($a0)
    ctx->pc = 0x30014cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 0));
    // 0x300150: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x300150u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x300154: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x300154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x300158: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x300158u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30015c: 0xc7819538  lwc1        $f1, -0x6AC8($gp)
    ctx->pc = 0x30015cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x300160: 0xc782953c  lwc1        $f2, -0x6AC4($gp)
    ctx->pc = 0x300160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x300164: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x300164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x300168: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x300168u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x30016c: 0xc7849540  lwc1        $f4, -0x6AC0($gp)
    ctx->pc = 0x30016cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x300170: 0xe4800040  swc1        $f0, 0x40($a0)
    ctx->pc = 0x300170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x300174: 0xe4810044  swc1        $f1, 0x44($a0)
    ctx->pc = 0x300174u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
    // 0x300178: 0xe4820048  swc1        $f2, 0x48($a0)
    ctx->pc = 0x300178u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
    // 0x30017c: 0xe483004c  swc1        $f3, 0x4C($a0)
    ctx->pc = 0x30017cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 76), bits); }
    // 0x300180: 0xe4840068  swc1        $f4, 0x68($a0)
    ctx->pc = 0x300180u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 104), bits); }
    // 0x300184: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x300184u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x300188: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x300188u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x30018c: 0xac800054  sw          $zero, 0x54($a0)
    ctx->pc = 0x30018cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
    // 0x300190: 0xac800058  sw          $zero, 0x58($a0)
    ctx->pc = 0x300190u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
    // 0x300194: 0xac80005c  sw          $zero, 0x5C($a0)
    ctx->pc = 0x300194u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 0));
    // 0x300198: 0xac800060  sw          $zero, 0x60($a0)
    ctx->pc = 0x300198u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
    // 0x30019c: 0xac800064  sw          $zero, 0x64($a0)
    ctx->pc = 0x30019cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 0));
    // 0x3001a0: 0xac80006c  sw          $zero, 0x6C($a0)
    ctx->pc = 0x3001a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 0));
    // 0x3001a4: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x3001a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x3001a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3001A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3001ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3001A8u;
        // 0x3001ac: 0xac800034  sw          $zero, 0x34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3001A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3001B0u;
}
