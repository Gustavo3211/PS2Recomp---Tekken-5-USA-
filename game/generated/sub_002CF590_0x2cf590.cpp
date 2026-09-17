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

// Function: sub_002CF590
// Address: 0x2cf590 - 0x2cf7a0
void sub_002CF590_0x2cf590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF590_0x2cf590");
#endif

    switch (ctx->pc) {
        case 0x2cf5bcu: goto label_2cf5bc;
        case 0x2cf5f0u: goto label_2cf5f0;
        case 0x2cf5fcu: goto label_2cf5fc;
        case 0x2cf630u: goto label_2cf630;
        case 0x2cf6b8u: goto label_2cf6b8;
        case 0x2cf6d8u: goto label_2cf6d8;
        case 0x2cf724u: goto label_2cf724;
        case 0x2cf730u: goto label_2cf730;
        case 0x2cf738u: goto label_2cf738;
        case 0x2cf780u: goto label_2cf780;
        default: break;
    }

    ctx->pc = 0x2cf590u;

    // 0x2cf590: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2cf590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2cf594: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2cf594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2cf598: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cf598u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf59c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2cf59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2cf5a0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2cf5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2cf5a4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2cf5a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf5a8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2cf5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2cf5ac: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2cf5acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf5b0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2cf5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2cf5b4: 0xc096f18  jal         func_25BC60
    ctx->pc = 0x2CF5B4u;
    SET_GPR_U32(ctx, 31, 0x2CF5BCu);
    ctx->pc = 0x2CF5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF5B4u;
    // 0x2cf5b8: 0xe7b40038  swc1        $f20, 0x38($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BC60u, 0x2CF5B4u, 0x2CF5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF5BCu;
label_2cf5bc:
    // 0x2cf5bc: 0xc60000a8  lwc1        $f0, 0xA8($s0)
    ctx->pc = 0x2cf5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cf5c0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2cf5c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf5c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2cf5c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2cf5c8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2cf5c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2cf5cc: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x2cf5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x2cf5d0: 0x8e020898  lw          $v0, 0x898($s0)
    ctx->pc = 0x2cf5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2200)));
    // 0x2cf5d4: 0x460c0301  sub.s       $f12, $f0, $f12
    ctx->pc = 0x2cf5d4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x2cf5d8: 0x8c67003c  lw          $a3, 0x3C($v1)
    ctx->pc = 0x2cf5d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x2cf5dc: 0x8c510040  lw          $s1, 0x40($v0)
    ctx->pc = 0x2cf5dcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x2cf5e0: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2cf5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2cf5e4: 0x73fc2  srl         $a3, $a3, 31
    ctx->pc = 0x2cf5e4u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x2cf5e8: 0xc096d52  jal         func_25B548
    ctx->pc = 0x2CF5E8u;
    SET_GPR_U32(ctx, 31, 0x2CF5F0u);
    ctx->pc = 0x2CF5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF5E8u;
    // 0x2cf5ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B548u, 0x2CF5E8u, 0x2CF5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF5F0u;
label_2cf5f0:
    // 0x2cf5f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cf5f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf5f4: 0xc0af21a  jal         func_2BC868
    ctx->pc = 0x2CF5F4u;
    SET_GPR_U32(ctx, 31, 0x2CF5FCu);
    ctx->pc = 0x2CF5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF5F4u;
    // 0x2cf5f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC868u, 0x2CF5F4u, 0x2CF5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF5FCu;
label_2cf5fc:
    // 0x2cf5fc: 0x8e0307c8  lw          $v1, 0x7C8($s0)
    ctx->pc = 0x2cf5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1992)));
    // 0x2cf600: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cf600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cf604: 0x54620018  bnel        $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2CF604u;
    {
        const bool branch_taken_0x2cf604 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2cf604) {
            ctx->pc = 0x2CF608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF604u;
            // 0x2cf608: 0xc6240000  lwc1        $f4, 0x0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CF668u;
            goto label_2cf668;
        }
    }
    ctx->pc = 0x2CF60Cu;
    // 0x2cf60c: 0x8e0207fc  lw          $v0, 0x7FC($s0)
    ctx->pc = 0x2cf60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2044)));
    // 0x2cf610: 0x8e030804  lw          $v1, 0x804($s0)
    ctx->pc = 0x2cf610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2052)));
    // 0x2cf614: 0x2442f000  addiu       $v0, $v0, -0x1000
    ctx->pc = 0x2cf614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
    // 0x2cf618: 0x54620013  bnel        $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2CF618u;
    {
        const bool branch_taken_0x2cf618 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2cf618) {
            ctx->pc = 0x2CF61Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF618u;
            // 0x2cf61c: 0xc6240000  lwc1        $f4, 0x0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CF668u;
            goto label_2cf668;
        }
    }
    ctx->pc = 0x2CF620u;
    // 0x2cf620: 0x56600011  bnel        $s3, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2CF620u;
    {
        const bool branch_taken_0x2cf620 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cf620) {
            ctx->pc = 0x2CF624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF620u;
            // 0x2cf624: 0xc6240000  lwc1        $f4, 0x0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CF668u;
            goto label_2cf668;
        }
    }
    ctx->pc = 0x2CF628u;
    // 0x2cf628: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2cf628u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf62c: 0x0  nop
    ctx->pc = 0x2cf62cu;
    // NOP
