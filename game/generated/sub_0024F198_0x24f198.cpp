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

// Function: sub_0024F198
// Address: 0x24f198 - 0x24f9a0
void sub_0024F198_0x24f198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024F198_0x24f198");
#endif

    switch (ctx->pc) {
        case 0x24f250u: goto label_24f250;
        case 0x24f294u: goto label_24f294;
        case 0x24f2c4u: goto label_24f2c4;
        case 0x24f2e8u: goto label_24f2e8;
        case 0x24f300u: goto label_24f300;
        case 0x24f478u: goto label_24f478;
        case 0x24f4a0u: goto label_24f4a0;
        case 0x24f4c0u: goto label_24f4c0;
        case 0x24f50cu: goto label_24f50c;
        case 0x24f538u: goto label_24f538;
        case 0x24f554u: goto label_24f554;
        case 0x24f860u: goto label_24f860;
        case 0x24f928u: goto label_24f928;
        default: break;
    }

    ctx->pc = 0x24f198u;

    // 0x24f198: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x24f198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x24f19c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24f19cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24f1a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24f1a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24f1a4: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x24f1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x24f1a8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x24f1a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f1ac: 0xffb10098  sd          $s1, 0x98($sp)
    ctx->pc = 0x24f1acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
    // 0x24f1b0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x24f1b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f1b4: 0xffb300a8  sd          $s3, 0xA8($sp)
    ctx->pc = 0x24f1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 19));
    // 0x24f1b8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x24f1b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f1bc: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x24f1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x24f1c0: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x24f1c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f1c4: 0xe7b900e8  swc1        $f25, 0xE8($sp)
    ctx->pc = 0x24f1c4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x24f1c8: 0xe7b800e0  swc1        $f24, 0xE0($sp)
    ctx->pc = 0x24f1c8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x24f1cc: 0xe7b700d8  swc1        $f23, 0xD8($sp)
    ctx->pc = 0x24f1ccu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x24f1d0: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x24f1d0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x24f1d4: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x24f1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x24f1d8: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x24f1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
    // 0x24f1dc: 0xe7b600d0  swc1        $f22, 0xD0($sp)
    ctx->pc = 0x24f1dcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x24f1e0: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x24f1e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x24f1e4: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x24f1e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x24f1e8: 0xde0200f0  ld          $v0, 0xF0($s0)
    ctx->pc = 0x24f1e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x24f1ec: 0xc79788dc  lwc1        $f23, -0x7724($gp)
    ctx->pc = 0x24f1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x24f1f0: 0xffa20030  sd          $v0, 0x30($sp)
    ctx->pc = 0x24f1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 2));
    // 0x24f1f4: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x24f1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x24f1f8: 0xde0300c0  ld          $v1, 0xC0($s0)
    ctx->pc = 0x24f1f8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x24f1fc: 0x87a20034  lh          $v0, 0x34($sp)
    ctx->pc = 0x24f1fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x24f200: 0xde0400c8  ld          $a0, 0xC8($s0)
    ctx->pc = 0x24f200u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x24f204: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24f204u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24f208: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24f208u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24f20c: 0x87a20036  lh          $v0, 0x36($sp)
    ctx->pc = 0x24f20cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 54)));
    // 0x24f210: 0xde0500d0  ld          $a1, 0xD0($s0)
    ctx->pc = 0x24f210u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x24f214: 0xde0600d8  ld          $a2, 0xD8($s0)
    ctx->pc = 0x24f214u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x24f218: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x24f218u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x24f21c: 0x4680ad60  cvt.s.w     $f21, $f21
    ctx->pc = 0x24f21cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[21], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x24f220: 0xde0700e0  ld          $a3, 0xE0($s0)
    ctx->pc = 0x24f220u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x24f224: 0xde0800e8  ld          $t0, 0xE8($s0)
    ctx->pc = 0x24f224u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x24f228: 0x46170602  mul.s       $f24, $f0, $f23
    ctx->pc = 0x24f228u;
    ctx->f[24] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x24f22c: 0xde0900f8  ld          $t1, 0xF8($s0)
    ctx->pc = 0x24f22cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 16), 248)));
    // 0x24f230: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x24f230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x24f234: 0xffa40008  sd          $a0, 0x8($sp)
    ctx->pc = 0x24f234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 4));
    // 0x24f238: 0xffa50010  sd          $a1, 0x10($sp)
    ctx->pc = 0x24f238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 5));
    // 0x24f23c: 0xffa60018  sd          $a2, 0x18($sp)
    ctx->pc = 0x24f23cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 6));
    // 0x24f240: 0xffa70020  sd          $a3, 0x20($sp)
    ctx->pc = 0x24f240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 7));
    // 0x24f244: 0xffa80028  sd          $t0, 0x28($sp)
    ctx->pc = 0x24f244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 8));
    // 0x24f248: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x24F248u;
    SET_GPR_U32(ctx, 31, 0x24F250u);
    ctx->pc = 0x24F24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F248u;
    // 0x24f24c: 0xffa90038  sd          $t1, 0x38($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x24F248u, 0x24F250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F250u;
label_24f250:
    // 0x24f250: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24f250u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24f254: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24f254u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24f258: 0xc79988e0  lwc1        $f25, -0x7720($gp)
    ctx->pc = 0x24f258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x24f25c: 0x46190003  div.s       $f0, $f0, $f25
    ctx->pc = 0x24f25cu;
    if (ctx->f[25] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[25];
    // 0x24f260: 0xc79688e4  lwc1        $f22, -0x771C($gp)
    ctx->pc = 0x24f260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x24f264: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x24f264u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x24f268: 0x87a20038  lh          $v0, 0x38($sp)
    ctx->pc = 0x24f268u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x24f26c: 0x87a3003a  lh          $v1, 0x3A($sp)
    ctx->pc = 0x24f26cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 58)));
    // 0x24f270: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24f270u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24f274: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24f274u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24f278: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x24f278u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x24f27c: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x24f27cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x24f280: 0x4617ad42  mul.s       $f21, $f21, $f23
    ctx->pc = 0x24f280u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[23]);
    // 0x24f284: 0x4615c600  add.s       $f24, $f24, $f21
    ctx->pc = 0x24f284u;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[21]);
    // 0x24f288: 0xe6180070  swc1        $f24, 0x70($s0)
    ctx->pc = 0x24f288u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x24f28c: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x24F28Cu;
    SET_GPR_U32(ctx, 31, 0x24F294u);
    ctx->pc = 0x24F290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F28Cu;
    // 0x24f290: 0x46160602  mul.s       $f24, $f0, $f22 (Delay Slot)
    ctx->f[24] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x24F28Cu, 0x24F294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F294u;
