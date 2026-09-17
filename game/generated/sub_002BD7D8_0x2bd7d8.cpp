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

// Function: sub_002BD7D8
// Address: 0x2bd7d8 - 0x2bdea0
void sub_002BD7D8_0x2bd7d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BD7D8_0x2bd7d8");
#endif

    switch (ctx->pc) {
        case 0x2bd810u: goto label_2bd810;
        case 0x2bd818u: goto label_2bd818;
        case 0x2bd820u: goto label_2bd820;
        case 0x2bd878u: goto label_2bd878;
        case 0x2bd884u: goto label_2bd884;
        case 0x2bd8d4u: goto label_2bd8d4;
        case 0x2bd8f4u: goto label_2bd8f4;
        case 0x2bd980u: goto label_2bd980;
        case 0x2bd98cu: goto label_2bd98c;
        case 0x2bda14u: goto label_2bda14;
        case 0x2bda20u: goto label_2bda20;
        case 0x2bda64u: goto label_2bda64;
        case 0x2bdb00u: goto label_2bdb00;
        case 0x2bdc90u: goto label_2bdc90;
        case 0x2bdd18u: goto label_2bdd18;
        case 0x2bdd24u: goto label_2bdd24;
        case 0x2bdd30u: goto label_2bdd30;
        case 0x2bdd3cu: goto label_2bdd3c;
        case 0x2bde40u: goto label_2bde40;
        case 0x2bde50u: goto label_2bde50;
        case 0x2bde78u: goto label_2bde78;
        default: break;
    }

    ctx->pc = 0x2bd7d8u;

    // 0x2bd7d8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2bd7d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2bd7dc: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x2bd7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x2bd7e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bd7e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd7e4: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2bd7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2bd7e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2bd7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2bd7ec: 0xe7b70060  swc1        $f23, 0x60($sp)
    ctx->pc = 0x2bd7ecu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2bd7f0: 0xe7b60058  swc1        $f22, 0x58($sp)
    ctx->pc = 0x2bd7f0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2bd7f4: 0xe7b50050  swc1        $f21, 0x50($sp)
    ctx->pc = 0x2bd7f4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2bd7f8: 0xe7b40048  swc1        $f20, 0x48($sp)
    ctx->pc = 0x2bd7f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2bd7fc: 0x8e220894  lw          $v0, 0x894($s1)
    ctx->pc = 0x2bd7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2196)));
    // 0x2bd800: 0x8c450018  lw          $a1, 0x18($v0)
    ctx->pc = 0x2bd800u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2bd804: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2bd804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2bd808: 0xc08842c  jal         func_2210B0
    ctx->pc = 0x2BD808u;
    SET_GPR_U32(ctx, 31, 0x2BD810u);
    ctx->pc = 0x2BD80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD808u;
    // 0x2bd80c: 0x24a50070  addiu       $a1, $a1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2210B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2210B0u, 0x2BD808u, 0x2BD810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD810u;
label_2bd810:
    // 0x2bd810: 0xc0af12c  jal         func_2BC4B0
    ctx->pc = 0x2BD810u;
    SET_GPR_U32(ctx, 31, 0x2BD818u);
    ctx->pc = 0x2BD814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD810u;
    // 0x2bd814: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC4B0u, 0x2BD810u, 0x2BD818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD818u;
label_2bd818:
    // 0x2bd818: 0xc07e232  jal         func_1F88C8
    ctx->pc = 0x2BD818u;
    SET_GPR_U32(ctx, 31, 0x2BD820u);
    ctx->pc = 0x1F88C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F88C8u, 0x2BD818u, 0x2BD820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD820u;
label_2bd820:
    // 0x2bd820: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BD820u;
    {
        const bool branch_taken_0x2bd820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bd820) {
            ctx->pc = 0x2BD824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD820u;
            // 0x2bd824: 0xc62000a8  lwc1        $f0, 0xA8($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD844u;
            goto label_2bd844;
        }
    }
    ctx->pc = 0x2BD828u;
    // 0x2bd828: 0x8e2206d0  lw          $v0, 0x6D0($s1)
    ctx->pc = 0x2bd828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1744)));
    // 0x2bd82c: 0x58400005  blezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BD82Cu;
    {
        const bool branch_taken_0x2bd82c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2bd82c) {
            ctx->pc = 0x2BD830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD82Cu;
            // 0x2bd830: 0xc62000a8  lwc1        $f0, 0xA8($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD844u;
            goto label_2bd844;
        }
    }
    ctx->pc = 0x2BD834u;
    // 0x2bd834: 0x262306d0  addiu       $v1, $s1, 0x6D0
    ctx->pc = 0x2bd834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1744));
    // 0x2bd838: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2bd838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2bd83c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2bd83cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2bd840: 0xc62000a8  lwc1        $f0, 0xA8($s1)
    ctx->pc = 0x2bd840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2bd844:
    // 0x2bd844: 0x3c100017  lui         $s0, 0x17
    ctx->pc = 0x2bd844u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
    // 0x2bd848: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bd848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bd84c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2bd84cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2bd850: 0x261079f0  addiu       $s0, $s0, 0x79F0
    ctx->pc = 0x2bd850u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 31216));
    // 0x2bd854: 0x8e2200c0  lw          $v0, 0xC0($s1)
    ctx->pc = 0x2bd854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x2bd858: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2bd858u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd85c: 0x460c0301  sub.s       $f12, $f0, $f12
    ctx->pc = 0x2bd85cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x2bd860: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2bd860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd864: 0x8c47003c  lw          $a3, 0x3C($v0)
    ctx->pc = 0x2bd864u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2bd868: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2bd868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2bd86c: 0xc7949224  lwc1        $f20, -0x6DDC($gp)
    ctx->pc = 0x2bd86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2bd870: 0xc096d52  jal         func_25B548
    ctx->pc = 0x2BD870u;
    SET_GPR_U32(ctx, 31, 0x2BD878u);
    ctx->pc = 0x2BD874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD870u;
    // 0x2bd874: 0x73fc2  srl         $a3, $a3, 31 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B548u, 0x2BD870u, 0x2BD878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD878u;
