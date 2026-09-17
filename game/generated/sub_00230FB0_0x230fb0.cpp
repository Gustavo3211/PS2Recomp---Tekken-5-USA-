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

// Function: sub_00230FB0
// Address: 0x230fb0 - 0x231720
void sub_00230FB0_0x230fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230FB0_0x230fb0");
#endif

    switch (ctx->pc) {
        case 0x231020u: goto label_231020;
        case 0x231098u: goto label_231098;
        case 0x2310a4u: goto label_2310a4;
        case 0x2310c4u: goto label_2310c4;
        case 0x231110u: goto label_231110;
        case 0x231158u: goto label_231158;
        case 0x2311a0u: goto label_2311a0;
        case 0x2311e0u: goto label_2311e0;
        case 0x231204u: goto label_231204;
        case 0x231210u: goto label_231210;
        case 0x231224u: goto label_231224;
        case 0x231244u: goto label_231244;
        case 0x231250u: goto label_231250;
        case 0x2312a8u: goto label_2312a8;
        case 0x2312c0u: goto label_2312c0;
        case 0x2312d0u: goto label_2312d0;
        case 0x231314u: goto label_231314;
        case 0x2313a4u: goto label_2313a4;
        case 0x2313b8u: goto label_2313b8;
        case 0x2313c8u: goto label_2313c8;
        case 0x2313d0u: goto label_2313d0;
        case 0x2313f4u: goto label_2313f4;
        case 0x231420u: goto label_231420;
        case 0x231438u: goto label_231438;
        case 0x231460u: goto label_231460;
        case 0x231548u: goto label_231548;
        case 0x231554u: goto label_231554;
        case 0x2315fcu: goto label_2315fc;
        case 0x231618u: goto label_231618;
        case 0x231620u: goto label_231620;
        case 0x23162cu: goto label_23162c;
        case 0x231648u: goto label_231648;
        case 0x2316c0u: goto label_2316c0;
        case 0x2316ccu: goto label_2316cc;
        default: break;
    }

    ctx->pc = 0x230fb0u;

    // 0x230fb0: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x230fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x230fb4: 0xffb00110  sd          $s0, 0x110($sp)
    ctx->pc = 0x230fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
    // 0x230fb8: 0xffb10118  sd          $s1, 0x118($sp)
    ctx->pc = 0x230fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 17));
    // 0x230fbc: 0xffb40130  sd          $s4, 0x130($sp)
    ctx->pc = 0x230fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 20));
    // 0x230fc0: 0x3c140016  lui         $s4, 0x16
    ctx->pc = 0x230fc0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)22 << 16));
    // 0x230fc4: 0xffbe0150  sd          $fp, 0x150($sp)
    ctx->pc = 0x230fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 30));
    // 0x230fc8: 0x3c1e003b  lui         $fp, 0x3B
    ctx->pc = 0x230fc8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)59 << 16));
    // 0x230fcc: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x230fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x230fd0: 0x27c28858  addiu       $v0, $fp, -0x77A8
    ctx->pc = 0x230fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294936664));
    // 0x230fd4: 0xffb30128  sd          $s3, 0x128($sp)
    ctx->pc = 0x230fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 19));
    // 0x230fd8: 0x2691cf90  addiu       $s1, $s4, -0x3070
    ctx->pc = 0x230fd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 4294954896));
    // 0x230fdc: 0xffb50138  sd          $s5, 0x138($sp)
    ctx->pc = 0x230fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 21));
    // 0x230fe0: 0xffb60140  sd          $s6, 0x140($sp)
    ctx->pc = 0x230fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 22));
    // 0x230fe4: 0xffb70148  sd          $s7, 0x148($sp)
    ctx->pc = 0x230fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 23));
    // 0x230fe8: 0xffbf0158  sd          $ra, 0x158($sp)
    ctx->pc = 0x230fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 31));
    // 0x230fec: 0xe7bb0198  swc1        $f27, 0x198($sp)
    ctx->pc = 0x230fecu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x230ff0: 0xe7ba0190  swc1        $f26, 0x190($sp)
    ctx->pc = 0x230ff0u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x230ff4: 0xe7b90188  swc1        $f25, 0x188($sp)
    ctx->pc = 0x230ff4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x230ff8: 0xe7b80180  swc1        $f24, 0x180($sp)
    ctx->pc = 0x230ff8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x230ffc: 0xe7b70178  swc1        $f23, 0x178($sp)
    ctx->pc = 0x230ffcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x231000: 0xe7b60170  swc1        $f22, 0x170($sp)
    ctx->pc = 0x231000u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x231004: 0xe7b50168  swc1        $f21, 0x168($sp)
    ctx->pc = 0x231004u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x231008: 0xe7b40160  swc1        $f20, 0x160($sp)
    ctx->pc = 0x231008u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x23100c: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x23100cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A88ACu));
    // 0x231010: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x231010u;
    {
        const bool branch_taken_0x231010 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x231014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231010u;
        // 0x231014: 0x26300100  addiu       $s0, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231010) {
            ctx->pc = 0x231020u;
            goto label_231020;
        }
    }
    ctx->pc = 0x231018u;
    // 0x231018: 0xc08e4ce  jal         func_239338
    ctx->pc = 0x231018u;
    SET_GPR_U32(ctx, 31, 0x231020u);
    ctx->pc = 0x239338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239338u, 0x231018u, 0x231020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231020u;
