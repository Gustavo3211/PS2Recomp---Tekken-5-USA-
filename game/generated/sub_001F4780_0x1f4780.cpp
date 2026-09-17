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

// Function: sub_001F4780
// Address: 0x1f4780 - 0x1f4d88
void sub_001F4780_0x1f4780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F4780_0x1f4780");
#endif

    switch (ctx->pc) {
        case 0x1f47a4u: goto label_1f47a4;
        case 0x1f48a0u: goto label_1f48a0;
        case 0x1f48e0u: goto label_1f48e0;
        case 0x1f48ecu: goto label_1f48ec;
        case 0x1f4900u: goto label_1f4900;
        case 0x1f4910u: goto label_1f4910;
        case 0x1f49d4u: goto label_1f49d4;
        case 0x1f4a18u: goto label_1f4a18;
        case 0x1f4a24u: goto label_1f4a24;
        case 0x1f4a38u: goto label_1f4a38;
        case 0x1f4a48u: goto label_1f4a48;
        case 0x1f4b7cu: goto label_1f4b7c;
        case 0x1f4b88u: goto label_1f4b88;
        case 0x1f4ba0u: goto label_1f4ba0;
        case 0x1f4c40u: goto label_1f4c40;
        case 0x1f4c4cu: goto label_1f4c4c;
        case 0x1f4c60u: goto label_1f4c60;
        case 0x1f4cd4u: goto label_1f4cd4;
        case 0x1f4ce0u: goto label_1f4ce0;
        case 0x1f4cf8u: goto label_1f4cf8;
        default: break;
    }

    ctx->pc = 0x1f4780u;

    // 0x1f4780: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1f4780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1f4784: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x1f4784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x1f4788: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x1f4788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x1f478c: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1f478cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1f4790: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x1f4790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x1f4794: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x1f4794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x1f4798: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x1f4798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x1f479c: 0xc08215c  jal         func_208570
    ctx->pc = 0x1F479Cu;
    SET_GPR_U32(ctx, 31, 0x1F47A4u);
    ctx->pc = 0x1F47A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F479Cu;
    // 0x1f47a0: 0x3c14003b  lui         $s4, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)59 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208570u, 0x1F479Cu, 0x1F47A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F47A4u;
label_1f47a4:
    // 0x1f47a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f47a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f47a8: 0x268288d0  addiu       $v0, $s4, -0x7730
    ctx->pc = 0x1f47a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294936784));
    // 0x1f47ac: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1f47acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1f47b0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1f47b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f47b4: 0x24720750  addiu       $s2, $v1, 0x750
    ctx->pc = 0x1f47b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1872));
    // 0x1f47b8: 0x24910750  addiu       $s1, $a0, 0x750
    ctx->pc = 0x1f47b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 1872));
    // 0x1f47bc: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x1f47bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f47c0: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x1f47c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f47c4: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1f47c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f47c8: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x1f47c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f47cc: 0x46031101  sub.s       $f4, $f2, $f3
    ctx->pc = 0x1f47ccu;
    ctx->f[4] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x1f47d0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f47d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1f47d4: 0x4604201a  mula.s      $f4, $f4
    ctx->pc = 0x1f47d4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1f47d8: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x1f47d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x1f47dc: 0x46000104  c1          0x104
    ctx->pc = 0x1f47dcu;
    ctx->f[4] = FPU_SQRT_S(ctx->f[0]);
    // 0x1f47e0: 0x24a2fffc  addiu       $v0, $a1, -0x4
    ctx->pc = 0x1f47e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x1f47e4: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x1f47e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1f47e8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F47E8u;
    {
        const bool branch_taken_0x1f47e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F47ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F47E8u;
        // 0x1f47ec: 0xe7849724  swc1        $f4, -0x68DC($gp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294940452), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f47e8) {
            ctx->pc = 0x1F4814u;
            goto label_1f4814;
        }
    }
    ctx->pc = 0x1F47F0u;
    // 0x1f47f0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1f47f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1f47f4: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F47F4u;
    {
        const bool branch_taken_0x1f47f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F47F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F47F4u;
        // 0x1f47f8: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f47f4) {
            ctx->pc = 0x1F4814u;
            goto label_1f4814;
        }
    }
    ctx->pc = 0x1F47FCu;
    // 0x1f47fc: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F47FCu;
    {
        const bool branch_taken_0x1f47fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F4800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F47FCu;
        // 0x1f4800: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f47fc) {
            ctx->pc = 0x1F4814u;
            goto label_1f4814;
        }
    }
    ctx->pc = 0x1F4804u;
    // 0x1f4804: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F4804u;
    {
        const bool branch_taken_0x1f4804 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F4808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4804u;
        // 0x1f4808: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4804) {
            ctx->pc = 0x1F4814u;
            goto label_1f4814;
        }
    }
    ctx->pc = 0x1F480Cu;
    // 0x1f480c: 0x14a200b6  bne         $a1, $v0, . + 4 + (0xB6 << 2)
    ctx->pc = 0x1F480Cu;
    {
        const bool branch_taken_0x1f480c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F4810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F480Cu;
        // 0x1f4810: 0x268688d0  addiu       $a2, $s4, -0x7730 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 4294936784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f480c) {
            ctx->pc = 0x1F4AE8u;
            goto label_1f4ae8;
        }
    }
    ctx->pc = 0x1F4814u;
