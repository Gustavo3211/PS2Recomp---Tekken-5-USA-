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

// Function: sub_0029B458
// Address: 0x29b458 - 0x29b648
void sub_0029B458_0x29b458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B458_0x29b458");
#endif

    ctx->pc = 0x29b458u;

    // 0x29b458: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x29b458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x29b45c: 0xc44400d4  lwc1        $f4, 0xD4($v0)
    ctx->pc = 0x29b45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x29b460: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x29B460u;
    {
        const bool branch_taken_0x29b460 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B460u;
        // 0x29b464: 0x24e20060  addiu       $v0, $a3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b460) {
            ctx->pc = 0x29B478u;
            goto label_29b478;
        }
    }
    ctx->pc = 0x29B468u;
    // 0x29b468: 0x3c014331  lui         $at, 0x4331
    ctx->pc = 0x29b468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17201 << 16));
    // 0x29b46c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29b46cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29b470: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x29B470u;
    {
        const bool branch_taken_0x29b470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B470u;
        // 0x29b474: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b470) {
            ctx->pc = 0x29B480u;
            goto label_29b480;
        }
    }
    ctx->pc = 0x29B478u;
label_29b478:
    // 0x29b478: 0xc780904c  lwc1        $f0, -0x6FB4($gp)
    ctx->pc = 0x29b478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b47c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x29b47cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_29b480:
    // 0x29b480: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x29b480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b484: 0x24e80090  addiu       $t0, $a3, 0x90
    ctx->pc = 0x29b484u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 144));
    // 0x29b488: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x29B488u;
    {
        const bool branch_taken_0x29b488 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B488u;
        // 0x29b48c: 0xe4e00000  swc1        $f0, 0x0($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b488) {
            ctx->pc = 0x29B4A0u;
            goto label_29b4a0;
        }
    }
    ctx->pc = 0x29B490u;
    // 0x29b490: 0x3c01434d  lui         $at, 0x434D
    ctx->pc = 0x29b490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17229 << 16));
    // 0x29b494: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29b494u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29b498: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x29B498u;
    {
        const bool branch_taken_0x29b498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B498u;
        // 0x29b49c: 0xe5000000  swc1        $f0, 0x0($t0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b498) {
            ctx->pc = 0x29B4A8u;
            goto label_29b4a8;
        }
    }
    ctx->pc = 0x29B4A0u;
label_29b4a0:
    // 0x29b4a0: 0xc7809050  lwc1        $f0, -0x6FB0($gp)
    ctx->pc = 0x29b4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b4a4: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x29b4a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
label_29b4a8:
    // 0x29b4a8: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x29b4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b4ac: 0x14a0000e  bnez        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x29B4ACu;
    {
        const bool branch_taken_0x29b4ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B4ACu;
        // 0x29b4b0: 0xe4e00030  swc1        $f0, 0x30($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b4ac) {
            ctx->pc = 0x29B4E8u;
            goto label_29b4e8;
        }
    }
    ctx->pc = 0x29B4B4u;
    // 0x29b4b4: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x29b4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x29b4b8: 0x3c014212  lui         $at, 0x4212
    ctx->pc = 0x29b4b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16914 << 16));
    // 0x29b4bc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x29b4bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x29b4c0: 0xc461c658  lwc1        $f1, -0x39A8($v1)
    ctx->pc = 0x29b4c0u;
    { uint32_t bits = FAST_READ32(0x3BC658u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b4c4: 0x24e60030  addiu       $a2, $a3, 0x30
    ctx->pc = 0x29b4c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x29b4c8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x29b4c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x29b4cc: 0x3c014188  lui         $at, 0x4188
    ctx->pc = 0x29b4ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16776 << 16));
    // 0x29b4d0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x29b4d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x29b4d4: 0x3c014360  lui         $at, 0x4360
    ctx->pc = 0x29b4d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17248 << 16));
    // 0x29b4d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29b4d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29b4dc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x29B4DCu;
    {
        const bool branch_taken_0x29b4dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B4DCu;
        // 0x29b4e0: 0xc783b690  lwc1        $f3, -0x4970($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294948496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b4dc) {
            ctx->pc = 0x29B518u;
            goto label_29b518;
        }
    }
    ctx->pc = 0x29B4E4u;
    // 0x29b4e4: 0x0  nop
    ctx->pc = 0x29b4e4u;
    // NOP