label_231020:
    // 0x231020: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x231020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x231024: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x231024u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231028: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x231028u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x23102c: 0x246379c0  addiu       $v1, $v1, 0x79C0
    ctx->pc = 0x23102cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31168));
    // 0x231030: 0xde0d0000  ld          $t5, 0x0($s0)
    ctx->pc = 0x231030u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x231034: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x231034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x231038: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x231038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23103c: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x23103cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x231040: 0x263000c0  addiu       $s0, $s1, 0xC0
    ctx->pc = 0x231040u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x231044: 0x4480c000  mtc1        $zero, $f24
    ctx->pc = 0x231044u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x231048: 0xdc650008  ld          $a1, 0x8($v1)
    ctx->pc = 0x231048u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x4679C8u));
    // 0x23104c: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x23104cu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x4679C0u));
    // 0x231050: 0xde260108  ld          $a2, 0x108($s1)
    ctx->pc = 0x231050u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 17), 264)));
    // 0x231054: 0xde270110  ld          $a3, 0x110($s1)
    ctx->pc = 0x231054u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x231058: 0xde280118  ld          $t0, 0x118($s1)
    ctx->pc = 0x231058u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x23105c: 0xde290120  ld          $t1, 0x120($s1)
    ctx->pc = 0x23105cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x231060: 0xde2a0128  ld          $t2, 0x128($s1)
    ctx->pc = 0x231060u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 17), 296)));
    // 0x231064: 0xde2b0130  ld          $t3, 0x130($s1)
    ctx->pc = 0x231064u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x231068: 0xde2c0138  ld          $t4, 0x138($s1)
    ctx->pc = 0x231068u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 17), 312)));
    // 0x23106c: 0xffa50098  sd          $a1, 0x98($sp)
    ctx->pc = 0x23106cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 5));
    // 0x231070: 0xffa20090  sd          $v0, 0x90($sp)
    ctx->pc = 0x231070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 2));
    // 0x231074: 0xfe2d00c0  sd          $t5, 0xC0($s1)
    ctx->pc = 0x231074u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 192), GPR_U64(ctx, 13));
    // 0x231078: 0xfe2600c8  sd          $a2, 0xC8($s1)
    ctx->pc = 0x231078u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 200), GPR_U64(ctx, 6));
    // 0x23107c: 0xfe2700d0  sd          $a3, 0xD0($s1)
    ctx->pc = 0x23107cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 208), GPR_U64(ctx, 7));
    // 0x231080: 0xfe2800d8  sd          $t0, 0xD8($s1)
    ctx->pc = 0x231080u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 216), GPR_U64(ctx, 8));
    // 0x231084: 0xfe2900e0  sd          $t1, 0xE0($s1)
    ctx->pc = 0x231084u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 224), GPR_U64(ctx, 9));
    // 0x231088: 0xfe2a00e8  sd          $t2, 0xE8($s1)
    ctx->pc = 0x231088u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 232), GPR_U64(ctx, 10));
    // 0x23108c: 0xfe2b00f0  sd          $t3, 0xF0($s1)
    ctx->pc = 0x23108cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 240), GPR_U64(ctx, 11));
    // 0x231090: 0xc08c218  jal         func_230860
    ctx->pc = 0x231090u;
    SET_GPR_U32(ctx, 31, 0x231098u);
    ctx->pc = 0x231094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231090u;
    // 0x231094: 0xfe2c00f8  sd          $t4, 0xF8($s1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 17), 248), GPR_U64(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230860u, 0x231090u, 0x231098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231098u;
label_231098:
    // 0x231098: 0xc78c8504  lwc1        $f12, -0x7AFC($gp)
    ctx->pc = 0x231098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23109c: 0xc04750a  jal         func_11D428
    ctx->pc = 0x23109Cu;
    SET_GPR_U32(ctx, 31, 0x2310A4u);
    ctx->pc = 0x2310A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23109Cu;
    // 0x2310a0: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D428u, 0x23109Cu, 0x2310A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2310A4u;
label_2310a4:
    // 0x2310a4: 0x3c0143a0  lui         $at, 0x43A0
    ctx->pc = 0x2310a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17312 << 16));
    // 0x2310a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2310a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2310ac: 0xc61a002c  lwc1        $f26, 0x2C($s0)
    ctx->pc = 0x2310acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x2310b0: 0x0  nop
    ctx->pc = 0x2310b0u;
    // NOP
    // 0x2310b4: 0x0  nop
    ctx->pc = 0x2310b4u;
    // NOP
    // 0x2310b8: 0x46000e43  div.s       $f25, $f1, $f0
    ctx->pc = 0x2310b8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[25] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[25] = ctx->f[1] / ctx->f[0];
    // 0x2310bc: 0xc0a60ec  jal         func_2983B0
    ctx->pc = 0x2310BCu;
    SET_GPR_U32(ctx, 31, 0x2310C4u);
    ctx->pc = 0x2310C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2310BCu;
    // 0x2310c0: 0xc61b0030  lwc1        $f27, 0x30($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2983B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2983B0u, 0x2310BCu, 0x2310C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2310C4u;
label_2310c4:
    // 0x2310c4: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x2310c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2310c8: 0x7a2400d0  lq          $a0, 0xD0($s1)
    ctx->pc = 0x2310c8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x2310cc: 0x27b300b0  addiu       $s3, $sp, 0xB0
    ctx->pc = 0x2310ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2310d0: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x2310d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2310d4: 0x7e630000  sq          $v1, 0x0($s3)
    ctx->pc = 0x2310d4u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 3));
    // 0x2310d8: 0x27b200a0  addiu       $s2, $sp, 0xA0
    ctx->pc = 0x2310d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2310dc: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x2310dcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x2310e0: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x2310e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2310e4: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x2310e4u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2310e8: 0xd87f0000  lqc2        $vf31, 0x0($v1)
    ctx->pc = 0x2310e8u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2310ec: 0x4bff842c  vsub.xyzw   $vf16, $vf16, $vf31
    ctx->pc = 0x2310ecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2310f0: 0xfa500000  sqc2        $vf16, 0x0($s2)
    ctx->pc = 0x2310f0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2310f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2310f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2310f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2310f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2310fc: 0x27b600f4  addiu       $s6, $sp, 0xF4
    ctx->pc = 0x2310fcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x231100: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x231100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x231104: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x231104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231108: 0xc08e4c6  jal         func_239318
    ctx->pc = 0x231108u;
    SET_GPR_U32(ctx, 31, 0x231110u);
    ctx->pc = 0x23110Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231108u;
    // 0x23110c: 0xe7a000ac  swc1        $f0, 0xAC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x239318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239318u, 0x231108u, 0x231110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231110u;
