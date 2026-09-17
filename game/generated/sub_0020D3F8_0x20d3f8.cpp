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

// Function: sub_0020D3F8
// Address: 0x20d3f8 - 0x20d818
void sub_0020D3F8_0x20d3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020D3F8_0x20d3f8");
#endif

    switch (ctx->pc) {
        case 0x20d5d0u: goto label_20d5d0;
        case 0x20d678u: goto label_20d678;
        case 0x20d68cu: goto label_20d68c;
        case 0x20d69cu: goto label_20d69c;
        case 0x20d6a8u: goto label_20d6a8;
        default: break;
    }

    ctx->pc = 0x20d3f8u;

    // 0x20d3f8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x20d3f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x20d3fc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x20d3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x20d400: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x20d400u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d404: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x20d404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x20d408: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x20d408u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d40c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x20d40cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x20d410: 0x26540750  addiu       $s4, $s2, 0x750
    ctx->pc = 0x20d410u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 1872));
    // 0x20d414: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x20d414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x20d418: 0x26750750  addiu       $s5, $s3, 0x750
    ctx->pc = 0x20d418u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 1872));
    // 0x20d41c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x20d41cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x20d420: 0x264304c0  addiu       $v1, $s2, 0x4C0
    ctx->pc = 0x20d420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1216));
    // 0x20d424: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x20d424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x20d428: 0x266204c0  addiu       $v0, $s3, 0x4C0
    ctx->pc = 0x20d428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1216));
    // 0x20d42c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x20d42cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x20d430: 0x26440510  addiu       $a0, $s2, 0x510
    ctx->pc = 0x20d430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1296));
    // 0x20d434: 0xe7bf00a0  swc1        $f31, 0xA0($sp)
    ctx->pc = 0x20d434u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x20d438: 0x26650510  addiu       $a1, $s3, 0x510
    ctx->pc = 0x20d438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1296));
    // 0x20d43c: 0xe7be0098  swc1        $f30, 0x98($sp)
    ctx->pc = 0x20d43cu;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x20d440: 0xe7bd0090  swc1        $f29, 0x90($sp)
    ctx->pc = 0x20d440u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x20d444: 0xe7bc0088  swc1        $f28, 0x88($sp)
    ctx->pc = 0x20d444u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x20d448: 0xe7bb0080  swc1        $f27, 0x80($sp)
    ctx->pc = 0x20d448u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x20d44c: 0xe7ba0078  swc1        $f26, 0x78($sp)
    ctx->pc = 0x20d44cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x20d450: 0xe7b90070  swc1        $f25, 0x70($sp)
    ctx->pc = 0x20d450u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x20d454: 0xe7b80068  swc1        $f24, 0x68($sp)
    ctx->pc = 0x20d454u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x20d458: 0xe7b70060  swc1        $f23, 0x60($sp)
    ctx->pc = 0x20d458u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x20d45c: 0xe7b60058  swc1        $f22, 0x58($sp)
    ctx->pc = 0x20d45cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x20d460: 0xe7b50050  swc1        $f21, 0x50($sp)
    ctx->pc = 0x20d460u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x20d464: 0xe7b40048  swc1        $f20, 0x48($sp)
    ctx->pc = 0x20d464u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x20d468: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x20d468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20d46c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x20d46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20d470: 0xc463000c  lwc1        $f3, 0xC($v1)
    ctx->pc = 0x20d470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x20d474: 0x46011181  sub.s       $f6, $f2, $f1
    ctx->pc = 0x20d474u;
    ctx->f[6] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x20d478: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x20d478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20d47c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x20d47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20d480: 0xc4440004  lwc1        $f4, 0x4($v0)
    ctx->pc = 0x20d480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x20d484: 0x46001940  add.s       $f5, $f3, $f0
    ctx->pc = 0x20d484u;
    ctx->f[5] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x20d488: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x20d488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20d48c: 0x460030c5  abs.s       $f3, $f6
    ctx->pc = 0x20d48cu;
    ctx->f[3] = FPU_ABS_S(ctx->f[6]);
    // 0x20d490: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x20d490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20d494: 0x46012041  sub.s       $f1, $f4, $f1
    ctx->pc = 0x20d494u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x20d498: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x20d498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x20d49c: 0x46051834  c.lt.s      $f3, $f5
    ctx->pc = 0x20d49cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20d4a0: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x20D4A0u;
    {
        const bool branch_taken_0x20d4a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20D4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D4A0u;
        // 0x20d4a4: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d4a0) {
            ctx->pc = 0x20D4F8u;
            goto label_20d4f8;
        }
    }
    ctx->pc = 0x20D4A8u;
    // 0x20d4a8: 0x46000805  abs.s       $f0, $f1
    ctx->pc = 0x20d4a8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[1]);
    // 0x20d4ac: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x20d4acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20d4b0: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x20D4B0u;
    {
        const bool branch_taken_0x20d4b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20d4b0) {
            ctx->pc = 0x20D4F8u;
            goto label_20d4f8;
        }
    }
    ctx->pc = 0x20D4B8u;
    // 0x20d4b8: 0x46001005  abs.s       $f0, $f2
    ctx->pc = 0x20d4b8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[2]);
    // 0x20d4bc: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x20d4bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20d4c0: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x20D4C0u;
    {
        const bool branch_taken_0x20d4c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20d4c0) {
            ctx->pc = 0x20D4F8u;
            goto label_20d4f8;
        }
    }
    ctx->pc = 0x20D4C8u;
    // 0x20d4c8: 0x46063002  mul.s       $f0, $f6, $f6
    ctx->pc = 0x20d4c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x20d4cc: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x20d4ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x20d4d0: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x20d4d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x20d4d4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20d4d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20d4d8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x20d4d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x20d4dc: 0x0  nop
    ctx->pc = 0x20d4dcu;
    // NOP
    // 0x20d4e0: 0x0  nop
    ctx->pc = 0x20d4e0u;
    // NOP
    // 0x20d4e4: 0x46000004  c1          0x4
    ctx->pc = 0x20d4e4u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x20d4e8: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x20d4e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x20d4ec: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x20d4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20d4f0: 0x46010068  max.s       $f1, $f0, $f1
    ctx->pc = 0x20d4f0u;
    ctx->f[1] = std::max(ctx->f[0], ctx->f[1]);
    // 0x20d4f4: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x20d4f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_20d4f8:
    // 0x20d4f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20d4f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20d4fc: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x20d4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x20d500: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x20d500u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20d504: 0x450000ae  bc1f        . + 4 + (0xAE << 2)
    ctx->pc = 0x20D504u;
    {
        const bool branch_taken_0x20d504 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20D508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D504u;
        // 0x20d508: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d504) {
            ctx->pc = 0x20D7C0u;
            goto label_20d7c0;
        }
    }
    ctx->pc = 0x20D50Cu;
    // 0x20d50c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x20d50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20d510: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x20d510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20d514: 0xc6960000  lwc1        $f22, 0x0($s4)
    ctx->pc = 0x20d514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x20d518: 0xc6860004  lwc1        $f6, 0x4($s4)
    ctx->pc = 0x20d518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x20d51c: 0x4601b041  sub.s       $f1, $f22, $f1
    ctx->pc = 0x20d51cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[22], ctx->f[1]);
    // 0x20d520: 0xe7a60004  swc1        $f6, 0x4($sp)
    ctx->pc = 0x20d520u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x20d524: 0x46023081  sub.s       $f2, $f6, $f2
    ctx->pc = 0x20d524u;
    ctx->f[2] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
    // 0x20d528: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x20d528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20d52c: 0xc6970008  lwc1        $f23, 0x8($s4)
    ctx->pc = 0x20d52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x20d530: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x20d530u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x20d534: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x20d534u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x20d538: 0xc6a30004  lwc1        $f3, 0x4($s5)
    ctx->pc = 0x20d538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x20d53c: 0x4600b801  sub.s       $f0, $f23, $f0
    ctx->pc = 0x20d53cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[23], ctx->f[0]);
    // 0x20d540: 0xc6b80000  lwc1        $f24, 0x0($s5)
    ctx->pc = 0x20d540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x20d544: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x20d544u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x20d548: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x20d548u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x20d54c: 0xc6b90008  lwc1        $f25, 0x8($s5)
    ctx->pc = 0x20d54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x20d550: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x20d550u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x20d554: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x20d554u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x20d558: 0x0  nop
    ctx->pc = 0x20d558u;
    // NOP
    // 0x20d55c: 0x0  nop
    ctx->pc = 0x20d55cu;
    // NOP
    // 0x20d560: 0x46010704  c1          0x10704
    ctx->pc = 0x20d560u;
    ctx->f[28] = FPU_SQRT_S(ctx->f[0]);
    // 0x20d564: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x20d564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20d568: 0x4600e746  mov.s       $f29, $f28
    ctx->pc = 0x20d568u;
    ctx->f[29] = FPU_MOV_S(ctx->f[28]);
    // 0x20d56c: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x20d56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20d570: 0x4600c001  sub.s       $f0, $f24, $f0
    ctx->pc = 0x20d570u;
    ctx->f[0] = FPU_SUB_S(ctx->f[24], ctx->f[0]);
    // 0x20d574: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x20d574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20d578: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x20d578u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x20d57c: 0x4601c841  sub.s       $f1, $f25, $f1
    ctx->pc = 0x20d57cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[25], ctx->f[1]);
    // 0x20d580: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x20d580u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x20d584: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x20d584u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x20d588: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x20d588u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x20d58c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x20d58cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x20d590: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20d590u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20d594: 0x0  nop
    ctx->pc = 0x20d594u;
    // NOP
    // 0x20d598: 0x0  nop
    ctx->pc = 0x20d598u;
    // NOP
    // 0x20d59c: 0x46000684  c1          0x684
    ctx->pc = 0x20d59cu;
    ctx->f[26] = FPU_SQRT_S(ctx->f[0]);
    // 0x20d5a0: 0x8642000e  lh          $v0, 0xE($s2)
    ctx->pc = 0x20d5a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x20d5a4: 0x4616c301  sub.s       $f12, $f24, $f22
    ctx->pc = 0x20d5a4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[24], ctx->f[22]);
    // 0x20d5a8: 0x4617cb41  sub.s       $f13, $f25, $f23
    ctx->pc = 0x20d5a8u;
    ctx->f[13] = FPU_SUB_S(ctx->f[25], ctx->f[23]);
    // 0x20d5ac: 0x24100400  addiu       $s0, $zero, 0x400
    ctx->pc = 0x20d5acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x20d5b0: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x20d5b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x20d5b4: 0x2444000f  addiu       $a0, $v0, 0xF
    ctx->pc = 0x20d5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x20d5b8: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x20d5b8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x20d5bc: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x20d5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x20d5c0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x20d5c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x20d5c4: 0x4600d6c6  mov.s       $f27, $f26
    ctx->pc = 0x20d5c4u;
    ctx->f[27] = FPU_MOV_S(ctx->f[26]);
    // 0x20d5c8: 0xc0b7440  jal         func_2DD100
    ctx->pc = 0x20D5C8u;
    SET_GPR_U32(ctx, 31, 0x20D5D0u);
    ctx->pc = 0x20D5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D5C8u;
    // 0x20d5cc: 0x2028823  subu        $s1, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD100u, 0x20D5C8u, 0x20D5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D5D0u;
