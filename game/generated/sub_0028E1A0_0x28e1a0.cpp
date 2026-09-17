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

// Function: sub_0028E1A0
// Address: 0x28e1a0 - 0x28e5a8
void sub_0028E1A0_0x28e1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E1A0_0x28e1a0");
#endif

    switch (ctx->pc) {
        case 0x28e2c0u: goto label_28e2c0;
        case 0x28e2e8u: goto label_28e2e8;
        case 0x28e340u: goto label_28e340;
        case 0x28e350u: goto label_28e350;
        case 0x28e360u: goto label_28e360;
        case 0x28e37cu: goto label_28e37c;
        case 0x28e3bcu: goto label_28e3bc;
        case 0x28e3e0u: goto label_28e3e0;
        case 0x28e400u: goto label_28e400;
        case 0x28e410u: goto label_28e410;
        case 0x28e420u: goto label_28e420;
        case 0x28e430u: goto label_28e430;
        case 0x28e470u: goto label_28e470;
        case 0x28e490u: goto label_28e490;
        case 0x28e4ccu: goto label_28e4cc;
        case 0x28e50cu: goto label_28e50c;
        case 0x28e544u: goto label_28e544;
        default: break;
    }

    ctx->pc = 0x28e1a0u;

    // 0x28e1a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x28e1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x28e1a4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x28e1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x28e1a8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x28e1a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e1ac: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x28e1acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x28e1b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28e1b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28e1b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x28e1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x28e1b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x28e1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x28e1bc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x28e1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x28e1c0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x28e1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x28e1c4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x28e1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x28e1c8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x28e1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x28e1cc: 0xe7b60058  swc1        $f22, 0x58($sp)
    ctx->pc = 0x28e1ccu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x28e1d0: 0xe7b50050  swc1        $f21, 0x50($sp)
    ctx->pc = 0x28e1d0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x28e1d4: 0xe7b40048  swc1        $f20, 0x48($sp)
    ctx->pc = 0x28e1d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x28e1d8: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x28e1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x28e1dc: 0x2862000a  slti        $v0, $v1, 0xA
    ctx->pc = 0x28e1dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x28e1e0: 0x1040006b  beqz        $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x28E1E0u;
    {
        const bool branch_taken_0x28e1e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E1E0u;
        // 0x28e1e4: 0x2417fff2  addiu       $s7, $zero, -0xE (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967282));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e1e0) {
            ctx->pc = 0x28E390u;
            goto label_28e390;
        }
    }
    ctx->pc = 0x28E1E8u;
    // 0x28e1e8: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x28e1e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x28e1ec: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x28e1ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x28e1f0: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x28e1f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x28e1f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28e1f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28e1f8: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x28e1f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x28e1fc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x28e1fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28e200: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x28e200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x28e204: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x28e204u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x28e208: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28e208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x28e20c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28e20cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e210: 0x0  nop
    ctx->pc = 0x28e210u;
    // NOP
    // 0x28e214: 0x0  nop
    ctx->pc = 0x28e214u;
    // NOP
    // 0x28e218: 0x46011d83  div.s       $f22, $f3, $f1
    ctx->pc = 0x28e218u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[22] = ctx->f[3] / ctx->f[1];
    // 0x28e21c: 0x4602b042  mul.s       $f1, $f22, $f2
    ctx->pc = 0x28e21cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[2]);
    // 0x28e220: 0x46160541  sub.s       $f21, $f0, $f22
    ctx->pc = 0x28e220u;
    ctx->f[21] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x28e224: 0x46012036  c.le.s      $f4, $f1
    ctx->pc = 0x28e224u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28e228: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28e228u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x28e22c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x28e22cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x28e230: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x28E230u;
    {
        const bool branch_taken_0x28e230 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28e230) {
            ctx->pc = 0x28E24Cu;
            goto label_28e24c;
        }
    }
    ctx->pc = 0x28E238u;
    // 0x28e238: 0x46040801  sub.s       $f0, $f1, $f4
    ctx->pc = 0x28e238u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x28e23c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x28e23cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x28e240: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28e240u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x28e244: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x28e244u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x28e248: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28e248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_28e24c:
    // 0x28e24c: 0xc7808fdc  lwc1        $f0, -0x7024($gp)
    ctx->pc = 0x28e24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e250: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x28e250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x28e254: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28e254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x28e258: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x28e258u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28e25c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x28e25cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x28e260: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x28e260u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x28e264: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x28e264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x28e268: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28e268u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28e26c: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x28e26cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x28e270: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x28e270u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x28e274: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x28e274u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x28e278: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x28e278u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28e27c: 0x46020500  add.s       $f20, $f0, $f2
    ctx->pc = 0x28e27cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x28e280: 0x4601a002  mul.s       $f0, $f20, $f1
    ctx->pc = 0x28e280u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x28e284: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x28e284u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28e288: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28e288u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x28e28c: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x28e28cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x28e290: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x28E290u;
    {
        const bool branch_taken_0x28e290 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28E294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E290u;
        // 0x28e294: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e290) {
            ctx->pc = 0x28E2ACu;
            goto label_28e2ac;
        }
    }
    ctx->pc = 0x28E298u;
    // 0x28e298: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x28e298u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x28e29c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x28e29cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x28e2a0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28e2a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x28e2a4: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x28e2a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x28e2a8: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x28e2a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_28e2ac:
    // 0x28e2ac: 0x2484a0c8  addiu       $a0, $a0, -0x5F38
    ctx->pc = 0x28e2acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942920));
    // 0x28e2b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x28e2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e2b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28e2b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e2b8: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x28E2B8u;
    SET_GPR_U32(ctx, 31, 0x28E2C0u);
    ctx->pc = 0x28E2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E2B8u;
    // 0x28e2bc: 0x2409006e  addiu       $t1, $zero, 0x6E (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x28E2B8u, 0x28E2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E2C0u;