label_231110:
    // 0x231110: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x231110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x231114: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x231114u;
    {
        const bool branch_taken_0x231114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231114u;
        // 0x231118: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231114) {
            ctx->pc = 0x2311B4u;
            goto label_2311b4;
        }
    }
    ctx->pc = 0x23111Cu;
    // 0x23111c: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x23111cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231120: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x231120u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x231124: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x231124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231128: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x231128u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x23112c: 0x46000504  c1          0x504
    ctx->pc = 0x23112cu;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x231130: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x231130u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x231134: 0x4601a032  c.eq.s      $f20, $f1
    ctx->pc = 0x231134u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x231138: 0x4503001f  bc1tl       . + 4 + (0x1F << 2)
    ctx->pc = 0x231138u;
    {
        const bool branch_taken_0x231138 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x231138) {
            ctx->pc = 0x23113Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x231138u;
            // 0x23113c: 0xc7a100b0  lwc1        $f1, 0xB0($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2311B8u;
            goto label_2311b8;
        }
    }
    ctx->pc = 0x231140u;
    // 0x231140: 0xc7ac00a4  lwc1        $f12, 0xA4($sp)
    ctx->pc = 0x231140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x231144: 0x0  nop
    ctx->pc = 0x231144u;
    // NOP
    // 0x231148: 0x0  nop
    ctx->pc = 0x231148u;
    // NOP
    // 0x23114c: 0x46146303  div.s       $f12, $f12, $f20
    ctx->pc = 0x23114cu;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[20];
    // 0x231150: 0xc0473c8  jal         func_11CF20
    ctx->pc = 0x231150u;
    SET_GPR_U32(ctx, 31, 0x231158u);
    ctx->pc = 0x11CF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CF20u, 0x231150u, 0x231158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231158u;
label_231158:
    // 0x231158: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x231158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x23115c: 0x97a300f0  lhu         $v1, 0xF0($sp)
    ctx->pc = 0x23115cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x231160: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x231160u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x231164: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x231164u;
    {
        const bool branch_taken_0x231164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x231168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231164u;
        // 0x231168: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x231164) {
            ctx->pc = 0x231180u;
            goto label_231180;
        }
    }
    ctx->pc = 0x23116Cu;
    // 0x23116c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23116cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231170: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x231170u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x231174: 0xc7818508  lwc1        $f1, -0x7AF8($gp)
    ctx->pc = 0x231174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231178: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x231178u;
    {
        const bool branch_taken_0x231178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23117Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231178u;
        // 0x23117c: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x231178) {
            ctx->pc = 0x231198u;
            goto label_231198;
        }
    }
    ctx->pc = 0x231180u;
label_231180:
    // 0x231180: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x231180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x231184: 0xc781850c  lwc1        $f1, -0x7AF4($gp)
    ctx->pc = 0x231184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231188: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x231188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23118c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23118cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231190: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x231190u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x231194: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x231194u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_231198:
    // 0x231198: 0xc04750a  jal         func_11D428
    ctx->pc = 0x231198u;
    SET_GPR_U32(ctx, 31, 0x2311A0u);
    ctx->pc = 0x23119Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231198u;
    // 0x23119c: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D428u, 0x231198u, 0x2311A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2311A0u;
label_2311a0:
    // 0x2311a0: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2311a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2311a4: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x2311a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2311a8: 0x46010601  sub.s       $f24, $f0, $f1
    ctx->pc = 0x2311a8u;
    ctx->f[24] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2311ac: 0x46180840  add.s       $f1, $f1, $f24
    ctx->pc = 0x2311acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[24]);
    // 0x2311b0: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x2311b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_2311b4:
    // 0x2311b4: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x2311b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2311b8:
    // 0x2311b8: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x2311b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2311bc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2311bcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2311c0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2311C0u;
    {
        const bool branch_taken_0x2311c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2311C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2311C0u;
        // 0x2311c4: 0xc7a100b8  lwc1        $f1, 0xB8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2311c0) {
            ctx->pc = 0x2311D8u;
            goto label_2311d8;
        }
    }
    ctx->pc = 0x2311C8u;
    // 0x2311c8: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x2311c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2311cc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2311ccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2311d0: 0x45010027  bc1t        . + 4 + (0x27 << 2)
    ctx->pc = 0x2311D0u;
    {
        const bool branch_taken_0x2311d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2311d0) {
            ctx->pc = 0x231270u;
            goto label_231270;
        }
    }
    ctx->pc = 0x2311D8u;
label_2311d8:
    // 0x2311d8: 0xc0a60ec  jal         func_2983B0
    ctx->pc = 0x2311D8u;
    SET_GPR_U32(ctx, 31, 0x2311E0u);
    ctx->pc = 0x2983B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2983B0u, 0x2311D8u, 0x2311E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2311E0u;
label_2311e0:
    // 0x2311e0: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x2311e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2311e4: 0xc7948510  lwc1        $f20, -0x7AF0($gp)
    ctx->pc = 0x2311e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2311e8: 0x34018000  ori         $at, $zero, 0x8000
    ctx->pc = 0x2311e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2311ec: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x2311ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x2311f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2311f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2311f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2311f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2311f8: 0x461405c2  mul.s       $f23, $f0, $f20
    ctx->pc = 0x2311f8u;
    ctx->f[23] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2311fc: 0xc0474d0  jal         func_11D340
    ctx->pc = 0x2311FCu;
    SET_GPR_U32(ctx, 31, 0x231204u);
    ctx->pc = 0x231200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2311FCu;
    // 0x231200: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D340u, 0x2311FCu, 0x231204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231204u;
label_231204:
    // 0x231204: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x231204u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x231208: 0xc04746c  jal         func_11D1B0
    ctx->pc = 0x231208u;
    SET_GPR_U32(ctx, 31, 0x231210u);
    ctx->pc = 0x23120Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231208u;
    // 0x23120c: 0xe7a00090  swc1        $f0, 0x90($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D1B0u, 0x231208u, 0x231210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231210u;
label_231210:
    // 0x231210: 0xc7ac00a0  lwc1        $f12, 0xA0($sp)
    ctx->pc = 0x231210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x231214: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x231214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x231218: 0xc7ad00a8  lwc1        $f13, 0xA8($sp)
    ctx->pc = 0x231218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x23121c: 0xc0b7440  jal         func_2DD100
    ctx->pc = 0x23121Cu;
    SET_GPR_U32(ctx, 31, 0x231224u);
    ctx->pc = 0x231220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23121Cu;
    // 0x231220: 0xe7a00094  swc1        $f0, 0x94($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD100u, 0x23121Cu, 0x231224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231224u;
label_231224:
    // 0x231224: 0x21023  negu        $v0, $v0
    ctx->pc = 0x231224u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x231228: 0xc7b60090  lwc1        $f22, 0x90($sp)
    ctx->pc = 0x231228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x23122c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23122cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231230: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x231230u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x231234: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x231234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x231238: 0x461405c2  mul.s       $f23, $f0, $f20
    ctx->pc = 0x231238u;
    ctx->f[23] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x23123c: 0xc0474d0  jal         func_11D340
    ctx->pc = 0x23123Cu;
    SET_GPR_U32(ctx, 31, 0x231244u);
    ctx->pc = 0x231240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23123Cu;
    // 0x231240: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D340u, 0x23123Cu, 0x231244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231244u;
