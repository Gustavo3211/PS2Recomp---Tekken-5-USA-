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

// Function: sub_002BF728
// Address: 0x2bf728 - 0x2bf9e8
void sub_002BF728_0x2bf728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BF728_0x2bf728");
#endif

    switch (ctx->pc) {
        case 0x2bf814u: goto label_2bf814;
        case 0x2bf82cu: goto label_2bf82c;
        case 0x2bf848u: goto label_2bf848;
        case 0x2bf984u: goto label_2bf984;
        case 0x2bf994u: goto label_2bf994;
        case 0x2bf9b0u: goto label_2bf9b0;
        default: break;
    }

    ctx->pc = 0x2bf728u;

    // 0x2bf728: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2bf728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x2bf72c: 0xffb10098  sd          $s1, 0x98($sp)
    ctx->pc = 0x2bf72cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
    // 0x2bf730: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x2bf730u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf734: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x2bf734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x2bf738: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2bf738u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf73c: 0xffb300a8  sd          $s3, 0xA8($sp)
    ctx->pc = 0x2bf73cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 19));
    // 0x2bf740: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2bf740u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf744: 0xffb600c0  sd          $s6, 0xC0($sp)
    ctx->pc = 0x2bf744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
    // 0x2bf748: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x2bf748u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf74c: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x2bf74cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2bf750: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2bf750u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2bf754: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x2bf754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x2bf758: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x2bf758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x2bf75c: 0xffb500b8  sd          $s5, 0xB8($sp)
    ctx->pc = 0x2bf75cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 21));
    // 0x2bf760: 0xffb700c8  sd          $s7, 0xC8($sp)
    ctx->pc = 0x2bf760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 23));
    // 0x2bf764: 0xffbe00d0  sd          $fp, 0xD0($sp)
    ctx->pc = 0x2bf764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
    // 0x2bf768: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BF768u;
    {
        const bool branch_taken_0x2bf768 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF768u;
        // 0x2bf76c: 0xffbf00d8  sd          $ra, 0xD8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf768) {
            ctx->pc = 0x2BF790u;
            goto label_2bf790;
        }
    }
    ctx->pc = 0x2BF770u;
    // 0x2bf770: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x2bf770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x2bf774: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2bf774u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2bf778: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x2bf778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2bf77c: 0x24140010  addiu       $s4, $zero, 0x10
    ctx->pc = 0x2bf77cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2bf780: 0x24150011  addiu       $s5, $zero, 0x11
    ctx->pc = 0x2bf780u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2bf784: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2BF784u;
    {
        const bool branch_taken_0x2bf784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF784u;
        // 0x2bf788: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf784) {
            ctx->pc = 0x2BF7A8u;
            goto label_2bf7a8;
        }
    }
    ctx->pc = 0x2BF78Cu;
    // 0x2bf78c: 0x0  nop
    ctx->pc = 0x2bf78cu;
    // NOP