label_20d5d0:
    // 0x20d5d0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x20d5d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d5d4: 0x2504000f  addiu       $a0, $t0, 0xF
    ctx->pc = 0x20d5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 15));
    // 0x20d5d8: 0x29020000  slti        $v0, $t0, 0x0
    ctx->pc = 0x20d5d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x20d5dc: 0x82400b  movn        $t0, $a0, $v0
    ctx->pc = 0x20d5dcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 4));
    // 0x20d5e0: 0x81903  sra         $v1, $t0, 4
    ctx->pc = 0x20d5e0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 8), 4));
    // 0x20d5e4: 0x2034023  subu        $t0, $s0, $v1
    ctx->pc = 0x20d5e4u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x20d5e8: 0x2281023  subu        $v0, $s1, $t0
    ctx->pc = 0x20d5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
    // 0x20d5ec: 0x30440fff  andi        $a0, $v0, 0xFFF
    ctx->pc = 0x20d5ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x20d5f0: 0x28830800  slti        $v1, $a0, 0x800
    ctx->pc = 0x20d5f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2048) ? 1 : 0);
    // 0x20d5f4: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x20D5F4u;
    {
        const bool branch_taken_0x20d5f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20d5f4) {
            ctx->pc = 0x20D5F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20D5F4u;
            // 0x20d5f8: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20D604u;
            goto label_20d604;
        }
    }
    ctx->pc = 0x20D5FCu;
    // 0x20d5fc: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x20d5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x20d600: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x20d600u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_20d604:
    // 0x20d604: 0x8662000e  lh          $v0, 0xE($s3)
    ctx->pc = 0x20d604u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
    // 0x20d608: 0x28660401  slti        $a2, $v1, 0x401
    ctx->pc = 0x20d608u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x20d60c: 0x24070400  addiu       $a3, $zero, 0x400
    ctx->pc = 0x20d60cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x20d610: 0x25080800  addiu       $t0, $t0, 0x800
    ctx->pc = 0x20d610u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2048));
    // 0x20d614: 0x2444000f  addiu       $a0, $v0, 0xF
    ctx->pc = 0x20d614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x20d618: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x20d618u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x20d61c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x20d61cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x20d620: 0x26250800  addiu       $a1, $s1, 0x800
    ctx->pc = 0x20d620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2048));
    // 0x20d624: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x20d624u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x20d628: 0xe28023  subu        $s0, $a3, $v0
    ctx->pc = 0x20d628u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x20d62c: 0x2081823  subu        $v1, $s0, $t0
    ctx->pc = 0x20d62cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x20d630: 0x30640fff  andi        $a0, $v1, 0xFFF
    ctx->pc = 0x20d630u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x20d634: 0x28820800  slti        $v0, $a0, 0x800
    ctx->pc = 0x20d634u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2048) ? 1 : 0);
    // 0x20d638: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20D638u;
    {
        const bool branch_taken_0x20d638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D638u;
        // 0x20d63c: 0xa6880a  movz        $s1, $a1, $a2 (Delay Slot)
        if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d638) {
            ctx->pc = 0x20D650u;
            goto label_20d650;
        }
    }
    ctx->pc = 0x20D640u;
    // 0x20d640: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x20d640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x20d644: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x20D644u;
    {
        const bool branch_taken_0x20d644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D644u;
        // 0x20d648: 0x441023  subu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d644) {
            ctx->pc = 0x20D654u;
            goto label_20d654;
        }
    }
    ctx->pc = 0x20D64Cu;
    // 0x20d64c: 0x0  nop
    ctx->pc = 0x20d64cu;
    // NOP