label_231244:
    // 0x231244: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x231244u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x231248: 0xc04746c  jal         func_11D1B0
    ctx->pc = 0x231248u;
    SET_GPR_U32(ctx, 31, 0x231250u);
    ctx->pc = 0x23124Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231248u;
    // 0x23124c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D1B0u, 0x231248u, 0x231250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231250u;
label_231250:
    // 0x231250: 0x4614a842  mul.s       $f1, $f21, $f20
    ctx->pc = 0x231250u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
    // 0x231254: 0x4614b502  mul.s       $f20, $f22, $f20
    ctx->pc = 0x231254u;
    ctx->f[20] = FPU_MUL_S(ctx->f[22], ctx->f[20]);
    // 0x231258: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x231258u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x23125c: 0x4600b582  mul.s       $f22, $f22, $f0
    ctx->pc = 0x23125cu;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x231260: 0x4615a500  add.s       $f20, $f20, $f21
    ctx->pc = 0x231260u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    // 0x231264: 0x4601b581  sub.s       $f22, $f22, $f1
    ctx->pc = 0x231264u;
    ctx->f[22] = FPU_SUB_S(ctx->f[22], ctx->f[1]);
    // 0x231268: 0xe7b40098  swc1        $f20, 0x98($sp)
    ctx->pc = 0x231268u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x23126c: 0xe7b60090  swc1        $f22, 0x90($sp)
    ctx->pc = 0x23126cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_231270:
    // 0x231270: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x231270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x231274: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x231274u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x231278: 0x26300040  addiu       $s0, $s1, 0x40
    ctx->pc = 0x231278u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x23127c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23127cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x231280: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x231280u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x231284: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x231284u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    // 0x231288: 0xc78e8514  lwc1        $f14, -0x7AEC($gp)
    ctx->pc = 0x231288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x23128c: 0x4600d4c6  mov.s       $f19, $f26
    ctx->pc = 0x23128cu;
    ctx->f[19] = FPU_MOV_S(ctx->f[26]);
    // 0x231290: 0x44808800  mtc1        $zero, $f17
    ctx->pc = 0x231290u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x231294: 0x46007c06  mov.s       $f16, $f15
    ctx->pc = 0x231294u;
    ctx->f[16] = FPU_MOV_S(ctx->f[15]);
    // 0x231298: 0xc7928518  lwc1        $f18, -0x7AE8($gp)
    ctx->pc = 0x231298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x23129c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23129cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2312a0: 0xc084b02  jal         func_212C08
    ctx->pc = 0x2312A0u;
    SET_GPR_U32(ctx, 31, 0x2312A8u);
    ctx->pc = 0x2312A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2312A0u;
    // 0x2312a4: 0xe7bb0000  swc1        $f27, 0x0($sp) (Delay Slot)
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x212C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212C08u, 0x2312A0u, 0x2312A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2312A8u;
label_2312a8:
    // 0x2312a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2312a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2312ac: 0x27b70090  addiu       $s7, $sp, 0x90
    ctx->pc = 0x2312acu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2312b0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2312b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2312b4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2312b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2312b8: 0xc084ac6  jal         func_212B18
    ctx->pc = 0x2312B8u;
    SET_GPR_U32(ctx, 31, 0x2312C0u);
    ctx->pc = 0x2312BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2312B8u;
    // 0x2312bc: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212B18u, 0x2312B8u, 0x2312C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2312C0u;
label_2312c0:
    // 0x2312c0: 0x26240080  addiu       $a0, $s1, 0x80
    ctx->pc = 0x2312c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x2312c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2312c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2312c8: 0xc08493a  jal         func_2124E8
    ctx->pc = 0x2312C8u;
    SET_GPR_U32(ctx, 31, 0x2312D0u);
    ctx->pc = 0x2312CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2312C8u;
    // 0x2312cc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2124E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124E8u, 0x2312C8u, 0x2312D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2312D0u;
label_2312d0:
    // 0x2312d0: 0x2682cf90  addiu       $v0, $s4, -0x3070
    ctx->pc = 0x2312d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294954896));
    // 0x2312d4: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x2312d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2312d8: 0x244201a0  addiu       $v0, $v0, 0x1A0
    ctx->pc = 0x2312d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
    // 0x2312dc: 0xc7a500b0  lwc1        $f5, 0xB0($sp)
    ctx->pc = 0x2312dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2312e0: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x2312e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2312e4: 0x46180000  add.s       $f0, $f0, $f24
    ctx->pc = 0x2312e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[24]);
    // 0x2312e8: 0xc7a200b4  lwc1        $f2, 0xB4($sp)
    ctx->pc = 0x2312e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2312ec: 0xc7a300b8  lwc1        $f3, 0xB8($sp)
    ctx->pc = 0x2312ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2312f0: 0x262401a0  addiu       $a0, $s1, 0x1A0
    ctx->pc = 0x2312f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
    // 0x2312f4: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x2312f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2312f8: 0xc7a400c8  lwc1        $f4, 0xC8($sp)
    ctx->pc = 0x2312f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2312fc: 0xe6250150  swc1        $f5, 0x150($s1)
    ctx->pc = 0x2312fcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 336), bits); }
    // 0x231300: 0xe6220154  swc1        $f2, 0x154($s1)
    ctx->pc = 0x231300u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 340), bits); }
    // 0x231304: 0xe6230158  swc1        $f3, 0x158($s1)
    ctx->pc = 0x231304u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 344), bits); }
    // 0x231308: 0xe6210168  swc1        $f1, 0x168($s1)
    ctx->pc = 0x231308u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 360), bits); }
    // 0x23130c: 0xe620016c  swc1        $f0, 0x16C($s1)
    ctx->pc = 0x23130cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 364), bits); }
    // 0x231310: 0xe6240170  swc1        $f4, 0x170($s1)
    ctx->pc = 0x231310u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 368), bits); }