label_24f294:
    // 0x24f294: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24f294u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24f298: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24f298u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24f29c: 0x46190003  div.s       $f0, $f0, $f25
    ctx->pc = 0x24f29cu;
    if (ctx->f[25] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[25];
    // 0x24f2a0: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x24f2a0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x24f2a4: 0x4616a542  mul.s       $f21, $f20, $f22
    ctx->pc = 0x24f2a4u;
    ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
    // 0x24f2a8: 0x4615c600  add.s       $f24, $f24, $f21
    ctx->pc = 0x24f2a8u;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[21]);
    // 0x24f2ac: 0xe6180074  swc1        $f24, 0x74($s0)
    ctx->pc = 0x24f2acu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x24f2b0: 0x8e620118  lw          $v0, 0x118($s3)
    ctx->pc = 0x24f2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 280)));
    // 0x24f2b4: 0x441006e  bgez        $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x24F2B4u;
    {
        const bool branch_taken_0x24f2b4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x24f2b4) {
            ctx->pc = 0x24F470u;
            goto label_24f470;
        }
    }
    ctx->pc = 0x24F2BCu;
    // 0x24f2bc: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x24F2BCu;
    SET_GPR_U32(ctx, 31, 0x24F2C4u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x24F2BCu, 0x24F2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F2C4u;
label_24f2c4:
    // 0x24f2c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24f2c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24f2c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24f2c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24f2cc: 0x46190003  div.s       $f0, $f0, $f25
    ctx->pc = 0x24f2ccu;
    if (ctx->f[25] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[25];
    // 0x24f2d0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x24f2d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x24f2d4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x24f2d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x24f2d8: 0xc79588e8  lwc1        $f21, -0x7718($gp)
    ctx->pc = 0x24f2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x24f2dc: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x24f2dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x24f2e0: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x24F2E0u;
    SET_GPR_U32(ctx, 31, 0x24F2E8u);
    ctx->pc = 0x24F2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F2E0u;
    // 0x24f2e4: 0x46150582  mul.s       $f22, $f0, $f21 (Delay Slot)
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x24F2E0u, 0x24F2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F2E8u;
label_24f2e8:
    // 0x24f2e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24f2e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24f2ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24f2ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24f2f0: 0x46190003  div.s       $f0, $f0, $f25
    ctx->pc = 0x24f2f0u;
    if (ctx->f[25] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[25];
    // 0x24f2f4: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x24f2f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x24f2f8: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x24F2F8u;
    SET_GPR_U32(ctx, 31, 0x24F300u);
    ctx->pc = 0x24F2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F2F8u;
    // 0x24f2fc: 0x461505c2  mul.s       $f23, $f0, $f21 (Delay Slot)
    ctx->f[23] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x24F2F8u, 0x24F300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F300u;
label_24f300:
    // 0x24f300: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24f300u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24f304: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24f304u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24f308: 0x46190003  div.s       $f0, $f0, $f25
    ctx->pc = 0x24f308u;
    if (ctx->f[25] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[25];
    // 0x24f30c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x24f30cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24f310: 0x46140181  sub.s       $f6, $f0, $f20
    ctx->pc = 0x24f310u;
    ctx->f[6] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x24f314: 0xc78088ec  lwc1        $f0, -0x7714($gp)
    ctx->pc = 0x24f314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24f318: 0x4601b034  c.lt.s      $f22, $f1
    ctx->pc = 0x24f318u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24f31c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x24F31Cu;
    {
        const bool branch_taken_0x24f31c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24F320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F31Cu;
        // 0x24f320: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f31c) {
            ctx->pc = 0x24F330u;
            goto label_24f330;
        }
    }
    ctx->pc = 0x24F324u;
    // 0x24f324: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24F324u;
    {
        const bool branch_taken_0x24f324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F324u;
        // 0x24f328: 0x4600b000  add.s       $f0, $f22, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f324) {
            ctx->pc = 0x24F334u;
            goto label_24f334;
        }
    }
    ctx->pc = 0x24F32Cu;
    // 0x24f32c: 0x0  nop
    ctx->pc = 0x24f32cu;
    // NOP
label_24f330:
    // 0x24f330: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x24f330u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
label_24f334:
    // 0x24f334: 0x46000142  mul.s       $f5, $f0, $f0
    ctx->pc = 0x24f334u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x24f338: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x24f338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x24f33c: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x24f33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x24f340: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x24f340u;
    { uint32_t bits = FAST_READ32(0x3AB6ECu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24f344: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x24f344u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x24f348: 0x46002902  mul.s       $f4, $f5, $f0
    ctx->pc = 0x24f348u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x24f34c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x24f34cu;
    { uint32_t bits = FAST_READ32(0x3AB6E8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24f350: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x24f350u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[3], ctx->f[0]));
    // 0x24f354: 0x460520c2  mul.s       $f3, $f4, $f5
    ctx->pc = 0x24f354u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x24f358: 0x4602201e  madda.s     $f4, $f2
    ctx->pc = 0x24f358u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[2])));
    // 0x24f35c: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x24f35cu;
    { uint32_t bits = FAST_READ32(0x3AB6E4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24f360: 0x46051902  mul.s       $f4, $f3, $f5
    ctx->pc = 0x24f360u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x24f364: 0x4601181e  madda.s     $f3, $f1
    ctx->pc = 0x24f364u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[1])));
    // 0x24f368: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x24f368u;
    { uint32_t bits = FAST_READ32(0x3AB6E0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24f36c: 0x460520c2  mul.s       $f3, $f4, $f5
    ctx->pc = 0x24f36cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x24f370: 0x4602201e  madda.s     $f4, $f2
    ctx->pc = 0x24f370u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[2])));
    // 0x24f374: 0x4601195c  madd.s      $f5, $f3, $f1
    ctx->pc = 0x24f374u;
    ctx->f[5] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x24f378: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24f378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24f37c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24f37cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24f380: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x24f380u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x24f384: 0x46002886  mov.s       $f2, $f5
    ctx->pc = 0x24f384u;
    ctx->f[2] = FPU_MOV_S(ctx->f[5]);
    // 0x24f388: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x24f388u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x24f38c: 0x4602105d  msub.s      $f1, $f2, $f2
    ctx->pc = 0x24f38cu;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x24f390: 0x460100c4  c1          0x100C4
    ctx->pc = 0x24f390u;
    ctx->f[3] = FPU_SQRT_S(ctx->f[0]);
    // 0x24f394: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x24f394u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x24f398: 0x4604b034  c.lt.s      $f22, $f4
    ctx->pc = 0x24f398u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24f39c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x24F39Cu;
    {
        const bool branch_taken_0x24f39c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24F3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F39Cu;
        // 0x24f3a0: 0x460611c2  mul.s       $f7, $f2, $f6 (Delay Slot)
        ctx->f[7] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f39c) {
            ctx->pc = 0x24F3A8u;
            goto label_24f3a8;
        }
    }
    ctx->pc = 0x24F3A4u;
    // 0x24f3a4: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x24f3a4u;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