label_2bd878:
    // 0x2bd878: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bd878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd87c: 0xc0af21a  jal         func_2BC868
    ctx->pc = 0x2BD87Cu;
    SET_GPR_U32(ctx, 31, 0x2BD884u);
    ctx->pc = 0x2BD880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD87Cu;
    // 0x2bd880: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC868u, 0x2BD87Cu, 0x2BD884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD884u;
label_2bd884:
    // 0x2bd884: 0xc6040000  lwc1        $f4, 0x0($s0)
    ctx->pc = 0x2bd884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2bd888: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x2bd888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2bd88c: 0xe6240024  swc1        $f4, 0x24($s1)
    ctx->pc = 0x2bd88cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x2bd890: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x2bd890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bd894: 0xe6220028  swc1        $f2, 0x28($s1)
    ctx->pc = 0x2bd894u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x2bd898: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x2bd898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bd89c: 0xe623002c  swc1        $f3, 0x2C($s1)
    ctx->pc = 0x2bd89cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
    // 0x2bd8a0: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x2bd8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd8a4: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x2bd8a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x2bd8a8: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2bd8a8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2bd8ac: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x2bd8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bd8b0: 0xe6210034  swc1        $f1, 0x34($s1)
    ctx->pc = 0x2bd8b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x2bd8b4: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2bd8b4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2bd8b8: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x2bd8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd8bc: 0xe6240068  swc1        $f4, 0x68($s1)
    ctx->pc = 0x2bd8bcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
    // 0x2bd8c0: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2bd8c0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2bd8c4: 0xe622006c  swc1        $f2, 0x6C($s1)
    ctx->pc = 0x2bd8c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 108), bits); }
    // 0x2bd8c8: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x2bd8c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x2bd8cc: 0xc0968aa  jal         func_25A2A8
    ctx->pc = 0x2BD8CCu;
    SET_GPR_U32(ctx, 31, 0x2BD8D4u);
    ctx->pc = 0x2BD8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD8CCu;
    // 0x2bd8d0: 0xe6230070  swc1        $f3, 0x70($s1) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A2A8u, 0x2BD8CCu, 0x2BD8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD8D4u;
label_2bd8d4:
    // 0x2bd8d4: 0x8622007a  lh          $v0, 0x7A($s1)
    ctx->pc = 0x2bd8d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 122)));
    // 0x2bd8d8: 0xc7819228  lwc1        $f1, -0x6DD8($gp)
    ctx->pc = 0x2bd8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bd8dc: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2bd8dcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x2bd8e0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2bd8e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2bd8e4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2bd8e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2bd8e8: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x2bd8e8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x2bd8ec: 0xc04753a  jal         func_11D4E8
    ctx->pc = 0x2BD8ECu;
    SET_GPR_U32(ctx, 31, 0x2BD8F4u);
    ctx->pc = 0x2BD8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD8ECu;
    // 0x2bd8f0: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D4E8u, 0x2BD8ECu, 0x2BD8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD8F4u;
label_2bd8f4:
    // 0x2bd8f4: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2bd8f4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2bd8f8: 0xc780922c  lwc1        $f0, -0x6DD4($gp)
    ctx->pc = 0x2bd8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd8fc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2bd8fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bd900: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2BD900u;
    {
        const bool branch_taken_0x2bd900 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bd900) {
            ctx->pc = 0x2BD910u;
            goto label_2bd910;
        }
    }
    ctx->pc = 0x2BD908u;
    // 0x2bd908: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2BD908u;
    {
        const bool branch_taken_0x2bd908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD908u;
        // 0x2bd90c: 0x46140881  sub.s       $f2, $f1, $f20 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd908) {
            ctx->pc = 0x2BD924u;
            goto label_2bd924;
        }
    }
    ctx->pc = 0x2BD910u;
label_2bd910:
    // 0x2bd910: 0xc7809230  lwc1        $f0, -0x6DD0($gp)
    ctx->pc = 0x2bd910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd914: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2bd914u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bd918: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2BD918u;
    {
        const bool branch_taken_0x2bd918 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BD91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD918u;
        // 0x2bd91c: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd918) {
            ctx->pc = 0x2BD924u;
            goto label_2bd924;
        }
    }
    ctx->pc = 0x2BD920u;
    // 0x2bd920: 0x46140880  add.s       $f2, $f1, $f20
    ctx->pc = 0x2bd920u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
label_2bd924:
    // 0x2bd924: 0x922201b8  lbu         $v0, 0x1B8($s1)
    ctx->pc = 0x2bd924u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 440)));
    // 0x2bd928: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x2BD928u;
    {
        const bool branch_taken_0x2bd928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD928u;
        // 0x2bd92c: 0xe6220020  swc1        $f2, 0x20($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd928) {
            ctx->pc = 0x2BDA50u;
            goto label_2bda50;
        }
    }
    ctx->pc = 0x2BD930u;
    // 0x2bd930: 0xc62100d0  lwc1        $f1, 0xD0($s1)
    ctx->pc = 0x2bd930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bd934: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2bd934u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2bd938: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x2bd938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x2bd93c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2bd93cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bd940: 0xc62000ac  lwc1        $f0, 0xAC($s1)
    ctx->pc = 0x2bd940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd944: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bd944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bd948: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2bd948u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2bd94c: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x2bd94cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2bd950: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2bd950u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2bd954: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2bd954u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2bd958: 0x46030301  sub.s       $f12, $f0, $f3
    ctx->pc = 0x2bd958u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2bd95c: 0x46046034  c.lt.s      $f12, $f4
    ctx->pc = 0x2bd95cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bd960: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2BD960u;
    {
        const bool branch_taken_0x2bd960 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BD964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD960u;
        // 0x2bd964: 0xa22001b8  sb          $zero, 0x1B8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 440), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd960) {
            ctx->pc = 0x2BD96Cu;
            goto label_2bd96c;
        }
    }
    ctx->pc = 0x2BD968u;
    // 0x2bd968: 0x46002306  mov.s       $f12, $f4
    ctx->pc = 0x2bd968u;
    ctx->f[12] = FPU_MOV_S(ctx->f[4]);