label_231314:
    // 0x231314: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x231314u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x231318: 0xdc660008  ld          $a2, 0x8($v1)
    ctx->pc = 0x231318u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x23131c: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x23131cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x231320: 0xdc680018  ld          $t0, 0x18($v1)
    ctx->pc = 0x231320u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x231324: 0xfc450000  sd          $a1, 0x0($v0)
    ctx->pc = 0x231324u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
    // 0x231328: 0xfc460008  sd          $a2, 0x8($v0)
    ctx->pc = 0x231328u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 6));
    // 0x23132c: 0xfc470010  sd          $a3, 0x10($v0)
    ctx->pc = 0x23132cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 7));
    // 0x231330: 0xfc480018  sd          $t0, 0x18($v0)
    ctx->pc = 0x231330u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 8));
    // 0x231334: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x231334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x231338: 0x0  nop
    ctx->pc = 0x231338u;
    // NOP
    // 0x23133c: 0x0  nop
    ctx->pc = 0x23133cu;
    // NOP
    // 0x231340: 0x1464fff4  bne         $v1, $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x231340u;
    {
        const bool branch_taken_0x231340 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x231344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231340u;
        // 0x231344: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231340) {
            ctx->pc = 0x231314u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_231314;
        }
    }
    ctx->pc = 0x231348u;
    // 0x231348: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x231348u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23134c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x23134cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x231350: 0x7e400000  sq          $zero, 0x0($s2)
    ctx->pc = 0x231350u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 0));
    // 0x231354: 0x7e400010  sq          $zero, 0x10($s2)
    ctx->pc = 0x231354u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 0));
    // 0x231358: 0x7e400020  sq          $zero, 0x20($s2)
    ctx->pc = 0x231358u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 0));
    // 0x23135c: 0xfa400030  sqc2        $vf0, 0x30($s2)
    ctx->pc = 0x23135cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x231360: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x231360u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x231364: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x231364u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x231368: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x231368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x23136c: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x23136cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x231370: 0x7e000000  sq          $zero, 0x0($s0)
    ctx->pc = 0x231370u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 0));
    // 0x231374: 0x7e000010  sq          $zero, 0x10($s0)
    ctx->pc = 0x231374u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 0));
    // 0x231378: 0x7e000020  sq          $zero, 0x20($s0)
    ctx->pc = 0x231378u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 0));
    // 0x23137c: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x23137cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x231380: 0x3c150016  lui         $s5, 0x16
    ctx->pc = 0x231380u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)22 << 16));
    // 0x231384: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x231384u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x231388: 0x26a3d2d0  addiu       $v1, $s5, -0x2D30
    ctx->pc = 0x231388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294955728));
    // 0x23138c: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x23138cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x15D310u));
    // 0x231390: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x231390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
    // 0x231394: 0x14800020  bnez        $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x231394u;
    {
        const bool branch_taken_0x231394 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x231398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231394u;
        // 0x231398: 0xafa20064  sw          $v0, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231394) {
            ctx->pc = 0x231418u;
            goto label_231418;
        }
    }
    ctx->pc = 0x23139Cu;
    // 0x23139c: 0xc08b8a6  jal         func_22E298
    ctx->pc = 0x23139Cu;
    SET_GPR_U32(ctx, 31, 0x2313A4u);
    ctx->pc = 0x22E298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E298u, 0x23139Cu, 0x2313A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2313A4u;
label_2313a4:
    // 0x2313a4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2313a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2313a8: 0x1443001b  bne         $v0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x2313A8u;
    {
        const bool branch_taken_0x2313a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2313a8) {
            ctx->pc = 0x231418u;
            goto label_231418;
        }
    }
    ctx->pc = 0x2313B0u;
    // 0x2313b0: 0xc08c3dc  jal         func_230F70
    ctx->pc = 0x2313B0u;
    SET_GPR_U32(ctx, 31, 0x2313B8u);
    ctx->pc = 0x230F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230F70u, 0x2313B0u, 0x2313B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2313B8u;
label_2313b8:
    // 0x2313b8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2313B8u;
    {
        const bool branch_taken_0x2313b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2313b8) {
            ctx->pc = 0x231418u;
            goto label_231418;
        }
    }
    ctx->pc = 0x2313C0u;
    // 0x2313c0: 0xc090c70  jal         func_2431C0
    ctx->pc = 0x2313C0u;
    SET_GPR_U32(ctx, 31, 0x2313C8u);
    ctx->pc = 0x2313C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2313C0u;
    // 0x2313c4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2431C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2431C0u, 0x2313C0u, 0x2313C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2313C8u;
label_2313c8:
    // 0x2313c8: 0xc090c1a  jal         func_243068
    ctx->pc = 0x2313C8u;
    SET_GPR_U32(ctx, 31, 0x2313D0u);
    ctx->pc = 0x243068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243068u, 0x2313C8u, 0x2313D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2313D0u;
label_2313d0:
    // 0x2313d0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2313d0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2313d4: 0x7e430000  sq          $v1, 0x0($s2)
    ctx->pc = 0x2313d4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 3));
    // 0x2313d8: 0x78440010  lq          $a0, 0x10($v0)
    ctx->pc = 0x2313d8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2313dc: 0x7fa40020  sq          $a0, 0x20($sp)
    ctx->pc = 0x2313dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
    // 0x2313e0: 0x78430020  lq          $v1, 0x20($v0)
    ctx->pc = 0x2313e0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2313e4: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x2313e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x2313e8: 0x78440030  lq          $a0, 0x30($v0)
    ctx->pc = 0x2313e8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2313ec: 0xc090c1e  jal         func_243078
    ctx->pc = 0x2313ECu;
    SET_GPR_U32(ctx, 31, 0x2313F4u);
    ctx->pc = 0x2313F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2313ECu;
    // 0x2313f0: 0x7fa40040  sq          $a0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243078u, 0x2313ECu, 0x2313F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2313F4u;
label_2313f4:
    // 0x2313f4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2313f4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2313f8: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x2313f8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x2313fc: 0x78440010  lq          $a0, 0x10($v0)
    ctx->pc = 0x2313fcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x231400: 0x7fa40060  sq          $a0, 0x60($sp)
    ctx->pc = 0x231400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 4));
    // 0x231404: 0x78430020  lq          $v1, 0x20($v0)
    ctx->pc = 0x231404u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x231408: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x231408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
    // 0x23140c: 0x78440030  lq          $a0, 0x30($v0)
    ctx->pc = 0x23140cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x231410: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x231410u;
    {
        const bool branch_taken_0x231410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231410u;
        // 0x231414: 0x7fa40080  sq          $a0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231410) {
            ctx->pc = 0x231428u;
            goto label_231428;
        }
    }
    ctx->pc = 0x231418u;
label_231418:
    // 0x231418: 0xc090c70  jal         func_2431C0
    ctx->pc = 0x231418u;
    SET_GPR_U32(ctx, 31, 0x231420u);
    ctx->pc = 0x23141Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231418u;
    // 0x23141c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2431C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2431C0u, 0x231418u, 0x231420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231420u;
