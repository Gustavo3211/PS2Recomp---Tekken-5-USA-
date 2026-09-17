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

// Function: sub_00258578
// Address: 0x258578 - 0x2588b8
void sub_00258578_0x258578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00258578_0x258578");
#endif

    switch (ctx->pc) {
        case 0x2585c4u: goto label_2585c4;
        case 0x25862cu: goto label_25862c;
        case 0x258684u: goto label_258684;
        case 0x2586dcu: goto label_2586dc;
        case 0x258734u: goto label_258734;
        case 0x258884u: goto label_258884;
        default: break;
    }

    ctx->pc = 0x258578u;

    // 0x258578: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x258578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x25857c: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x25857cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x258580: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x258580u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258584: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x258584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258588: 0xffb100a8  sd          $s1, 0xA8($sp)
    ctx->pc = 0x258588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 17));
    // 0x25858c: 0xffb200b0  sd          $s2, 0xB0($sp)
    ctx->pc = 0x25858cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 18));
    // 0x258590: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x258590u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258594: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x258594u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258598: 0xffb300b8  sd          $s3, 0xB8($sp)
    ctx->pc = 0x258598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 19));
    // 0x25859c: 0xffb400c0  sd          $s4, 0xC0($sp)
    ctx->pc = 0x25859cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 20));
    // 0x2585a0: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2585a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2585a4: 0xe7b800f0  swc1        $f24, 0xF0($sp)
    ctx->pc = 0x2585a4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2585a8: 0xe7b700e8  swc1        $f23, 0xE8($sp)
    ctx->pc = 0x2585a8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x2585ac: 0xe7b600e0  swc1        $f22, 0xE0($sp)
    ctx->pc = 0x2585acu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2585b0: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x2585b0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x2585b4: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x2585b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2585b8: 0xffbf00c8  sd          $ra, 0xC8($sp)
    ctx->pc = 0x2585b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 31));
    // 0x2585bc: 0xc08c264  jal         func_230990
    ctx->pc = 0x2585BCu;
    SET_GPR_U32(ctx, 31, 0x2585C4u);
    ctx->pc = 0x2585C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2585BCu;
    // 0x2585c0: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230990u, 0x2585BCu, 0x2585C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2585C4u;
label_2585c4:
    // 0x2585c4: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2585c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2585c8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2585c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2585cc: 0x3c013d80  lui         $at, 0x3D80
    ctx->pc = 0x2585ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15744 << 16));
    // 0x2585d0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2585d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2585d4: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x2585d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2585d8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2585d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2585dc: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x2585dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x2585e0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2585e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2585e4: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2585e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x2585e8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2585e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2585ec: 0x3c0143a0  lui         $at, 0x43A0
    ctx->pc = 0x2585ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17312 << 16));
    // 0x2585f0: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x2585f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x2585f4: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x2585f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x2585f8: 0x3c014360  lui         $at, 0x4360
    ctx->pc = 0x2585f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17248 << 16));
    // 0x2585fc: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x2585fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x258600: 0x46030582  mul.s       $f22, $f0, $f3
    ctx->pc = 0x258600u;
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x258604: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x258604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x258608: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x258608u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x25860c: 0x46150841  sub.s       $f1, $f1, $f21
    ctx->pc = 0x25860cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
    // 0x258610: 0x46151081  sub.s       $f2, $f2, $f21
    ctx->pc = 0x258610u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[21]);
    // 0x258614: 0x46160842  mul.s       $f1, $f1, $f22
    ctx->pc = 0x258614u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
    // 0x258618: 0x46171080  add.s       $f2, $f2, $f23
    ctx->pc = 0x258618u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[23]);
    // 0x25861c: 0x46180840  add.s       $f1, $f1, $f24
    ctx->pc = 0x25861cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[24]);
    // 0x258620: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x258620u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x258624: 0xc0962ce  jal         func_258B38
    ctx->pc = 0x258624u;
    SET_GPR_U32(ctx, 31, 0x25862Cu);
    ctx->pc = 0x258628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258624u;
    // 0x258628: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x258B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258B38u, 0x258624u, 0x25862Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25862Cu;