label_1f4814:
    // 0x1f4814: 0xc7849724  lwc1        $f4, -0x68DC($gp)
    ctx->pc = 0x1f4814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1f4818: 0xc7808040  lwc1        $f0, -0x7FC0($gp)
    ctx->pc = 0x1f4818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f481c: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x1f481cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f4820: 0x4502009d  bc1fl       . + 4 + (0x9D << 2)
    ctx->pc = 0x1F4820u;
    {
        const bool branch_taken_0x1f4820 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f4820) {
            ctx->pc = 0x1F4824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F4820u;
            // 0x1f4824: 0xc6400000  lwc1        $f0, 0x0($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F4A98u;
            goto label_1f4a98;
        }
    }
    ctx->pc = 0x1F4828u;
    // 0x1f4828: 0x3c130015  lui         $s3, 0x15
    ctx->pc = 0x1f4828u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)21 << 16));
    // 0x1f482c: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x1f482cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f4830: 0x266255a0  addiu       $v0, $s3, 0x55A0
    ctx->pc = 0x1f4830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 21920));
    // 0x1f4834: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1f4834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f4838: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x1f4838u;
    { uint32_t bits = FAST_READ32(0x1555A8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f483c: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x1f483cu;
    { uint32_t bits = FAST_READ32(0x1555A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f4840: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1f4840u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1f4844: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x1f4844u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x1f4848: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x1f4848u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x1f484c: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x1f484cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x1f4850: 0x46000004  c1          0x4
    ctx->pc = 0x1f4850u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1f4854: 0x3c014568  lui         $at, 0x4568
    ctx->pc = 0x1f4854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17768 << 16));
    // 0x1f4858: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1f4858u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f485c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1f485cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f4860: 0x4500003f  bc1f        . + 4 + (0x3F << 2)
    ctx->pc = 0x1F4860u;
    {
        const bool branch_taken_0x1f4860 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F4864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4860u;
        // 0x1f4864: 0x266255a0  addiu       $v0, $s3, 0x55A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 21920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4860) {
            ctx->pc = 0x1F4960u;
            goto label_1f4960;
        }
    }
    ctx->pc = 0x1F4868u;
    // 0x1f4868: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1f4868u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f486c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f486cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f4870: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f4870u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f4874: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x1f4874u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1f4878: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x1f4878u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1f487c: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x1f487cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1f4880: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1f4880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1f4884: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1f4884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f4888: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1f4888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f488c: 0xc44c0008  lwc1        $f12, 0x8($v0)
    ctx->pc = 0x1f488cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f4890: 0xc62d0000  lwc1        $f13, 0x0($s1)
    ctx->pc = 0x1f4890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f4894: 0x460c0301  sub.s       $f12, $f0, $f12
    ctx->pc = 0x1f4894u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x1f4898: 0xc047534  jal         func_11D4D0
    ctx->pc = 0x1F4898u;
    SET_GPR_U32(ctx, 31, 0x1F48A0u);
    ctx->pc = 0x1F489Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4898u;
    // 0x1f489c: 0x46026b41  sub.s       $f13, $f13, $f2 (Delay Slot)
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[2]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D4D0u, 0x1F4898u, 0x1F48A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F48A0u;
label_1f48a0:
    // 0x1f48a0: 0xc7818044  lwc1        $f1, -0x7FBC($gp)
    ctx->pc = 0x1f48a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f48a4: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x1f48a4u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x1f48a8: 0x460c0834  c.lt.s      $f1, $f12
    ctx->pc = 0x1f48a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f48ac: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1F48ACu;
    {
        const bool branch_taken_0x1f48ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f48ac) {
            ctx->pc = 0x1F48C0u;
            goto label_1f48c0;
        }
    }
    ctx->pc = 0x1F48B4u;
    // 0x1f48b4: 0xc7808048  lwc1        $f0, -0x7FB8($gp)
    ctx->pc = 0x1f48b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f48b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1F48B8u;
    {
        const bool branch_taken_0x1f48b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F48BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F48B8u;
        // 0x1f48bc: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f48b8) {
            ctx->pc = 0x1F48D8u;
            goto label_1f48d8;
        }
    }
    ctx->pc = 0x1F48C0u;
