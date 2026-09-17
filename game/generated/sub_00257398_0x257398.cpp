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

// Function: sub_00257398
// Address: 0x257398 - 0x2576c0
void sub_00257398_0x257398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257398_0x257398");
#endif

    switch (ctx->pc) {
        case 0x2573e4u: goto label_2573e4;
        case 0x25744cu: goto label_25744c;
        case 0x2574a4u: goto label_2574a4;
        case 0x2574fcu: goto label_2574fc;
        case 0x257554u: goto label_257554;
        case 0x257688u: goto label_257688;
        default: break;
    }

    ctx->pc = 0x257398u;

    // 0x257398: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x257398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x25739c: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x25739cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x2573a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2573a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2573a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2573a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2573a8: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x2573a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x2573ac: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x2573acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x2573b0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2573b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2573b4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2573b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2573b8: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x2573b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
    // 0x2573bc: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x2573bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x2573c0: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2573c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2573c4: 0xe7b800d0  swc1        $f24, 0xD0($sp)
    ctx->pc = 0x2573c4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2573c8: 0xe7b700c8  swc1        $f23, 0xC8($sp)
    ctx->pc = 0x2573c8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x2573cc: 0xe7b600c0  swc1        $f22, 0xC0($sp)
    ctx->pc = 0x2573ccu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2573d0: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x2573d0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2573d4: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x2573d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2573d8: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x2573d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x2573dc: 0xc08c264  jal         func_230990
    ctx->pc = 0x2573DCu;
    SET_GPR_U32(ctx, 31, 0x2573E4u);
    ctx->pc = 0x2573E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2573DCu;
    // 0x2573e0: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230990u, 0x2573DCu, 0x2573E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2573E4u;
label_2573e4:
    // 0x2573e4: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2573e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2573e8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2573e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2573ec: 0x3c013d80  lui         $at, 0x3D80
    ctx->pc = 0x2573ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15744 << 16));
    // 0x2573f0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2573f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2573f4: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x2573f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2573f8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2573f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2573fc: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x2573fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x257400: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x257400u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x257404: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x257404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x257408: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x257408u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x25740c: 0x3c0143a0  lui         $at, 0x43A0
    ctx->pc = 0x25740cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17312 << 16));
    // 0x257410: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x257410u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x257414: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x257414u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x257418: 0x3c014360  lui         $at, 0x4360
    ctx->pc = 0x257418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17248 << 16));
    // 0x25741c: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x25741cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x257420: 0x46030582  mul.s       $f22, $f0, $f3
    ctx->pc = 0x257420u;
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x257424: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x257424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x257428: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x257428u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x25742c: 0x46150841  sub.s       $f1, $f1, $f21
    ctx->pc = 0x25742cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
    // 0x257430: 0x46151081  sub.s       $f2, $f2, $f21
    ctx->pc = 0x257430u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[21]);
    // 0x257434: 0x46160842  mul.s       $f1, $f1, $f22
    ctx->pc = 0x257434u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
    // 0x257438: 0x46171080  add.s       $f2, $f2, $f23
    ctx->pc = 0x257438u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[23]);
    // 0x25743c: 0x46180840  add.s       $f1, $f1, $f24
    ctx->pc = 0x25743cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[24]);
    // 0x257440: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x257440u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x257444: 0xc0962ce  jal         func_258B38
    ctx->pc = 0x257444u;
    SET_GPR_U32(ctx, 31, 0x25744Cu);
    ctx->pc = 0x257448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257444u;
    // 0x257448: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x258B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258B38u, 0x257444u, 0x25744Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25744Cu;
