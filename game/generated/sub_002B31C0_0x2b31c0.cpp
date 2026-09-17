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

// Function: sub_002B31C0
// Address: 0x2b31c0 - 0x2b3238
void sub_002B31C0_0x2b31c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B31C0_0x2b31c0");
#endif

    switch (ctx->pc) {
        case 0x2b3228u: goto label_2b3228;
        default: break;
    }

    ctx->pc = 0x2b31c0u;

    // 0x2b31c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b31c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b31c4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2b31c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b31c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b31c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b31cc: 0x3c09fc0f  lui         $t1, 0xFC0F
    ctx->pc = 0x2b31ccu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)64527 << 16));
    // 0x2b31d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b31d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b31d4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2b31d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b31d8: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x2b31d8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x2b31dc: 0x8ce80008  lw          $t0, 0x8($a3)
    ctx->pc = 0x2b31dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2b31e0: 0x3c0a03f0  lui         $t2, 0x3F0
    ctx->pc = 0x2b31e0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)1008 << 16));
    // 0x2b31e4: 0xc4e20030  lwc1        $f2, 0x30($a3)
    ctx->pc = 0x2b31e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b31e8: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x2b31e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b31ec: 0xc4e00034  lwc1        $f0, 0x34($a3)
    ctx->pc = 0x2b31ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b31f0: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x2b31f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b31f4: 0xc4e10038  lwc1        $f1, 0x38($a3)
    ctx->pc = 0x2b31f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b31f8: 0x84e50002  lh          $a1, 0x2($a3)
    ctx->pc = 0x2b31f8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x2b31fc: 0xe5020040  swc1        $f2, 0x40($t0)
    ctx->pc = 0x2b31fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 64), bits); }
    // 0x2b3200: 0xe5000044  swc1        $f0, 0x44($t0)
    ctx->pc = 0x2b3200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 68), bits); }
    // 0x2b3204: 0xe5010048  swc1        $f1, 0x48($t0)
    ctx->pc = 0x2b3204u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 72), bits); }
    // 0x2b3208: 0xe503004c  swc1        $f3, 0x4C($t0)
    ctx->pc = 0x2b3208u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 76), bits); }
    // 0x2b320c: 0x8d030080  lw          $v1, 0x80($t0)
    ctx->pc = 0x2b320cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 128)));
    // 0x2b3210: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x2b3210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2b3214: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x2b3214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x2b3218: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x2b3218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x2b321c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2b321cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2b3220: 0xc0ab272  jal         func_2AC9C8
    ctx->pc = 0x2B3220u;
    SET_GPR_U32(ctx, 31, 0x2B3228u);
    ctx->pc = 0x2B3224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3220u;
    // 0x2b3224: 0xad030080  sw          $v1, 0x80($t0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 8), 128), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC9C8u, 0x2B3220u, 0x2B3228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3228u;
label_2b3228:
    // 0x2b3228: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b3228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b322c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B322Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B322Cu;
        // 0x2b3230: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B322Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3234u;
    // 0x2b3234: 0x0  nop
    ctx->pc = 0x2b3234u;
    // NOP
    ctx->pc = 0x2b3238u;
}