label_1f48c0:
    // 0x1f48c0: 0xc780804c  lwc1        $f0, -0x7FB4($gp)
    ctx->pc = 0x1f48c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f48c4: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1f48c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f48c8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1F48C8u;
    {
        const bool branch_taken_0x1f48c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f48c8) {
            ctx->pc = 0x1F48D8u;
            goto label_1f48d8;
        }
    }
    ctx->pc = 0x1F48D0u;
    // 0x1f48d0: 0xc7808050  lwc1        $f0, -0x7FB0($gp)
    ctx->pc = 0x1f48d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f48d4: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x1f48d4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_1f48d8:
    // 0x1f48d8: 0xc084cb0  jal         func_2132C0
    ctx->pc = 0x1F48D8u;
    SET_GPR_U32(ctx, 31, 0x1F48E0u);
    ctx->pc = 0x1F48DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F48D8u;
    // 0x1f48dc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2132C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2132C0u, 0x1F48D8u, 0x1F48E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F48E0u;
label_1f48e0:
    // 0x1f48e0: 0x266555a0  addiu       $a1, $s3, 0x55A0
    ctx->pc = 0x1f48e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 21920));
    // 0x1f48e4: 0xc08481e  jal         func_212078
    ctx->pc = 0x1F48E4u;
    SET_GPR_U32(ctx, 31, 0x1F48ECu);
    ctx->pc = 0x1F48E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F48E4u;
    // 0x1f48e8: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212078u, 0x1F48E4u, 0x1F48ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F48ECu;
label_1f48ec:
    // 0x1f48ec: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x1f48ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f48f0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1f48f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f48f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f48f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f48f8: 0xc08491e  jal         func_212478
    ctx->pc = 0x1F48F8u;
    SET_GPR_U32(ctx, 31, 0x1F4900u);
    ctx->pc = 0x1F48FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F48F8u;
    // 0x1f48fc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212478u, 0x1F48F8u, 0x1F4900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4900u;
label_1f4900:
    // 0x1f4900: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f4900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4904: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1f4904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1f4908: 0xc084784  jal         func_211E10
    ctx->pc = 0x1F4908u;
    SET_GPR_U32(ctx, 31, 0x1F4910u);
    ctx->pc = 0x1F490Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4908u;
    // 0x1f490c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E10u, 0x1F4908u, 0x1F4910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4910u;
label_1f4910:
    // 0x1f4910: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x1f4910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f4914: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x1f4914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f4918: 0x268488d0  addiu       $a0, $s4, -0x7730
    ctx->pc = 0x1f4918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294936784));
    // 0x1f491c: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x1f491cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f4920: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1f4920u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f4924: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x1f4924u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1f4928: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1f4928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f492c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1f492cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1f4930: 0xe6220008  swc1        $f2, 0x8($s1)
    ctx->pc = 0x1f4930u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x1f4934: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1f4934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f4938: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x1f4938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f493c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1f493cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f4940: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f4940u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f4944: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1f4944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1f4948: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1f4948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f494c: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x1f494cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f4950: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1f4950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f4954: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f4954u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f4958: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1f4958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1f495c: 0x266255a0  addiu       $v0, $s3, 0x55A0
    ctx->pc = 0x1f495cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 21920));
