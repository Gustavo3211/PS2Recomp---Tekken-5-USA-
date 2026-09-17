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

// Function: sub_00338DC8
// Address: 0x338dc8 - 0x339160
void sub_00338DC8_0x338dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00338DC8_0x338dc8");
#endif

    switch (ctx->pc) {
        case 0x338ec0u: goto label_338ec0;
        case 0x338f00u: goto label_338f00;
        case 0x338f3cu: goto label_338f3c;
        case 0x338f78u: goto label_338f78;
        case 0x339034u: goto label_339034;
        case 0x339070u: goto label_339070;
        case 0x3390acu: goto label_3390ac;
        case 0x3390e8u: goto label_3390e8;
        case 0x339130u: goto label_339130;
        default: break;
    }

    ctx->pc = 0x338dc8u;

    // 0x338dc8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x338dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x338dcc: 0xffb10098  sd          $s1, 0x98($sp)
    ctx->pc = 0x338dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
    // 0x338dd0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x338dd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338dd4: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x338dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x338dd8: 0x2632fcc0  addiu       $s2, $s1, -0x340
    ctx->pc = 0x338dd8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4294966464));
    // 0x338ddc: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x338ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x338de0: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x338de0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338de4: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x338de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x338de8: 0xe7b900d8  swc1        $f25, 0xD8($sp)
    ctx->pc = 0x338de8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x338dec: 0xe7b800d0  swc1        $f24, 0xD0($sp)
    ctx->pc = 0x338decu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x338df0: 0xe7b700c8  swc1        $f23, 0xC8($sp)
    ctx->pc = 0x338df0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x338df4: 0xe7b600c0  swc1        $f22, 0xC0($sp)
    ctx->pc = 0x338df4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x338df8: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x338df8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x338dfc: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x338dfcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x338e00: 0xda38fd00  lqc2        $vf24, -0x300($s1)
    ctx->pc = 0x338e00u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 4294966528)));
    // 0x338e04: 0xda39fd10  lqc2        $vf25, -0x2F0($s1)
    ctx->pc = 0x338e04u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 4294966544)));
    // 0x338e08: 0xda3afd20  lqc2        $vf26, -0x2E0($s1)
    ctx->pc = 0x338e08u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 4294966560)));
    // 0x338e0c: 0xda3bfd30  lqc2        $vf27, -0x2D0($s1)
    ctx->pc = 0x338e0cu;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 4294966576)));
    // 0x338e10: 0xf8580000  sqc2        $vf24, 0x0($v0)
    ctx->pc = 0x338e10u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x338e14: 0xf8590010  sqc2        $vf25, 0x10($v0)
    ctx->pc = 0x338e14u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[25]));
    // 0x338e18: 0xf85a0020  sqc2        $vf26, 0x20($v0)
    ctx->pc = 0x338e18u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x338e1c: 0xf85b0030  sqc2        $vf27, 0x30($v0)
    ctx->pc = 0x338e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[27]));
    // 0x338e20: 0x4480c800  mtc1        $zero, $f25
    ctx->pc = 0x338e20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x338e24: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x338e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x338e28: 0x46190032  c.eq.s      $f0, $f25
    ctx->pc = 0x338e28u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x338e2c: 0x45000060  bc1f        . + 4 + (0x60 << 2)
    ctx->pc = 0x338E2Cu;
    {
        const bool branch_taken_0x338e2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x338E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338E2Cu;
        // 0x338e30: 0xc7b40030  lwc1        $f20, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x338e2c) {
            ctx->pc = 0x338FB0u;
            goto label_338fb0;
        }
    }
    ctx->pc = 0x338E34u;
    // 0x338e34: 0xc7b4002c  lwc1        $f20, 0x2C($sp)
    ctx->pc = 0x338e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x338e38: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x338e38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x338e3c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x338e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x338e40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x338e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338e44: 0x4600a047  neg.s       $f1, $f20
    ctx->pc = 0x338e44u;
    ctx->f[1] = FPU_NEG_S(ctx->f[20]);
    // 0x338e48: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x338e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x338e4c: 0x46140541  sub.s       $f21, $f0, $f20
    ctx->pc = 0x338e4cu;
    ctx->f[21] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x338e50: 0xc7b60024  lwc1        $f22, 0x24($sp)
    ctx->pc = 0x338e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x338e54: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x338e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x338e58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x338e58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338e5c: 0x4614b501  sub.s       $f20, $f22, $f20
    ctx->pc = 0x338e5cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[22], ctx->f[20]);
    // 0x338e60: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x338e60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x338e64: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x338e64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x338e68: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x338e68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x338e6c: 0xe7b90044  swc1        $f25, 0x44($sp)
    ctx->pc = 0x338e6cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x338e70: 0x0  nop
    ctx->pc = 0x338e70u;
    // NOP
    // 0x338e74: 0x0  nop
    ctx->pc = 0x338e74u;
    // NOP
    // 0x338e78: 0x4602ad43  div.s       $f21, $f21, $f2
    ctx->pc = 0x338e78u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[21] = ctx->f[21] / ctx->f[2];
    // 0x338e7c: 0xe7b70040  swc1        $f23, 0x40($sp)
    ctx->pc = 0x338e7cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x338e80: 0x4601b581  sub.s       $f22, $f22, $f1
    ctx->pc = 0x338e80u;
    ctx->f[22] = FPU_SUB_S(ctx->f[22], ctx->f[1]);
    // 0x338e84: 0xe7b9004c  swc1        $f25, 0x4C($sp)
    ctx->pc = 0x338e84u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x338e88: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x338e88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x338e8c: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x338e8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x338e90: 0x0  nop
    ctx->pc = 0x338e90u;
    // NOP
    // 0x338e94: 0x0  nop
    ctx->pc = 0x338e94u;
    // NOP
    // 0x338e98: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x338e98u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x338e9c: 0x4600ad47  neg.s       $f21, $f21
    ctx->pc = 0x338e9cu;
    ctx->f[21] = FPU_NEG_S(ctx->f[21]);
    // 0x338ea0: 0x0  nop
    ctx->pc = 0x338ea0u;
    // NOP
    // 0x338ea4: 0x0  nop
    ctx->pc = 0x338ea4u;
    // NOP
    // 0x338ea8: 0x4603a503  div.s       $f20, $f20, $f3
    ctx->pc = 0x338ea8u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[3];
    // 0x338eac: 0x0  nop
    ctx->pc = 0x338eacu;
    // NOP
    // 0x338eb0: 0x0  nop
    ctx->pc = 0x338eb0u;
    // NOP
    // 0x338eb4: 0x4603b583  div.s       $f22, $f22, $f3
    ctx->pc = 0x338eb4u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[22] = ctx->f[22] / ctx->f[3];
    // 0x338eb8: 0xc0d118c  jal         func_344630
    ctx->pc = 0x338EB8u;
    SET_GPR_U32(ctx, 31, 0x338EC0u);
    ctx->pc = 0x338EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338EB8u;
    // 0x338ebc: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x344630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344630u, 0x338EB8u, 0x338EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338EC0u;