label_2bd96c:
    // 0x2bd96c: 0x8e2200c0  lw          $v0, 0xC0($s1)
    ctx->pc = 0x2bd96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x2bd970: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2bd970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd974: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2bd974u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd978: 0xc096b10  jal         func_25AC40
    ctx->pc = 0x2BD978u;
    SET_GPR_U32(ctx, 31, 0x2BD980u);
    ctx->pc = 0x2BD97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD978u;
    // 0x2bd97c: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC40u, 0x2BD978u, 0x2BD980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD980u;
label_2bd980:
    // 0x2bd980: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2bd980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd984: 0xc0af21a  jal         func_2BC868
    ctx->pc = 0x2BD984u;
    SET_GPR_U32(ctx, 31, 0x2BD98Cu);
    ctx->pc = 0x2BD988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD984u;
    // 0x2bd988: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC868u, 0x2BD984u, 0x2BD98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD98Cu;
label_2bd98c:
    // 0x2bd98c: 0x9622000e  lhu         $v0, 0xE($s1)
    ctx->pc = 0x2bd98cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x2bd990: 0xc7859234  lwc1        $f5, -0x6DCC($gp)
    ctx->pc = 0x2bd990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2bd994: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2bd994u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2bd998: 0xc7a40000  lwc1        $f4, 0x0($sp)
    ctx->pc = 0x2bd998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2bd99c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2bd99cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2bd9a0: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x2bd9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bd9a4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2bd9a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2bd9a8: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x2bd9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bd9ac: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2bd9acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bd9b0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2bd9b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2bd9b4: 0x8e2207c8  lw          $v0, 0x7C8($s1)
    ctx->pc = 0x2bd9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1992)));
    // 0x2bd9b8: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2bd9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd9bc: 0x46032580  add.s       $f22, $f4, $f3
    ctx->pc = 0x2bd9bcu;
    ctx->f[22] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x2bd9c0: 0x46000d40  add.s       $f21, $f1, $f0
    ctx->pc = 0x2bd9c0u;
    ctx->f[21] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2bd9c4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2BD9C4u;
    {
        const bool branch_taken_0x2bd9c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD9C4u;
        // 0x2bd9c8: 0x460515c2  mul.s       $f23, $f2, $f5 (Delay Slot)
        ctx->f[23] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd9c4) {
            ctx->pc = 0x2BDA0Cu;
            goto label_2bda0c;
        }
    }
    ctx->pc = 0x2BD9CCu;
    // 0x2bd9cc: 0x8e2207fc  lw          $v0, 0x7FC($s1)
    ctx->pc = 0x2bd9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2044)));
    // 0x2bd9d0: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2BD9D0u;
    {
        const bool branch_taken_0x2bd9d0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2bd9d0) {
            ctx->pc = 0x2BDA0Cu;
            goto label_2bda0c;
        }
    }
    ctx->pc = 0x2BD9D8u;
    // 0x2bd9d8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2bd9d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2bd9dc: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2bd9dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2bd9e0: 0xc62207e0  lwc1        $f2, 0x7E0($s1)
    ctx->pc = 0x2bd9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bd9e4: 0xc6200804  lwc1        $f0, 0x804($s1)
    ctx->pc = 0x2bd9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd9e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2bd9e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2bd9ec: 0xc62107e8  lwc1        $f1, 0x7E8($s1)
    ctx->pc = 0x2bd9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bd9f0: 0x0  nop
    ctx->pc = 0x2bd9f0u;
    // NOP
    // 0x2bd9f4: 0x0  nop
    ctx->pc = 0x2bd9f4u;
    // NOP
    // 0x2bd9f8: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x2bd9f8u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x2bd9fc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bd9fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bda00: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2bda00u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2bda04: 0x4601ad40  add.s       $f21, $f21, $f1
    ctx->pc = 0x2bda04u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
    // 0x2bda08: 0x4602b580  add.s       $f22, $f22, $f2
    ctx->pc = 0x2bda08u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[2]);
label_2bda0c:
    // 0x2bda0c: 0xc0474d0  jal         func_11D340
    ctx->pc = 0x2BDA0Cu;
    SET_GPR_U32(ctx, 31, 0x2BDA14u);
    ctx->pc = 0x2BDA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDA0Cu;
    // 0x2bda10: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D340u, 0x2BDA0Cu, 0x2BDA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDA14u;
label_2bda14:
    // 0x2bda14: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x2bda14u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x2bda18: 0xc04746c  jal         func_11D1B0
    ctx->pc = 0x2BDA18u;
    SET_GPR_U32(ctx, 31, 0x2BDA20u);
    ctx->pc = 0x2BDA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDA18u;
    // 0x2bda1c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D1B0u, 0x2BDA18u, 0x2BDA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDA20u;