label_1f4960:
    // 0x1f4960: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x1f4960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f4964: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x1f4964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f4968: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1f4968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f496c: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x1f496cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f4970: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1f4970u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1f4974: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1f4974u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1f4978: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x1f4978u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x1f497c: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x1f497cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x1f4980: 0x46000004  c1          0x4
    ctx->pc = 0x1f4980u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1f4984: 0x3c014568  lui         $at, 0x4568
    ctx->pc = 0x1f4984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17768 << 16));
    // 0x1f4988: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1f4988u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f498c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1f498cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f4990: 0x45000054  bc1f        . + 4 + (0x54 << 2)
    ctx->pc = 0x1F4990u;
    {
        const bool branch_taken_0x1f4990 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F4994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4990u;
        // 0x1f4994: 0xc7849724  lwc1        $f4, -0x68DC($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4990) {
            ctx->pc = 0x1F4AE4u;
            goto label_1f4ae4;
        }
    }
    ctx->pc = 0x1F4998u;
    // 0x1f4998: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1f4998u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f499c: 0x266255a0  addiu       $v0, $s3, 0x55A0
    ctx->pc = 0x1f499cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 21920));
    // 0x1f49a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f49a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f49a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f49a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f49a8: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x1f49a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1f49ac: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x1f49acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1f49b0: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x1f49b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1f49b4: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1f49b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1f49b8: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1f49b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f49bc: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x1f49bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f49c0: 0xc44c0008  lwc1        $f12, 0x8($v0)
    ctx->pc = 0x1f49c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f49c4: 0xc64d0000  lwc1        $f13, 0x0($s2)
    ctx->pc = 0x1f49c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f49c8: 0x460c0301  sub.s       $f12, $f0, $f12
    ctx->pc = 0x1f49c8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x1f49cc: 0xc047534  jal         func_11D4D0
    ctx->pc = 0x1F49CCu;
    SET_GPR_U32(ctx, 31, 0x1F49D4u);
    ctx->pc = 0x1F49D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F49CCu;
    // 0x1f49d0: 0x46026b41  sub.s       $f13, $f13, $f2 (Delay Slot)
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[2]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D4D0u, 0x1F49CCu, 0x1F49D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F49D4u;
label_1f49d4:
    // 0x1f49d4: 0xc7818054  lwc1        $f1, -0x7FAC($gp)
    ctx->pc = 0x1f49d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f49d8: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x1f49d8u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x1f49dc: 0x460c0834  c.lt.s      $f1, $f12
    ctx->pc = 0x1f49dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f49e0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1F49E0u;
    {
        const bool branch_taken_0x1f49e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f49e0) {
            ctx->pc = 0x1F49F8u;
            goto label_1f49f8;
        }
    }
    ctx->pc = 0x1F49E8u;
    // 0x1f49e8: 0xc7808058  lwc1        $f0, -0x7FA8($gp)
    ctx->pc = 0x1f49e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f49ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F49ECu;
    {
        const bool branch_taken_0x1f49ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F49F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F49ECu;
        // 0x1f49f0: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f49ec) {
            ctx->pc = 0x1F4A10u;
            goto label_1f4a10;
        }
    }
    ctx->pc = 0x1F49F4u;
    // 0x1f49f4: 0x0  nop
    ctx->pc = 0x1f49f4u;
    // NOP
label_1f49f8:
    // 0x1f49f8: 0xc780805c  lwc1        $f0, -0x7FA4($gp)
    ctx->pc = 0x1f49f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f49fc: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1f49fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f4a00: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1F4A00u;
    {
        const bool branch_taken_0x1f4a00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f4a00) {
            ctx->pc = 0x1F4A10u;
            goto label_1f4a10;
        }
    }
    ctx->pc = 0x1F4A08u;
    // 0x1f4a08: 0xc7808060  lwc1        $f0, -0x7FA0($gp)
    ctx->pc = 0x1f4a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f4a0c: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x1f4a0cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_1f4a10:
    // 0x1f4a10: 0xc084cb0  jal         func_2132C0
    ctx->pc = 0x1F4A10u;
    SET_GPR_U32(ctx, 31, 0x1F4A18u);
    ctx->pc = 0x1F4A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4A10u;
    // 0x1f4a14: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2132C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2132C0u, 0x1F4A10u, 0x1F4A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4A18u;
label_1f4a18:
    // 0x1f4a18: 0x266555a0  addiu       $a1, $s3, 0x55A0
    ctx->pc = 0x1f4a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 21920));
    // 0x1f4a1c: 0xc08481e  jal         func_212078
    ctx->pc = 0x1F4A1Cu;
    SET_GPR_U32(ctx, 31, 0x1F4A24u);
    ctx->pc = 0x1F4A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4A1Cu;
    // 0x1f4a20: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212078u, 0x1F4A1Cu, 0x1F4A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4A24u;
label_1f4a24:
    // 0x1f4a24: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x1f4a24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f4a28: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1f4a28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4a2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4a30: 0xc08491e  jal         func_212478
    ctx->pc = 0x1F4A30u;
    SET_GPR_U32(ctx, 31, 0x1F4A38u);
    ctx->pc = 0x1F4A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4A30u;
    // 0x1f4a34: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212478u, 0x1F4A30u, 0x1F4A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4A38u;
label_1f4a38:
    // 0x1f4a38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f4a38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4a3c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1f4a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1f4a40: 0xc084784  jal         func_211E10
    ctx->pc = 0x1F4A40u;
    SET_GPR_U32(ctx, 31, 0x1F4A48u);
    ctx->pc = 0x1F4A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4A40u;
    // 0x1f4a44: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E10u, 0x1F4A40u, 0x1F4A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4A48u;
label_1f4a48:
    // 0x1f4a48: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x1f4a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f4a4c: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x1f4a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f4a50: 0x268488d0  addiu       $a0, $s4, -0x7730
    ctx->pc = 0x1f4a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294936784));
    // 0x1f4a54: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x1f4a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f4a58: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1f4a58u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f4a5c: 0xe6410000  swc1        $f1, 0x0($s2)
    ctx->pc = 0x1f4a5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1f4a60: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1f4a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f4a64: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1f4a64u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1f4a68: 0xe6420008  swc1        $f2, 0x8($s2)
    ctx->pc = 0x1f4a68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x1f4a6c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1f4a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1f4a70: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x1f4a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f4a74: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1f4a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f4a78: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f4a78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f4a7c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1f4a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1f4a80: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1f4a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1f4a84: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x1f4a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f4a88: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1f4a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f4a8c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f4a8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f4a90: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1F4A90u;
    {
        const bool branch_taken_0x1f4a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4A90u;
        // 0x1f4a94: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4a90) {
            ctx->pc = 0x1F4AE0u;
            goto label_1f4ae0;
        }
    }
    ctx->pc = 0x1F4A98u;