label_338ec0:
    // 0x338ec0: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x338ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x338ec4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x338ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338ec8: 0xc7a30044  lwc1        $f3, 0x44($sp)
    ctx->pc = 0x338ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x338ecc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x338eccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338ed0: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x338ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x338ed4: 0x4600a507  neg.s       $f20, $f20
    ctx->pc = 0x338ed4u;
    ctx->f[20] = FPU_NEG_S(ctx->f[20]);
    // 0x338ed8: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x338ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x338edc: 0xe7a20050  swc1        $f2, 0x50($sp)
    ctx->pc = 0x338edcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x338ee0: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x338ee0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x338ee4: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x338ee4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x338ee8: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x338ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x338eec: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x338eecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x338ef0: 0xe7b80040  swc1        $f24, 0x40($sp)
    ctx->pc = 0x338ef0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x338ef4: 0xe7b90044  swc1        $f25, 0x44($sp)
    ctx->pc = 0x338ef4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x338ef8: 0xc0d118c  jal         func_344630
    ctx->pc = 0x338EF8u;
    SET_GPR_U32(ctx, 31, 0x338F00u);
    ctx->pc = 0x338EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338EF8u;
    // 0x338efc: 0xe7b9004c  swc1        $f25, 0x4C($sp) (Delay Slot)
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x344630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344630u, 0x338EF8u, 0x338F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338F00u;
label_338f00:
    // 0x338f00: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x338f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x338f04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x338f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338f08: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x338f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x338f0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x338f0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338f10: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x338f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x338f14: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x338f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x338f18: 0xe7a30054  swc1        $f3, 0x54($sp)
    ctx->pc = 0x338f18u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x338f1c: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x338f1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x338f20: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x338f20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x338f24: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x338f24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x338f28: 0xe7b70044  swc1        $f23, 0x44($sp)
    ctx->pc = 0x338f28u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x338f2c: 0xe7b60048  swc1        $f22, 0x48($sp)
    ctx->pc = 0x338f2cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x338f30: 0xe7b90040  swc1        $f25, 0x40($sp)
    ctx->pc = 0x338f30u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x338f34: 0xc0d118c  jal         func_344630
    ctx->pc = 0x338F34u;
    SET_GPR_U32(ctx, 31, 0x338F3Cu);
    ctx->pc = 0x338F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338F34u;
    // 0x338f38: 0xe7b9004c  swc1        $f25, 0x4C($sp) (Delay Slot)
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x344630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344630u, 0x338F34u, 0x338F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338F3Cu;
label_338f3c:
    // 0x338f3c: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x338f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x338f40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x338f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338f44: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x338f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x338f48: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x338f48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338f4c: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x338f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x338f50: 0xc7a2004c  lwc1        $f2, 0x4C($sp)
    ctx->pc = 0x338f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x338f54: 0xe7a30058  swc1        $f3, 0x58($sp)
    ctx->pc = 0x338f54u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x338f58: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x338f58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x338f5c: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x338f5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x338f60: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x338f60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x338f64: 0xe7b80044  swc1        $f24, 0x44($sp)
    ctx->pc = 0x338f64u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x338f68: 0xe7b40048  swc1        $f20, 0x48($sp)
    ctx->pc = 0x338f68u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x338f6c: 0xe7b9004c  swc1        $f25, 0x4C($sp)
    ctx->pc = 0x338f6cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x338f70: 0xc0d118c  jal         func_344630
    ctx->pc = 0x338F70u;
    SET_GPR_U32(ctx, 31, 0x338F78u);
    ctx->pc = 0x338F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338F70u;
    // 0x338f74: 0xe7b90040  swc1        $f25, 0x40($sp) (Delay Slot)
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x344630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344630u, 0x338F70u, 0x338F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338F78u;
label_338f78:
    // 0x338f78: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x338f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x338f7c: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x338f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x338f80: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x338f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x338f84: 0xc7a3004c  lwc1        $f3, 0x4C($sp)
    ctx->pc = 0x338f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x338f88: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x338f88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x338f8c: 0xe7a1006c  swc1        $f1, 0x6C($sp)
    ctx->pc = 0x338f8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x338f90: 0xe7a2007c  swc1        $f2, 0x7C($sp)
    ctx->pc = 0x338f90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x338f94: 0xe7a3008c  swc1        $f3, 0x8C($sp)
    ctx->pc = 0x338f94u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x338f98: 0xdbb80050  lqc2        $vf24, 0x50($sp)
    ctx->pc = 0x338f98u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x338f9c: 0xdbb90060  lqc2        $vf25, 0x60($sp)
    ctx->pc = 0x338f9cu;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x338fa0: 0xdbba0070  lqc2        $vf26, 0x70($sp)
    ctx->pc = 0x338fa0u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x338fa4: 0xdbbb0080  lqc2        $vf27, 0x80($sp)
    ctx->pc = 0x338fa4u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x338fa8: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x338FA8u;
    {
        const bool branch_taken_0x338fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x338fa8) {
            ctx->pc = 0x339118u;
            goto label_339118;
        }
    }
    ctx->pc = 0x338FB0u;