label_28e2c0:
    // 0x28e2c0: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x28e2c0u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e2c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28e2c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28e2c8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x28e2c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e2cc: 0x26760004  addiu       $s6, $s3, 0x4
    ctx->pc = 0x28e2ccu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x28e2d0: 0x2674000c  addiu       $s4, $s3, 0xC
    ctx->pc = 0x28e2d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x28e2d4: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x28e2d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x28e2d8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28e2d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x28e2dc: 0x44170800  mfc1        $s7, $f1
    ctx->pc = 0x28e2dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 23, bits); }
    // 0x28e2e0: 0x158880  sll         $s1, $s5, 2
    ctx->pc = 0x28e2e0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x28e2e4: 0x0  nop
    ctx->pc = 0x28e2e4u;
    // NOP
label_28e2e8:
    // 0x28e2e8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x28e2e8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x28e2ec: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x28e2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x28e2f0: 0x26320020  addiu       $s2, $s1, 0x20
    ctx->pc = 0x28e2f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x28e2f4: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x28e2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x28e2f8: 0x2d29021  addu        $s2, $s6, $s2
    ctx->pc = 0x28e2f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
    // 0x28e2fc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x28e2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28e300: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x28e300u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x28e304: 0x26300030  addiu       $s0, $s1, 0x30
    ctx->pc = 0x28e304u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x28e308: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x28e308u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x28e30c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x28e30cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x28e310: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x28e310u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x28e314: 0x2918821  addu        $s1, $s4, $s1
    ctx->pc = 0x28e314u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x28e318: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x28e318u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x28e31c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28e31cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x28e320: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x28e320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x28e324: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x28e324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e328: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28e328u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28e32c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x28e32cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x28e330: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28e330u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x28e334: 0xe6410000  swc1        $f1, 0x0($s2)
    ctx->pc = 0x28e334u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x28e338: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x28E338u;
    SET_GPR_U32(ctx, 31, 0x28E340u);
    ctx->pc = 0x28E33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E338u;
    // 0x28e33c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x28E338u, 0x28E340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E340u;
label_28e340:
    // 0x28e340: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x28e340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28e344: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x28e344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x28e348: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x28E348u;
    SET_GPR_U32(ctx, 31, 0x28E350u);
    ctx->pc = 0x28E34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E348u;
    // 0x28e34c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x28E348u, 0x28E350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E350u;
label_28e350:
    // 0x28e350: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x28e350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28e354: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x28e354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x28e358: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x28E358u;
    SET_GPR_U32(ctx, 31, 0x28E360u);
    ctx->pc = 0x28E35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E358u;
    // 0x28e35c: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x28E358u, 0x28E360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E360u;
label_28e360:
    // 0x28e360: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x28e360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e364: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28e364u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28e368: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x28e368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28e36c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28e36cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e370: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x28e370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28e374: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x28E374u;
    SET_GPR_U32(ctx, 31, 0x28E37Cu);
    ctx->pc = 0x28E378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E374u;
    // 0x28e378: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x28E374u, 0x28E37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E37Cu;