label_1f4a98:
    // 0x1f4a98: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x1f4a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x1f4a9c: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x1f4a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f4aa0: 0x244255a0  addiu       $v0, $v0, 0x55A0
    ctx->pc = 0x1f4aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21920));
    // 0x1f4aa4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1f4aa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1f4aa8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1f4aa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1f4aac: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1f4aacu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f4ab0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f4ab0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f4ab4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1f4ab4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f4ab8: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1f4ab8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1f4abc: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x1f4abcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1555A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1555A0u, _value); } while (0); }
    // 0x1f4ac0: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1f4ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f4ac4: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x1f4ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f4ac8: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x1f4ac8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1555ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1555ACu, _value); } while (0); }
    // 0x1f4acc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f4accu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f4ad0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1f4ad0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1555A4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1555A4u, _value); } while (0);
    // 0x1f4ad4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1f4ad4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1f4ad8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F4AD8u;
    {
        const bool branch_taken_0x1f4ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4AD8u;
        // 0x1f4adc: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4ad8) {
            ctx->pc = 0x1F4AE4u;
            goto label_1f4ae4;
        }
    }
    ctx->pc = 0x1F4AE0u;
label_1f4ae0:
    // 0x1f4ae0: 0xc7849724  lwc1        $f4, -0x68DC($gp)
    ctx->pc = 0x1f4ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f4ae4:
    // 0x1f4ae4: 0x268688d0  addiu       $a2, $s4, -0x7730
    ctx->pc = 0x1f4ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 4294936784));
label_1f4ae8:
    // 0x1f4ae8: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1f4ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1f4aec: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x1f4aecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1f4af0: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x1f4af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1f4af4: 0x84e20040  lh          $v0, 0x40($a3)
    ctx->pc = 0x1f4af4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 64)));
    // 0x1f4af8: 0x84830040  lh          $v1, 0x40($a0)
    ctx->pc = 0x1f4af8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1f4afc: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1f4afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x1f4b00: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x1f4b00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
    // 0x1f4b04: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f4b04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f4b08: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1f4b08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1f4b0c: 0x651826  xor         $v1, $v1, $a1
    ctx->pc = 0x1f4b0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
    // 0x1f4b10: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x1f4b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f4b14: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1f4b14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f4b18: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x1f4b18u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1f4b1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f4b1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f4b20: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f4b20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f4b24: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f4b24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f4b28: 0x46002041  sub.s       $f1, $f4, $f0
    ctx->pc = 0x1f4b28u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x1f4b2c: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x1f4b2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f4b30: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1F4B30u;
    {
        const bool branch_taken_0x1f4b30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f4b30) {
            ctx->pc = 0x1F4B34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F4B30u;
            // 0x1f4b34: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F4B38u;
            goto label_1f4b38;
        }
    }
    ctx->pc = 0x1F4B38u;
label_1f4b38:
    // 0x1f4b38: 0xe4e401e4  swc1        $f4, 0x1E4($a3)
    ctx->pc = 0x1f4b38u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 484), bits); }
    // 0x1f4b3c: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x1f4b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x1f4b40: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1f4b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f4b44: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x1f4b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1f4b48: 0xc7809724  lwc1        $f0, -0x68DC($gp)
    ctx->pc = 0x1f4b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f4b4c: 0xe46001e4  swc1        $f0, 0x1E4($v1)
    ctx->pc = 0x1f4b4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 484), bits); }
    // 0x1f4b50: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f4b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1f4b54: 0xe44101c8  swc1        $f1, 0x1C8($v0)
    ctx->pc = 0x1f4b54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 456), bits); }
    // 0x1f4b58: 0xe44101cc  swc1        $f1, 0x1CC($v0)
    ctx->pc = 0x1f4b58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 460), bits); }
    // 0x1f4b5c: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x1f4b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1f4b60: 0xe46101c8  swc1        $f1, 0x1C8($v1)
    ctx->pc = 0x1f4b60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 456), bits); }
    // 0x1f4b64: 0xe46101cc  swc1        $f1, 0x1CC($v1)
    ctx->pc = 0x1f4b64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 460), bits); }
    // 0x1f4b68: 0x8c828880  lw          $v0, -0x7780($a0)
    ctx->pc = 0x1f4b68u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A8880u));
    // 0x1f4b6c: 0x14450032  bne         $v0, $a1, . + 4 + (0x32 << 2)
    ctx->pc = 0x1F4B6Cu;
    {
        const bool branch_taken_0x1f4b6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1f4b6c) {
            ctx->pc = 0x1F4C38u;
            goto label_1f4c38;
        }
    }
    ctx->pc = 0x1F4B74u;
    // 0x1f4b74: 0xc09d47a  jal         func_2751E8
    ctx->pc = 0x1F4B74u;
    SET_GPR_U32(ctx, 31, 0x1F4B7Cu);
    ctx->pc = 0x2751E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2751E8u, 0x1F4B74u, 0x1F4B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4B7Cu;