label_25862c:
    // 0x25862c: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x25862cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x258630: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x258630u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x258634: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x258634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x258638: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x258638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25863c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x25863cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x258640: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x258640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x258644: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x258644u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x258648: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x258648u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x25864c: 0x461418c2  mul.s       $f3, $f3, $f20
    ctx->pc = 0x25864cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x258650: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x258650u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x258654: 0x46151081  sub.s       $f2, $f2, $f21
    ctx->pc = 0x258654u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[21]);
    // 0x258658: 0x0  nop
    ctx->pc = 0x258658u;
    // NOP
    // 0x25865c: 0x0  nop
    ctx->pc = 0x25865cu;
    // NOP
    // 0x258660: 0x460018c3  div.s       $f3, $f3, $f0
    ctx->pc = 0x258660u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[0];
    // 0x258664: 0x46150841  sub.s       $f1, $f1, $f21
    ctx->pc = 0x258664u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
    // 0x258668: 0x46161082  mul.s       $f2, $f2, $f22
    ctx->pc = 0x258668u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[22]);
    // 0x25866c: 0x46170840  add.s       $f1, $f1, $f23
    ctx->pc = 0x25866cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[23]);
    // 0x258670: 0x46181080  add.s       $f2, $f2, $f24
    ctx->pc = 0x258670u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[24]);
    // 0x258674: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x258674u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x258678: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x258678u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x25867c: 0xc0962ce  jal         func_258B38
    ctx->pc = 0x25867Cu;
    SET_GPR_U32(ctx, 31, 0x258684u);
    ctx->pc = 0x258680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25867Cu;
    // 0x258680: 0xe7a20014  swc1        $f2, 0x14($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x258B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258B38u, 0x25867Cu, 0x258684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258684u;
label_258684:
    // 0x258684: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x258684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x258688: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x258688u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x25868c: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x25868cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x258690: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x258690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x258694: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x258694u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x258698: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x258698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25869c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x25869cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2586a0: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x2586a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x2586a4: 0x461418c2  mul.s       $f3, $f3, $f20
    ctx->pc = 0x2586a4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x2586a8: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x2586a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x2586ac: 0x46151081  sub.s       $f2, $f2, $f21
    ctx->pc = 0x2586acu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[21]);
    // 0x2586b0: 0x0  nop
    ctx->pc = 0x2586b0u;
    // NOP
    // 0x2586b4: 0x0  nop
    ctx->pc = 0x2586b4u;
    // NOP
    // 0x2586b8: 0x460018c3  div.s       $f3, $f3, $f0
    ctx->pc = 0x2586b8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[0];
    // 0x2586bc: 0x46150841  sub.s       $f1, $f1, $f21
    ctx->pc = 0x2586bcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
    // 0x2586c0: 0x46161082  mul.s       $f2, $f2, $f22
    ctx->pc = 0x2586c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[22]);
    // 0x2586c4: 0x46170840  add.s       $f1, $f1, $f23
    ctx->pc = 0x2586c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[23]);
    // 0x2586c8: 0x46181080  add.s       $f2, $f2, $f24
    ctx->pc = 0x2586c8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[24]);
    // 0x2586cc: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x2586ccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2586d0: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x2586d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2586d4: 0xc0962ce  jal         func_258B38
    ctx->pc = 0x2586D4u;
    SET_GPR_U32(ctx, 31, 0x2586DCu);
    ctx->pc = 0x2586D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2586D4u;
    // 0x2586d8: 0xe7a20024  swc1        $f2, 0x24($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x258B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258B38u, 0x2586D4u, 0x2586DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2586DCu;
label_2586dc:
    // 0x2586dc: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x2586dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2586e0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2586e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2586e4: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x2586e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2586e8: 0xc6430008  lwc1        $f3, 0x8($s2)
    ctx->pc = 0x2586e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2586ec: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2586ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2586f0: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x2586f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2586f4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2586f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2586f8: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x2586f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x2586fc: 0x461418c2  mul.s       $f3, $f3, $f20
    ctx->pc = 0x2586fcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x258700: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x258700u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x258704: 0x46151081  sub.s       $f2, $f2, $f21
    ctx->pc = 0x258704u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[21]);
    // 0x258708: 0x0  nop
    ctx->pc = 0x258708u;
    // NOP
    // 0x25870c: 0x0  nop
    ctx->pc = 0x25870cu;
    // NOP
    // 0x258710: 0x460018c3  div.s       $f3, $f3, $f0
    ctx->pc = 0x258710u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[0];
    // 0x258714: 0x46150841  sub.s       $f1, $f1, $f21
    ctx->pc = 0x258714u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
    // 0x258718: 0x46161082  mul.s       $f2, $f2, $f22
    ctx->pc = 0x258718u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[22]);
    // 0x25871c: 0x46170840  add.s       $f1, $f1, $f23
    ctx->pc = 0x25871cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[23]);
    // 0x258720: 0x46181080  add.s       $f2, $f2, $f24
    ctx->pc = 0x258720u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[24]);
    // 0x258724: 0xe7a30028  swc1        $f3, 0x28($sp)
    ctx->pc = 0x258724u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x258728: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x258728u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x25872c: 0xc0962ce  jal         func_258B38
    ctx->pc = 0x25872Cu;
    SET_GPR_U32(ctx, 31, 0x258734u);
    ctx->pc = 0x258730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25872Cu;
    // 0x258730: 0xe7a20034  swc1        $f2, 0x34($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x258B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258B38u, 0x25872Cu, 0x258734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258734u;
