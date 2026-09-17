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

// Function: sub_0027F5D8
// Address: 0x27f5d8 - 0x27f788
void sub_0027F5D8_0x27f5d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027F5D8_0x27f5d8");
#endif

    switch (ctx->pc) {
        case 0x27f6e0u: goto label_27f6e0;
        default: break;
    }

    ctx->pc = 0x27f5d8u;

    // 0x27f5d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27f5d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27f5dc: 0xc7818e6c  lwc1        $f1, -0x7194($gp)
    ctx->pc = 0x27f5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27f5e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27f5e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27f5e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27f5e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f5e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x27f5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x27f5ec: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x27f5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x27f5f0: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x27f5f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x27f5f4: 0xc7808e70  lwc1        $f0, -0x7190($gp)
    ctx->pc = 0x27f5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f5f8: 0x86030012  lh          $v1, 0x12($s0)
    ctx->pc = 0x27f5f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x27f5fc: 0xaf80ca88  sw          $zero, -0x3578($gp)
    ctx->pc = 0x27f5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953608), GPR_U32(ctx, 0));
    // 0x27f600: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x27f600u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27f604: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27f604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27f608: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x27f608u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x27f60c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27f60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27f610: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x27f610u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x27f614: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x27f614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
    // 0x27f618: 0x246339d0  addiu       $v1, $v1, 0x39D0
    ctx->pc = 0x27f618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14800));
    // 0x27f61c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x27f61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27f620: 0xe461003c  swc1        $f1, 0x3C($v1)
    ctx->pc = 0x27f620u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    // 0x27f624: 0xe4600040  swc1        $f0, 0x40($v1)
    ctx->pc = 0x27f624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x27f628: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x27f628u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x27f62c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x27f62cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x27f630: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x27f630u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x27f634: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x27f634u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x27f638: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x27f638u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x27f63c: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x27f63cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x27f640: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x27f640u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x27f644: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x27f644u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
    // 0x27f648: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x27f648u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
    // 0x27f64c: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x27f64cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    // 0x27f650: 0xac60002c  sw          $zero, 0x2C($v1)
    ctx->pc = 0x27f650u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
    // 0x27f654: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x27f654u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
    // 0x27f658: 0xac600034  sw          $zero, 0x34($v1)
    ctx->pc = 0x27f658u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 0));
    // 0x27f65c: 0xac600038  sw          $zero, 0x38($v1)
    ctx->pc = 0x27f65cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
    // 0x27f660: 0xac600044  sw          $zero, 0x44($v1)
    ctx->pc = 0x27f660u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 0));
    // 0x27f664: 0xac600048  sw          $zero, 0x48($v1)
    ctx->pc = 0x27f664u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 0));
    // 0x27f668: 0xac60004c  sw          $zero, 0x4C($v1)
    ctx->pc = 0x27f668u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 0));
    // 0x27f66c: 0xac600050  sw          $zero, 0x50($v1)
    ctx->pc = 0x27f66cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 0));
    // 0x27f670: 0x8605003e  lh          $a1, 0x3E($s0)
    ctx->pc = 0x27f670u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 62)));
    // 0x27f674: 0x10a4000a  beq         $a1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x27F674u;
    {
        const bool branch_taken_0x27f674 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x27F678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F674u;
        // 0x27f678: 0x28a20008  slti        $v0, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f674) {
            ctx->pc = 0x27F6A0u;
            goto label_27f6a0;
        }
    }
    ctx->pc = 0x27F67Cu;
    // 0x27f67c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27F67Cu;
    {
        const bool branch_taken_0x27f67c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F67Cu;
        // 0x27f680: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f67c) {
            ctx->pc = 0x27F698u;
            goto label_27f698;
        }
    }
    ctx->pc = 0x27F684u;
    // 0x27f684: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x27f684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27f688: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27F688u;
    {
        const bool branch_taken_0x27f688 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x27f688) {
            ctx->pc = 0x27F6A0u;
            goto label_27f6a0;
        }
    }
    ctx->pc = 0x27F690u;
    // 0x27f690: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x27F690u;
    {
        const bool branch_taken_0x27f690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f690) {
            ctx->pc = 0x27F6B0u;
            goto label_27f6b0;
        }
    }
    ctx->pc = 0x27F698u;
label_27f698:
    // 0x27f698: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27F698u;
    {
        const bool branch_taken_0x27f698 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x27f698) {
            ctx->pc = 0x27F6B0u;
            goto label_27f6b0;
        }
    }
    ctx->pc = 0x27F6A0u;
label_27f6a0:
    // 0x27f6a0: 0xc7808e74  lwc1        $f0, -0x718C($gp)
    ctx->pc = 0x27f6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f6a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x27F6A4u;
    {
        const bool branch_taken_0x27f6a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F6A4u;
        // 0x27f6a8: 0xe4600028  swc1        $f0, 0x28($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f6a4) {
            ctx->pc = 0x27F6B8u;
            goto label_27f6b8;
        }
    }
    ctx->pc = 0x27F6ACu;
    // 0x27f6ac: 0x0  nop
    ctx->pc = 0x27f6acu;
    // NOP