label_231420:
    // 0x231420: 0x26a2d2d0  addiu       $v0, $s5, -0x2D30
    ctx->pc = 0x231420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294955728));
    // 0x231424: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x231424u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_231428:
    // 0x231428: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x231428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23142c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x23142cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231430: 0xc090c44  jal         func_243110
    ctx->pc = 0x231430u;
    SET_GPR_U32(ctx, 31, 0x231438u);
    ctx->pc = 0x231434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231430u;
    // 0x231434: 0x27a60098  addiu       $a2, $sp, 0x98 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243110u, 0x231430u, 0x231438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231438u;
label_231438:
    // 0x231438: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x231438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23143c: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x23143cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231440: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x231440u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x231444: 0x8fa200f4  lw          $v0, 0xF4($sp)
    ctx->pc = 0x231444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x231448: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x231448u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x23144c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x23144cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x231450: 0xafa200f4  sw          $v0, 0xF4($sp)
    ctx->pc = 0x231450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
    // 0x231454: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x231454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x231458: 0xc0cb7d4  jal         func_32DF50
    ctx->pc = 0x231458u;
    SET_GPR_U32(ctx, 31, 0x231460u);
    ctx->pc = 0x23145Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231458u;
    // 0x23145c: 0xe7a10098  swc1        $f1, 0x98($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF50u, 0x231458u, 0x231460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231460u;
label_231460:
    // 0x231460: 0x4ae00714  vminix.yzw  $vf28, $vf0, $vf0x
    ctx->pc = 0x231460u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x231464: 0x4b000713  vmaxw.x     $vf28, $vf0, $vf0w
    ctx->pc = 0x231464u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x231468: 0x4b600754  vminix.xzw  $vf29, $vf0, $vf0x
    ctx->pc = 0x231468u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x23146c: 0x4a800753  vmaxw.y     $vf29, $vf0, $vf0w
    ctx->pc = 0x23146cu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x231470: 0x4ba00794  vminix.xyw  $vf30, $vf0, $vf0x
    ctx->pc = 0x231470u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x231474: 0x4a400793  vmaxw.z     $vf30, $vf0, $vf0w
    ctx->pc = 0x231474u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x231478: 0x4bff033c  vmove.xyzw  $vf31, $vf0
    ctx->pc = 0x231478u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x23147c: 0x8fa700f4  lw          $a3, 0xF4($sp)
    ctx->pc = 0x23147cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x231480: 0x24e34000  addiu       $v1, $a3, 0x4000
    ctx->pc = 0x231480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 16384));
    // 0x231484: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x231484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x231488: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x231488u;
    {
        const bool branch_taken_0x231488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23148Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231488u;
        // 0x23148c: 0x30e43fff  andi        $a0, $a3, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x231488) {
            ctx->pc = 0x231498u;
            goto label_231498;
        }
    }
    ctx->pc = 0x231490u;
    // 0x231490: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x231490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x231494: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x231494u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_231498:
    // 0x231498: 0x3c13003f  lui         $s3, 0x3F
    ctx->pc = 0x231498u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)63 << 16));
    // 0x23149c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x23149cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2314a0: 0x26690340  addiu       $t1, $s3, 0x340
    ctx->pc = 0x2314a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 832));
    // 0x2314a4: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2314a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2314a8: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2314a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2314ac: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2314acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2314b0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2314b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2314b4: 0x30e54000  andi        $a1, $a3, 0x4000
    ctx->pc = 0x2314b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16384);
    // 0x2314b8: 0x30e63fff  andi        $a2, $a3, 0x3FFF
    ctx->pc = 0x2314b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16383);
    // 0x2314bc: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2314BCu;
    {
        const bool branch_taken_0x2314bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2314C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2314BCu;
        // 0x2314c0: 0x834025  or          $t0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2314bc) {
            ctx->pc = 0x2314CCu;
            goto label_2314cc;
        }
    }
    ctx->pc = 0x2314C4u;
    // 0x2314c4: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2314c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2314c8: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x2314c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2314cc:
    // 0x2314cc: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2314ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2314d0: 0x30e48000  andi        $a0, $a3, 0x8000
    ctx->pc = 0x2314d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32768);
    // 0x2314d4: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2314d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2314d8: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2314d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2314dc: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2314dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2314e0: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x2314e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2314e4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2314e4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2314e8: 0x48a80800  qmtc2.ni    $t0, $vf1
    ctx->pc = 0x2314e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2314ec: 0x4be2e1bc  vmulax.xyzw $ACC, $vf28, $vf2x
    ctx->pc = 0x2314ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2314f0: 0x4be1f0c8  vmaddx.xyzw $vf3, $vf30, $vf1x
    ctx->pc = 0x2314f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2314f4: 0x4be1e1bc  vmulax.xyzw $ACC, $vf28, $vf1x
    ctx->pc = 0x2314f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2314f8: 0x4be2f70c  vmsubx.xyzw $vf28, $vf30, $vf2x
    ctx->pc = 0x2314f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2314fc: 0x4bfe1b3c  vmove.xyzw  $vf30, $vf3
    ctx->pc = 0x2314fcu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x231500: 0xc7a20090  lwc1        $f2, 0x90($sp)
    ctx->pc = 0x231500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x231504: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x231504u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x231508: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x231508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23150c: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x23150cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x231510: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x231510u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x231514: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x231514u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x231518: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x231518u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x23151c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x23151cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x231520: 0x48a41800  qmtc2.ni    $a0, $vf3
    ctx->pc = 0x231520u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x231524: 0x4be1e1bc  vmulax.xyzw $ACC, $vf28, $vf1x
    ctx->pc = 0x231524u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x231528: 0x4be2e8bc  vmaddax.xyzw $ACC, $vf29, $vf2x
    ctx->pc = 0x231528u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x23152c: 0x4be3f0bc  vmaddax.xyzw $ACC, $vf30, $vf3x
    ctx->pc = 0x23152cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x231530: 0x4be0ffcb  vmaddw.xyzw $vf31, $vf31, $vf0w
    ctx->pc = 0x231530u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x231534: 0x26360150  addiu       $s6, $s1, 0x150
    ctx->pc = 0x231534u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x231538: 0x2624015c  addiu       $a0, $s1, 0x15C
    ctx->pc = 0x231538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 348));
    // 0x23153c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x23153cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231540: 0xc0cbac2  jal         func_32EB08
    ctx->pc = 0x231540u;
    SET_GPR_U32(ctx, 31, 0x231548u);
    ctx->pc = 0x231544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231540u;
    // 0x231544: 0x26340168  addiu       $s4, $s1, 0x168 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EB08u, 0x231540u, 0x231548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231548u;