label_258734:
    // 0x258734: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x258734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x258738: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x258738u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x25873c: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x25873cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x258740: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x258740u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x258744: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x258744u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x258748: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x258748u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x25874c: 0x0  nop
    ctx->pc = 0x25874cu;
    // NOP
    // 0x258750: 0x0  nop
    ctx->pc = 0x258750u;
    // NOP
    // 0x258754: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x258754u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x258758: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x258758u;
    {
        const bool branch_taken_0x258758 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25875Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258758u;
        // 0x25875c: 0xe7a10038  swc1        $f1, 0x38($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x258758) {
            ctx->pc = 0x25878Cu;
            goto label_25878c;
        }
    }
    ctx->pc = 0x258760u;
    // 0x258760: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x258760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x258764: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x258764u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x258768: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x258768u;
    {
        const bool branch_taken_0x258768 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25876Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258768u;
        // 0x25876c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258768) {
            ctx->pc = 0x258790u;
            goto label_258790;
        }
    }
    ctx->pc = 0x258770u;
    // 0x258770: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x258770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x258774: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x258774u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x258778: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x258778u;
    {
        const bool branch_taken_0x258778 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25877Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258778u;
        // 0x25877c: 0x8f82aa10  lw          $v0, -0x55F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258778) {
            ctx->pc = 0x258794u;
            goto label_258794;
        }
    }
    ctx->pc = 0x258780u;
    // 0x258780: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x258780u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x258784: 0x45010040  bc1t        . + 4 + (0x40 << 2)
    ctx->pc = 0x258784u;
    {
        const bool branch_taken_0x258784 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x258788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258784u;
        // 0x258788: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258784) {
            ctx->pc = 0x258888u;
            goto label_258888;
        }
    }
    ctx->pc = 0x25878Cu;
label_25878c:
    // 0x25878c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x25878cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_258790:
    // 0x258790: 0x8f82aa10  lw          $v0, -0x55F0($gp)
    ctx->pc = 0x258790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945296)));