label_24f3a8:
    // 0x24f3a8: 0x46061802  mul.s       $f0, $f3, $f6
    ctx->pc = 0x24f3a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x24f3ac: 0xc78188f0  lwc1        $f1, -0x7710($gp)
    ctx->pc = 0x24f3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24f3b0: 0x4604b834  c.lt.s      $f23, $f4
    ctx->pc = 0x24f3b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24f3b4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x24F3B4u;
    {
        const bool branch_taken_0x24f3b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24F3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F3B4u;
        // 0x24f3b8: 0xe4a00004  swc1        $f0, 0x4($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f3b4) {
            ctx->pc = 0x24F3C8u;
            goto label_24f3c8;
        }
    }
    ctx->pc = 0x24F3BCu;
    // 0x24f3bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24F3BCu;
    {
        const bool branch_taken_0x24f3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F3BCu;
        // 0x24f3c0: 0x4601b800  add.s       $f0, $f23, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[23], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f3bc) {
            ctx->pc = 0x24F3CCu;
            goto label_24f3cc;
        }
    }
    ctx->pc = 0x24F3C4u;
    // 0x24f3c4: 0x0  nop
    ctx->pc = 0x24f3c4u;
    // NOP
label_24f3c8:
    // 0x24f3c8: 0x46170801  sub.s       $f0, $f1, $f23
    ctx->pc = 0x24f3c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[23]);
label_24f3cc:
    // 0x24f3cc: 0x46000142  mul.s       $f5, $f0, $f0
    ctx->pc = 0x24f3ccu;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x24f3d0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x24f3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x24f3d4: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x24f3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x24f3d8: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x24f3d8u;
    { uint32_t bits = FAST_READ32(0x3AB6ECu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24f3dc: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x24f3dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x24f3e0: 0x46002902  mul.s       $f4, $f5, $f0
    ctx->pc = 0x24f3e0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x24f3e4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x24f3e4u;
    { uint32_t bits = FAST_READ32(0x3AB6E8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24f3e8: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x24f3e8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[3], ctx->f[0]));
    // 0x24f3ec: 0x460520c2  mul.s       $f3, $f4, $f5
    ctx->pc = 0x24f3ecu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x24f3f0: 0x4602201e  madda.s     $f4, $f2
    ctx->pc = 0x24f3f0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[2])));
    // 0x24f3f4: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x24f3f4u;
    { uint32_t bits = FAST_READ32(0x3AB6E4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24f3f8: 0x46051902  mul.s       $f4, $f3, $f5
    ctx->pc = 0x24f3f8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x24f3fc: 0x4601181e  madda.s     $f3, $f1
    ctx->pc = 0x24f3fcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[1])));
    // 0x24f400: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x24f400u;
    { uint32_t bits = FAST_READ32(0x3AB6E0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24f404: 0x460520c2  mul.s       $f3, $f4, $f5
    ctx->pc = 0x24f404u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x24f408: 0x4602201e  madda.s     $f4, $f2
    ctx->pc = 0x24f408u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[2])));
    // 0x24f40c: 0x4601195c  madd.s      $f5, $f3, $f1
    ctx->pc = 0x24f40cu;
    ctx->f[5] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x24f410: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24f410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24f414: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24f414u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24f418: 0x46002846  mov.s       $f1, $f5
    ctx->pc = 0x24f418u;
    ctx->f[1] = FPU_MOV_S(ctx->f[5]);
    // 0x24f41c: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x24f41cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x24f420: 0x4601089d  msub.s      $f2, $f1, $f1
    ctx->pc = 0x24f420u;
    ctx->f[2] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x24f424: 0x460200c4  c1          0x200C4
    ctx->pc = 0x24f424u;
    ctx->f[3] = FPU_SQRT_S(ctx->f[0]);
    // 0x24f428: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24f428u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24f42c: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x24f42cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x24f430: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x24f430u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24f434: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x24F434u;
    {
        const bool branch_taken_0x24f434 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24F438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F434u;
        // 0x24f438: 0xe4a10008  swc1        $f1, 0x8($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f434) {
            ctx->pc = 0x24F440u;
            goto label_24f440;
        }
    }
    ctx->pc = 0x24F43Cu;
    // 0x24f43c: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x24f43cu;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
label_24f440:
    // 0x24f440: 0x46071802  mul.s       $f0, $f3, $f7
    ctx->pc = 0x24f440u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x24f444: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x24f444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x24f448: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x24f448u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f44c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x24f44cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f450: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x24f450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x24f454: 0xdbb00000  lqc2        $vf16, 0x0($sp)
    ctx->pc = 0x24f454u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24f458: 0xd85f0000  lqc2        $vf31, 0x0($v0)
    ctx->pc = 0x24f458u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24f45c: 0x4bdf842a  vmul.xyz    $vf16, $vf16, $vf31
    ctx->pc = 0x24f45cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x24f460: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x24f460u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x24f464: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x24F464u;
    {
        const bool branch_taken_0x24f464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F464u;
        // 0x24f468: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f464) {
            ctx->pc = 0x24F4E4u;
            goto label_24f4e4;
        }
    }
    ctx->pc = 0x24F46Cu;
    // 0x24f46c: 0x0  nop
    ctx->pc = 0x24f46cu;
    // NOP