label_2bda20:
    // 0x2bda20: 0x4600a8c2  mul.s       $f3, $f21, $f0
    ctx->pc = 0x2bda20u;
    ctx->f[3] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x2bda24: 0xc6220750  lwc1        $f2, 0x750($s1)
    ctx->pc = 0x2bda24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bda28: 0x4614a902  mul.s       $f4, $f21, $f20
    ctx->pc = 0x2bda28u;
    ctx->f[4] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
    // 0x2bda2c: 0xc6210758  lwc1        $f1, 0x758($s1)
    ctx->pc = 0x2bda2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bda30: 0x4614b502  mul.s       $f20, $f22, $f20
    ctx->pc = 0x2bda30u;
    ctx->f[20] = FPU_MUL_S(ctx->f[22], ctx->f[20]);
    // 0x2bda34: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x2bda34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x2bda38: 0x4603a501  sub.s       $f20, $f20, $f3
    ctx->pc = 0x2bda38u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[3]);
    // 0x2bda3c: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x2bda3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x2bda40: 0x46140841  sub.s       $f1, $f1, $f20
    ctx->pc = 0x2bda40u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x2bda44: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2bda44u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2bda48: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x2bda48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2bda4c: 0xe6220000  swc1        $f2, 0x0($s1)
    ctx->pc = 0x2bda4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_2bda50:
    // 0x2bda50: 0x8f829740  lw          $v0, -0x68C0($gp)
    ctx->pc = 0x2bda50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940480)));
    // 0x2bda54: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BDA54u;
    {
        const bool branch_taken_0x2bda54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bda54) {
            ctx->pc = 0x2BDA58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BDA54u;
            // 0x2bda58: 0xde2307c8  ld          $v1, 0x7C8($s1) (Delay Slot)
            SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 1992)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BDA68u;
            goto label_2bda68;
        }
    }
    ctx->pc = 0x2BDA5Cu;
    // 0x2bda5c: 0xc0a050a  jal         func_281428
    ctx->pc = 0x2BDA5Cu;
    SET_GPR_U32(ctx, 31, 0x2BDA64u);
    ctx->pc = 0x2BDA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDA5Cu;
    // 0x2bda60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281428u, 0x2BDA5Cu, 0x2BDA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDA64u;
label_2bda64:
    // 0x2bda64: 0xde2307c8  ld          $v1, 0x7C8($s1)
    ctx->pc = 0x2bda64u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 1992)));
label_2bda68:
    // 0x2bda68: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2bda68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2bda6c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2bda6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2bda70: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2bda70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2bda74: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BDA74u;
    {
        const bool branch_taken_0x2bda74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bda74) {
            ctx->pc = 0x2BDA78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BDA74u;
            // 0x2bda78: 0x8e2207d0  lw          $v0, 0x7D0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2000)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BDA88u;
            goto label_2bda88;
        }
    }
    ctx->pc = 0x2BDA7Cu;
    // 0x2bda7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bda7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bda80: 0xae2207d0  sw          $v0, 0x7D0($s1)
    ctx->pc = 0x2bda80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2000), GPR_U32(ctx, 2));
    // 0x2bda84: 0x8e2207d0  lw          $v0, 0x7D0($s1)
    ctx->pc = 0x2bda84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2000)));
label_2bda88:
    // 0x2bda88: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BDA88u;
    {
        const bool branch_taken_0x2bda88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDA88u;
        // 0x2bda8c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bda88) {
            ctx->pc = 0x2BDAA8u;
            goto label_2bdaa8;
        }
    }
    ctx->pc = 0x2BDA90u;
    // 0x2bda90: 0x8e2607c8  lw          $a2, 0x7C8($s1)
    ctx->pc = 0x2bda90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1992)));
    // 0x2bda94: 0x54c20005  bnel        $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BDA94u;
    {
        const bool branch_taken_0x2bda94 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bda94) {
            ctx->pc = 0x2BDA98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BDA94u;
            // 0x2bda98: 0xae2007d0  sw          $zero, 0x7D0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 2000), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BDAACu;
            goto label_2bdaac;
        }
    }
    ctx->pc = 0x2BDA9Cu;
    // 0x2bda9c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2BDA9Cu;
    {
        const bool branch_taken_0x2bda9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDA9Cu;
        // 0x2bdaa0: 0x8625000c  lh          $a1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bda9c) {
            ctx->pc = 0x2BDAB0u;
            goto label_2bdab0;
        }
    }
    ctx->pc = 0x2BDAA4u;
    // 0x2bdaa4: 0x0  nop
    ctx->pc = 0x2bdaa4u;
    // NOP
label_2bdaa8:
    // 0x2bdaa8: 0x8e2607c8  lw          $a2, 0x7C8($s1)
    ctx->pc = 0x2bdaa8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1992)));
label_2bdaac:
    // 0x2bdaac: 0x8625000c  lh          $a1, 0xC($s1)
    ctx->pc = 0x2bdaacu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_2bdab0:
    // 0x2bdab0: 0x26300720  addiu       $s0, $s1, 0x720
    ctx->pc = 0x2bdab0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1824));
    // 0x2bdab4: 0x8622007a  lh          $v0, 0x7A($s1)
    ctx->pc = 0x2bdab4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 122)));
    // 0x2bdab8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bdab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdabc: 0x86230010  lh          $v1, 0x10($s1)
    ctx->pc = 0x2bdabcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2bdac0: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x2bdac0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bdac4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2bdac4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2bdac8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2bdac8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2bdacc: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2bdaccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2bdad0: 0xc7809238  lwc1        $f0, -0x6DC8($gp)
    ctx->pc = 0x2bdad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bdad4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bdad4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bdad8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2bdad8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2bdadc: 0xae2607cc  sw          $a2, 0x7CC($s1)
    ctx->pc = 0x2bdadcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1996), GPR_U32(ctx, 6));
    // 0x2bdae0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2bdae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdae4: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2bdae4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2bdae8: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2bdae8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2bdaec: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bdaecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bdaf0: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x2bdaf0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2bdaf4: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x2bdaf4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2bdaf8: 0xc096e6e  jal         func_25B9B8
    ctx->pc = 0x2BDAF8u;
    SET_GPR_U32(ctx, 31, 0x2BDB00u);
    ctx->pc = 0x2BDAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDAF8u;
    // 0x2bdafc: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B9B8u, 0x2BDAF8u, 0x2BDB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDB00u;
