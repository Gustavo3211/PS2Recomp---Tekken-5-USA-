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

// Function: sub_003001B0
// Address: 0x3001b0 - 0x3003e8
void sub_003001B0_0x3001b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003001B0_0x3001b0");
#endif

    ctx->pc = 0x3001b0u;

    // 0x3001b0: 0x10a0008b  beqz        $a1, . + 4 + (0x8B << 2)
    ctx->pc = 0x3001B0u;
    {
        const bool branch_taken_0x3001b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3001B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3001B0u;
        // 0x3001b4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3001b0) {
            ctx->pc = 0x3003E0u;
            goto label_3003e0;
        }
    }
    ctx->pc = 0x3001B8u;
    // 0x3001b8: 0x90a70013  lbu         $a3, 0x13($a1)
    ctx->pc = 0x3001b8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 19)));
    // 0x3001bc: 0x24030065  addiu       $v1, $zero, 0x65
    ctx->pc = 0x3001bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x3001c0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3001c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3001c4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x3001c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3001c8: 0xacc7006c  sw          $a3, 0x6C($a2)
    ctx->pc = 0x3001c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 108), GPR_U32(ctx, 7));
    // 0x3001cc: 0x30e40001  andi        $a0, $a3, 0x1
    ctx->pc = 0x3001ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x3001d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3001d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3001d4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3001d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3001d8: 0x84a20002  lh          $v0, 0x2($a1)
    ctx->pc = 0x3001d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x3001dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3001dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3001e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3001e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3001e4: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x3001e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x3001e8: 0xe4c00040  swc1        $f0, 0x40($a2)
    ctx->pc = 0x3001e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 64), bits); }
    // 0x3001ec: 0x80a20004  lb          $v0, 0x4($a1)
    ctx->pc = 0x3001ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3001f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3001f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3001f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3001f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3001f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3001f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3001fc: 0x0  nop
    ctx->pc = 0x3001fcu;
    // NOP
    // 0x300200: 0x0  nop
    ctx->pc = 0x300200u;
    // NOP
    // 0x300204: 0x46001803  div.s       $f0, $f3, $f0
    ctx->pc = 0x300204u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[0] = ctx->f[3] / ctx->f[0];
    // 0x300208: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x300208u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x30020c: 0xe4c00044  swc1        $f0, 0x44($a2)
    ctx->pc = 0x30020cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 68), bits); }
    // 0x300210: 0x80a20005  lb          $v0, 0x5($a1)
    ctx->pc = 0x300210u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x300214: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x300214u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x300218: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x300218u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30021c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x30021cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x300220: 0x0  nop
    ctx->pc = 0x300220u;
    // NOP
    // 0x300224: 0x0  nop
    ctx->pc = 0x300224u;
    // NOP
    // 0x300228: 0x46001803  div.s       $f0, $f3, $f0
    ctx->pc = 0x300228u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[0] = ctx->f[3] / ctx->f[0];
    // 0x30022c: 0xe4c00048  swc1        $f0, 0x48($a2)
    ctx->pc = 0x30022cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 72), bits); }
    // 0x300230: 0x84a20006  lh          $v0, 0x6($a1)
    ctx->pc = 0x300230u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x300234: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x300234u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x300238: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x300238u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x30023c: 0x10800028  beqz        $a0, . + 4 + (0x28 << 2)
    ctx->pc = 0x30023Cu;
    {
        const bool branch_taken_0x30023c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x300240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30023Cu;
        // 0x300240: 0xe4c0004c  swc1        $f0, 0x4C($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 76), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30023c) {
            ctx->pc = 0x3002E0u;
            goto label_3002e0;
        }
    }
    ctx->pc = 0x300244u;
    // 0x300244: 0x84a30008  lh          $v1, 0x8($a1)
    ctx->pc = 0x300244u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x300248: 0x30e4009f  andi        $a0, $a3, 0x9F
    ctx->pc = 0x300248u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)159);
    // 0x30024c: 0x84a2000a  lh          $v0, 0xA($a1)
    ctx->pc = 0x30024cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x300250: 0xc7829544  lwc1        $f2, -0x6ABC($gp)
    ctx->pc = 0x300250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x300254: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x300254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x300258: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x300258u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30025c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x30025cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x300260: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x300260u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x300264: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x300264u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x300268: 0xe4c10054  swc1        $f1, 0x54($a2)
    ctx->pc = 0x300268u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 84), bits); }
    // 0x30026c: 0x84a20008  lh          $v0, 0x8($a1)
    ctx->pc = 0x30026cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x300270: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x300270u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x300274: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x300274u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x300278: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x300278u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x30027c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x30027cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x300280: 0x0  nop
    ctx->pc = 0x300280u;
    // NOP
    // 0x300284: 0x0  nop
    ctx->pc = 0x300284u;
    // NOP
    // 0x300288: 0x46001803  div.s       $f0, $f3, $f0
    ctx->pc = 0x300288u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[0] = ctx->f[3] / ctx->f[0];
    // 0x30028c: 0xe4c00050  swc1        $f0, 0x50($a2)
    ctx->pc = 0x30028cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 80), bits); }
    // 0x300290: 0x84a2000e  lh          $v0, 0xE($a1)
    ctx->pc = 0x300290u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
    // 0x300294: 0x84a3000c  lh          $v1, 0xC($a1)
    ctx->pc = 0x300294u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x300298: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x300298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30029c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x30029cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3002a0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3002a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3002a4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3002a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3002a8: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x3002a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x3002ac: 0xe4c1005c  swc1        $f1, 0x5C($a2)
    ctx->pc = 0x3002acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 92), bits); }
    // 0x3002b0: 0x84a2000c  lh          $v0, 0xC($a1)
    ctx->pc = 0x3002b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x3002b4: 0xacc4006c  sw          $a0, 0x6C($a2)
    ctx->pc = 0x3002b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 108), GPR_U32(ctx, 4));
    // 0x3002b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3002b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3002bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3002bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3002c0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3002c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3002c4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3002c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3002c8: 0x0  nop
    ctx->pc = 0x3002c8u;
    // NOP
    // 0x3002cc: 0x0  nop
    ctx->pc = 0x3002ccu;
    // NOP
    // 0x3002d0: 0x46001803  div.s       $f0, $f3, $f0
    ctx->pc = 0x3002d0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[0] = ctx->f[3] / ctx->f[0];
    // 0x3002d4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x3002D4u;
    {
        const bool branch_taken_0x3002d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3002D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3002D4u;
        // 0x3002d8: 0xe4c00058  swc1        $f0, 0x58($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3002d4) {
            ctx->pc = 0x300378u;
            goto label_300378;
        }
    }
    ctx->pc = 0x3002DCu;
    // 0x3002dc: 0x0  nop
    ctx->pc = 0x3002dcu;
    // NOP