label_24f470:
    // 0x24f470: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x24F470u;
    SET_GPR_U32(ctx, 31, 0x24F478u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x24F470u, 0x24F478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F478u;
label_24f478:
    // 0x24f478: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24f478u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24f47c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24f47cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24f480: 0x46190003  div.s       $f0, $f0, $f25
    ctx->pc = 0x24f480u;
    if (ctx->f[25] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[25];
    // 0x24f484: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x24f484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x24f488: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x24f488u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x24f48c: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x24f48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24f490: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x24f490u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x24f494: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x24f494u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x24f498: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x24F498u;
    SET_GPR_U32(ctx, 31, 0x24F4A0u);
    ctx->pc = 0x24F49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F498u;
    // 0x24f49c: 0xe6000030  swc1        $f0, 0x30($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x24F498u, 0x24F4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F4A0u;
label_24f4a0:
    // 0x24f4a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24f4a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24f4a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24f4a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24f4a8: 0x46190003  div.s       $f0, $f0, $f25
    ctx->pc = 0x24f4a8u;
    if (ctx->f[25] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[25];
    // 0x24f4ac: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x24f4acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x24f4b0: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x24f4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24f4b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x24f4b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x24f4b8: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x24F4B8u;
    SET_GPR_U32(ctx, 31, 0x24F4C0u);
    ctx->pc = 0x24F4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F4B8u;
    // 0x24f4bc: 0xe6000034  swc1        $f0, 0x34($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x24F4B8u, 0x24F4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F4C0u;
label_24f4c0:
    // 0x24f4c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24f4c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24f4c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24f4c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24f4c8: 0x46190003  div.s       $f0, $f0, $f25
    ctx->pc = 0x24f4c8u;
    if (ctx->f[25] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[25];
    // 0x24f4cc: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x24f4ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x24f4d0: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x24f4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24f4d4: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x24f4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x24f4d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x24f4d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x24f4dc: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x24f4dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x24f4e0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x24f4e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24f4e4:
    // 0x24f4e4: 0x26120020  addiu       $s2, $s0, 0x20
    ctx->pc = 0x24f4e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x24f4e8: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x24f4e8u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24f4ec: 0xda5f0000  lqc2        $vf31, 0x0($s2)
    ctx->pc = 0x24f4ecu;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x24f4f0: 0x4bdf842a  vmul.xyz    $vf16, $vf16, $vf31
    ctx->pc = 0x24f4f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x24f4f4: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x24f4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x24f4f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24f4f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24f4fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24f4fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24f500: 0xc79488f4  lwc1        $f20, -0x770C($gp)
    ctx->pc = 0x24f500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x24f504: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x24F504u;
    SET_GPR_U32(ctx, 31, 0x24F50Cu);
    ctx->pc = 0x24F508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F504u;
    // 0x24f508: 0xe600003c  swc1        $f0, 0x3C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x24F504u, 0x24F50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F50Cu;
label_24f50c:
    // 0x24f50c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24f50cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24f510: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24f510u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24f514: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x24f514u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x24f518: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x24f518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x24f51c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x24f51cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x24f520: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x24f520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24f524: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x24f524u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x24f528: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x24f528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24f52c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x24f52cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x24f530: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x24F530u;
    SET_GPR_U32(ctx, 31, 0x24F538u);
    ctx->pc = 0x24F534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F530u;
    // 0x24f534: 0x46010580  add.s       $f22, $f0, $f1 (Delay Slot)
    ctx->f[22] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x24F530u, 0x24F538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F538u;
label_24f538:
    // 0x24f538: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24f538u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24f53c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24f53cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24f540: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x24f540u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x24f544: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x24f544u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x24f548: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x24f548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24f54c: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x24F54Cu;
    SET_GPR_U32(ctx, 31, 0x24F554u);
    ctx->pc = 0x24F550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F54Cu;
    // 0x24f550: 0x460105c2  mul.s       $f23, $f0, $f1 (Delay Slot)
    ctx->f[23] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x24F54Cu, 0x24F554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F554u;
label_24f554:
    // 0x24f554: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24f554u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24f558: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24f558u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24f55c: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x24f55cu;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x24f560: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x24f560u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x24f564: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x24f564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24f568: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x24f568u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24f56c: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x24f56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24f570: 0x4601b034  c.lt.s      $f22, $f1
    ctx->pc = 0x24f570u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24f574: 0xc78188f8  lwc1        $f1, -0x7708($gp)
    ctx->pc = 0x24f574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24f578: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x24f578u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x24f57c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x24F57Cu;
    {
        const bool branch_taken_0x24f57c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24F580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F57Cu;
        // 0x24f580: 0x46001180  add.s       $f6, $f2, $f0 (Delay Slot)
        ctx->f[6] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f57c) {
            ctx->pc = 0x24F590u;
            goto label_24f590;
        }
    }
    ctx->pc = 0x24F584u;
    // 0x24f584: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24F584u;
    {
        const bool branch_taken_0x24f584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F584u;
        // 0x24f588: 0x4601b000  add.s       $f0, $f22, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[22], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f584) {
            ctx->pc = 0x24F594u;
            goto label_24f594;
        }
    }
    ctx->pc = 0x24F58Cu;
    // 0x24f58c: 0x0  nop
    ctx->pc = 0x24f58cu;
    // NOP
label_24f590:
    // 0x24f590: 0x46160801  sub.s       $f0, $f1, $f22
    ctx->pc = 0x24f590u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[22]);
label_24f594:
    // 0x24f594: 0x46000142  mul.s       $f5, $f0, $f0
    ctx->pc = 0x24f594u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x24f598: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x24f598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x24f59c: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x24f59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x24f5a0: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x24f5a0u;
    { uint32_t bits = FAST_READ32(0x3AB6ECu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24f5a4: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x24f5a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x24f5a8: 0x46002902  mul.s       $f4, $f5, $f0
    ctx->pc = 0x24f5a8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x24f5ac: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x24f5acu;
    { uint32_t bits = FAST_READ32(0x3AB6E8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24f5b0: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x24f5b0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[3], ctx->f[0]));
    // 0x24f5b4: 0x460520c2  mul.s       $f3, $f4, $f5
    ctx->pc = 0x24f5b4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x24f5b8: 0x4602201e  madda.s     $f4, $f2
    ctx->pc = 0x24f5b8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[2])));
    // 0x24f5bc: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x24f5bcu;
    { uint32_t bits = FAST_READ32(0x3AB6E4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24f5c0: 0x46051902  mul.s       $f4, $f3, $f5
    ctx->pc = 0x24f5c0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x24f5c4: 0x4601181e  madda.s     $f3, $f1
    ctx->pc = 0x24f5c4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[1])));
    // 0x24f5c8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x24f5c8u;
    { uint32_t bits = FAST_READ32(0x3AB6E0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24f5cc: 0x460520c2  mul.s       $f3, $f4, $f5
    ctx->pc = 0x24f5ccu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x24f5d0: 0x4602201e  madda.s     $f4, $f2
    ctx->pc = 0x24f5d0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[2])));
    // 0x24f5d4: 0x4601195c  madd.s      $f5, $f3, $f1
    ctx->pc = 0x24f5d4u;
    ctx->f[5] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x24f5d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24f5d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24f5dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24f5dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24f5e0: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x24f5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x24f5e4: 0x46002886  mov.s       $f2, $f5
    ctx->pc = 0x24f5e4u;
    ctx->f[2] = FPU_MOV_S(ctx->f[5]);
    // 0x24f5e8: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x24f5e8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x24f5ec: 0x4602105d  msub.s      $f1, $f2, $f2
    ctx->pc = 0x24f5ecu;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x24f5f0: 0x46010004  c1          0x10004
    ctx->pc = 0x24f5f0u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x24f5f4: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x24f5f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x24f5f8: 0x4603b034  c.lt.s      $f22, $f3
    ctx->pc = 0x24f5f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24f5fc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x24F5FCu;
    {
        const bool branch_taken_0x24f5fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24F600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F5FCu;
        // 0x24f600: 0x460611c2  mul.s       $f7, $f2, $f6 (Delay Slot)
        ctx->f[7] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f5fc) {
            ctx->pc = 0x24F608u;
            goto label_24f608;
        }
    }
    ctx->pc = 0x24F604u;
    // 0x24f604: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x24f604u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_24f608:
    // 0x24f608: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x24f608u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x24f60c: 0xc78188fc  lwc1        $f1, -0x7704($gp)
    ctx->pc = 0x24f60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24f610: 0x4603b834  c.lt.s      $f23, $f3
    ctx->pc = 0x24f610u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24f614: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x24F614u;
    {
        const bool branch_taken_0x24f614 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24F618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F614u;
        // 0x24f618: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f614) {
            ctx->pc = 0x24F628u;
            goto label_24f628;
        }
    }
    ctx->pc = 0x24F61Cu;
    // 0x24f61c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24F61Cu;
    {
        const bool branch_taken_0x24f61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F61Cu;
        // 0x24f620: 0x4601b800  add.s       $f0, $f23, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[23], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f61c) {
            ctx->pc = 0x24F62Cu;
            goto label_24f62c;
        }
    }
    ctx->pc = 0x24F624u;
    // 0x24f624: 0x0  nop
    ctx->pc = 0x24f624u;
    // NOP