label_258794:
    // 0x258794: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x258794u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x258798: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x258798u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x25879c: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x25879cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2587a0: 0xb0830007  sdl         $v1, 0x7($a0)
    ctx->pc = 0x2587a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2587a4: 0xb4830000  sdr         $v1, 0x0($a0)
    ctx->pc = 0x2587a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2587a8: 0x3c013c00  lui         $at, 0x3C00
    ctx->pc = 0x2587a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15360 << 16));
    // 0x2587ac: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2587acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2587b0: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x2587b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x2587b4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2587b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2587b8: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x2587b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x2587bc: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2587bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2587c0: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2587c0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2587c4: 0x6ba80017  ldl         $t0, 0x17($sp)
    ctx->pc = 0x2587c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2587c8: 0x6fa80010  ldr         $t0, 0x10($sp)
    ctx->pc = 0x2587c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2587cc: 0x8fa90018  lw          $t1, 0x18($sp)
    ctx->pc = 0x2587ccu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2587d0: 0xb3a80057  sdl         $t0, 0x57($sp)
    ctx->pc = 0x2587d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2587d4: 0xb7a80050  sdr         $t0, 0x50($sp)
    ctx->pc = 0x2587d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2587d8: 0xafa90058  sw          $t1, 0x58($sp)
    ctx->pc = 0x2587d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 9));
    // 0x2587dc: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x2587dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2587e0: 0x24e720a0  addiu       $a3, $a3, 0x20A0
    ctx->pc = 0x2587e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8352));
    // 0x2587e4: 0x6ba60027  ldl         $a2, 0x27($sp)
    ctx->pc = 0x2587e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2587e8: 0x6fa60020  ldr         $a2, 0x20($sp)
    ctx->pc = 0x2587e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2587ec: 0x8fa80028  lw          $t0, 0x28($sp)
    ctx->pc = 0x2587ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2587f0: 0xb3a60063  sdl         $a2, 0x63($sp)
    ctx->pc = 0x2587f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 99); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2587f4: 0xb7a6005c  sdr         $a2, 0x5C($sp)
    ctx->pc = 0x2587f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 92); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2587f8: 0xafa80064  sw          $t0, 0x64($sp)
    ctx->pc = 0x2587f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 8));
    // 0x2587fc: 0x6ba60037  ldl         $a2, 0x37($sp)
    ctx->pc = 0x2587fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x258800: 0x6fa60030  ldr         $a2, 0x30($sp)
    ctx->pc = 0x258800u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x258804: 0x8fa80038  lw          $t0, 0x38($sp)
    ctx->pc = 0x258804u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x258808: 0xb3a6006f  sdl         $a2, 0x6F($sp)
    ctx->pc = 0x258808u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x25880c: 0xb7a60068  sdr         $a2, 0x68($sp)
    ctx->pc = 0x25880cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x258810: 0xafa80070  sw          $t0, 0x70($sp)
    ctx->pc = 0x258810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 8));
    // 0x258814: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x258814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x258818: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x258818u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
    // 0x25881c: 0xc683000c  lwc1        $f3, 0xC($s4)
    ctx->pc = 0x25881cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x258820: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x258820u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x258824: 0x8f82aa10  lw          $v0, -0x55F0($gp)
    ctx->pc = 0x258824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945296)));
    // 0x258828: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x258828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25882c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25882cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x258830: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x258830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x258834: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x258834u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x258838: 0xc6820008  lwc1        $f2, 0x8($s4)
    ctx->pc = 0x258838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25883c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x25883cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x258840: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x258840u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x258844: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x258844u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x258848: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x258848u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x25884c: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x25884cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x258850: 0xe443001c  swc1        $f3, 0x1C($v0)
    ctx->pc = 0x258850u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x258854: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x258854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x258858: 0xe4410014  swc1        $f1, 0x14($v0)
    ctx->pc = 0x258858u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x25885c: 0xe4420018  swc1        $f2, 0x18($v0)
    ctx->pc = 0x25885cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x258860: 0xdce80018  ld          $t0, 0x18($a3)
    ctx->pc = 0x258860u;
    SET_GPR_U64(ctx, 8, FAST_READ64(0x4720B8u));
    // 0x258864: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x258864u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x4720A0u));
    // 0x258868: 0xdce30008  ld          $v1, 0x8($a3)
    ctx->pc = 0x258868u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x4720A8u));
    // 0x25886c: 0xdce60010  ld          $a2, 0x10($a3)
    ctx->pc = 0x25886cu;
    SET_GPR_U64(ctx, 6, FAST_READ64(0x4720B0u));
    // 0x258870: 0xffa20080  sd          $v0, 0x80($sp)
    ctx->pc = 0x258870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 2));
    // 0x258874: 0xffa30088  sd          $v1, 0x88($sp)
    ctx->pc = 0x258874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 3));
    // 0x258878: 0xffa60090  sd          $a2, 0x90($sp)
    ctx->pc = 0x258878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 6));
    // 0x25887c: 0xc08bce8  jal         func_22F3A0
    ctx->pc = 0x25887Cu;
    SET_GPR_U32(ctx, 31, 0x258884u);
    ctx->pc = 0x258880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25887Cu;
    // 0x258880: 0xffa80098  sd          $t0, 0x98($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F3A0u, 0x25887Cu, 0x258884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258884u;
label_258884:
    // 0x258884: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x258884u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_258888:
    // 0x258888: 0xdfb100a8  ld          $s1, 0xA8($sp)
    ctx->pc = 0x258888u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25888c: 0xdfb200b0  ld          $s2, 0xB0($sp)
    ctx->pc = 0x25888cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x258890: 0xdfb300b8  ld          $s3, 0xB8($sp)
    ctx->pc = 0x258890u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x258894: 0xdfb400c0  ld          $s4, 0xC0($sp)
    ctx->pc = 0x258894u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x258898: 0xdfbf00c8  ld          $ra, 0xC8($sp)
    ctx->pc = 0x258898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x25889c: 0xc7b800f0  lwc1        $f24, 0xF0($sp)
    ctx->pc = 0x25889cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2588a0: 0xc7b700e8  lwc1        $f23, 0xE8($sp)
    ctx->pc = 0x2588a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2588a4: 0xc7b600e0  lwc1        $f22, 0xE0($sp)
    ctx->pc = 0x2588a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2588a8: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x2588a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2588ac: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x2588acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2588b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2588B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2588B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2588B0u;
        // 0x2588b4: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2588B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2588B8u;
}