label_2bf790:
    // 0x2bf790: 0x3c01c270  lui         $at, 0xC270
    ctx->pc = 0x2bf790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49776 << 16));
    // 0x2bf794: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2bf794u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2bf798: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x2bf798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2bf79c: 0x24140014  addiu       $s4, $zero, 0x14
    ctx->pc = 0x2bf79cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2bf7a0: 0x24150015  addiu       $s5, $zero, 0x15
    ctx->pc = 0x2bf7a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2bf7a4: 0x241e0002  addiu       $fp, $zero, 0x2
    ctx->pc = 0x2bf7a4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2bf7a8:
    // 0x2bf7a8: 0x14b8c0  sll         $s7, $s4, 3
    ctx->pc = 0x2bf7a8u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x2bf7ac: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x2bf7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bf7b0: 0x2f41021  addu        $v0, $s7, $s4
    ctx->pc = 0x2bf7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
    // 0x2bf7b4: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x2bf7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2bf7b8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2bf7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2bf7bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2bf7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2bf7c0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2bf7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2bf7c4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2bf7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2bf7c8: 0xc4400074  lwc1        $f0, 0x74($v0)
    ctx->pc = 0x2bf7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bf7cc: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x2bf7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2bf7d0: 0xc4610074  lwc1        $f1, 0x74($v1)
    ctx->pc = 0x2bf7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bf7d4: 0x24700040  addiu       $s0, $v1, 0x40
    ctx->pc = 0x2bf7d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x2bf7d8: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2bf7d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2bf7dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bf7dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bf7e0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2bf7e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2bf7e4: 0x3c0142f0  lui         $at, 0x42F0
    ctx->pc = 0x2bf7e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17136 << 16));
    // 0x2bf7e8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2bf7e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bf7ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bf7ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf7f0: 0xe7a40008  swc1        $f4, 0x8($sp)
    ctx->pc = 0x2bf7f0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2bf7f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2bf7f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf7f8: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x2bf7f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2bf7fc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2bf7fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf800: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2bf800u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2bf804: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x2bf804u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2bf808: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2bf808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2bf80c: 0xc08491e  jal         func_212478
    ctx->pc = 0x2BF80Cu;
    SET_GPR_U32(ctx, 31, 0x2BF814u);
    ctx->pc = 0x2BF810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF80Cu;
    // 0x2bf810: 0xe4610074  swc1        $f1, 0x74($v1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 116), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x212478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212478u, 0x2BF80Cu, 0x2BF814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF814u;
label_2bf814:
    // 0x2bf814: 0x12c0000e  beqz        $s6, . + 4 + (0xE << 2)
    ctx->pc = 0x2BF814u;
    {
        const bool branch_taken_0x2bf814 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF814u;
        // 0x2bf818: 0xc781cb00  lwc1        $f1, -0x3500($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294953728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf814) {
            ctx->pc = 0x2BF850u;
            goto label_2bf850;
        }
    }
    ctx->pc = 0x2BF81Cu;
    // 0x2bf81c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2bf81cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bf820: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2bf820u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2bf824: 0xc096eca  jal         func_25BB28
    ctx->pc = 0x2BF824u;
    SET_GPR_U32(ctx, 31, 0x2BF82Cu);
    ctx->pc = 0x2BF828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF824u;
    // 0x2bf828: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BB28u, 0x2BF824u, 0x2BF82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF82Cu;
label_2bf82c:
    // 0x2bf82c: 0x1520c0  sll         $a0, $s5, 3
    ctx->pc = 0x2bf82cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x2bf830: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x2bf830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x2bf834: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2bf834u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf838: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2bf838u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2bf83c: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x2bf83cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x2bf840: 0xc096ee8  jal         func_25BBA0
    ctx->pc = 0x2BF840u;
    SET_GPR_U32(ctx, 31, 0x2BF848u);
    ctx->pc = 0x2BF844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF840u;
    // 0x2bf844: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BBA0u, 0x2BF840u, 0x2BF848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF848u;
label_2bf848:
    // 0x2bf848: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x2BF848u;
    {
        const bool branch_taken_0x2bf848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF848u;
        // 0x2bf84c: 0xdfb00090  ld          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf848) {
            ctx->pc = 0x2BF9B4u;
            goto label_2bf9b4;
        }
    }
    ctx->pc = 0x2BF850u;