label_24f628:
    // 0x24f628: 0x46170801  sub.s       $f0, $f1, $f23
    ctx->pc = 0x24f628u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[23]);
label_24f62c:
    // 0x24f62c: 0x46000142  mul.s       $f5, $f0, $f0
    ctx->pc = 0x24f62cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x24f630: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x24f630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x24f634: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x24f634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x24f638: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x24f638u;
    { uint32_t bits = FAST_READ32(0x3AB6ECu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24f63c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x24f63cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x24f640: 0x46002902  mul.s       $f4, $f5, $f0
    ctx->pc = 0x24f640u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x24f644: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x24f644u;
    { uint32_t bits = FAST_READ32(0x3AB6E8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24f648: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x24f648u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[3], ctx->f[0]));
    // 0x24f64c: 0x460520c2  mul.s       $f3, $f4, $f5
    ctx->pc = 0x24f64cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x24f650: 0x4602201e  madda.s     $f4, $f2
    ctx->pc = 0x24f650u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[2])));
    // 0x24f654: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x24f654u;
    { uint32_t bits = FAST_READ32(0x3AB6E4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24f658: 0x46051902  mul.s       $f4, $f3, $f5
    ctx->pc = 0x24f658u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x24f65c: 0x4601181e  madda.s     $f3, $f1
    ctx->pc = 0x24f65cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[1])));
    // 0x24f660: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x24f660u;
    { uint32_t bits = FAST_READ32(0x3AB6E0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24f664: 0x460520c2  mul.s       $f3, $f4, $f5
    ctx->pc = 0x24f664u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x24f668: 0x4602201e  madda.s     $f4, $f2
    ctx->pc = 0x24f668u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[2])));
    // 0x24f66c: 0x4601195c  madd.s      $f5, $f3, $f1
    ctx->pc = 0x24f66cu;
    ctx->f[5] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x24f670: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24f670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24f674: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24f674u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24f678: 0x46002846  mov.s       $f1, $f5
    ctx->pc = 0x24f678u;
    ctx->f[1] = FPU_MOV_S(ctx->f[5]);
    // 0x24f67c: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x24f67cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x24f680: 0x4601089d  msub.s      $f2, $f1, $f1
    ctx->pc = 0x24f680u;
    ctx->f[2] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x24f684: 0x46020004  c1          0x20004
    ctx->pc = 0x24f684u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x24f688: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x24f688u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x24f68c: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x24f68cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x24f690: 0x4602b834  c.lt.s      $f23, $f2
    ctx->pc = 0x24f690u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24f694: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x24F694u;
    {
        const bool branch_taken_0x24f694 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24F698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F694u;
        // 0x24f698: 0xe6210008  swc1        $f1, 0x8($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f694) {
            ctx->pc = 0x24F6A0u;
            goto label_24f6a0;
        }
    }
    ctx->pc = 0x24F69Cu;
    // 0x24f69c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x24f69cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_24f6a0:
    // 0x24f6a0: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x24f6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24f6a4: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x24f6a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x24f6a8: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x24f6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24f6ac: 0xc7818900  lwc1        $f1, -0x7700($gp)
    ctx->pc = 0x24f6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24f6b0: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x24f6b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24f6b4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x24F6B4u;
    {
        const bool branch_taken_0x24f6b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24F6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F6B4u;
        // 0x24f6b8: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f6b4) {
            ctx->pc = 0x24F6C8u;
            goto label_24f6c8;
        }
    }
    ctx->pc = 0x24F6BCu;
    // 0x24f6bc: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x24f6bcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x24f6c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24F6C0u;
    {
        const bool branch_taken_0x24f6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F6C0u;
        // 0x24f6c4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f6c0) {
            ctx->pc = 0x24F6D0u;
            goto label_24f6d0;
        }
    }
    ctx->pc = 0x24F6C8u;