label_2bdb00:
    // 0x2bdb00: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x2bdb00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bdb04: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x2bdb04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bdb08: 0xc6220038  lwc1        $f2, 0x38($s1)
    ctx->pc = 0x2bdb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bdb0c: 0x8e2207c8  lw          $v0, 0x7C8($s1)
    ctx->pc = 0x2bdb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1992)));
    // 0x2bdb10: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2bdb10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2bdb14: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2bdb14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2bdb18: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x2BDB18u;
    {
        const bool branch_taken_0x2bdb18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDB18u;
        // 0x2bdb1c: 0xe7a20008  swc1        $f2, 0x8($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdb18) {
            ctx->pc = 0x2BDC18u;
            goto label_2bdc18;
        }
    }
    ctx->pc = 0x2BDB20u;
    // 0x2bdb20: 0x8e2307fc  lw          $v1, 0x7FC($s1)
    ctx->pc = 0x2bdb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2044)));
    // 0x2bdb24: 0x1860003d  blez        $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x2BDB24u;
    {
        const bool branch_taken_0x2bdb24 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2BDB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDB24u;
        // 0x2bdb28: 0xc7a10000  lwc1        $f1, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdb24) {
            ctx->pc = 0x2BDC1Cu;
            goto label_2bdc1c;
        }
    }
    ctx->pc = 0x2BDB2Cu;
    // 0x2bdb2c: 0x8e2207d0  lw          $v0, 0x7D0($s1)
    ctx->pc = 0x2bdb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2000)));
    // 0x2bdb30: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2BDB30u;
    {
        const bool branch_taken_0x2bdb30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bdb30) {
            ctx->pc = 0x2BDB70u;
            goto label_2bdb70;
        }
    }
    ctx->pc = 0x2BDB38u;
    // 0x2bdb38: 0xc62307f4  lwc1        $f3, 0x7F4($s1)
    ctx->pc = 0x2bdb38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bdb3c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2bdb3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bdb40: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2bdb40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2bdb44: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bdb44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bdb48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bdb48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bdb4c: 0xc6210804  lwc1        $f1, 0x804($s1)
    ctx->pc = 0x2bdb4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bdb50: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2bdb50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2bdb54: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2bdb54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2bdb58: 0x0  nop
    ctx->pc = 0x2bdb58u;
    // NOP
    // 0x2bdb5c: 0x0  nop
    ctx->pc = 0x2bdb5cu;
    // NOP
    // 0x2bdb60: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2bdb60u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x2bdb64: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2bdb64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2bdb68: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2BDB68u;
    {
        const bool branch_taken_0x2bdb68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDB68u;
        // 0x2bdb6c: 0x46030000  add.s       $f0, $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdb68) {
            ctx->pc = 0x2BDB8Cu;
            goto label_2bdb8c;
        }
    }
    ctx->pc = 0x2BDB70u;
label_2bdb70:
    // 0x2bdb70: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bdb70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bdb74: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2bdb74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2bdb78: 0xc6200804  lwc1        $f0, 0x804($s1)
    ctx->pc = 0x2bdb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bdb7c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2bdb7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2bdb80: 0x0  nop
    ctx->pc = 0x2bdb80u;
    // NOP
    // 0x2bdb84: 0x0  nop
    ctx->pc = 0x2bdb84u;
    // NOP
    // 0x2bdb88: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2bdb88u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_2bdb8c:
    // 0x2bdb8c: 0xe62007f0  swc1        $f0, 0x7F0($s1)
    ctx->pc = 0x2bdb8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2032), bits); }
    // 0x2bdb90: 0x8e2400c4  lw          $a0, 0xC4($s1)
    ctx->pc = 0x2bdb90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x2bdb94: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2bdb94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2bdb98: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x2bdb98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x2bdb9c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2bdb9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2bdba0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BDBA0u;
    {
        const bool branch_taken_0x2bdba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bdba0) {
            ctx->pc = 0x2BDBA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BDBA0u;
            // 0x2bdba4: 0x962202f6  lhu         $v0, 0x2F6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BDBB0u;
            goto label_2bdbb0;
        }
    }
    ctx->pc = 0x2BDBA8u;
    // 0x2bdba8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BDBA8u;
    {
        const bool branch_taken_0x2bdba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDBA8u;
        // 0x2bdbac: 0xae2007e4  sw          $zero, 0x7E4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2020), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdba8) {
            ctx->pc = 0x2BDBC8u;
            goto label_2bdbc8;
        }
    }
    ctx->pc = 0x2BDBB0u;
label_2bdbb0:
    // 0x2bdbb0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BDBB0u;
    {
        const bool branch_taken_0x2bdbb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bdbb0) {
            ctx->pc = 0x2BDBB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BDBB0u;
            // 0x2bdbb4: 0xc62007f0  lwc1        $f0, 0x7F0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BDBCCu;
            goto label_2bdbcc;
        }
    }
    ctx->pc = 0x2BDBB8u;
    // 0x2bdbb8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2bdbb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bdbbc: 0xe62007e8  swc1        $f0, 0x7E8($s1)
    ctx->pc = 0x2bdbbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2024), bits); }
    // 0x2bdbc0: 0xe62007e0  swc1        $f0, 0x7E0($s1)
    ctx->pc = 0x2bdbc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2016), bits); }
    // 0x2bdbc4: 0xe62007e4  swc1        $f0, 0x7E4($s1)
    ctx->pc = 0x2bdbc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2020), bits); }