label_338fb0:
    // 0x338fb0: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x338fb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x338fb4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x338fb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x338fb8: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x338fb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x338fbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x338fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338fc0: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x338fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x338fc4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x338fc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338fc8: 0x4614c001  sub.s       $f0, $f24, $f20
    ctx->pc = 0x338fc8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[24], ctx->f[20]);
    // 0x338fcc: 0xc7b70034  lwc1        $f23, 0x34($sp)
    ctx->pc = 0x338fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x338fd0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x338fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x338fd4: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x338fd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x338fd8: 0x4617c541  sub.s       $f21, $f24, $f23
    ctx->pc = 0x338fd8u;
    ctx->f[21] = FPU_SUB_S(ctx->f[24], ctx->f[23]);
    // 0x338fdc: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x338fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x338fe0: 0x4614b501  sub.s       $f20, $f22, $f20
    ctx->pc = 0x338fe0u;
    ctx->f[20] = FPU_SUB_S(ctx->f[22], ctx->f[20]);
    // 0x338fe4: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x338fe4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x338fe8: 0x0  nop
    ctx->pc = 0x338fe8u;
    // NOP
    // 0x338fec: 0x0  nop
    ctx->pc = 0x338fecu;
    // NOP
    // 0x338ff0: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x338ff0u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x338ff4: 0xe7b90044  swc1        $f25, 0x44($sp)
    ctx->pc = 0x338ff4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x338ff8: 0x4617b5c1  sub.s       $f23, $f22, $f23
    ctx->pc = 0x338ff8u;
    ctx->f[23] = FPU_SUB_S(ctx->f[22], ctx->f[23]);
    // 0x338ffc: 0xe7b90048  swc1        $f25, 0x48($sp)
    ctx->pc = 0x338ffcu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x339000: 0x0  nop
    ctx->pc = 0x339000u;
    // NOP
    // 0x339004: 0x0  nop
    ctx->pc = 0x339004u;
    // NOP
    // 0x339008: 0x4601ad43  div.s       $f21, $f21, $f1
    ctx->pc = 0x339008u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[21] = ctx->f[21] / ctx->f[1];
    // 0x33900c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x33900cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x339010: 0x0  nop
    ctx->pc = 0x339010u;
    // NOP
    // 0x339014: 0x0  nop
    ctx->pc = 0x339014u;
    // NOP
    // 0x339018: 0x4602a503  div.s       $f20, $f20, $f2
    ctx->pc = 0x339018u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[2];
    // 0x33901c: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x33901cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x339020: 0x0  nop
    ctx->pc = 0x339020u;
    // NOP
    // 0x339024: 0x0  nop
    ctx->pc = 0x339024u;
    // NOP
    // 0x339028: 0x4601bdc3  div.s       $f23, $f23, $f1
    ctx->pc = 0x339028u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[23] = copysignf(INFINITY, ctx->f[23] * 0.0f); } else ctx->f[23] = ctx->f[23] / ctx->f[1];
    // 0x33902c: 0xc0d118c  jal         func_344630
    ctx->pc = 0x33902Cu;
    SET_GPR_U32(ctx, 31, 0x339034u);
    ctx->pc = 0x339030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33902Cu;
    // 0x339030: 0x4600ad47  neg.s       $f21, $f21 (Delay Slot)
    ctx->f[21] = FPU_NEG_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x344630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344630u, 0x33902Cu, 0x339034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339034u;