label_25744c:
    // 0x25744c: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x25744cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x257450: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x257450u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x257454: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x257454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x257458: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x257458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25745c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x25745cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x257460: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x257460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x257464: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x257464u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x257468: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x257468u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x25746c: 0x461418c2  mul.s       $f3, $f3, $f20
    ctx->pc = 0x25746cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x257470: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x257470u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x257474: 0x46151081  sub.s       $f2, $f2, $f21
    ctx->pc = 0x257474u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[21]);
    // 0x257478: 0x0  nop
    ctx->pc = 0x257478u;
    // NOP
    // 0x25747c: 0x0  nop
    ctx->pc = 0x25747cu;
    // NOP
    // 0x257480: 0x460018c3  div.s       $f3, $f3, $f0
    ctx->pc = 0x257480u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[0];
    // 0x257484: 0x46150841  sub.s       $f1, $f1, $f21
    ctx->pc = 0x257484u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
    // 0x257488: 0x46161082  mul.s       $f2, $f2, $f22
    ctx->pc = 0x257488u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[22]);
    // 0x25748c: 0x46170840  add.s       $f1, $f1, $f23
    ctx->pc = 0x25748cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[23]);
    // 0x257490: 0x46181080  add.s       $f2, $f2, $f24
    ctx->pc = 0x257490u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[24]);
    // 0x257494: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x257494u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x257498: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x257498u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x25749c: 0xc0962ce  jal         func_258B38
    ctx->pc = 0x25749Cu;
    SET_GPR_U32(ctx, 31, 0x2574A4u);
    ctx->pc = 0x2574A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25749Cu;
    // 0x2574a0: 0xe7a20014  swc1        $f2, 0x14($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x258B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258B38u, 0x25749Cu, 0x2574A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2574A4u;
label_2574a4:
    // 0x2574a4: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x2574a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2574a8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2574a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2574ac: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x2574acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2574b0: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x2574b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2574b4: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2574b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2574b8: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x2574b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2574bc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2574bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2574c0: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x2574c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x2574c4: 0x461418c2  mul.s       $f3, $f3, $f20
    ctx->pc = 0x2574c4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x2574c8: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x2574c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x2574cc: 0x46151081  sub.s       $f2, $f2, $f21
    ctx->pc = 0x2574ccu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[21]);
    // 0x2574d0: 0x0  nop
    ctx->pc = 0x2574d0u;
    // NOP
    // 0x2574d4: 0x0  nop
    ctx->pc = 0x2574d4u;
    // NOP
    // 0x2574d8: 0x460018c3  div.s       $f3, $f3, $f0
    ctx->pc = 0x2574d8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[0];
    // 0x2574dc: 0x46150841  sub.s       $f1, $f1, $f21
    ctx->pc = 0x2574dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
    // 0x2574e0: 0x46161082  mul.s       $f2, $f2, $f22
    ctx->pc = 0x2574e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[22]);
    // 0x2574e4: 0x46170840  add.s       $f1, $f1, $f23
    ctx->pc = 0x2574e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[23]);
    // 0x2574e8: 0x46181080  add.s       $f2, $f2, $f24
    ctx->pc = 0x2574e8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[24]);
    // 0x2574ec: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x2574ecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2574f0: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x2574f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2574f4: 0xc0962ce  jal         func_258B38
    ctx->pc = 0x2574F4u;
    SET_GPR_U32(ctx, 31, 0x2574FCu);
    ctx->pc = 0x2574F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2574F4u;
    // 0x2574f8: 0xe7a20024  swc1        $f2, 0x24($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x258B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258B38u, 0x2574F4u, 0x2574FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2574FCu;
label_2574fc:
    // 0x2574fc: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x2574fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x257500: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x257500u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x257504: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x257504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x257508: 0xc6430008  lwc1        $f3, 0x8($s2)
    ctx->pc = 0x257508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25750c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x25750cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x257510: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x257510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x257514: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x257514u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x257518: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x257518u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x25751c: 0x461418c2  mul.s       $f3, $f3, $f20
    ctx->pc = 0x25751cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x257520: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x257520u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x257524: 0x46151081  sub.s       $f2, $f2, $f21
    ctx->pc = 0x257524u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[21]);
    // 0x257528: 0x0  nop
    ctx->pc = 0x257528u;
    // NOP
    // 0x25752c: 0x0  nop
    ctx->pc = 0x25752cu;
    // NOP
    // 0x257530: 0x460018c3  div.s       $f3, $f3, $f0
    ctx->pc = 0x257530u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[0];
    // 0x257534: 0x46150841  sub.s       $f1, $f1, $f21
    ctx->pc = 0x257534u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
    // 0x257538: 0x46161082  mul.s       $f2, $f2, $f22
    ctx->pc = 0x257538u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[22]);
    // 0x25753c: 0x46170840  add.s       $f1, $f1, $f23
    ctx->pc = 0x25753cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[23]);
    // 0x257540: 0x46181080  add.s       $f2, $f2, $f24
    ctx->pc = 0x257540u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[24]);
    // 0x257544: 0xe7a30028  swc1        $f3, 0x28($sp)
    ctx->pc = 0x257544u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x257548: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x257548u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x25754c: 0xc0962ce  jal         func_258B38
    ctx->pc = 0x25754Cu;
    SET_GPR_U32(ctx, 31, 0x257554u);
    ctx->pc = 0x257550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25754Cu;
    // 0x257550: 0xe7a20034  swc1        $f2, 0x34($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x258B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258B38u, 0x25754Cu, 0x257554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257554u;