label_20d650:
    // 0x20d650: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x20d650u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20d654:
    // 0x20d654: 0x4491a000  mtc1        $s1, $f20
    ctx->pc = 0x20d654u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x20d658: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x20d658u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x20d65c: 0xc79583c8  lwc1        $f21, -0x7C38($gp)
    ctx->pc = 0x20d65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x20d660: 0x28430401  slti        $v1, $v0, 0x401
    ctx->pc = 0x20d660u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x20d664: 0x26020800  addiu       $v0, $s0, 0x800
    ctx->pc = 0x20d664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2048));
    // 0x20d668: 0x43800a  movz        $s0, $v0, $v1
    ctx->pc = 0x20d668u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x20d66c: 0x4615a502  mul.s       $f20, $f20, $f21
    ctx->pc = 0x20d66cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
    // 0x20d670: 0xc0474d0  jal         func_11D340
    ctx->pc = 0x20D670u;
    SET_GPR_U32(ctx, 31, 0x20D678u);
    ctx->pc = 0x20D674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D670u;
    // 0x20d674: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D340u, 0x20D670u, 0x20D678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D678u;
label_20d678:
    // 0x20d678: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x20d678u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x20d67c: 0x4490a000  mtc1        $s0, $f20
    ctx->pc = 0x20d67cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x20d680: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x20d680u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x20d684: 0xc04746c  jal         func_11D1B0
    ctx->pc = 0x20D684u;
    SET_GPR_U32(ctx, 31, 0x20D68Cu);
    ctx->pc = 0x20D688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D684u;
    // 0x20d688: 0x460007c6  mov.s       $f31, $f0 (Delay Slot)
    ctx->f[31] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D1B0u, 0x20D684u, 0x20D68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D68Cu;