label_1f4b7c:
    // 0x1f4b7c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f4b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4b80: 0xc09d480  jal         func_275200
    ctx->pc = 0x1F4B80u;
    SET_GPR_U32(ctx, 31, 0x1F4B88u);
    ctx->pc = 0x1F4B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4B80u;
    // 0x1f4b84: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275200u, 0x1F4B80u, 0x1F4B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4B88u;
label_1f4b88:
    // 0x1f4b88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f4b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4b8c: 0x1200004f  beqz        $s0, . + 4 + (0x4F << 2)
    ctx->pc = 0x1F4B8Cu;
    {
        const bool branch_taken_0x1f4b8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4B8Cu;
        // 0x1f4b90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4b8c) {
            ctx->pc = 0x1F4CCCu;
            goto label_1f4ccc;
        }
    }
    ctx->pc = 0x1F4B94u;
    // 0x1f4b94: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x1f4b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x1f4b98: 0xc4451fc4  lwc1        $f5, 0x1FC4($v0)
    ctx->pc = 0x1f4b98u;
    { uint32_t bits = FAST_READ32(0x151FC4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1f4b9c: 0x0  nop
    ctx->pc = 0x1f4b9cu;
    // NOP
label_1f4ba0:
    // 0x1f4ba0: 0x8c820898  lw          $v0, 0x898($a0)
    ctx->pc = 0x1f4ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2200)));
    // 0x1f4ba4: 0x8c430088  lw          $v1, 0x88($v0)
    ctx->pc = 0x1f4ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1f4ba8: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1F4BA8u;
    {
        const bool branch_taken_0x1f4ba8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4BA8u;
        // 0x1f4bac: 0x24820750  addiu       $v0, $a0, 0x750 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1872));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4ba8) {
            ctx->pc = 0x1F4C10u;
            goto label_1f4c10;
        }
    }
    ctx->pc = 0x1F4BB0u;
    // 0x1f4bb0: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x1f4bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f4bb4: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1f4bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f4bb8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1f4bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f4bbc: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x1f4bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f4bc0: 0x46011901  sub.s       $f4, $f3, $f1
    ctx->pc = 0x1f4bc0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x1f4bc4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1f4bc4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1f4bc8: 0x4604201a  mula.s      $f4, $f4
    ctx->pc = 0x1f4bc8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1f4bcc: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x1f4bccu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x1f4bd0: 0x46000004  c1          0x4
    ctx->pc = 0x1f4bd0u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1f4bd4: 0xe48001e4  swc1        $f0, 0x1E4($a0)
    ctx->pc = 0x1f4bd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 484), bits); }
    // 0x1f4bd8: 0xe48001c8  swc1        $f0, 0x1C8($a0)
    ctx->pc = 0x1f4bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 456), bits); }
    // 0x1f4bdc: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x1f4bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f4be0: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x1f4be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f4be4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1f4be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f4be8: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x1f4be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f4bec: 0x46011101  sub.s       $f4, $f2, $f1
    ctx->pc = 0x1f4becu;
    ctx->f[4] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1f4bf0: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1f4bf0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1f4bf4: 0x4604201a  mula.s      $f4, $f4
    ctx->pc = 0x1f4bf4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1f4bf8: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x1f4bf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x1f4bfc: 0x46000004  c1          0x4
    ctx->pc = 0x1f4bfcu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1f4c00: 0xe48001e8  swc1        $f0, 0x1E8($a0)
    ctx->pc = 0x1f4c00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 488), bits); }
    // 0x1f4c04: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F4C04u;
    {
        const bool branch_taken_0x1f4c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4C04u;
        // 0x1f4c08: 0xe48501cc  swc1        $f5, 0x1CC($a0) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 460), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4c04) {
            ctx->pc = 0x1F4C20u;
            goto label_1f4c20;
        }
    }
    ctx->pc = 0x1F4C0Cu;
    // 0x1f4c0c: 0x0  nop
    ctx->pc = 0x1f4c0cu;
    // NOP