label_27f6b0:
    // 0x27f6b0: 0xc7808e78  lwc1        $f0, -0x7188($gp)
    ctx->pc = 0x27f6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f6b4: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x27f6b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
label_27f6b8:
    // 0x27f6b8: 0x8602007a  lh          $v0, 0x7A($s0)
    ctx->pc = 0x27f6b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 122)));
    // 0x27f6bc: 0xc7818e7c  lwc1        $f1, -0x7184($gp)
    ctx->pc = 0x27f6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27f6c0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x27f6c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27f6c4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x27f6c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x27f6c8: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x27f6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f6cc: 0xc7948e80  lwc1        $f20, -0x7180($gp)
    ctx->pc = 0x27f6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27f6d0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x27f6d0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x27f6d4: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x27f6d4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x27f6d8: 0xc04753a  jal         func_11D4E8
    ctx->pc = 0x27F6D8u;
    SET_GPR_U32(ctx, 31, 0x27F6E0u);
    ctx->pc = 0x27F6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F6D8u;
    // 0x27f6dc: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D4E8u, 0x27F6D8u, 0x27F6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F6E0u;
label_27f6e0:
    // 0x27f6e0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x27f6e0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x27f6e4: 0xc7808e84  lwc1        $f0, -0x717C($gp)
    ctx->pc = 0x27f6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f6e8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x27f6e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27f6ec: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x27F6ECu;
    {
        const bool branch_taken_0x27f6ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27f6ec) {
            ctx->pc = 0x27F700u;
            goto label_27f700;
        }
    }
    ctx->pc = 0x27F6F4u;
    // 0x27f6f4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x27F6F4u;
    {
        const bool branch_taken_0x27f6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F6F4u;
        // 0x27f6f8: 0x46140881  sub.s       $f2, $f1, $f20 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f6f4) {
            ctx->pc = 0x27F714u;
            goto label_27f714;
        }
    }
    ctx->pc = 0x27F6FCu;
    // 0x27f6fc: 0x0  nop
    ctx->pc = 0x27f6fcu;
    // NOP
label_27f700:
    // 0x27f700: 0xc7808e88  lwc1        $f0, -0x7178($gp)
    ctx->pc = 0x27f700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f704: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27f704u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27f708: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x27F708u;
    {
        const bool branch_taken_0x27f708 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27F70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F708u;
        // 0x27f70c: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f708) {
            ctx->pc = 0x27F714u;
            goto label_27f714;
        }
    }
    ctx->pc = 0x27F710u;
    // 0x27f710: 0x46140880  add.s       $f2, $f1, $f20
    ctx->pc = 0x27f710u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
label_27f714:
    // 0x27f714: 0xe6020074  swc1        $f2, 0x74($s0)
    ctx->pc = 0x27f714u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x27f718: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x27f718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27f71c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27f71cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f720: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x27f720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27f724: 0x3e00008  jr          $ra
    ctx->pc = 0x27F724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F724u;
        // 0x27f728: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F72Cu;
    // 0x27f72c: 0x0  nop
    ctx->pc = 0x27f72cu;
    // NOP
    // 0x27f730: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x27f730u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x27f734: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x27f734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x27f738: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x27f738u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x27f73c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x27f73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x27f740: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x27f740u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x27f744: 0x3c010017  lui         $at, 0x17
    ctx->pc = 0x27f744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)23 << 16));
    // 0x27f748: 0x242139d0  addiu       $at, $at, 0x39D0
    ctx->pc = 0x27f748u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 14800));
    // 0x27f74c: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x27f74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x27f750: 0xe44d0040  swc1        $f13, 0x40($v0)
    ctx->pc = 0x27f750u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x27f754: 0x3e00008  jr          $ra
    ctx->pc = 0x27F754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F754u;
        // 0x27f758: 0xe44c003c  swc1        $f12, 0x3C($v0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F75Cu;
    // 0x27f75c: 0x0  nop
    ctx->pc = 0x27f75cu;
    // NOP
    // 0x27f760: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x27f760u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x27f764: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27f764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27f768: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27f768u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27f76c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27f76cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27f770: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x27f770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x27f774: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x27f774u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x27f778: 0x3c010017  lui         $at, 0x17
    ctx->pc = 0x27f778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)23 << 16));
    // 0x27f77c: 0x24213a0c  addiu       $at, $at, 0x3A0C
    ctx->pc = 0x27f77cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 14860));
    // 0x27f780: 0x3e00008  jr          $ra
    ctx->pc = 0x27F780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F780u;
        // 0x27f784: 0x221021  addu        $v0, $at, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F788u;
}