label_24f6c8:
    // 0x24f6c8: 0x460308c1  sub.s       $f3, $f1, $f3
    ctx->pc = 0x24f6c8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x24f6cc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x24f6ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24f6d0:
    // 0x24f6d0: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x24f6d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x24f6d4: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x24f6d4u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x24f6d8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x24f6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x24f6dc: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x24f6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x24f6e0: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x24f6e0u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(FAST_READ128(0x3AB6E0u));
    // 0x24f6e4: 0x4a3ffb3d  vmr32.w     $vf31, $vf31
    ctx->pc = 0x24f6e4u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x24f6e8: 0x4a9f0700  vaddx.y     $vf28, $vf0, $vf31x
    ctx->pc = 0x24f6e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x24f6ec: 0x4b1fffea  vmul.x      $vf31, $vf31, $vf31
    ctx->pc = 0x24f6ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x24f6f0: 0x4bffef5b  vmulw.xyzw  $vf29, $vf29, $vf31w
    ctx->pc = 0x24f6f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x24f6f4: 0x4bffef58  vmulx.xyzw  $vf29, $vf29, $vf31x
    ctx->pc = 0x24f6f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x24f6f8: 0x4bdfef58  vmulx.xyz   $vf29, $vf29, $vf31x
    ctx->pc = 0x24f6f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x24f6fc: 0x4a9de703  vaddw.y     $vf28, $vf28, $vf29w
    ctx->pc = 0x24f6fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x24f700: 0x4b9fef58  vmulx.xy    $vf29, $vf29, $vf31x
    ctx->pc = 0x24f700u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x24f704: 0x4a9de702  vaddz.y     $vf28, $vf28, $vf29z
    ctx->pc = 0x24f704u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x24f708: 0x4b1fef58  vmulx.x     $vf29, $vf29, $vf31x
    ctx->pc = 0x24f708u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x24f70c: 0x4a9de701  vaddy.y     $vf28, $vf28, $vf29y
    ctx->pc = 0x24f70cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x24f710: 0x4a9de700  vaddx.y     $vf28, $vf28, $vf29x
    ctx->pc = 0x24f710u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x24f714: 0x4a80003f  vaddaw.y    $ACC, $vf0, $vf0w
    ctx->pc = 0x24f714u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x24f718: 0x4a9ce74d  vmsuby.y    $vf29, $vf28, $vf28y
    ctx->pc = 0x24f718u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x24f71c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24F71Cu;
    {
        const bool branch_taken_0x24f71c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F71Cu;
        // 0x24f720: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f71c) {
            ctx->pc = 0x24F730u;
            goto label_24f730;
        }
    }
    ctx->pc = 0x24F724u;
    // 0x24f724: 0x4a0003bf  vwaitq
    ctx->pc = 0x24f724u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x24f728: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24F728u;
    {
        const bool branch_taken_0x24f728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F728u;
        // 0x24f72c: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f728) {
            ctx->pc = 0x24F738u;
            goto label_24f738;
        }
    }
    ctx->pc = 0x24F730u;
label_24f730:
    // 0x24f730: 0x4a0003bf  vwaitq
    ctx->pc = 0x24f730u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x24f734: 0x4b000720  vaddq.x     $vf28, $vf0, $Q
    ctx->pc = 0x24f734u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_24f738:
    // 0x24f738: 0x4ae0012c  vsub.yzw    $vf4, $vf0, $vf0
    ctx->pc = 0x24f738u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x24f73c: 0x4b20016c  vsub.xw     $vf5, $vf0, $vf0
    ctx->pc = 0x24f73cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x24f740: 0x4b2001ac  vsub.xw     $vf6, $vf0, $vf0
    ctx->pc = 0x24f740u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x24f744: 0x4b000103  vaddw.x     $vf4, $vf0, $vf0w
    ctx->pc = 0x24f744u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x24f748: 0x4a9c0168  vadd.y      $vf5, $vf0, $vf28
    ctx->pc = 0x24f748u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[28]); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x24f74c: 0x4a9c0184  vsubx.y     $vf6, $vf0, $vf28x
    ctx->pc = 0x24f74cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x24f750: 0x4a5c0140  vaddx.z     $vf5, $vf0, $vf28x
    ctx->pc = 0x24f750u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x24f754: 0x4a5c0181  vaddy.z     $vf6, $vf0, $vf28y
    ctx->pc = 0x24f754u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x24f758: 0xf8600030  sqc2        $vf0, 0x30($v1)
    ctx->pc = 0x24f758u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x24f75c: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x24f75cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x24f760: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x24f760u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x24f764: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x24f764u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x24f768: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x24f768u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24f76c: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x24f76cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x24f770: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x24f770u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x24f774: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x24f774u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x24f778: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x24f778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24f77c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24f77cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24f780: 0xc7828904  lwc1        $f2, -0x76FC($gp)
    ctx->pc = 0x24f780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24f784: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24f784u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24f788: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x24F788u;
    {
        const bool branch_taken_0x24f788 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24f788) {
            ctx->pc = 0x24F78Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F788u;
            // 0x24f78c: 0x46011041  sub.s       $f1, $f2, $f1 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F7A0u;
            goto label_24f7a0;
        }
    }
    ctx->pc = 0x24F790u;
    // 0x24f790: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x24f790u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x24f794: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24F794u;
    {
        const bool branch_taken_0x24f794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F794u;
        // 0x24f798: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f794) {
            ctx->pc = 0x24F7A4u;
            goto label_24f7a4;
        }
    }
    ctx->pc = 0x24F79Cu;
    // 0x24f79c: 0x0  nop
    ctx->pc = 0x24f79cu;
    // NOP