label_1f4c10:
    // 0x1f4c10: 0xe48501c8  swc1        $f5, 0x1C8($a0)
    ctx->pc = 0x1f4c10u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 456), bits); }
    // 0x1f4c14: 0xe48501e4  swc1        $f5, 0x1E4($a0)
    ctx->pc = 0x1f4c14u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 484), bits); }
    // 0x1f4c18: 0xe48501cc  swc1        $f5, 0x1CC($a0)
    ctx->pc = 0x1f4c18u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 460), bits); }
    // 0x1f4c1c: 0xe48501e8  swc1        $f5, 0x1E8($a0)
    ctx->pc = 0x1f4c1cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 488), bits); }
label_1f4c20:
    // 0x1f4c20: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1f4c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1f4c24: 0xb0102b  sltu        $v0, $a1, $s0
    ctx->pc = 0x1f4c24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1f4c28: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1F4C28u;
    {
        const bool branch_taken_0x1f4c28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F4C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4C28u;
        // 0x1f4c2c: 0x248408d0  addiu       $a0, $a0, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4c28) {
            ctx->pc = 0x1F4BA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f4ba0;
        }
    }
    ctx->pc = 0x1F4C30u;
    // 0x1f4c30: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1F4C30u;
    {
        const bool branch_taken_0x1f4c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4c30) {
            ctx->pc = 0x1F4CCCu;
            goto label_1f4ccc;
        }
    }
    ctx->pc = 0x1F4C38u;
label_1f4c38:
    // 0x1f4c38: 0xc09d47a  jal         func_2751E8
    ctx->pc = 0x1F4C38u;
    SET_GPR_U32(ctx, 31, 0x1F4C40u);
    ctx->pc = 0x2751E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2751E8u, 0x1F4C38u, 0x1F4C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4C40u;
label_1f4c40:
    // 0x1f4c40: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f4c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4c44: 0xc09d480  jal         func_275200
    ctx->pc = 0x1F4C44u;
    SET_GPR_U32(ctx, 31, 0x1F4C4Cu);
    ctx->pc = 0x1F4C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4C44u;
    // 0x1f4c48: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275200u, 0x1F4C44u, 0x1F4C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4C4Cu;
label_1f4c4c:
    // 0x1f4c4c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f4c4cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4c50: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1F4C50u;
    {
        const bool branch_taken_0x1f4c50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4C50u;
        // 0x1f4c54: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4c50) {
            ctx->pc = 0x1F4CCCu;
            goto label_1f4ccc;
        }
    }
    ctx->pc = 0x1F4C58u;
    // 0x1f4c58: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x1f4c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x1f4c5c: 0xc4451fc4  lwc1        $f5, 0x1FC4($v0)
    ctx->pc = 0x1f4c5cu;
    { uint32_t bits = FAST_READ32(0x151FC4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f4c60:
    // 0x1f4c60: 0x24620750  addiu       $v0, $v1, 0x750
    ctx->pc = 0x1f4c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1872));
    // 0x1f4c64: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x1f4c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f4c68: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1f4c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f4c6c: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1f4c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f4c70: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1f4c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f4c74: 0x46021901  sub.s       $f4, $f3, $f2
    ctx->pc = 0x1f4c74u;
    ctx->f[4] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x1f4c78: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f4c78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1f4c7c: 0x4604201a  mula.s      $f4, $f4
    ctx->pc = 0x1f4c7cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1f4c80: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x1f4c80u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x1f4c84: 0x46000004  c1          0x4
    ctx->pc = 0x1f4c84u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1f4c88: 0xe46001e4  swc1        $f0, 0x1E4($v1)
    ctx->pc = 0x1f4c88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 484), bits); }
    // 0x1f4c8c: 0xe46001c8  swc1        $f0, 0x1C8($v1)
    ctx->pc = 0x1f4c8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 456), bits); }
    // 0x1f4c90: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x1f4c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f4c94: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x1f4c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f4c98: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1f4c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f4c9c: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x1f4c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f4ca0: 0x46011101  sub.s       $f4, $f2, $f1
    ctx->pc = 0x1f4ca0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1f4ca4: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1f4ca4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1f4ca8: 0x4604201a  mula.s      $f4, $f4
    ctx->pc = 0x1f4ca8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1f4cac: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x1f4cacu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x1f4cb0: 0x46000004  c1          0x4
    ctx->pc = 0x1f4cb0u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1f4cb4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1f4cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1f4cb8: 0xe46001e8  swc1        $f0, 0x1E8($v1)
    ctx->pc = 0x1f4cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 488), bits); }
    // 0x1f4cbc: 0x90102b  sltu        $v0, $a0, $s0
    ctx->pc = 0x1f4cbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1f4cc0: 0xe46501cc  swc1        $f5, 0x1CC($v1)
    ctx->pc = 0x1f4cc0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 460), bits); }
    // 0x1f4cc4: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x1F4CC4u;
    {
        const bool branch_taken_0x1f4cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F4CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4CC4u;
        // 0x1f4cc8: 0x246308d0  addiu       $v1, $v1, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4cc4) {
            ctx->pc = 0x1F4C60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f4c60;
        }
    }
    ctx->pc = 0x1F4CCCu;