label_29b4e8:
    // 0x29b4e8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x29b4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x29b4ec: 0xc783b690  lwc1        $f3, -0x4970($gp)
    ctx->pc = 0x29b4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294948496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29b4f0: 0x3c01003c  lui         $at, 0x3C
    ctx->pc = 0x29b4f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)60 << 16));
    // 0x29b4f4: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x29b4f4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x29b4f8: 0xc421c654  lwc1        $f1, -0x39AC($at)
    ctx->pc = 0x29b4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294952532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b4fc: 0x24e60030  addiu       $a2, $a3, 0x30
    ctx->pc = 0x29b4fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x29b500: 0x3c014360  lui         $at, 0x4360
    ctx->pc = 0x29b500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17248 << 16));
    // 0x29b504: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29b504u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29b508: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x29b508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x29b50c: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x29b50cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x29b510: 0x3c014188  lui         $at, 0x4188
    ctx->pc = 0x29b510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16776 << 16));
    // 0x29b514: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x29b514u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_29b518:
    // 0x29b518: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x29b518u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x29b51c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x29b51cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29b520: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x29b520u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x29b524: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x29b524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x29b528: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x29b528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x29b52c: 0x8c820160  lw          $v0, 0x160($a0)
    ctx->pc = 0x29b52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x29b530: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x29B530u;
    {
        const bool branch_taken_0x29b530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B530u;
        // 0x29b534: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b530) {
            ctx->pc = 0x29B580u;
            goto label_29b580;
        }
    }
    ctx->pc = 0x29B538u;
    // 0x29b538: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29B538u;
    {
        const bool branch_taken_0x29b538 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x29B53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B538u;
        // 0x29b53c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b538) {
            ctx->pc = 0x29B558u;
            goto label_29b558;
        }
    }
    ctx->pc = 0x29B540u;
    // 0x29b540: 0x14a2000f  bne         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x29B540u;
    {
        const bool branch_taken_0x29b540 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x29B544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B540u;
        // 0x29b544: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b540) {
            ctx->pc = 0x29B580u;
            goto label_29b580;
        }
    }
    ctx->pc = 0x29B548u;
    // 0x29b548: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29b548u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29b54c: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x29b54cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b550: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x29B550u;
    {
        const bool branch_taken_0x29b550 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29b550) {
            ctx->pc = 0x29B580u;
            goto label_29b580;
        }
    }
    ctx->pc = 0x29B558u;
label_29b558:
    // 0x29b558: 0x2462c658  addiu       $v0, $v1, -0x39A8
    ctx->pc = 0x29b558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952536));
    // 0x29b55c: 0xc783b690  lwc1        $f3, -0x4970($gp)
    ctx->pc = 0x29b55cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294948496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29b560: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x29b560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b564: 0x3c014360  lui         $at, 0x4360
    ctx->pc = 0x29b564u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17248 << 16));
    // 0x29b568: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29b568u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29b56c: 0x3c014188  lui         $at, 0x4188
    ctx->pc = 0x29b56cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16776 << 16));
    // 0x29b570: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x29b570u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x29b574: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x29B574u;
    {
        const bool branch_taken_0x29b574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B574u;
        // 0x29b578: 0x46030840  add.s       $f1, $f1, $f3 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b574) {
            ctx->pc = 0x29B5B4u;
            goto label_29b5b4;
        }
    }
    ctx->pc = 0x29B57Cu;
    // 0x29b57c: 0x0  nop
    ctx->pc = 0x29b57cu;
    // NOP