label_2bdbc8:
    // 0x2bdbc8: 0xc62007f0  lwc1        $f0, 0x7F0($s1)
    ctx->pc = 0x2bdbc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2bdbcc:
    // 0x2bdbcc: 0xc62107e0  lwc1        $f1, 0x7E0($s1)
    ctx->pc = 0x2bdbccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bdbd0: 0xc62207e4  lwc1        $f2, 0x7E4($s1)
    ctx->pc = 0x2bdbd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2020)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bdbd4: 0xc62307e8  lwc1        $f3, 0x7E8($s1)
    ctx->pc = 0x2bdbd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bdbd8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bdbd8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bdbdc: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2bdbdcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2bdbe0: 0xc7a50000  lwc1        $f5, 0x0($sp)
    ctx->pc = 0x2bdbe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2bdbe4: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2bdbe4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2bdbe8: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2bdbe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bdbec: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x2bdbecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2bdbf0: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x2bdbf0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x2bdbf4: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x2bdbf4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x2bdbf8: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2bdbf8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2bdbfc: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2bdbfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2bdc00: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x2bdc00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2bdc04: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x2bdc04u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2bdc08: 0xe62107b0  swc1        $f1, 0x7B0($s1)
    ctx->pc = 0x2bdc08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1968), bits); }
    // 0x2bdc0c: 0xe62207b4  swc1        $f2, 0x7B4($s1)
    ctx->pc = 0x2bdc0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1972), bits); }
    // 0x2bdc10: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2BDC10u;
    {
        const bool branch_taken_0x2bdc10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDC10u;
        // 0x2bdc14: 0xe62307b8  swc1        $f3, 0x7B8($s1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1976), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdc10) {
            ctx->pc = 0x2BDC40u;
            goto label_2bdc40;
        }
    }
    ctx->pc = 0x2BDC18u;
label_2bdc18:
    // 0x2bdc18: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x2bdc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2bdc1c:
    // 0x2bdc1c: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x2bdc1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bdc20: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x2bdc20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bdc24: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bdc24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bdc28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bdc28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bdc2c: 0xe62107b0  swc1        $f1, 0x7B0($s1)
    ctx->pc = 0x2bdc2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1968), bits); }
    // 0x2bdc30: 0xe62007f0  swc1        $f0, 0x7F0($s1)
    ctx->pc = 0x2bdc30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2032), bits); }
    // 0x2bdc34: 0xe62207b4  swc1        $f2, 0x7B4($s1)
    ctx->pc = 0x2bdc34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1972), bits); }
    // 0x2bdc38: 0xe62307b8  swc1        $f3, 0x7B8($s1)
    ctx->pc = 0x2bdc38u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1976), bits); }
    // 0x2bdc3c: 0x8e2400c4  lw          $a0, 0xC4($s1)
    ctx->pc = 0x2bdc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_2bdc40:
    // 0x2bdc40: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x2bdc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x2bdc44: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2bdc44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2bdc48: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2bdc48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2bdc4c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2BDC4Cu;
    {
        const bool branch_taken_0x2bdc4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDC4Cu;
        // 0x2bdc50: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdc4c) {
            ctx->pc = 0x2BDC9Cu;
            goto label_2bdc9c;
        }
    }
    ctx->pc = 0x2BDC54u;
    // 0x2bdc54: 0x9223019a  lbu         $v1, 0x19A($s1)
    ctx->pc = 0x2bdc54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 410)));
    // 0x2bdc58: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2BDC58u;
    {
        const bool branch_taken_0x2bdc58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BDC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDC58u;
        // 0x2bdc5c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdc58) {
            ctx->pc = 0x2BDC9Cu;
            goto label_2bdc9c;
        }
    }
    ctx->pc = 0x2BDC60u;
    // 0x2bdc60: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x2bdc60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bdc64: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x2bdc64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bdc68: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x2bdc68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bdc6c: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x2bdc6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2bdc70: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x2bdc70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2bdc74: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2bdc74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2bdc78: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x2bdc78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x2bdc7c: 0xdfa20020  ld          $v0, 0x20($sp)
    ctx->pc = 0x2bdc7cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bdc80: 0xdfa30028  ld          $v1, 0x28($sp)
    ctx->pc = 0x2bdc80u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2bdc84: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x2bdc84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x2bdc88: 0xc08b634  jal         func_22D8D0
    ctx->pc = 0x2BDC88u;
    SET_GPR_U32(ctx, 31, 0x2BDC90u);
    ctx->pc = 0x2BDC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDC88u;
    // 0x2bdc8c: 0xffa30018  sd          $v1, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D8D0u, 0x2BDC88u, 0x2BDC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDC90u;
label_2bdc90:
    // 0x2bdc90: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x2bdc90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bdc94: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2bdc94u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2bdc98: 0xe62107b4  swc1        $f1, 0x7B4($s1)
    ctx->pc = 0x2bdc98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1972), bits); }
label_2bdc9c:
    // 0x2bdc9c: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2bdc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bdca0: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2bdca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2bdca4: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x2bdca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bdca8: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x2bdca8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x2bdcac: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x2bdcacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bdcb0: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2bdcb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x2bdcb4: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x2bdcb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bdcb8: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x2bdcb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bdcbc: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x2bdcbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bdcc0: 0x9223019a  lbu         $v1, 0x19A($s1)
    ctx->pc = 0x2bdcc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 410)));
    // 0x2bdcc4: 0xe6210014  swc1        $f1, 0x14($s1)
    ctx->pc = 0x2bdcc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x2bdcc8: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x2bdcc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x2bdccc: 0x1460004e  bnez        $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x2BDCCCu;
    {
        const bool branch_taken_0x2bdccc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BDCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDCCCu;
        // 0x2bdcd0: 0xe622001c  swc1        $f2, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdccc) {
            ctx->pc = 0x2BDE08u;
            goto label_2bde08;
        }
    }
    ctx->pc = 0x2BDCD4u;
    // 0x2bdcd4: 0x9622007a  lhu         $v0, 0x7A($s1)
    ctx->pc = 0x2bdcd4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 122)));
    // 0x2bdcd8: 0x9623000e  lhu         $v1, 0xE($s1)
    ctx->pc = 0x2bdcd8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x2bdcdc: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2bdcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2bdce0: 0xc780923c  lwc1        $f0, -0x6DC4($gp)
    ctx->pc = 0x2bdce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bdce4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2bdce4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2bdce8: 0x31823  negu        $v1, $v1
    ctx->pc = 0x2bdce8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x2bdcec: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2bdcecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2bdcf0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2bdcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2bdcf4: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x2bdcf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2bdcf8: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x2bdcf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x2bdcfc: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x2bdcfcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x2bdd00: 0x4483a800  mtc1        $v1, $f21
    ctx->pc = 0x2bdd00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2bdd04: 0x4680ad60  cvt.s.w     $f21, $f21
    ctx->pc = 0x2bdd04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[21], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x2bdd08: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2bdd08u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2bdd0c: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x2bdd0cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x2bdd10: 0xc04746c  jal         func_11D1B0
    ctx->pc = 0x2BDD10u;
    SET_GPR_U32(ctx, 31, 0x2BDD18u);
    ctx->pc = 0x2BDD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDD10u;
    // 0x2bdd14: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D1B0u, 0x2BDD10u, 0x2BDD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDD18u;
