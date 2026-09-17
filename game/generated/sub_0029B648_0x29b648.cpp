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

// Function: sub_0029B648
// Address: 0x29b648 - 0x29b7e0
void sub_0029B648_0x29b648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B648_0x29b648");
#endif

    switch (ctx->pc) {
        case 0x29b7b8u: goto label_29b7b8;
        default: break;
    }

    ctx->pc = 0x29b648u;

    // 0x29b648: 0x8c830150  lw          $v1, 0x150($a0)
    ctx->pc = 0x29b648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x29b64c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x29b64cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x29b650: 0x3c01003c  lui         $at, 0x3C
    ctx->pc = 0x29b650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)60 << 16));
    // 0x29b654: 0x2421c658  addiu       $at, $at, -0x39A8
    ctx->pc = 0x29b654u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294952536));
    // 0x29b658: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x29b658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x29b65c: 0xc781b690  lwc1        $f1, -0x4970($gp)
    ctx->pc = 0x29b65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294948496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b660: 0xc46500d4  lwc1        $f5, 0xD4($v1)
    ctx->pc = 0x29b660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x29b664: 0x24e30090  addiu       $v1, $a3, 0x90
    ctx->pc = 0x29b664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 144));
    // 0x29b668: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x29b668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b66c: 0x24e80060  addiu       $t0, $a3, 0x60
    ctx->pc = 0x29b66cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 96));
    // 0x29b670: 0x3c014360  lui         $at, 0x4360
    ctx->pc = 0x29b670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17248 << 16));
    // 0x29b674: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x29b674u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x29b678: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x29b678u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x29b67c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x29b67cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x29b680: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x29b680u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x29b684: 0x3c014160  lui         $at, 0x4160
    ctx->pc = 0x29b684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16736 << 16));
    // 0x29b688: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x29b688u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x29b68c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x29b68cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29b690: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x29b690u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x29b694: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x29b694u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x29b698: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x29b698u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x29b69c: 0xe5000004  swc1        $f0, 0x4($t0)
    ctx->pc = 0x29b69cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x29b6a0: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x29b6a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x29b6a4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x29b6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b6a8: 0xc780b690  lwc1        $f0, -0x4970($gp)
    ctx->pc = 0x29b6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294948496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b6ac: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x29b6acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x29b6b0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x29b6b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29b6b4: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x29b6b4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x29b6b8: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x29b6b8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x29b6bc: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x29b6bcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x29b6c0: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x29b6c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x29b6c4: 0x14c0001c  bnez        $a2, . + 4 + (0x1C << 2)
    ctx->pc = 0x29B6C4u;
    {
        const bool branch_taken_0x29b6c4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B6C4u;
        // 0x29b6c8: 0xe4e20034  swc1        $f2, 0x34($a3) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b6c4) {
            ctx->pc = 0x29B738u;
            goto label_29b738;
        }
    }
    ctx->pc = 0x29B6CCu;
    // 0x29b6cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29b6ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29b6d0: 0xe4e00030  swc1        $f0, 0x30($a3)
    ctx->pc = 0x29b6d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 48), bits); }
    // 0x29b6d4: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x29b6d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x29b6d8: 0x8c820160  lw          $v0, 0x160($a0)
    ctx->pc = 0x29b6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x29b6dc: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x29B6DCu;
    {
        const bool branch_taken_0x29b6dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B6DCu;
        // 0x29b6e0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b6dc) {
            ctx->pc = 0x29B728u;
            goto label_29b728;
        }
    }
    ctx->pc = 0x29B6E4u;
    // 0x29b6e4: 0x14a20010  bne         $a1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x29B6E4u;
    {
        const bool branch_taken_0x29b6e4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x29b6e4) {
            ctx->pc = 0x29B728u;
            goto label_29b728;
        }
    }
    ctx->pc = 0x29B6ECu;
    // 0x29b6ec: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x29b6ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b6f0: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x29B6F0u;
    {
        const bool branch_taken_0x29b6f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29b6f0) {
            ctx->pc = 0x29B728u;
            goto label_29b728;
        }
    }
    ctx->pc = 0x29B6F8u;
    // 0x29b6f8: 0x3c014212  lui         $at, 0x4212
    ctx->pc = 0x29b6f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16914 << 16));
    // 0x29b6fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29b6fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29b700: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x29b700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x29b704: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x29b704u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29b708: 0x0  nop
    ctx->pc = 0x29b708u;
    // NOP
    // 0x29b70c: 0x0  nop
    ctx->pc = 0x29b70cu;
    // NOP
    // 0x29b710: 0x46002803  div.s       $f0, $f5, $f0
    ctx->pc = 0x29b710u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[5] * 0.0f); } else ctx->f[0] = ctx->f[5] / ctx->f[0];
    // 0x29b714: 0x3c014331  lui         $at, 0x4331
    ctx->pc = 0x29b714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17201 << 16));
    // 0x29b718: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x29b718u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x29b71c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x29b71cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29b720: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x29B720u;
    {
        const bool branch_taken_0x29b720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B720u;
        // 0x29b724: 0x46020842  mul.s       $f1, $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b720) {
            ctx->pc = 0x29B79Cu;
            goto label_29b79c;
        }
    }
    ctx->pc = 0x29B728u;