label_231548:
    // 0x231548: 0x26240174  addiu       $a0, $s1, 0x174
    ctx->pc = 0x231548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 372));
    // 0x23154c: 0xc0cbac2  jal         func_32EB08
    ctx->pc = 0x23154Cu;
    SET_GPR_U32(ctx, 31, 0x231554u);
    ctx->pc = 0x231550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23154Cu;
    // 0x231550: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EB08u, 0x23154Cu, 0x231554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231554u;
label_231554:
    // 0x231554: 0x4ae00714  vminix.yzw  $vf28, $vf0, $vf0x
    ctx->pc = 0x231554u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x231558: 0x4b000713  vmaxw.x     $vf28, $vf0, $vf0w
    ctx->pc = 0x231558u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x23155c: 0x4b600754  vminix.xzw  $vf29, $vf0, $vf0x
    ctx->pc = 0x23155cu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x231560: 0x4a800753  vmaxw.y     $vf29, $vf0, $vf0w
    ctx->pc = 0x231560u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x231564: 0x4ba00794  vminix.xyw  $vf30, $vf0, $vf0x
    ctx->pc = 0x231564u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x231568: 0x4a400793  vmaxw.z     $vf30, $vf0, $vf0w
    ctx->pc = 0x231568u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x23156c: 0x4bff033c  vmove.xyzw  $vf31, $vf0
    ctx->pc = 0x23156cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x231570: 0x8fa600f4  lw          $a2, 0xF4($sp)
    ctx->pc = 0x231570u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x231574: 0x24c34000  addiu       $v1, $a2, 0x4000
    ctx->pc = 0x231574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16384));
    // 0x231578: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x231578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x23157c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23157Cu;
    {
        const bool branch_taken_0x23157c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23157Cu;
        // 0x231580: 0x30c43fff  andi        $a0, $a2, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23157c) {
            ctx->pc = 0x23158Cu;
            goto label_23158c;
        }
    }
    ctx->pc = 0x231584u;
    // 0x231584: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x231584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x231588: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x231588u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_23158c:
    // 0x23158c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x23158cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x231590: 0x26680340  addiu       $t0, $s3, 0x340
    ctx->pc = 0x231590u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 832));
    // 0x231594: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x231594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x231598: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x231598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x23159c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x23159cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2315a0: 0x30c24000  andi        $v0, $a2, 0x4000
    ctx->pc = 0x2315a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16384);
    // 0x2315a4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2315a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2315a8: 0x30c53fff  andi        $a1, $a2, 0x3FFF
    ctx->pc = 0x2315a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
    // 0x2315ac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2315ACu;
    {
        const bool branch_taken_0x2315ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2315B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2315ACu;
        // 0x2315b0: 0x833825  or          $a3, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2315ac) {
            ctx->pc = 0x2315BCu;
            goto label_2315bc;
        }
    }
    ctx->pc = 0x2315B4u;
    // 0x2315b4: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2315b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2315b8: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x2315b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2315bc:
    // 0x2315bc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2315bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2315c0: 0x30c48000  andi        $a0, $a2, 0x8000
    ctx->pc = 0x2315c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
    // 0x2315c4: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2315c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2315c8: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2315c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2315cc: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2315ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2315d0: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x2315d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2315d4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2315d4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2315d8: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x2315d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x2315dc: 0x4be2e1bc  vmulax.xyzw $ACC, $vf28, $vf2x
    ctx->pc = 0x2315dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2315e0: 0x4be1f0c8  vmaddx.xyzw $vf3, $vf30, $vf1x
    ctx->pc = 0x2315e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2315e4: 0x4be1e1bc  vmulax.xyzw $ACC, $vf28, $vf1x
    ctx->pc = 0x2315e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2315e8: 0x4be2f70c  vmsubx.xyzw $vf28, $vf30, $vf2x
    ctx->pc = 0x2315e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2315ec: 0x4bfe1b3c  vmove.xyzw  $vf30, $vf3
    ctx->pc = 0x2315ecu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x2315f0: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2315f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2315f4: 0xc0cbab4  jal         func_32EAD0
    ctx->pc = 0x2315F4u;
    SET_GPR_U32(ctx, 31, 0x2315FCu);
    ctx->pc = 0x2315F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2315F4u;
    // 0x2315f8: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EAD0u, 0x2315F4u, 0x2315FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2315FCu;
label_2315fc:
    // 0x2315fc: 0x8fa300f4  lw          $v1, 0xF4($sp)
    ctx->pc = 0x2315fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x231600: 0xc7a10100  lwc1        $f1, 0x100($sp)
    ctx->pc = 0x231600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231604: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x231604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231608: 0xae230180  sw          $v1, 0x180($s1)
    ctx->pc = 0x231608u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 384), GPR_U32(ctx, 3));
    // 0x23160c: 0xe6200188  swc1        $f0, 0x188($s1)
    ctx->pc = 0x23160cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 392), bits); }
    // 0x231610: 0xc0cb7e0  jal         func_32DF80
    ctx->pc = 0x231610u;
    SET_GPR_U32(ctx, 31, 0x231618u);
    ctx->pc = 0x231614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231610u;
    // 0x231614: 0xe6210184  swc1        $f1, 0x184($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 388), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF80u, 0x231610u, 0x231618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231618u;
label_231618:
    // 0x231618: 0xc08897e  jal         func_2225F8
    ctx->pc = 0x231618u;
    SET_GPR_U32(ctx, 31, 0x231620u);
    ctx->pc = 0x2225F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2225F8u, 0x231618u, 0x231620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231620u;
label_231620:
    // 0x231620: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x231620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231624: 0xc0903a6  jal         func_240E98
    ctx->pc = 0x231624u;
    SET_GPR_U32(ctx, 31, 0x23162Cu);
    ctx->pc = 0x231628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231624u;
    // 0x231628: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240E98u, 0x231624u, 0x23162Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23162Cu;
label_23162c:
    // 0x23162c: 0x27c28858  addiu       $v0, $fp, -0x77A8
    ctx->pc = 0x23162cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294936664));
    // 0x231630: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x231630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x231634: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x231634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x231638: 0x50830022  beql        $a0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x231638u;
    {
        const bool branch_taken_0x231638 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x231638) {
            ctx->pc = 0x23163Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x231638u;
            // 0x23163c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2316C4u;
            goto label_2316c4;
        }
    }
    ctx->pc = 0x231640u;
    // 0x231640: 0xc08b8a2  jal         func_22E288
    ctx->pc = 0x231640u;
    SET_GPR_U32(ctx, 31, 0x231648u);
    ctx->pc = 0x22E288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E288u, 0x231640u, 0x231648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231648u;