label_3002e0:
    // 0x3002e0: 0x84a20008  lh          $v0, 0x8($a1)
    ctx->pc = 0x3002e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3002e4: 0xc7819548  lwc1        $f1, -0x6AB8($gp)
    ctx->pc = 0x3002e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3002e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3002e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3002ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3002ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3002f0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3002f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3002f4: 0xe4c00050  swc1        $f0, 0x50($a2)
    ctx->pc = 0x3002f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 80), bits); }
    // 0x3002f8: 0x84a2000a  lh          $v0, 0xA($a1)
    ctx->pc = 0x3002f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x3002fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3002fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x300300: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x300300u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x300304: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x300304u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x300308: 0xe4c00054  swc1        $f0, 0x54($a2)
    ctx->pc = 0x300308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 84), bits); }
    // 0x30030c: 0x84a30008  lh          $v1, 0x8($a1)
    ctx->pc = 0x30030cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x300310: 0x84a2000a  lh          $v0, 0xA($a1)
    ctx->pc = 0x300310u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x300314: 0x54620002  bnel        $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x300314u;
    {
        const bool branch_taken_0x300314 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x300314) {
            ctx->pc = 0x300318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300314u;
            // 0x300318: 0x34e20020  ori         $v0, $a3, 0x20 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32);
            ctx->in_delay_slot = false;
            ctx->pc = 0x300320u;
            goto label_300320;
        }
    }
    ctx->pc = 0x30031Cu;
    // 0x30031c: 0x30e200df  andi        $v0, $a3, 0xDF
    ctx->pc = 0x30031cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)223);