label_28e37c:
    // 0x28e37c: 0x2aa20002  slti        $v0, $s5, 0x2
    ctx->pc = 0x28e37cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x28e380: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x28E380u;
    {
        const bool branch_taken_0x28e380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E380u;
        // 0x28e384: 0x158880  sll         $s1, $s5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e380) {
            ctx->pc = 0x28E2E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28e2e8;
        }
    }
    ctx->pc = 0x28E388u;
    // 0x28e388: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x28E388u;
    {
        const bool branch_taken_0x28e388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E388u;
        // 0x28e38c: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e388) {
            ctx->pc = 0x28E440u;
            goto label_28e440;
        }
    }
    ctx->pc = 0x28E390u;
label_28e390:
    // 0x28e390: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x28e390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x28e394: 0x1462002e  bne         $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x28E394u;
    {
        const bool branch_taken_0x28e394 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28E398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E394u;
        // 0x28e398: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e394) {
            ctx->pc = 0x28E450u;
            goto label_28e450;
        }
    }
    ctx->pc = 0x28E39Cu;
    // 0x28e39c: 0x3c0680ff  lui         $a2, 0x80FF
    ctx->pc = 0x28e39cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33023 << 16));
    // 0x28e3a0: 0x2484a0c8  addiu       $a0, $a0, -0x5F38
    ctx->pc = 0x28e3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942920));
    // 0x28e3a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x28e3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e3a8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x28e3a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x28e3ac: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x28e3acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x28e3b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28e3b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e3b4: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x28E3B4u;
    SET_GPR_U32(ctx, 31, 0x28E3BCu);
    ctx->pc = 0x28E3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E3B4u;
    // 0x28e3b8: 0x2409006e  addiu       $t1, $zero, 0x6E (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x28E3B4u, 0x28E3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E3BCu;
label_28e3bc:
    // 0x28e3bc: 0xae60001c  sw          $zero, 0x1C($s3)
    ctx->pc = 0x28e3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 0));
    // 0x28e3c0: 0xae600020  sw          $zero, 0x20($s3)
    ctx->pc = 0x28e3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 0));
    // 0x28e3c4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x28e3c4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e3c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28e3c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x28e3cc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x28e3ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x28e3d0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x28e3d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e3d4: 0x2674000c  addiu       $s4, $s3, 0xC
    ctx->pc = 0x28e3d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x28e3d8: 0x128880  sll         $s1, $s2, 2
    ctx->pc = 0x28e3d8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x28e3dc: 0x0  nop
    ctx->pc = 0x28e3dcu;
    // NOP
label_28e3e0:
    // 0x28e3e0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x28e3e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x28e3e4: 0x26300030  addiu       $s0, $s1, 0x30
    ctx->pc = 0x28e3e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x28e3e8: 0x2918821  addu        $s1, $s4, $s1
    ctx->pc = 0x28e3e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x28e3ec: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x28e3ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x28e3f0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x28e3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x28e3f4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x28e3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28e3f8: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x28E3F8u;
    SET_GPR_U32(ctx, 31, 0x28E400u);
    ctx->pc = 0x28E3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E3F8u;
    // 0x28e3fc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x28E3F8u, 0x28E400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E400u;
label_28e400:
    // 0x28e400: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x28e400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28e404: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x28e404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x28e408: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x28E408u;
    SET_GPR_U32(ctx, 31, 0x28E410u);
    ctx->pc = 0x28E40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E408u;
    // 0x28e40c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x28E408u, 0x28E410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E410u;
label_28e410:
    // 0x28e410: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x28e410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28e414: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x28e414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x28e418: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x28E418u;
    SET_GPR_U32(ctx, 31, 0x28E420u);
    ctx->pc = 0x28E41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E418u;
    // 0x28e41c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x28E418u, 0x28E420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E420u;
label_28e420:
    // 0x28e420: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x28e420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28e424: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x28e424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28e428: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x28E428u;
    SET_GPR_U32(ctx, 31, 0x28E430u);
    ctx->pc = 0x28E42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E428u;
    // 0x28e42c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x28E428u, 0x28E430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E430u;