label_20d68c:
    // 0x20d68c: 0x46000786  mov.s       $f30, $f0
    ctx->pc = 0x20d68cu;
    ctx->f[30] = FPU_MOV_S(ctx->f[0]);
    // 0x20d690: 0x4615a502  mul.s       $f20, $f20, $f21
    ctx->pc = 0x20d690u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
    // 0x20d694: 0xc0474d0  jal         func_11D340
    ctx->pc = 0x20D694u;
    SET_GPR_U32(ctx, 31, 0x20D69Cu);
    ctx->pc = 0x20D698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D694u;
    // 0x20d698: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D340u, 0x20D694u, 0x20D69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D69Cu;
label_20d69c:
    // 0x20d69c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x20d69cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x20d6a0: 0xc04746c  jal         func_11D1B0
    ctx->pc = 0x20D6A0u;
    SET_GPR_U32(ctx, 31, 0x20D6A8u);
    ctx->pc = 0x20D6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D6A0u;
    // 0x20d6a4: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D1B0u, 0x20D6A0u, 0x20D6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D6A8u;
label_20d6a8:
    // 0x20d6a8: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x20d6a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x20d6ac: 0x46000146  mov.s       $f5, $f0
    ctx->pc = 0x20d6acu;
    ctx->f[5] = FPU_MOV_S(ctx->f[0]);
    // 0x20d6b0: 0x461ba8c2  mul.s       $f3, $f21, $f27
    ctx->pc = 0x20d6b0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[21], ctx->f[27]);
    // 0x20d6b4: 0x461b2802  mul.s       $f0, $f5, $f27
    ctx->pc = 0x20d6b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[27]);
    // 0x20d6b8: 0x461df042  mul.s       $f1, $f30, $f29
    ctx->pc = 0x20d6b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[30], ctx->f[29]);
    // 0x20d6bc: 0x461df882  mul.s       $f2, $f31, $f29
    ctx->pc = 0x20d6bcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[31], ctx->f[29]);
    // 0x20d6c0: 0x4604e832  c.eq.s      $f29, $f4
    ctx->pc = 0x20d6c0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[29], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20d6c4: 0x4600b580  add.s       $f22, $f22, $f0
    ctx->pc = 0x20d6c4u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
    // 0x20d6c8: 0x4603bdc0  add.s       $f23, $f23, $f3
    ctx->pc = 0x20d6c8u;
    ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[3]);
    // 0x20d6cc: 0x4601c600  add.s       $f24, $f24, $f1
    ctx->pc = 0x20d6ccu;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[1]);
    // 0x20d6d0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x20D6D0u;
    {
        const bool branch_taken_0x20d6d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20D6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D6D0u;
        // 0x20d6d4: 0x4602ce40  add.s       $f25, $f25, $f2 (Delay Slot)
        ctx->f[25] = FPU_ADD_S(ctx->f[25], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d6d0) {
            ctx->pc = 0x20D6F0u;
            goto label_20d6f0;
        }
    }
    ctx->pc = 0x20D6D8u;
    // 0x20d6d8: 0x4604d832  c.eq.s      $f27, $f4
    ctx->pc = 0x20d6d8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[27], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20d6dc: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x20D6DCu;
    {
        const bool branch_taken_0x20d6dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20d6dc) {
            ctx->pc = 0x20D6E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20D6DCu;
            // 0x20d6e0: 0x461ae080  add.s       $f2, $f28, $f26 (Delay Slot)
            ctx->f[2] = FPU_ADD_S(ctx->f[28], ctx->f[26]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20D6F4u;
            goto label_20d6f4;
        }
    }
    ctx->pc = 0x20D6E4u;
    // 0x20d6e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20d6e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20d6e8: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x20d6e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x20d6ec: 0x4600d706  mov.s       $f28, $f26
    ctx->pc = 0x20d6ecu;
    ctx->f[28] = FPU_MOV_S(ctx->f[26]);