label_29b580:
    // 0x29b580: 0x54a20011  bnel        $a1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x29B580u;
    {
        const bool branch_taken_0x29b580 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x29b580) {
            ctx->pc = 0x29B584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29B580u;
            // 0x29b584: 0x2463c658  addiu       $v1, $v1, -0x39A8 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952536));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29B5C8u;
            goto label_29b5c8;
        }
    }
    ctx->pc = 0x29B588u;
    // 0x29b588: 0x2462c658  addiu       $v0, $v1, -0x39A8
    ctx->pc = 0x29b588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952536));
    // 0x29b58c: 0x3c014212  lui         $at, 0x4212
    ctx->pc = 0x29b58cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16914 << 16));
    // 0x29b590: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x29b590u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x29b594: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x29b594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b598: 0xc783b690  lwc1        $f3, -0x4970($gp)
    ctx->pc = 0x29b598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294948496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29b59c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x29b59cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x29b5a0: 0x3c014188  lui         $at, 0x4188
    ctx->pc = 0x29b5a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16776 << 16));
    // 0x29b5a4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x29b5a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x29b5a8: 0x3c014360  lui         $at, 0x4360
    ctx->pc = 0x29b5a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17248 << 16));
    // 0x29b5ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29b5acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29b5b0: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x29b5b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_29b5b4:
    // 0x29b5b4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x29b5b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29b5b8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x29b5b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x29b5bc: 0xe5000004  swc1        $f0, 0x4($t0)
    ctx->pc = 0x29b5bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x29b5c0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x29B5C0u;
    {
        const bool branch_taken_0x29b5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B5C0u;
        // 0x29b5c4: 0xe4e00064  swc1        $f0, 0x64($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b5c0) {
            ctx->pc = 0x29B600u;
            goto label_29b600;
        }
    }
    ctx->pc = 0x29B5C8u;
label_29b5c8:
    // 0x29b5c8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x29b5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x29b5cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29b5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29b5d0: 0xc783b690  lwc1        $f3, -0x4970($gp)
    ctx->pc = 0x29b5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294948496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29b5d4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x29b5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b5d8: 0x3c014360  lui         $at, 0x4360
    ctx->pc = 0x29b5d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17248 << 16));
    // 0x29b5dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x29b5dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29b5e0: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x29b5e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x29b5e4: 0x3c014188  lui         $at, 0x4188
    ctx->pc = 0x29b5e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16776 << 16));
    // 0x29b5e8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x29b5e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x29b5ec: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x29b5ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x29b5f0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x29b5f0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29b5f4: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x29b5f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x29b5f8: 0xe5010004  swc1        $f1, 0x4($t0)
    ctx->pc = 0x29b5f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x29b5fc: 0xe4e10064  swc1        $f1, 0x64($a3)
    ctx->pc = 0x29b5fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 100), bits); }
label_29b600:
    // 0x29b600: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x29B600u;
    {
        const bool branch_taken_0x29b600 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B600u;
        // 0x29b604: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b600) {
            ctx->pc = 0x29B618u;
            goto label_29b618;
        }
    }
    ctx->pc = 0x29B608u;
    // 0x29b608: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29b608u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29b60c: 0xe4c0001c  swc1        $f0, 0x1C($a2)
    ctx->pc = 0x29b60cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 28), bits); }
    // 0x29b610: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x29B610u;
    {
        const bool branch_taken_0x29b610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B610u;
        // 0x29b614: 0xe4e0001c  swc1        $f0, 0x1C($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b610) {
            ctx->pc = 0x29B63Cu;
            goto label_29b63c;
        }
    }
    ctx->pc = 0x29B618u;
label_29b618:
    // 0x29b618: 0x14a20007  bne         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29B618u;
    {
        const bool branch_taken_0x29b618 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x29B61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B618u;
        // 0x29b61c: 0xe4cd001c  swc1        $f13, 0x1C($a2) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b618) {
            ctx->pc = 0x29B638u;
            goto label_29b638;
        }
    }
    ctx->pc = 0x29B620u;
    // 0x29b620: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29b620u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29b624: 0xe4ed001c  swc1        $f13, 0x1C($a3)
    ctx->pc = 0x29b624u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 28), bits); }
    // 0x29b628: 0xe500001c  swc1        $f0, 0x1C($t0)
    ctx->pc = 0x29b628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 28), bits); }
    // 0x29b62c: 0x3e00008  jr          $ra
    ctx->pc = 0x29B62Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B62Cu;
        // 0x29b630: 0xe4e0007c  swc1        $f0, 0x7C($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 124), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B62Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B634u;
    // 0x29b634: 0x0  nop
    ctx->pc = 0x29b634u;
    // NOP
label_29b638:
    // 0x29b638: 0xe4ed001c  swc1        $f13, 0x1C($a3)
    ctx->pc = 0x29b638u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 28), bits); }
label_29b63c:
    // 0x29b63c: 0xe50c001c  swc1        $f12, 0x1C($t0)
    ctx->pc = 0x29b63cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 28), bits); }
    // 0x29b640: 0x3e00008  jr          $ra
    ctx->pc = 0x29B640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B640u;
        // 0x29b644: 0xe4ec007c  swc1        $f12, 0x7C($a3) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 124), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B648u;
}