label_300320:
    // 0x300320: 0xacc2006c  sw          $v0, 0x6C($a2)
    ctx->pc = 0x300320u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 108), GPR_U32(ctx, 2));
    // 0x300324: 0x84a2000c  lh          $v0, 0xC($a1)
    ctx->pc = 0x300324u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x300328: 0xc781954c  lwc1        $f1, -0x6AB4($gp)
    ctx->pc = 0x300328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939980)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30032c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30032cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x300330: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x300330u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x300334: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x300334u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x300338: 0xe4c00058  swc1        $f0, 0x58($a2)
    ctx->pc = 0x300338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 88), bits); }
    // 0x30033c: 0x84a2000e  lh          $v0, 0xE($a1)
    ctx->pc = 0x30033cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
    // 0x300340: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x300340u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x300344: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x300344u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x300348: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x300348u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x30034c: 0xe4c0005c  swc1        $f0, 0x5C($a2)
    ctx->pc = 0x30034cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 92), bits); }
    // 0x300350: 0x84a3000c  lh          $v1, 0xC($a1)
    ctx->pc = 0x300350u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x300354: 0x84a2000e  lh          $v0, 0xE($a1)
    ctx->pc = 0x300354u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
    // 0x300358: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x300358u;
    {
        const bool branch_taken_0x300358 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30035Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300358u;
        // 0x30035c: 0x8cc2006c  lw          $v0, 0x6C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300358) {
            ctx->pc = 0x300370u;
            goto label_300370;
        }
    }
    ctx->pc = 0x300360u;
    // 0x300360: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x300360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x300364: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x300364u;
    {
        const bool branch_taken_0x300364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300364u;
        // 0x300368: 0x431024  and         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300364) {
            ctx->pc = 0x300374u;
            goto label_300374;
        }
    }
    ctx->pc = 0x30036Cu;
    // 0x30036c: 0x0  nop
    ctx->pc = 0x30036cu;
    // NOP
label_300370:
    // 0x300370: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x300370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_300374:
    // 0x300374: 0xacc2006c  sw          $v0, 0x6C($a2)
    ctx->pc = 0x300374u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 108), GPR_U32(ctx, 2));
label_300378:
    // 0x300378: 0x80a20010  lb          $v0, 0x10($a1)
    ctx->pc = 0x300378u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x30037c: 0xc7819550  lwc1        $f1, -0x6AB0($gp)
    ctx->pc = 0x30037cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x300380: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x300380u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x300384: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x300384u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x300388: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x300388u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x30038c: 0xe4c00060  swc1        $f0, 0x60($a2)
    ctx->pc = 0x30038cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 96), bits); }
    // 0x300390: 0x80a20011  lb          $v0, 0x11($a1)
    ctx->pc = 0x300390u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 17)));
    // 0x300394: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x300394u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x300398: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x300398u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x30039c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x30039cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x3003a0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3003a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3003a4: 0xe4c00064  swc1        $f0, 0x64($a2)
    ctx->pc = 0x3003a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 100), bits); }
    // 0x3003a8: 0x94a20010  lhu         $v0, 0x10($a1)
    ctx->pc = 0x3003a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3003ac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3003ACu;
    {
        const bool branch_taken_0x3003ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3003B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3003ACu;
        // 0x3003b0: 0x90a20013  lbu         $v0, 0x13($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3003ac) {
            ctx->pc = 0x3003C0u;
            goto label_3003c0;
        }
    }
    ctx->pc = 0x3003B4u;
    // 0x3003b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3003B4u;
    {
        const bool branch_taken_0x3003b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3003B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3003B4u;
        // 0x3003b8: 0x3042007f  andi        $v0, $v0, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3003b4) {
            ctx->pc = 0x3003C4u;
            goto label_3003c4;
        }
    }
    ctx->pc = 0x3003BCu;
    // 0x3003bc: 0x0  nop
    ctx->pc = 0x3003bcu;
    // NOP
label_3003c0:
    // 0x3003c0: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x3003c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_3003c4:
    // 0x3003c4: 0xa0a20013  sb          $v0, 0x13($a1)
    ctx->pc = 0x3003c4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 19), (uint8_t)GPR_U32(ctx, 2));
    // 0x3003c8: 0x80a20012  lb          $v0, 0x12($a1)
    ctx->pc = 0x3003c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 18)));
    // 0x3003cc: 0xc7819554  lwc1        $f1, -0x6AAC($gp)
    ctx->pc = 0x3003ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3003d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3003d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3003d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3003d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3003d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3003d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3003dc: 0xe4c00068  swc1        $f0, 0x68($a2)
    ctx->pc = 0x3003dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 104), bits); }
label_3003e0:
    // 0x3003e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3003E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3003E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3003E8u;
}