label_20d6f0:
    // 0x20d6f0: 0x461ae080  add.s       $f2, $f28, $f26
    ctx->pc = 0x20d6f0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[28], ctx->f[26]);
label_20d6f4:
    // 0x20d6f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20d6f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20d6f8: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x20d6f8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20d6fc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x20D6FCu;
    {
        const bool branch_taken_0x20d6fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20D700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D6FCu;
        // 0x20d700: 0xc7a60000  lwc1        $f6, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d6fc) {
            ctx->pc = 0x20D70Cu;
            goto label_20d70c;
        }
    }
    ctx->pc = 0x20D704u;
    // 0x20d704: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20d704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20d708: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x20d708u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_20d70c:
    // 0x20d70c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20d70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20d710: 0xc6830000  lwc1        $f3, 0x0($s4)
    ctx->pc = 0x20d710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x20d714: 0x461c3002  mul.s       $f0, $f6, $f28
    ctx->pc = 0x20d714u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[28]);
    // 0x20d718: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x20d718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x20d71c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x20d71cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x20d720: 0x461a3042  mul.s       $f1, $f6, $f26
    ctx->pc = 0x20d720u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[26]);
    // 0x20d724: 0x0  nop
    ctx->pc = 0x20d724u;
    // NOP
    // 0x20d728: 0x0  nop
    ctx->pc = 0x20d728u;
    // NOP
    // 0x20d72c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x20d72cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x20d730: 0x0  nop
    ctx->pc = 0x20d730u;
    // NOP
    // 0x20d734: 0x0  nop
    ctx->pc = 0x20d734u;
    // NOP
    // 0x20d738: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x20d738u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x20d73c: 0x4600f082  mul.s       $f2, $f30, $f0
    ctx->pc = 0x20d73cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[30], ctx->f[0]);
    // 0x20d740: 0x4600f802  mul.s       $f0, $f31, $f0
    ctx->pc = 0x20d740u;
    ctx->f[0] = FPU_MUL_S(ctx->f[31], ctx->f[0]);
    // 0x20d744: 0x4602b581  sub.s       $f22, $f22, $f2
    ctx->pc = 0x20d744u;
    ctx->f[22] = FPU_SUB_S(ctx->f[22], ctx->f[2]);
    // 0x20d748: 0x4600bdc1  sub.s       $f23, $f23, $f0
    ctx->pc = 0x20d748u;
    ctx->f[23] = FPU_SUB_S(ctx->f[23], ctx->f[0]);
    // 0x20d74c: 0x46012882  mul.s       $f2, $f5, $f1
    ctx->pc = 0x20d74cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x20d750: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x20d750u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x20d754: 0x4603b0c1  sub.s       $f3, $f22, $f3
    ctx->pc = 0x20d754u;
    ctx->f[3] = FPU_SUB_S(ctx->f[22], ctx->f[3]);
    // 0x20d758: 0x4602c601  sub.s       $f24, $f24, $f2
    ctx->pc = 0x20d758u;
    ctx->f[24] = FPU_SUB_S(ctx->f[24], ctx->f[2]);
    // 0x20d75c: 0x4601ce41  sub.s       $f25, $f25, $f1
    ctx->pc = 0x20d75cu;
    ctx->f[25] = FPU_SUB_S(ctx->f[25], ctx->f[1]);
    // 0x20d760: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x20d760u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x20d764: 0xe6430690  swc1        $f3, 0x690($s2)
    ctx->pc = 0x20d764u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1680), bits); }
    // 0x20d768: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x20d768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20d76c: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x20d76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20d770: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x20d770u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x20d774: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x20d774u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x20d778: 0xe6400694  swc1        $f0, 0x694($s2)
    ctx->pc = 0x20d778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1684), bits); }
    // 0x20d77c: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x20d77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20d780: 0x4601b841  sub.s       $f1, $f23, $f1
    ctx->pc = 0x20d780u;
    ctx->f[1] = FPU_SUB_S(ctx->f[23], ctx->f[1]);
    // 0x20d784: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x20d784u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x20d788: 0xe6410698  swc1        $f1, 0x698($s2)
    ctx->pc = 0x20d788u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1688), bits); }
    // 0x20d78c: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x20d78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20d790: 0x4600c001  sub.s       $f0, $f24, $f0
    ctx->pc = 0x20d790u;
    ctx->f[0] = FPU_SUB_S(ctx->f[24], ctx->f[0]);
    // 0x20d794: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x20d794u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x20d798: 0xe6600690  swc1        $f0, 0x690($s3)
    ctx->pc = 0x20d798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1680), bits); }
    // 0x20d79c: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x20d79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20d7a0: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x20d7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x20d7a4: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x20d7a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x20d7a8: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x20d7a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x20d7ac: 0xe6610694  swc1        $f1, 0x694($s3)
    ctx->pc = 0x20d7acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1684), bits); }
    // 0x20d7b0: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x20d7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20d7b4: 0x4600c801  sub.s       $f0, $f25, $f0
    ctx->pc = 0x20d7b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[25], ctx->f[0]);
    // 0x20d7b8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x20d7b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x20d7bc: 0xe6600698  swc1        $f0, 0x698($s3)
    ctx->pc = 0x20d7bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1688), bits); }