label_1f4ccc:
    // 0x1f4ccc: 0xc09d47e  jal         func_2751F8
    ctx->pc = 0x1F4CCCu;
    SET_GPR_U32(ctx, 31, 0x1F4CD4u);
    ctx->pc = 0x2751F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2751F8u, 0x1F4CCCu, 0x1F4CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4CD4u;
label_1f4cd4:
    // 0x1f4cd4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f4cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4cd8: 0xc09d480  jal         func_275200
    ctx->pc = 0x1F4CD8u;
    SET_GPR_U32(ctx, 31, 0x1F4CE0u);
    ctx->pc = 0x1F4CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4CD8u;
    // 0x1f4cdc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275200u, 0x1F4CD8u, 0x1F4CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4CE0u;
label_1f4ce0:
    // 0x1f4ce0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f4ce0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4ce4: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1F4CE4u;
    {
        const bool branch_taken_0x1f4ce4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4CE4u;
        // 0x1f4ce8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4ce4) {
            ctx->pc = 0x1F4D64u;
            goto label_1f4d64;
        }
    }
    ctx->pc = 0x1F4CECu;
    // 0x1f4cec: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x1f4cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x1f4cf0: 0xc4451fc4  lwc1        $f5, 0x1FC4($v0)
    ctx->pc = 0x1f4cf0u;
    { uint32_t bits = FAST_READ32(0x151FC4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1f4cf4: 0x0  nop
    ctx->pc = 0x1f4cf4u;
    // NOP
label_1f4cf8:
    // 0x1f4cf8: 0x24620750  addiu       $v0, $v1, 0x750
    ctx->pc = 0x1f4cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1872));
    // 0x1f4cfc: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x1f4cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f4d00: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1f4d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f4d04: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1f4d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f4d08: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1f4d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f4d0c: 0x46021901  sub.s       $f4, $f3, $f2
    ctx->pc = 0x1f4d0cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x1f4d10: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f4d10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1f4d14: 0x4604201a  mula.s      $f4, $f4
    ctx->pc = 0x1f4d14u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1f4d18: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x1f4d18u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x1f4d1c: 0x46000004  c1          0x4
    ctx->pc = 0x1f4d1cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1f4d20: 0xe46001e4  swc1        $f0, 0x1E4($v1)
    ctx->pc = 0x1f4d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 484), bits); }
    // 0x1f4d24: 0xe46001c8  swc1        $f0, 0x1C8($v1)
    ctx->pc = 0x1f4d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 456), bits); }
    // 0x1f4d28: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x1f4d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f4d2c: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x1f4d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f4d30: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1f4d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f4d34: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x1f4d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f4d38: 0x46011101  sub.s       $f4, $f2, $f1
    ctx->pc = 0x1f4d38u;
    ctx->f[4] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1f4d3c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1f4d3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1f4d40: 0x4604201a  mula.s      $f4, $f4
    ctx->pc = 0x1f4d40u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1f4d44: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x1f4d44u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x1f4d48: 0x46000004  c1          0x4
    ctx->pc = 0x1f4d48u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1f4d4c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1f4d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1f4d50: 0xe46001e8  swc1        $f0, 0x1E8($v1)
    ctx->pc = 0x1f4d50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 488), bits); }
    // 0x1f4d54: 0x90102b  sltu        $v0, $a0, $s0
    ctx->pc = 0x1f4d54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1f4d58: 0xe46501cc  swc1        $f5, 0x1CC($v1)
    ctx->pc = 0x1f4d58u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 460), bits); }
    // 0x1f4d5c: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x1F4D5Cu;
    {
        const bool branch_taken_0x1f4d5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F4D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4D5Cu;
        // 0x1f4d60: 0x246308d0  addiu       $v1, $v1, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4d5c) {
            ctx->pc = 0x1F4CF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f4cf8;
        }
    }
    ctx->pc = 0x1F4D64u;
label_1f4d64:
    // 0x1f4d64: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x1f4d64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f4d68: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x1f4d68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f4d6c: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x1f4d6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f4d70: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x1f4d70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1f4d74: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1f4d74u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f4d78: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x1f4d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1f4d7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4D7Cu;
        // 0x1f4d80: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4D7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F4D84u;
    // 0x1f4d84: 0x0  nop
    ctx->pc = 0x1f4d84u;
    // NOP
    ctx->pc = 0x1f4d88u;
}