label_2cf630:
    // 0x2cf630: 0x8e030898  lw          $v1, 0x898($s0)
    ctx->pc = 0x2cf630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2200)));
    // 0x2cf634: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x2cf634u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2cf638: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x2cf638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2cf63c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2cf63cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2cf640: 0x8c650040  lw          $a1, 0x40($v1)
    ctx->pc = 0x2cf640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x2cf644: 0x28e30003  slti        $v1, $a3, 0x3
    ctx->pc = 0x2cf644u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2cf648: 0xc48107b0  lwc1        $f1, 0x7B0($a0)
    ctx->pc = 0x2cf648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cf64c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2cf64cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf650: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2cf650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2cf654: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x2cf654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cf658: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2cf658u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2cf65c: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2CF65Cu;
    {
        const bool branch_taken_0x2cf65c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CF660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF65Cu;
        // 0x2cf660: 0xe4c107e0  swc1        $f1, 0x7E0($a2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 2016), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf65c) {
            ctx->pc = 0x2CF630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cf630;
        }
    }
    ctx->pc = 0x2CF664u;
    // 0x2cf664: 0xc6240000  lwc1        $f4, 0x0($s1)
    ctx->pc = 0x2cf664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2cf668:
    // 0x2cf668: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x2cf668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2cf66c: 0xc794937c  lwc1        $f20, -0x6C84($gp)
    ctx->pc = 0x2cf66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2cf670: 0xe6040024  swc1        $f4, 0x24($s0)
    ctx->pc = 0x2cf670u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x2cf674: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x2cf674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cf678: 0xe6020028  swc1        $f2, 0x28($s0)
    ctx->pc = 0x2cf678u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x2cf67c: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x2cf67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cf680: 0xe603002c  swc1        $f3, 0x2C($s0)
    ctx->pc = 0x2cf680u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x2cf684: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x2cf684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cf688: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2cf688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2cf68c: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2cf68cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2cf690: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x2cf690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cf694: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x2cf694u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x2cf698: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2cf698u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2cf69c: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x2cf69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cf6a0: 0xe6040068  swc1        $f4, 0x68($s0)
    ctx->pc = 0x2cf6a0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2cf6a4: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2cf6a4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2cf6a8: 0xe602006c  swc1        $f2, 0x6C($s0)
    ctx->pc = 0x2cf6a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 108), bits); }
    // 0x2cf6ac: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2cf6acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x2cf6b0: 0xc0968aa  jal         func_25A2A8
    ctx->pc = 0x2CF6B0u;
    SET_GPR_U32(ctx, 31, 0x2CF6B8u);
    ctx->pc = 0x2CF6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF6B0u;
    // 0x2cf6b4: 0xe6030070  swc1        $f3, 0x70($s0) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A2A8u, 0x2CF6B0u, 0x2CF6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF6B8u;
label_2cf6b8:
    // 0x2cf6b8: 0x8602007a  lh          $v0, 0x7A($s0)
    ctx->pc = 0x2cf6b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 122)));
    // 0x2cf6bc: 0xc7819380  lwc1        $f1, -0x6C80($gp)
    ctx->pc = 0x2cf6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cf6c0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2cf6c0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x2cf6c4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2cf6c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2cf6c8: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2cf6c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2cf6cc: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x2cf6ccu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x2cf6d0: 0xc04753a  jal         func_11D4E8
    ctx->pc = 0x2CF6D0u;
    SET_GPR_U32(ctx, 31, 0x2CF6D8u);
    ctx->pc = 0x2CF6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF6D0u;
    // 0x2cf6d4: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D4E8u, 0x2CF6D0u, 0x2CF6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF6D8u;
label_2cf6d8:
    // 0x2cf6d8: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2cf6d8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2cf6dc: 0xc7809384  lwc1        $f0, -0x6C7C($gp)
    ctx->pc = 0x2cf6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cf6e0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2cf6e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cf6e4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2CF6E4u;
    {
        const bool branch_taken_0x2cf6e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cf6e4) {
            ctx->pc = 0x2CF6F8u;
            goto label_2cf6f8;
        }
    }
    ctx->pc = 0x2CF6ECu;
    // 0x2cf6ec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2CF6ECu;
    {
        const bool branch_taken_0x2cf6ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF6ECu;
        // 0x2cf6f0: 0x46140881  sub.s       $f2, $f1, $f20 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf6ec) {
            ctx->pc = 0x2CF70Cu;
            goto label_2cf70c;
        }
    }
    ctx->pc = 0x2CF6F4u;
    // 0x2cf6f4: 0x0  nop
    ctx->pc = 0x2cf6f4u;
    // NOP