label_28e430:
    // 0x28e430: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x28e430u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x28e434: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x28E434u;
    {
        const bool branch_taken_0x28e434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E434u;
        // 0x28e438: 0x128880  sll         $s1, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e434) {
            ctx->pc = 0x28E3E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28e3e0;
        }
    }
    ctx->pc = 0x28E43Cu;
    // 0x28e43c: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x28e43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_28e440:
    // 0x28e440: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28e440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28e444: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x28E444u;
    {
        const bool branch_taken_0x28e444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E444u;
        // 0x28e448: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e444) {
            ctx->pc = 0x28E47Cu;
            goto label_28e47c;
        }
    }
    ctx->pc = 0x28E44Cu;
    // 0x28e44c: 0x0  nop
    ctx->pc = 0x28e44cu;
    // NOP
label_28e450:
    // 0x28e450: 0x3c0680ff  lui         $a2, 0x80FF
    ctx->pc = 0x28e450u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33023 << 16));
    // 0x28e454: 0x2484a0c8  addiu       $a0, $a0, -0x5F38
    ctx->pc = 0x28e454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942920));
    // 0x28e458: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x28e458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e45c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x28e45cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x28e460: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x28e460u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x28e464: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28e464u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e468: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x28E468u;
    SET_GPR_U32(ctx, 31, 0x28E470u);
    ctx->pc = 0x28E46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E468u;
    // 0x28e46c: 0x2409006e  addiu       $t1, $zero, 0x6E (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x28E468u, 0x28E470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E470u;
label_28e470:
    // 0x28e470: 0xae60001c  sw          $zero, 0x1C($s3)
    ctx->pc = 0x28e470u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 0));
    // 0x28e474: 0xae600020  sw          $zero, 0x20($s3)
    ctx->pc = 0x28e474u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 0));
    // 0x28e478: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x28e478u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e47c:
    // 0x28e47c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x28e47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x28e480: 0x58400018  blezl       $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x28E480u;
    {
        const bool branch_taken_0x28e480 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x28e480) {
            ctx->pc = 0x28E484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28E480u;
            // 0x28e484: 0x8e64003c  lw          $a0, 0x3C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28E4E4u;
            goto label_28e4e4;
        }
    }
    ctx->pc = 0x28E488u;
    // 0x28e488: 0xc0a39e6  jal         func_28E798
    ctx->pc = 0x28E488u;
    SET_GPR_U32(ctx, 31, 0x28E490u);
    ctx->pc = 0x28E48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E488u;
    // 0x28e48c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E798u, 0x28E488u, 0x28E490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E490u;
label_28e490:
    // 0x28e490: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x28E490u;
    {
        const bool branch_taken_0x28e490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E490u;
        // 0x28e494: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e490) {
            ctx->pc = 0x28E4E0u;
            goto label_28e4e0;
        }
    }
    ctx->pc = 0x28E498u;
    // 0x28e498: 0x8c6288a8  lw          $v0, -0x7758($v1)
    ctx->pc = 0x28e498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936744)));
    // 0x28e49c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28e49cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28e4a0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x28e4a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x28e4a4: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x28E4A4u;
    {
        const bool branch_taken_0x28e4a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e4a4) {
            ctx->pc = 0x28E4A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28E4A4u;
            // 0x28e4a8: 0x8e64003c  lw          $a0, 0x3C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28E4E4u;
            goto label_28e4e4;
        }
    }
    ctx->pc = 0x28E4ACu;
    // 0x28e4ac: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x28e4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x28e4b0: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x28e4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x28e4b4: 0x8e65001c  lw          $a1, 0x1C($s3)
    ctx->pc = 0x28e4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x28e4b8: 0x24843db8  addiu       $a0, $a0, 0x3DB8
    ctx->pc = 0x28e4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15800));
    // 0x28e4bc: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x28e4bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x28e4c0: 0x26e601a0  addiu       $a2, $s7, 0x1A0
    ctx->pc = 0x28e4c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 416));
    // 0x28e4c4: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x28E4C4u;
    SET_GPR_U32(ctx, 31, 0x28E4CCu);
    ctx->pc = 0x28E4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E4C4u;
    // 0x28e4c8: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x28E4C4u, 0x28E4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E4CCu;
label_28e4cc:
    // 0x28e4cc: 0x8e63003c  lw          $v1, 0x3C($s3)
    ctx->pc = 0x28e4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x28e4d0: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x28e4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x28e4d4: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x28e4d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x28e4d8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x28E4D8u;
    {
        const bool branch_taken_0x28e4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E4D8u;
        // 0x28e4dc: 0xac620080  sw          $v0, 0x80($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e4d8) {
            ctx->pc = 0x28E4F4u;
            goto label_28e4f4;
        }
    }
    ctx->pc = 0x28E4E0u;