label_2bf850:
    // 0x2bf850: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2bf850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bf854: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2bf854u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bf858: 0x45020056  bc1fl       . + 4 + (0x56 << 2)
    ctx->pc = 0x2BF858u;
    {
        const bool branch_taken_0x2bf858 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bf858) {
            ctx->pc = 0x2BF85Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF858u;
            // 0x2bf85c: 0xdfb00090  ld          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF9B4u;
            goto label_2bf9b4;
        }
    }
    ctx->pc = 0x2BF860u;
    // 0x2bf860: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x2bf860u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x2bf864: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x2bf864u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x2bf868: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x2bf868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2bf86c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2bf86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2bf870: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2bf870u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2bf874: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2bf874u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2bf878: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x2bf878u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2bf87c: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x2bf87cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2bf880: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x2bf880u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2bf884: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2bf884u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2bf888: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2bf888u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2bf88c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2bf88cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2bf890: 0x3c010017  lui         $at, 0x17
    ctx->pc = 0x2bf890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)23 << 16));
    // 0x2bf894: 0x24217f40  addiu       $at, $at, 0x7F40
    ctx->pc = 0x2bf894u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 32576));
    // 0x2bf898: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x2bf898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x2bf89c: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x2bf89cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf8a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2bf8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bf8a4: 0x3a0502d  daddu       $t2, $sp, $zero
    ctx->pc = 0x2bf8a4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf8a8: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x2bf8a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2bf8ac: 0x5e1025  or          $v0, $v0, $fp
    ctx->pc = 0x2bf8acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
    // 0x2bf8b0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2bf8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2bf8b4: 0x7a060000  lq          $a2, 0x0($s0)
    ctx->pc = 0x2bf8b4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bf8b8: 0x7a040010  lq          $a0, 0x10($s0)
    ctx->pc = 0x2bf8b8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2bf8bc: 0x7a070020  lq          $a3, 0x20($s0)
    ctx->pc = 0x2bf8bcu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2bf8c0: 0x48230000  qmfc2.ni    $v1, $vf0
    ctx->pc = 0x2bf8c0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bf8c4: 0x70862c88  pextlw      $a1, $a0, $a2
    ctx->pc = 0x2bf8c4u;
    SET_GPR_VEC(ctx, 5, PS2_PEXTLW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
    // 0x2bf8c8: 0x708624a8  pextuw      $a0, $a0, $a2
    ctx->pc = 0x2bf8c8u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTUW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
    // 0x2bf8cc: 0x70671488  pextlw      $v0, $v1, $a3
    ctx->pc = 0x2bf8ccu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 7)));
    // 0x2bf8d0: 0x70671ca8  pextuw      $v1, $v1, $a3
    ctx->pc = 0x2bf8d0u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTUW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 7)));
    // 0x2bf8d4: 0x70453389  pcpyld      $a2, $v0, $a1
    ctx->pc = 0x2bf8d4u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x2bf8d8: 0x70a22ba9  pcpyud      $a1, $a1, $v0
    ctx->pc = 0x2bf8d8u;
    SET_GPR_VEC(ctx, 5, _mm_unpackhi_epi64(GPR_VEC(ctx, 5), GPR_VEC(ctx, 2)));
    // 0x2bf8dc: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x2bf8dcu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x2bf8e0: 0xda070030  lqc2        $vf7, 0x30($s0)
    ctx->pc = 0x2bf8e0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2bf8e4: 0x48a62000  qmtc2.ni    $a2, $vf4
    ctx->pc = 0x2bf8e4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x2bf8e8: 0x48a52800  qmtc2.ni    $a1, $vf5
    ctx->pc = 0x2bf8e8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x2bf8ec: 0x48a33000  qmtc2.ni    $v1, $vf6
    ctx->pc = 0x2bf8ecu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2bf8f0: 0x4bc002bc  vadda.xyz   $ACC, $vf0, $vf0
    ctx->pc = 0x2bf8f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[0]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2bf8f4: 0x4bc720fc  vmsubax.xyz $ACC, $vf4, $vf7x
    ctx->pc = 0x2bf8f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2bf8f8: 0x4bc728fd  vmsubay.xyz $ACC, $vf5, $vf7y
    ctx->pc = 0x2bf8f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2bf8fc: 0x4bc731ce  vmsubz.xyz  $vf7, $vf6, $vf7z
    ctx->pc = 0x2bf8fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2bf900: 0x7d060000  sq          $a2, 0x0($t0)
    ctx->pc = 0x2bf900u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 6));
    // 0x2bf904: 0x7d050010  sq          $a1, 0x10($t0)
    ctx->pc = 0x2bf904u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 16), GPR_VEC(ctx, 5));
    // 0x2bf908: 0x7d030020  sq          $v1, 0x20($t0)
    ctx->pc = 0x2bf908u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 32), GPR_VEC(ctx, 3));
    // 0x2bf90c: 0xf9070030  sqc2        $vf7, 0x30($t0)
    ctx->pc = 0x2bf90cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x2bf910: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x2bf910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2bf914: 0xd9500000  lqc2        $vf16, 0x0($t2)
    ctx->pc = 0x2bf914u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2bf918: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2bf918u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bf91c: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x2bf91cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2bf920: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x2bf920u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2bf924: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x2bf924u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2bf928: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x2bf928u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bf92c: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x2bf92cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bf930: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x2bf930u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bf934: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x2bf934u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2bf938: 0xf9300000  sqc2        $vf16, 0x0($t1)
    ctx->pc = 0x2bf938u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2bf93c: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x2bf93cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf940: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2bf940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bf944: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x2bf944u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x2bf948: 0xc44d0008  lwc1        $f13, 0x8($v0)
    ctx->pc = 0x2bf948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2bf94c: 0x460d6b5c  madd.s      $f13, $f13, $f13
    ctx->pc = 0x2bf94cu;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[13], ctx->f[13]));
    // 0x2bf950: 0x460d0344  c1          0xD0344
    ctx->pc = 0x2bf950u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
    // 0x2bf954: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x2bf954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x2bf958: 0x2f41021  addu        $v0, $s7, $s4
    ctx->pc = 0x2bf958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
    // 0x2bf95c: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2bf95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bf960: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2bf960u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2bf964: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2bf964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2bf968: 0xc44c0044  lwc1        $f12, 0x44($v0)
    ctx->pc = 0x2bf968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2bf96c: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x2bf96cu;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x2bf970: 0x0  nop
    ctx->pc = 0x2bf970u;
    // NOP
    // 0x2bf974: 0x0  nop
    ctx->pc = 0x2bf974u;
    // NOP
    // 0x2bf978: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x2bf978u;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[12];
    // 0x2bf97c: 0xc0b740c  jal         func_2DD030
    ctx->pc = 0x2BF97Cu;
    SET_GPR_U32(ctx, 31, 0x2BF984u);
    ctx->pc = 0x2DD030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD030u, 0x2BF97Cu, 0x2BF984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF984u;