label_24f7a0:
    // 0x24f7a0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x24f7a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24f7a4:
    // 0x24f7a4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x24f7a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x24f7a8: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x24f7a8u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x24f7ac: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x24f7acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x24f7b0: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x24f7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x24f7b4: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x24f7b4u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(FAST_READ128(0x3AB6E0u));
    // 0x24f7b8: 0x4a3ffb3d  vmr32.w     $vf31, $vf31
    ctx->pc = 0x24f7b8u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x24f7bc: 0x4a9f0700  vaddx.y     $vf28, $vf0, $vf31x
    ctx->pc = 0x24f7bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x24f7c0: 0x4b1fffea  vmul.x      $vf31, $vf31, $vf31
    ctx->pc = 0x24f7c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x24f7c4: 0x4bffef5b  vmulw.xyzw  $vf29, $vf29, $vf31w
    ctx->pc = 0x24f7c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x24f7c8: 0x4bffef58  vmulx.xyzw  $vf29, $vf29, $vf31x
    ctx->pc = 0x24f7c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x24f7cc: 0x4bdfef58  vmulx.xyz   $vf29, $vf29, $vf31x
    ctx->pc = 0x24f7ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x24f7d0: 0x4a9de703  vaddw.y     $vf28, $vf28, $vf29w
    ctx->pc = 0x24f7d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x24f7d4: 0x4b9fef58  vmulx.xy    $vf29, $vf29, $vf31x
    ctx->pc = 0x24f7d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x24f7d8: 0x4a9de702  vaddz.y     $vf28, $vf28, $vf29z
    ctx->pc = 0x24f7d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x24f7dc: 0x4b1fef58  vmulx.x     $vf29, $vf29, $vf31x
    ctx->pc = 0x24f7dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x24f7e0: 0x4a9de701  vaddy.y     $vf28, $vf28, $vf29y
    ctx->pc = 0x24f7e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x24f7e4: 0x4a9de700  vaddx.y     $vf28, $vf28, $vf29x
    ctx->pc = 0x24f7e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x24f7e8: 0x4a80003f  vaddaw.y    $ACC, $vf0, $vf0w
    ctx->pc = 0x24f7e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x24f7ec: 0x4a9ce74d  vmsuby.y    $vf29, $vf28, $vf28y
    ctx->pc = 0x24f7ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x24f7f0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x24F7F0u;
    {
        const bool branch_taken_0x24f7f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F7F0u;
        // 0x24f7f4: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f7f0) {
            ctx->pc = 0x24F808u;
            goto label_24f808;
        }
    }
    ctx->pc = 0x24F7F8u;
    // 0x24f7f8: 0x4a0003bf  vwaitq
    ctx->pc = 0x24f7f8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x24f7fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24F7FCu;
    {
        const bool branch_taken_0x24f7fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F7FCu;
        // 0x24f800: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f7fc) {
            ctx->pc = 0x24F810u;
            goto label_24f810;
        }
    }
    ctx->pc = 0x24F804u;
    // 0x24f804: 0x0  nop
    ctx->pc = 0x24f804u;
    // NOP
label_24f808:
    // 0x24f808: 0x4a0003bf  vwaitq
    ctx->pc = 0x24f808u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x24f80c: 0x4b000720  vaddq.x     $vf28, $vf0, $Q
    ctx->pc = 0x24f80cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_24f810:
    // 0x24f810: 0x4a5c0701  vaddy.z     $vf28, $vf0, $vf28y
    ctx->pc = 0x24f810u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x24f814: 0x4b1c0741  vaddy.x     $vf29, $vf0, $vf28y
    ctx->pc = 0x24f814u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x24f818: 0x4a5c0744  vsubx.z     $vf29, $vf0, $vf28x
    ctx->pc = 0x24f818u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x24f81c: 0x4b44e1be  vmulaz.xz   $ACC, $vf28, $vf4z
    ctx->pc = 0x24f81cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x24f820: 0x4b44e908  vmaddx.xz   $vf4, $vf29, $vf4x
    ctx->pc = 0x24f820u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x24f824: 0x4b45e1be  vmulaz.xz   $ACC, $vf28, $vf5z
    ctx->pc = 0x24f824u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x24f828: 0x4b45e948  vmaddx.xz   $vf5, $vf29, $vf5x
    ctx->pc = 0x24f828u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x24f82c: 0x4b46e1be  vmulaz.xz   $ACC, $vf28, $vf6z
    ctx->pc = 0x24f82cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x24f830: 0x4b46e988  vmaddx.xz   $vf6, $vf29, $vf6x
    ctx->pc = 0x24f830u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x24f834: 0x4b47e1be  vmulaz.xz   $ACC, $vf28, $vf7z
    ctx->pc = 0x24f834u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x24f838: 0x4b47e9c8  vmaddx.xz   $vf7, $vf29, $vf7x
    ctx->pc = 0x24f838u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x24f83c: 0xda300000  lqc2        $vf16, 0x0($s1)
    ctx->pc = 0x24f83cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x24f840: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x24f840u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x24f844: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x24f844u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x24f848: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x24f848u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x24f84c: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x24f84cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x24f850: 0xda5f0000  lqc2        $vf31, 0x0($s2)
    ctx->pc = 0x24f850u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x24f854: 0x4bdf842a  vmul.xyz    $vf16, $vf16, $vf31
    ctx->pc = 0x24f854u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x24f858: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x24F858u;
    SET_GPR_U32(ctx, 31, 0x24F860u);
    ctx->pc = 0x24F85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F858u;
    // 0x24f85c: 0xfa300000  sqc2        $vf16, 0x0($s1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x24F858u, 0x24F860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F860u;