label_257554:
    // 0x257554: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x257554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x257558: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x257558u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x25755c: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x25755cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x257560: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x257560u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x257564: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x257564u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x257568: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x257568u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x25756c: 0x0  nop
    ctx->pc = 0x25756cu;
    // NOP
    // 0x257570: 0x0  nop
    ctx->pc = 0x257570u;
    // NOP
    // 0x257574: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x257574u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x257578: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x257578u;
    {
        const bool branch_taken_0x257578 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25757Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257578u;
        // 0x25757c: 0xe7a10038  swc1        $f1, 0x38($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x257578) {
            ctx->pc = 0x2575ACu;
            goto label_2575ac;
        }
    }
    ctx->pc = 0x257580u;
    // 0x257580: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x257580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257584: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x257584u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x257588: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x257588u;
    {
        const bool branch_taken_0x257588 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25758Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257588u;
        // 0x25758c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257588) {
            ctx->pc = 0x2575B0u;
            goto label_2575b0;
        }
    }
    ctx->pc = 0x257590u;
    // 0x257590: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x257590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257594: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x257594u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x257598: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x257598u;
    {
        const bool branch_taken_0x257598 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25759Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257598u;
        // 0x25759c: 0x8f82aa10  lw          $v0, -0x55F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257598) {
            ctx->pc = 0x2575B4u;
            goto label_2575b4;
        }
    }
    ctx->pc = 0x2575A0u;
    // 0x2575a0: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x2575a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2575a4: 0x45010039  bc1t        . + 4 + (0x39 << 2)
    ctx->pc = 0x2575A4u;
    {
        const bool branch_taken_0x2575a4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2575A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2575A4u;
        // 0x2575a8: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2575a4) {
            ctx->pc = 0x25768Cu;
            goto label_25768c;
        }
    }
    ctx->pc = 0x2575ACu;
label_2575ac:
    // 0x2575ac: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2575acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2575b0:
    // 0x2575b0: 0x8f82aa10  lw          $v0, -0x55F0($gp)
    ctx->pc = 0x2575b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945296)));