label_2cf6f8:
    // 0x2cf6f8: 0xc7809388  lwc1        $f0, -0x6C78($gp)
    ctx->pc = 0x2cf6f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cf6fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2cf6fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cf700: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2CF700u;
    {
        const bool branch_taken_0x2cf700 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CF704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF700u;
        // 0x2cf704: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf700) {
            ctx->pc = 0x2CF70Cu;
            goto label_2cf70c;
        }
    }
    ctx->pc = 0x2CF708u;
    // 0x2cf708: 0x46140880  add.s       $f2, $f1, $f20
    ctx->pc = 0x2cf708u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
label_2cf70c:
    // 0x2cf70c: 0xe6020020  swc1        $f2, 0x20($s0)
    ctx->pc = 0x2cf70cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x2cf710: 0x8f829740  lw          $v0, -0x68C0($gp)
    ctx->pc = 0x2cf710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940480)));
    // 0x2cf714: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CF714u;
    {
        const bool branch_taken_0x2cf714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF714u;
        // 0x2cf718: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf714) {
            ctx->pc = 0x2CF728u;
            goto label_2cf728;
        }
    }
    ctx->pc = 0x2CF71Cu;
    // 0x2cf71c: 0xc0a04ac  jal         func_2812B0
    ctx->pc = 0x2CF71Cu;
    SET_GPR_U32(ctx, 31, 0x2CF724u);
    ctx->pc = 0x2CF720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF71Cu;
    // 0x2cf720: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2812B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2812B0u, 0x2CF71Cu, 0x2CF724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF724u;
label_2cf724:
    // 0x2cf724: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2cf724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2cf728:
    // 0x2cf728: 0xc0b3de8  jal         func_2CF7A0
    ctx->pc = 0x2CF728u;
    SET_GPR_U32(ctx, 31, 0x2CF730u);
    ctx->pc = 0x2CF72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF728u;
    // 0x2cf72c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF7A0u, 0x2CF728u, 0x2CF730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF730u;
label_2cf730:
    // 0x2cf730: 0xc0b3dfc  jal         func_2CF7F0
    ctx->pc = 0x2CF730u;
    SET_GPR_U32(ctx, 31, 0x2CF738u);
    ctx->pc = 0x2CF734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF730u;
    // 0x2cf734: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF7F0u, 0x2CF730u, 0x2CF738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF738u;
label_2cf738:
    // 0x2cf738: 0x9642003c  lhu         $v0, 0x3C($s2)
    ctx->pc = 0x2cf738u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x2cf73c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CF73Cu;
    {
        const bool branch_taken_0x2cf73c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CF740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF73Cu;
        // 0x2cf740: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf73c) {
            ctx->pc = 0x2CF750u;
            goto label_2cf750;
        }
    }
    ctx->pc = 0x2CF744u;
    // 0x2cf744: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2cf744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2cf748: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2CF748u;
    {
        const bool branch_taken_0x2cf748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF748u;
        // 0x2cf74c: 0x8c4388d4  lw          $v1, -0x772C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936788)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf748) {
            ctx->pc = 0x2CF754u;
            goto label_2cf754;
        }
    }
    ctx->pc = 0x2CF750u;
label_2cf750:
    // 0x2cf750: 0x8c4388d0  lw          $v1, -0x7730($v0)
    ctx->pc = 0x2cf750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936784)));
label_2cf754:
    // 0x2cf754: 0x906201bb  lbu         $v0, 0x1BB($v1)
    ctx->pc = 0x2cf754u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 443)));
    // 0x2cf758: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CF758u;
    {
        const bool branch_taken_0x2cf758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF758u;
        // 0x2cf75c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf758) {
            ctx->pc = 0x2CF780u;
            goto label_2cf780;
        }
    }
    ctx->pc = 0x2CF760u;
    // 0x2cf760: 0x8c620894  lw          $v0, 0x894($v1)
    ctx->pc = 0x2cf760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2196)));
    // 0x2cf764: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2cf764u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf768: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2cf768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf76c: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x2cf76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2cf770: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2cf770u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf774: 0x786202b0  lq          $v0, 0x2B0($v1)
    ctx->pc = 0x2cf774u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 688)));
    // 0x2cf778: 0xc097d1a  jal         func_25F468
    ctx->pc = 0x2CF778u;
    SET_GPR_U32(ctx, 31, 0x2CF780u);
    ctx->pc = 0x2CF77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF778u;
    // 0x2cf77c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F468u, 0x2CF778u, 0x2CF780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF780u;
label_2cf780:
    // 0x2cf780: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2cf780u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf784: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2cf784u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cf788: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2cf788u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cf78c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2cf78cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2cf790: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2cf790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cf794: 0xc7b40038  lwc1        $f20, 0x38($sp)
    ctx->pc = 0x2cf794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2cf798: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF798u;
        // 0x2cf79c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CF7A0u;
}