label_24f860:
    // 0x24f860: 0x87a30028  lh          $v1, 0x28($sp)
    ctx->pc = 0x24f860u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f864: 0x87a50024  lh          $a1, 0x24($sp)
    ctx->pc = 0x24f864u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x24f868: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x24f868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x24f86c: 0x8606004e  lh          $a2, 0x4E($s0)
    ctx->pc = 0x24f86cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 78)));
    // 0x24f870: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x24f870u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x24f874: 0x87a20026  lh          $v0, 0x26($sp)
    ctx->pc = 0x24f874u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 38)));
    // 0x24f878: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x24f878u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24f87c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24f87cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24f880: 0x96040066  lhu         $a0, 0x66($s0)
    ctx->pc = 0x24f880u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 102)));
    // 0x24f884: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x24f884u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24f888: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x24f888u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x24f88c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24f88cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24f890: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x24f890u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x24f894: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x24f894u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x24f898: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x24f898u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x24f89c: 0x0  nop
    ctx->pc = 0x24f89cu;
    // NOP
    // 0x24f8a0: 0x0  nop
    ctx->pc = 0x24f8a0u;
    // NOP
    // 0x24f8a4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x24f8a4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x24f8a8: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x24f8a8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x24f8ac: 0x3810  mfhi        $a3
    ctx->pc = 0x24f8acu;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x24f8b0: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x24f8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x24f8b4: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x24f8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x24f8b8: 0xa6040066  sh          $a0, 0x66($s0)
    ctx->pc = 0x24f8b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 102), (uint16_t)GPR_U32(ctx, 4));
    // 0x24f8bc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x24f8bcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x24f8c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24f8c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24f8c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24f8c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24f8c8: 0x0  nop
    ctx->pc = 0x24f8c8u;
    // NOP
    // 0x24f8cc: 0x0  nop
    ctx->pc = 0x24f8ccu;
    // NOP
    // 0x24f8d0: 0x460018c3  div.s       $f3, $f3, $f0
    ctx->pc = 0x24f8d0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[0];
    // 0x24f8d4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x24f8d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x24f8d8: 0xe6210010  swc1        $f1, 0x10($s1)
    ctx->pc = 0x24f8d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x24f8dc: 0xc6000050  lwc1        $f0, 0x50($s0)
    ctx->pc = 0x24f8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24f8e0: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x24f8e0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x24f8e4: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x24f8e4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x24f8e8: 0xe6220014  swc1        $f2, 0x14($s1)
    ctx->pc = 0x24f8e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x24f8ec: 0x8602006c  lh          $v0, 0x6C($s0)
    ctx->pc = 0x24f8ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x24f8f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24f8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24f8f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24f8f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24f8f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24f8f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24f8fc: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x24f8fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x24f900: 0x16800007  bnez        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x24F900u;
    {
        const bool branch_taken_0x24f900 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x24F904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F900u;
        // 0x24f904: 0xe6200018  swc1        $f0, 0x18($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f900) {
            ctx->pc = 0x24F920u;
            goto label_24f920;
        }
    }
    ctx->pc = 0x24F908u;
    // 0x24f908: 0x8602006a  lh          $v0, 0x6A($s0)
    ctx->pc = 0x24f908u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 106)));
    // 0x24f90c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24f90cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24f910: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24f910u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24f914: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x24F914u;
    {
        const bool branch_taken_0x24f914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F914u;
        // 0x24f918: 0xe620001c  swc1        $f0, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f914) {
            ctx->pc = 0x24F944u;
            goto label_24f944;
        }
    }
    ctx->pc = 0x24F91Cu;
    // 0x24f91c: 0x0  nop
    ctx->pc = 0x24f91cu;
    // NOP
label_24f920:
    // 0x24f920: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x24F920u;
    SET_GPR_U32(ctx, 31, 0x24F928u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x24F920u, 0x24F928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F928u;
label_24f928:
    // 0x24f928: 0x8603006c  lh          $v1, 0x6C($s0)
    ctx->pc = 0x24f928u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x24f92c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x24f92cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x24f930: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x24f930u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x24f934: 0x2010  mfhi        $a0
    ctx->pc = 0x24f934u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x24f938: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x24f938u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24f93c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24f93cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24f940: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x24f940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
label_24f944:
    // 0x24f944: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x24f944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24f948: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x24f948u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x24f94c: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x24f94cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x24f950: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x24f950u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x24f954: 0x9662011c  lhu         $v0, 0x11C($s3)
    ctx->pc = 0x24f954u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 284)));
    // 0x24f958: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x24f958u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x24f95c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24f95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24f960: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x24f960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x24f964: 0xa662011c  sh          $v0, 0x11C($s3)
    ctx->pc = 0x24f964u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 284), (uint16_t)GPR_U32(ctx, 2));
    // 0x24f968: 0xc7b900e8  lwc1        $f25, 0xE8($sp)
    ctx->pc = 0x24f968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x24f96c: 0x96030064  lhu         $v1, 0x64($s0)
    ctx->pc = 0x24f96cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x24f970: 0xdfb300a8  ld          $s3, 0xA8($sp)
    ctx->pc = 0x24f970u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x24f974: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x24f974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x24f978: 0xc7b800e0  lwc1        $f24, 0xE0($sp)
    ctx->pc = 0x24f978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x24f97c: 0xa6030064  sh          $v1, 0x64($s0)
    ctx->pc = 0x24f97cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 100), (uint16_t)GPR_U32(ctx, 3));
    // 0x24f980: 0xc7b700d8  lwc1        $f23, 0xD8($sp)
    ctx->pc = 0x24f980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x24f984: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x24f984u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24f988: 0xc7b600d0  lwc1        $f22, 0xD0($sp)
    ctx->pc = 0x24f988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x24f98c: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x24f98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x24f990: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x24f990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x24f994: 0x3e00008  jr          $ra
    ctx->pc = 0x24F994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24F998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F994u;
        // 0x24f998: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24F99Cu;
    // 0x24f99c: 0x0  nop
    ctx->pc = 0x24f99cu;
    // NOP
    ctx->pc = 0x24f9a0u;
}