label_20d7c0:
    // 0x20d7c0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x20d7c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20d7c4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x20d7c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20d7c8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x20d7c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20d7cc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x20d7ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x20d7d0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x20d7d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20d7d4: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x20d7d4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d7d8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x20d7d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20d7dc: 0xc7bf00a0  lwc1        $f31, 0xA0($sp)
    ctx->pc = 0x20d7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x20d7e0: 0xc7be0098  lwc1        $f30, 0x98($sp)
    ctx->pc = 0x20d7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x20d7e4: 0xc7bd0090  lwc1        $f29, 0x90($sp)
    ctx->pc = 0x20d7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x20d7e8: 0xc7bc0088  lwc1        $f28, 0x88($sp)
    ctx->pc = 0x20d7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x20d7ec: 0xc7bb0080  lwc1        $f27, 0x80($sp)
    ctx->pc = 0x20d7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x20d7f0: 0xc7ba0078  lwc1        $f26, 0x78($sp)
    ctx->pc = 0x20d7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x20d7f4: 0xc7b90070  lwc1        $f25, 0x70($sp)
    ctx->pc = 0x20d7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x20d7f8: 0xc7b80068  lwc1        $f24, 0x68($sp)
    ctx->pc = 0x20d7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x20d7fc: 0xc7b70060  lwc1        $f23, 0x60($sp)
    ctx->pc = 0x20d7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x20d800: 0xc7b60058  lwc1        $f22, 0x58($sp)
    ctx->pc = 0x20d800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x20d804: 0xc7b50050  lwc1        $f21, 0x50($sp)
    ctx->pc = 0x20d804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x20d808: 0xc7b40048  lwc1        $f20, 0x48($sp)
    ctx->pc = 0x20d808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x20d80c: 0x3e00008  jr          $ra
    ctx->pc = 0x20D80Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D80Cu;
        // 0x20d810: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D80Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D814u;
    // 0x20d814: 0x0  nop
    ctx->pc = 0x20d814u;
    // NOP
    ctx->pc = 0x20d818u;
}