label_231648:
    // 0x231648: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x231648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23164c: 0x460001a  bltz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x23164Cu;
    {
        const bool branch_taken_0x23164c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x231650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23164Cu;
        // 0x231650: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23164c) {
            ctx->pc = 0x2316B8u;
            goto label_2316b8;
        }
    }
    ctx->pc = 0x231654u;
    // 0x231654: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x231654u;
    {
        const bool branch_taken_0x231654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x231658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231654u;
        // 0x231658: 0x26a2d2d0  addiu       $v0, $s5, -0x2D30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294955728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231654) {
            ctx->pc = 0x231670u;
            goto label_231670;
        }
    }
    ctx->pc = 0x23165Cu;
    // 0x23165c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23165cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x231660: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x231660u;
    {
        const bool branch_taken_0x231660 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x231660) {
            ctx->pc = 0x231664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x231660u;
            // 0x231664: 0x7a440000  lq          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x231698u;
            goto label_231698;
        }
    }
    ctx->pc = 0x231668u;
    // 0x231668: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x231668u;
    {
        const bool branch_taken_0x231668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x231668) {
            ctx->pc = 0x2316B8u;
            goto label_2316b8;
        }
    }
    ctx->pc = 0x231670u;
label_231670:
    // 0x231670: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x231670u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x231674: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x231674u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x231678: 0x7c400010  sq          $zero, 0x10($v0)
    ctx->pc = 0x231678u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 0));
    // 0x23167c: 0x7c400020  sq          $zero, 0x20($v0)
    ctx->pc = 0x23167cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), GPR_VEC(ctx, 0));
    // 0x231680: 0xf8400030  sqc2        $vf0, 0x30($v0)
    ctx->pc = 0x231680u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x231684: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x231684u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
    // 0x231688: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x231688u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x23168c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x23168Cu;
    {
        const bool branch_taken_0x23168c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23168Cu;
        // 0x231690: 0xac430014  sw          $v1, 0x14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23168c) {
            ctx->pc = 0x2316B8u;
            goto label_2316b8;
        }
    }
    ctx->pc = 0x231694u;
    // 0x231694: 0x0  nop
    ctx->pc = 0x231694u;
    // NOP
label_231698:
    // 0x231698: 0x26a3d2d0  addiu       $v1, $s5, -0x2D30
    ctx->pc = 0x231698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294955728));
    // 0x23169c: 0x7ba50020  lq          $a1, 0x20($sp)
    ctx->pc = 0x23169cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2316a0: 0x7ba60030  lq          $a2, 0x30($sp)
    ctx->pc = 0x2316a0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2316a4: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x2316a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2316a8: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x2316a8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x2316ac: 0x7c620030  sq          $v0, 0x30($v1)
    ctx->pc = 0x2316acu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 2));
    // 0x2316b0: 0x7c650010  sq          $a1, 0x10($v1)
    ctx->pc = 0x2316b0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 5));
    // 0x2316b4: 0x7c660020  sq          $a2, 0x20($v1)
    ctx->pc = 0x2316b4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 6));
label_2316b8:
    // 0x2316b8: 0xc08e9ae  jal         func_23A6B8
    ctx->pc = 0x2316B8u;
    SET_GPR_U32(ctx, 31, 0x2316C0u);
    ctx->pc = 0x2316BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2316B8u;
    // 0x2316bc: 0x26a4d2d0  addiu       $a0, $s5, -0x2D30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294955728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A6B8u, 0x2316B8u, 0x2316C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2316C0u;
label_2316c0:
    // 0x2316c0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2316c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2316c4:
    // 0x2316c4: 0xc0920fa  jal         func_2483E8
    ctx->pc = 0x2316C4u;
    SET_GPR_U32(ctx, 31, 0x2316CCu);
    ctx->pc = 0x2316C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2316C4u;
    // 0x2316c8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2483E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2483E8u, 0x2316C4u, 0x2316CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2316CCu;
label_2316cc:
    // 0x2316cc: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x2316ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2316d0: 0xdfb10118  ld          $s1, 0x118($sp)
    ctx->pc = 0x2316d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2316d4: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x2316d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2316d8: 0xdfb30128  ld          $s3, 0x128($sp)
    ctx->pc = 0x2316d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2316dc: 0xdfb40130  ld          $s4, 0x130($sp)
    ctx->pc = 0x2316dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2316e0: 0xdfb50138  ld          $s5, 0x138($sp)
    ctx->pc = 0x2316e0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2316e4: 0xdfb60140  ld          $s6, 0x140($sp)
    ctx->pc = 0x2316e4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2316e8: 0xdfb70148  ld          $s7, 0x148($sp)
    ctx->pc = 0x2316e8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x2316ec: 0xdfbe0150  ld          $fp, 0x150($sp)
    ctx->pc = 0x2316ecu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2316f0: 0xdfbf0158  ld          $ra, 0x158($sp)
    ctx->pc = 0x2316f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x2316f4: 0xc7bb0198  lwc1        $f27, 0x198($sp)
    ctx->pc = 0x2316f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x2316f8: 0xc7ba0190  lwc1        $f26, 0x190($sp)
    ctx->pc = 0x2316f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x2316fc: 0xc7b90188  lwc1        $f25, 0x188($sp)
    ctx->pc = 0x2316fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x231700: 0xc7b80180  lwc1        $f24, 0x180($sp)
    ctx->pc = 0x231700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x231704: 0xc7b70178  lwc1        $f23, 0x178($sp)
    ctx->pc = 0x231704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x231708: 0xc7b60170  lwc1        $f22, 0x170($sp)
    ctx->pc = 0x231708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x23170c: 0xc7b50168  lwc1        $f21, 0x168($sp)
    ctx->pc = 0x23170cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x231710: 0xc7b40160  lwc1        $f20, 0x160($sp)
    ctx->pc = 0x231710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x231714: 0x3e00008  jr          $ra
    ctx->pc = 0x231714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231714u;
        // 0x231718: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23171Cu;
    // 0x23171c: 0x0  nop
    ctx->pc = 0x23171cu;
    // NOP
    ctx->pc = 0x231720u;
}