label_2bdd18:
    // 0x2bdd18: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2bdd18u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2bdd1c: 0xc0474d0  jal         func_11D340
    ctx->pc = 0x2BDD1Cu;
    SET_GPR_U32(ctx, 31, 0x2BDD24u);
    ctx->pc = 0x2BDD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDD1Cu;
    // 0x2bdd20: 0x460005c6  mov.s       $f23, $f0 (Delay Slot)
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D340u, 0x2BDD1Cu, 0x2BDD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDD24u;
label_2bdd24:
    // 0x2bdd24: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2bdd24u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2bdd28: 0xc04746c  jal         func_11D1B0
    ctx->pc = 0x2BDD28u;
    SET_GPR_U32(ctx, 31, 0x2BDD30u);
    ctx->pc = 0x2BDD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDD28u;
    // 0x2bdd2c: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D1B0u, 0x2BDD28u, 0x2BDD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDD30u;
label_2bdd30:
    // 0x2bdd30: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2bdd30u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2bdd34: 0xc0474d0  jal         func_11D340
    ctx->pc = 0x2BDD34u;
    SET_GPR_U32(ctx, 31, 0x2BDD3Cu);
    ctx->pc = 0x2BDD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDD34u;
    // 0x2bdd38: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D340u, 0x2BDD34u, 0x2BDD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDD3Cu;
label_2bdd3c:
    // 0x2bdd3c: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x2bdd3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bdd40: 0xc6250024  lwc1        $f5, 0x24($s1)
    ctx->pc = 0x2bdd40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2bdd44: 0x46171842  mul.s       $f1, $f3, $f23
    ctx->pc = 0x2bdd44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[23]);
    // 0x2bdd48: 0xc7a90008  lwc1        $f9, 0x8($sp)
    ctx->pc = 0x2bdd48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2bdd4c: 0x46142942  mul.s       $f5, $f5, $f20
    ctx->pc = 0x2bdd4cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[20]);
    // 0x2bdd50: 0xc622002c  lwc1        $f2, 0x2C($s1)
    ctx->pc = 0x2bdd50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bdd54: 0x46164a82  mul.s       $f10, $f9, $f22
    ctx->pc = 0x2bdd54u;
    ctx->f[10] = FPU_MUL_S(ctx->f[9], ctx->f[22]);
    // 0x2bdd58: 0xc6040030  lwc1        $f4, 0x30($s0)
    ctx->pc = 0x2bdd58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2bdd5c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2bdd5cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2bdd60: 0xc7a60004  lwc1        $f6, 0x4($sp)
    ctx->pc = 0x2bdd60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2bdd64: 0xc6070034  lwc1        $f7, 0x34($s0)
    ctx->pc = 0x2bdd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2bdd68: 0x461618c2  mul.s       $f3, $f3, $f22
    ctx->pc = 0x2bdd68u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[22]);
    // 0x2bdd6c: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x2bdd6cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x2bdd70: 0xc6080038  lwc1        $f8, 0x38($s0)
    ctx->pc = 0x2bdd70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2bdd74: 0x46174a42  mul.s       $f9, $f9, $f23
    ctx->pc = 0x2bdd74u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[23]);
    // 0x2bdd78: 0x460a0840  add.s       $f1, $f1, $f10
    ctx->pc = 0x2bdd78u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[10]);
    // 0x2bdd7c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2bdd7cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2bdd80: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x2bdd80u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x2bdd84: 0xe6040030  swc1        $f4, 0x30($s0)
    ctx->pc = 0x2bdd84u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2bdd88: 0xc6210028  lwc1        $f1, 0x28($s1)
    ctx->pc = 0x2bdd88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bdd8c: 0x46013180  add.s       $f6, $f6, $f1
    ctx->pc = 0x2bdd8cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[1]);
    // 0x2bdd90: 0x460639c0  add.s       $f7, $f7, $f6
    ctx->pc = 0x2bdd90u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
    // 0x2bdd94: 0xe6070034  swc1        $f7, 0x34($s0)
    ctx->pc = 0x2bdd94u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x2bdd98: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x2bdd98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bdd9c: 0xc622002c  lwc1        $f2, 0x2C($s1)
    ctx->pc = 0x2bdd9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bdda0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bdda0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bdda4: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x2bdda4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x2bdda8: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x2bdda8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x2bddac: 0x460918c1  sub.s       $f3, $f3, $f9
    ctx->pc = 0x2bddacu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[9]);
    // 0x2bddb0: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x2bddb0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x2bddb4: 0x46034200  add.s       $f8, $f8, $f3
    ctx->pc = 0x2bddb4u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[3]);
    // 0x2bddb8: 0xe6080038  swc1        $f8, 0x38($s0)
    ctx->pc = 0x2bddb8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x2bddbc: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x2bddbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bddc0: 0xc622002c  lwc1        $f2, 0x2C($s1)
    ctx->pc = 0x2bddc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bddc4: 0x46000942  mul.s       $f5, $f1, $f0
    ctx->pc = 0x2bddc4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bddc8: 0xc6260014  lwc1        $f6, 0x14($s1)
    ctx->pc = 0x2bddc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2bddcc: 0x461411c2  mul.s       $f7, $f2, $f20
    ctx->pc = 0x2bddccu;
    ctx->f[7] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x2bddd0: 0xc6230018  lwc1        $f3, 0x18($s1)
    ctx->pc = 0x2bddd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bddd4: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2bddd4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2bddd8: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x2bddd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bdddc: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x2bdddcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x2bdde0: 0xc624001c  lwc1        $f4, 0x1C($s1)
    ctx->pc = 0x2bdde0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2bdde4: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2bdde4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2bdde8: 0x46072941  sub.s       $f5, $f5, $f7
    ctx->pc = 0x2bdde8u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[7]);
    // 0x2bddec: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2bddecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2bddf0: 0xe6230018  swc1        $f3, 0x18($s1)
    ctx->pc = 0x2bddf0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x2bddf4: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x2bddf4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x2bddf8: 0x46013180  add.s       $f6, $f6, $f1
    ctx->pc = 0x2bddf8u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[1]);
    // 0x2bddfc: 0xe624001c  swc1        $f4, 0x1C($s1)
    ctx->pc = 0x2bddfcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x2bde00: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2BDE00u;
    {
        const bool branch_taken_0x2bde00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDE00u;
        // 0x2bde04: 0xe6260014  swc1        $f6, 0x14($s1) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bde00) {
            ctx->pc = 0x2BDE38u;
            goto label_2bde38;
        }
    }
    ctx->pc = 0x2BDE08u;
