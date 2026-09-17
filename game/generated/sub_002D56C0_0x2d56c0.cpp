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

// Function: sub_002D56C0
// Address: 0x2d56c0 - 0x2d5730
void sub_002D56C0_0x2d56c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D56C0_0x2d56c0");
#endif

    switch (ctx->pc) {
        case 0x2d56e0u: goto label_2d56e0;
        default: break;
    }

    ctx->pc = 0x2d56c0u;

    // 0x2d56c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d56c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d56c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d56c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d56c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d56c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d56cc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2d56ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2d56d0: 0xe60c0024  swc1        $f12, 0x24($s0)
    ctx->pc = 0x2d56d0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x2d56d4: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x2d56d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d56d8: 0xc0b559e  jal         func_2D5678
    ctx->pc = 0x2D56D8u;
    SET_GPR_U32(ctx, 31, 0x2D56E0u);
    ctx->pc = 0x2D56DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D56D8u;
    // 0x2d56dc: 0xe6000014  swc1        $f0, 0x14($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5678u, 0x2D56D8u, 0x2D56E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D56E0u;
label_2d56e0:
    // 0x2d56e0: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x2d56e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2d56e4: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x2d56e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d56e8: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x2d56e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2d56ec: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x2d56ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x2d56f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d56f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d56f4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2d56f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2d56f8: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x2d56f8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2d56fc: 0xc78294a8  lwc1        $f2, -0x6B58($gp)
    ctx->pc = 0x2d56fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d5700: 0xe603001c  swc1        $f3, 0x1C($s0)
    ctx->pc = 0x2d5700u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x2d5704: 0xe6020020  swc1        $f2, 0x20($s0)
    ctx->pc = 0x2d5704u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x2d5708: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x2d5708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x2d570c: 0x0  nop
    ctx->pc = 0x2d570cu;
    // NOP
    // 0x2d5710: 0x0  nop
    ctx->pc = 0x2d5710u;
    // NOP
    // 0x2d5714: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x2d5714u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[4];
    // 0x2d5718: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2d5718u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2d571c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2d571cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d5720: 0xe6010018  swc1        $f1, 0x18($s0)
    ctx->pc = 0x2d5720u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x2d5724: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d5724u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d5728: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D572Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5728u;
        // 0x2d572c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5730u;
}