label_28e4e0:
    // 0x28e4e0: 0x8e64003c  lw          $a0, 0x3C($s3)
    ctx->pc = 0x28e4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
label_28e4e4:
    // 0x28e4e4: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x28e4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x28e4e8: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28e4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28e4ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28e4ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28e4f0: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28e4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28e4f4:
    // 0x28e4f4: 0x26700004  addiu       $s0, $s3, 0x4
    ctx->pc = 0x28e4f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x28e4f8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x28e4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28e4fc: 0x58400017  blezl       $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x28E4FCu;
    {
        const bool branch_taken_0x28e4fc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x28e4fc) {
            ctx->pc = 0x28E500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28E4FCu;
            // 0x28e500: 0x8e640040  lw          $a0, 0x40($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28E55Cu;
            goto label_28e55c;
        }
    }
    ctx->pc = 0x28E504u;
    // 0x28e504: 0xc0a39e6  jal         func_28E798
    ctx->pc = 0x28E504u;
    SET_GPR_U32(ctx, 31, 0x28E50Cu);
    ctx->pc = 0x28E508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E504u;
    // 0x28e508: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E798u, 0x28E504u, 0x28E50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E50Cu;
label_28e50c:
    // 0x28e50c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x28E50Cu;
    {
        const bool branch_taken_0x28e50c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E50Cu;
        // 0x28e510: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e50c) {
            ctx->pc = 0x28E558u;
            goto label_28e558;
        }
    }
    ctx->pc = 0x28E514u;
    // 0x28e514: 0x8c6288a8  lw          $v0, -0x7758($v1)
    ctx->pc = 0x28e514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936744)));
    // 0x28e518: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x28e518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x28e51c: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x28E51Cu;
    {
        const bool branch_taken_0x28e51c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e51c) {
            ctx->pc = 0x28E520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28E51Cu;
            // 0x28e520: 0x8e640040  lw          $a0, 0x40($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28E55Cu;
            goto label_28e55c;
        }
    }
    ctx->pc = 0x28E524u;
    // 0x28e524: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x28e524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x28e528: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x28e528u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x28e52c: 0x8e650020  lw          $a1, 0x20($s3)
    ctx->pc = 0x28e52cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x28e530: 0x24843db8  addiu       $a0, $a0, 0x3DB8
    ctx->pc = 0x28e530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15800));
    // 0x28e534: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x28e534u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28e538: 0x26e601a0  addiu       $a2, $s7, 0x1A0
    ctx->pc = 0x28e538u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 416));
    // 0x28e53c: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x28E53Cu;
    SET_GPR_U32(ctx, 31, 0x28E544u);
    ctx->pc = 0x28E540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E53Cu;
    // 0x28e540: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x28E53Cu, 0x28E544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E544u;
label_28e544:
    // 0x28e544: 0x8e630040  lw          $v1, 0x40($s3)
    ctx->pc = 0x28e544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x28e548: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x28e548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x28e54c: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x28e54cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x28e550: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x28E550u;
    {
        const bool branch_taken_0x28e550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E550u;
        // 0x28e554: 0xac620080  sw          $v0, 0x80($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e550) {
            ctx->pc = 0x28E56Cu;
            goto label_28e56c;
        }
    }
    ctx->pc = 0x28E558u;
label_28e558:
    // 0x28e558: 0x8e640040  lw          $a0, 0x40($s3)
    ctx->pc = 0x28e558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_28e55c:
    // 0x28e55c: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x28e55cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x28e560: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28e560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28e564: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28e564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28e568: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28e568u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28e56c:
    // 0x28e56c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28e56cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28e570: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x28e570u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28e574: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x28e574u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28e578: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x28e578u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x28e57c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x28e57cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28e580: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x28e580u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x28e584: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x28e584u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28e588: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x28e588u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x28e58c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x28e58cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28e590: 0xc7b60058  lwc1        $f22, 0x58($sp)
    ctx->pc = 0x28e590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x28e594: 0xc7b50050  lwc1        $f21, 0x50($sp)
    ctx->pc = 0x28e594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x28e598: 0xc7b40048  lwc1        $f20, 0x48($sp)
    ctx->pc = 0x28e598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28e59c: 0x3e00008  jr          $ra
    ctx->pc = 0x28E59Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E59Cu;
        // 0x28e5a0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E59Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28E5A4u;
    // 0x28e5a4: 0x0  nop
    ctx->pc = 0x28e5a4u;
    // NOP
    ctx->pc = 0x28e5a8u;
}