label_2bf984:
    // 0x2bf984: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2bf984u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bf988: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2bf988u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2bf98c: 0xc096eca  jal         func_25BB28
    ctx->pc = 0x2BF98Cu;
    SET_GPR_U32(ctx, 31, 0x2BF994u);
    ctx->pc = 0x2BF990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF98Cu;
    // 0x2bf990: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BB28u, 0x2BF98Cu, 0x2BF994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF994u;
label_2bf994:
    // 0x2bf994: 0x1520c0  sll         $a0, $s5, 3
    ctx->pc = 0x2bf994u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x2bf998: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x2bf998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x2bf99c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2bf99cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf9a0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2bf9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2bf9a4: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x2bf9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x2bf9a8: 0xc096ee8  jal         func_25BBA0
    ctx->pc = 0x2BF9A8u;
    SET_GPR_U32(ctx, 31, 0x2BF9B0u);
    ctx->pc = 0x2BF9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF9A8u;
    // 0x2bf9ac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BBA0u, 0x2BF9A8u, 0x2BF9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF9B0u;
label_2bf9b0:
    // 0x2bf9b0: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x2bf9b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2bf9b4:
    // 0x2bf9b4: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x2bf9b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2bf9b8: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x2bf9b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2bf9bc: 0xdfb300a8  ld          $s3, 0xA8($sp)
    ctx->pc = 0x2bf9bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2bf9c0: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x2bf9c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2bf9c4: 0xdfb500b8  ld          $s5, 0xB8($sp)
    ctx->pc = 0x2bf9c4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2bf9c8: 0xdfb600c0  ld          $s6, 0xC0($sp)
    ctx->pc = 0x2bf9c8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2bf9cc: 0xdfb700c8  ld          $s7, 0xC8($sp)
    ctx->pc = 0x2bf9ccu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2bf9d0: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x2bf9d0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2bf9d4: 0xdfbf00d8  ld          $ra, 0xD8($sp)
    ctx->pc = 0x2bf9d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2bf9d8: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x2bf9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2bf9dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF9DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF9DCu;
        // 0x2bf9e0: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF9DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF9E4u;
    // 0x2bf9e4: 0x0  nop
    ctx->pc = 0x2bf9e4u;
    // NOP
    ctx->pc = 0x2bf9e8u;
}