label_2bde08:
    // 0x2bde08: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2bde08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2bde0c: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2BDE0Cu;
    {
        const bool branch_taken_0x2bde0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BDE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDE0Cu;
        // 0x2bde10: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bde0c) {
            ctx->pc = 0x2BDE38u;
            goto label_2bde38;
        }
    }
    ctx->pc = 0x2BDE14u;
    // 0x2bde14: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x2bde14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bde18: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x2bde18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bde1c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2bde1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2bde20: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2bde20u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2bde24: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x2bde24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x2bde28: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x2bde28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bde2c: 0xc6210028  lwc1        $f1, 0x28($s1)
    ctx->pc = 0x2bde2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bde30: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bde30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bde34: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x2bde34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_2bde38:
    // 0x2bde38: 0xc07e232  jal         func_1F88C8
    ctx->pc = 0x2BDE38u;
    SET_GPR_U32(ctx, 31, 0x2BDE40u);
    ctx->pc = 0x1F88C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F88C8u, 0x2BDE38u, 0x2BDE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDE40u;
label_2bde40:
    // 0x2bde40: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BDE40u;
    {
        const bool branch_taken_0x2bde40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BDE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDE40u;
        // 0x2bde44: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bde40) {
            ctx->pc = 0x2BDE54u;
            goto label_2bde54;
        }
    }
    ctx->pc = 0x2BDE48u;
    // 0x2bde48: 0xc0af54a  jal         func_2BD528
    ctx->pc = 0x2BDE48u;
    SET_GPR_U32(ctx, 31, 0x2BDE50u);
    ctx->pc = 0x2BDE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDE48u;
    // 0x2bde4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BD528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BD528u, 0x2BDE48u, 0x2BDE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDE50u;
label_2bde50:
    // 0x2bde50: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2bde50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2bde54:
    // 0x2bde54: 0x8c6283c0  lw          $v0, -0x7C40($v1)
    ctx->pc = 0x2bde54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294935488)));
    // 0x2bde58: 0x38420009  xori        $v0, $v0, 0x9
    ctx->pc = 0x2bde58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)9);
    // 0x2bde5c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BDE5Cu;
    {
        const bool branch_taken_0x2bde5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BDE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDE5Cu;
        // 0x2bde60: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bde5c) {
            ctx->pc = 0x2BDE7Cu;
            goto label_2bde7c;
        }
    }
    ctx->pc = 0x2BDE64u;
    // 0x2bde64: 0x9622003c  lhu         $v0, 0x3C($s1)
    ctx->pc = 0x2bde64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x2bde68: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BDE68u;
    {
        const bool branch_taken_0x2bde68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bde68) {
            ctx->pc = 0x2BDE6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BDE68u;
            // 0x2bde6c: 0xdfb10038  ld          $s1, 0x38($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BDE80u;
            goto label_2bde80;
        }
    }
    ctx->pc = 0x2BDE70u;
    // 0x2bde70: 0xc0af3bc  jal         func_2BCEF0
    ctx->pc = 0x2BDE70u;
    SET_GPR_U32(ctx, 31, 0x2BDE78u);
    ctx->pc = 0x2BDE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDE70u;
    // 0x2bde74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BCEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BCEF0u, 0x2BDE70u, 0x2BDE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDE78u;
label_2bde78:
    // 0x2bde78: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2bde78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2bde7c:
    // 0x2bde7c: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x2bde7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2bde80:
    // 0x2bde80: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2bde80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bde84: 0xc7b70060  lwc1        $f23, 0x60($sp)
    ctx->pc = 0x2bde84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2bde88: 0xc7b60058  lwc1        $f22, 0x58($sp)
    ctx->pc = 0x2bde88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2bde8c: 0xc7b50050  lwc1        $f21, 0x50($sp)
    ctx->pc = 0x2bde8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2bde90: 0xc7b40048  lwc1        $f20, 0x48($sp)
    ctx->pc = 0x2bde90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2bde94: 0x3e00008  jr          $ra
    ctx->pc = 0x2BDE94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BDE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDE94u;
        // 0x2bde98: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BDE94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BDE9Cu;
    // 0x2bde9c: 0x0  nop
    ctx->pc = 0x2bde9cu;
    // NOP
    ctx->pc = 0x2bdea0u;
}