label_2575b4:
    // 0x2575b4: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x2575b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2575b8: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x2575b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2575bc: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x2575bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2575c0: 0xb0830007  sdl         $v1, 0x7($a0)
    ctx->pc = 0x2575c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2575c4: 0xb4830000  sdr         $v1, 0x0($a0)
    ctx->pc = 0x2575c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2575c8: 0x3c013c00  lui         $at, 0x3C00
    ctx->pc = 0x2575c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15360 << 16));
    // 0x2575cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2575ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2575d0: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x2575d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x2575d4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2575d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2575d8: 0x6ba80017  ldl         $t0, 0x17($sp)
    ctx->pc = 0x2575d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2575dc: 0x6fa80010  ldr         $t0, 0x10($sp)
    ctx->pc = 0x2575dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2575e0: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x2575e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2575e4: 0xb3a80057  sdl         $t0, 0x57($sp)
    ctx->pc = 0x2575e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2575e8: 0xb7a80050  sdr         $t0, 0x50($sp)
    ctx->pc = 0x2575e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2575ec: 0xafa50058  sw          $a1, 0x58($sp)
    ctx->pc = 0x2575ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 5));
    // 0x2575f0: 0x6ba80027  ldl         $t0, 0x27($sp)
    ctx->pc = 0x2575f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2575f4: 0x6fa80020  ldr         $t0, 0x20($sp)
    ctx->pc = 0x2575f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2575f8: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2575f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2575fc: 0xb3a80063  sdl         $t0, 0x63($sp)
    ctx->pc = 0x2575fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 99); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x257600: 0xb7a8005c  sdr         $t0, 0x5C($sp)
    ctx->pc = 0x257600u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 92); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x257604: 0xafa50064  sw          $a1, 0x64($sp)
    ctx->pc = 0x257604u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 5));
    // 0x257608: 0x6ba80037  ldl         $t0, 0x37($sp)
    ctx->pc = 0x257608u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x25760c: 0x6fa80030  ldr         $t0, 0x30($sp)
    ctx->pc = 0x25760cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x257610: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x257610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x257614: 0xb3a8006f  sdl         $t0, 0x6F($sp)
    ctx->pc = 0x257614u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x257618: 0xb7a80068  sdr         $t0, 0x68($sp)
    ctx->pc = 0x257618u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x25761c: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x25761cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
    // 0x257620: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x257620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x257624: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x257624u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
    // 0x257628: 0xc6830000  lwc1        $f3, 0x0($s4)
    ctx->pc = 0x257628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25762c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x25762cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x257630: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x257630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x257634: 0xc6820004  lwc1        $f2, 0x4($s4)
    ctx->pc = 0x257634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x257638: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x257638u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x25763c: 0x8f82aa10  lw          $v0, -0x55F0($gp)
    ctx->pc = 0x25763cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945296)));
    // 0x257640: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x257640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257644: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x257644u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x257648: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x257648u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x25764c: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x25764cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x257650: 0x18600007  blez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x257650u;
    {
        const bool branch_taken_0x257650 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x257654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257650u;
        // 0x257654: 0x46010102  mul.s       $f4, $f0, $f1 (Delay Slot)
        ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x257650) {
            ctx->pc = 0x257670u;
            goto label_257670;
        }
    }
    ctx->pc = 0x257658u;
    // 0x257658: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x257658u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25765c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x25765cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x257660: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x257660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x257664: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x257664u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x257668: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x257668u;
    {
        const bool branch_taken_0x257668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25766Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257668u;
        // 0x25766c: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x257668) {
            ctx->pc = 0x257674u;
            goto label_257674;
        }
    }
    ctx->pc = 0x257670u;
label_257670:
    // 0x257670: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x257670u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_257674:
    // 0x257674: 0xe441001c  swc1        $f1, 0x1C($v0)
    ctx->pc = 0x257674u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x257678: 0xe4430010  swc1        $f3, 0x10($v0)
    ctx->pc = 0x257678u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x25767c: 0xe4420014  swc1        $f2, 0x14($v0)
    ctx->pc = 0x25767cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x257680: 0xc08bc6c  jal         func_22F1B0
    ctx->pc = 0x257680u;
    SET_GPR_U32(ctx, 31, 0x257688u);
    ctx->pc = 0x257684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257680u;
    // 0x257684: 0xe4440018  swc1        $f4, 0x18($v0) (Delay Slot)
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F1B0u, 0x257680u, 0x257688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257688u;
label_257688:
    // 0x257688: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x257688u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_25768c:
    // 0x25768c: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x25768cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x257690: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x257690u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x257694: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x257694u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x257698: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x257698u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25769c: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x25769cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2576a0: 0xc7b800d0  lwc1        $f24, 0xD0($sp)
    ctx->pc = 0x2576a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2576a4: 0xc7b700c8  lwc1        $f23, 0xC8($sp)
    ctx->pc = 0x2576a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2576a8: 0xc7b600c0  lwc1        $f22, 0xC0($sp)
    ctx->pc = 0x2576a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2576ac: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x2576acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2576b0: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x2576b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2576b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2576B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2576B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2576B4u;
        // 0x2576b8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2576B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2576BCu;
    // 0x2576bc: 0x0  nop
    ctx->pc = 0x2576bcu;
    // NOP
    ctx->pc = 0x2576c0u;
}