label_29b728:
    // 0x29b728: 0x3c014331  lui         $at, 0x4331
    ctx->pc = 0x29b728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17201 << 16));
    // 0x29b72c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29b72cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29b730: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x29B730u;
    {
        const bool branch_taken_0x29b730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B730u;
        // 0x29b734: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b730) {
            ctx->pc = 0x29B7B0u;
            goto label_29b7b0;
        }
    }
    ctx->pc = 0x29B738u;
label_29b738:
    // 0x29b738: 0x3c014420  lui         $at, 0x4420
    ctx->pc = 0x29b738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17440 << 16));
    // 0x29b73c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x29b73cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x29b740: 0xe4e30030  swc1        $f3, 0x30($a3)
    ctx->pc = 0x29b740u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 48), bits); }
    // 0x29b744: 0xe4e30000  swc1        $f3, 0x0($a3)
    ctx->pc = 0x29b744u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x29b748: 0x8c820160  lw          $v0, 0x160($a0)
    ctx->pc = 0x29b748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x29b74c: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x29B74Cu;
    {
        const bool branch_taken_0x29b74c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B74Cu;
        // 0x29b750: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b74c) {
            ctx->pc = 0x29B7A8u;
            goto label_29b7a8;
        }
    }
    ctx->pc = 0x29B754u;
    // 0x29b754: 0x14a20014  bne         $a1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x29B754u;
    {
        const bool branch_taken_0x29b754 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x29b754) {
            ctx->pc = 0x29B7A8u;
            goto label_29b7a8;
        }
    }
    ctx->pc = 0x29B75Cu;
    // 0x29b75c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29b75cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29b760: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x29b760u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b764: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x29B764u;
    {
        const bool branch_taken_0x29b764 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29b764) {
            ctx->pc = 0x29B7A8u;
            goto label_29b7a8;
        }
    }
    ctx->pc = 0x29B76Cu;
    // 0x29b76c: 0x3c014212  lui         $at, 0x4212
    ctx->pc = 0x29b76cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16914 << 16));
    // 0x29b770: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29b770u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29b774: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x29b774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x29b778: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x29b778u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29b77c: 0x0  nop
    ctx->pc = 0x29b77cu;
    // NOP
    // 0x29b780: 0x0  nop
    ctx->pc = 0x29b780u;
    // NOP
    // 0x29b784: 0x46002803  div.s       $f0, $f5, $f0
    ctx->pc = 0x29b784u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[5] * 0.0f); } else ctx->f[0] = ctx->f[5] / ctx->f[0];
    // 0x29b788: 0x3c01432f  lui         $at, 0x432F
    ctx->pc = 0x29b788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17199 << 16));
    // 0x29b78c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x29b78cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x29b790: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x29b790u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29b794: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x29b794u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x29b798: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x29b798u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_29b79c:
    // 0x29b79c: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x29b79cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x29b7a0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x29B7A0u;
    {
        const bool branch_taken_0x29b7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B7A0u;
        // 0x29b7a4: 0xe5010000  swc1        $f1, 0x0($t0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b7a0) {
            ctx->pc = 0x29B7B4u;
            goto label_29b7b4;
        }
    }
    ctx->pc = 0x29B7A8u;
label_29b7a8:
    // 0x29b7a8: 0xc7809054  lwc1        $f0, -0x6FAC($gp)
    ctx->pc = 0x29b7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b7ac: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x29b7acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_29b7b0:
    // 0x29b7b0: 0xe4e00060  swc1        $f0, 0x60($a3)
    ctx->pc = 0x29b7b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 96), bits); }
label_29b7b4:
    // 0x29b7b4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x29b7b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29b7b8:
    // 0x29b7b8: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x29b7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x29b7bc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x29b7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x29b7c0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x29b7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x29b7c4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x29b7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x29b7c8: 0x28830004  slti        $v1, $a0, 0x4
    ctx->pc = 0x29b7c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x29b7cc: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x29b7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x29b7d0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x29B7D0u;
    {
        const bool branch_taken_0x29b7d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B7D0u;
        // 0x29b7d4: 0xe44c001c  swc1        $f12, 0x1C($v0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b7d0) {
            ctx->pc = 0x29B7B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29b7b8;
        }
    }
    ctx->pc = 0x29B7D8u;
    // 0x29b7d8: 0x3e00008  jr          $ra
    ctx->pc = 0x29B7D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B7D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B7E0u;
}