label_339034:
    // 0x339034: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x339034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x339038: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x339038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33903c: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x33903cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x339040: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x339040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339044: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x339044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x339048: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x339048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33904c: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x33904cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x339050: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x339050u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x339054: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x339054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x339058: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x339058u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x33905c: 0xe7b4004c  swc1        $f20, 0x4C($sp)
    ctx->pc = 0x33905cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x339060: 0xe7b80040  swc1        $f24, 0x40($sp)
    ctx->pc = 0x339060u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x339064: 0xe7b90044  swc1        $f25, 0x44($sp)
    ctx->pc = 0x339064u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x339068: 0xc0d118c  jal         func_344630
    ctx->pc = 0x339068u;
    SET_GPR_U32(ctx, 31, 0x339070u);
    ctx->pc = 0x33906Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339068u;
    // 0x33906c: 0xe7b90048  swc1        $f25, 0x48($sp) (Delay Slot)
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x344630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344630u, 0x339068u, 0x339070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339070u;
label_339070:
    // 0x339070: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x339070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x339074: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x339074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339078: 0xc7a30044  lwc1        $f3, 0x44($sp)
    ctx->pc = 0x339078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33907c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x33907cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339080: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x339080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x339084: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x339084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x339088: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x339088u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x33908c: 0xe7a30064  swc1        $f3, 0x64($sp)
    ctx->pc = 0x33908cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x339090: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x339090u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x339094: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x339094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x339098: 0xe7b60044  swc1        $f22, 0x44($sp)
    ctx->pc = 0x339098u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x33909c: 0xe7b5004c  swc1        $f21, 0x4C($sp)
    ctx->pc = 0x33909cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x3390a0: 0xe7b90040  swc1        $f25, 0x40($sp)
    ctx->pc = 0x3390a0u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x3390a4: 0xc0d118c  jal         func_344630
    ctx->pc = 0x3390A4u;
    SET_GPR_U32(ctx, 31, 0x3390ACu);
    ctx->pc = 0x3390A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3390A4u;
    // 0x3390a8: 0xe7b90048  swc1        $f25, 0x48($sp) (Delay Slot)
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x344630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344630u, 0x3390A4u, 0x3390ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3390ACu;
label_3390ac:
    // 0x3390ac: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x3390acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3390b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3390b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3390b4: 0xc7a30044  lwc1        $f3, 0x44($sp)
    ctx->pc = 0x3390b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3390b8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3390b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3390bc: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x3390bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3390c0: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x3390c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3390c4: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x3390c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x3390c8: 0xe7a30068  swc1        $f3, 0x68($sp)
    ctx->pc = 0x3390c8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x3390cc: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x3390ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x3390d0: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x3390d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x3390d4: 0xe7b80044  swc1        $f24, 0x44($sp)
    ctx->pc = 0x3390d4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x3390d8: 0xe7b90048  swc1        $f25, 0x48($sp)
    ctx->pc = 0x3390d8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x3390dc: 0xe7b7004c  swc1        $f23, 0x4C($sp)
    ctx->pc = 0x3390dcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x3390e0: 0xc0d118c  jal         func_344630
    ctx->pc = 0x3390E0u;
    SET_GPR_U32(ctx, 31, 0x3390E8u);
    ctx->pc = 0x3390E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3390E0u;
    // 0x3390e4: 0xe7b90040  swc1        $f25, 0x40($sp) (Delay Slot)
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x344630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344630u, 0x3390E0u, 0x3390E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3390E8u;
label_3390e8:
    // 0x3390e8: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x3390e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3390ec: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x3390ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3390f0: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x3390f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3390f4: 0xc7a3004c  lwc1        $f3, 0x4C($sp)
    ctx->pc = 0x3390f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3390f8: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x3390f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x3390fc: 0xe7a1006c  swc1        $f1, 0x6C($sp)
    ctx->pc = 0x3390fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x339100: 0xe7a2007c  swc1        $f2, 0x7C($sp)
    ctx->pc = 0x339100u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x339104: 0xe7a3008c  swc1        $f3, 0x8C($sp)
    ctx->pc = 0x339104u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x339108: 0xdbb80050  lqc2        $vf24, 0x50($sp)
    ctx->pc = 0x339108u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x33910c: 0xdbb90060  lqc2        $vf25, 0x60($sp)
    ctx->pc = 0x33910cu;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x339110: 0xdbba0070  lqc2        $vf26, 0x70($sp)
    ctx->pc = 0x339110u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x339114: 0xdbbb0080  lqc2        $vf27, 0x80($sp)
    ctx->pc = 0x339114u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_339118:
    // 0x339118: 0xfa380000  sqc2        $vf24, 0x0($s1)
    ctx->pc = 0x339118u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x33911c: 0xfa390010  sqc2        $vf25, 0x10($s1)
    ctx->pc = 0x33911cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[25]));
    // 0x339120: 0xfa3a0020  sqc2        $vf26, 0x20($s1)
    ctx->pc = 0x339120u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x339124: 0xfa3b0030  sqc2        $vf27, 0x30($s1)
    ctx->pc = 0x339124u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[27]));
    // 0x339128: 0xc0ce458  jal         func_339160
    ctx->pc = 0x339128u;
    SET_GPR_U32(ctx, 31, 0x339130u);
    ctx->pc = 0x33912Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339128u;
    // 0x33912c: 0x26440380  addiu       $a0, $s2, 0x380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339160u, 0x339128u, 0x339130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339130u;
label_339130:
    // 0x339130: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x339130u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x339134: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x339134u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x339138: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x339138u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x33913c: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x33913cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x339140: 0xc7b900d8  lwc1        $f25, 0xD8($sp)
    ctx->pc = 0x339140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x339144: 0xc7b800d0  lwc1        $f24, 0xD0($sp)
    ctx->pc = 0x339144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x339148: 0xc7b700c8  lwc1        $f23, 0xC8($sp)
    ctx->pc = 0x339148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x33914c: 0xc7b600c0  lwc1        $f22, 0xC0($sp)
    ctx->pc = 0x33914cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x339150: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x339150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x339154: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x339154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x339158: 0x3e00008  jr          $ra
    ctx->pc = 0x339158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33915Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339158u;
        // 0x33915c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x339160u;
}
