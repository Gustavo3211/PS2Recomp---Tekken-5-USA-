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

// Function: sub_00297770
// Address: 0x297770 - 0x297908
void sub_00297770_0x297770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00297770_0x297770");
#endif

    switch (ctx->pc) {
        case 0x2977a8u: goto label_2977a8;
        case 0x2977d8u: goto label_2977d8;
        case 0x2977e8u: goto label_2977e8;
        case 0x2977f8u: goto label_2977f8;
        case 0x297808u: goto label_297808;
        case 0x297824u: goto label_297824;
        case 0x297834u: goto label_297834;
        case 0x297844u: goto label_297844;
        case 0x297854u: goto label_297854;
        case 0x297880u: goto label_297880;
        default: break;
    }

    ctx->pc = 0x297770u;

    // 0x297770: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x297770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x297774: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x297774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x297778: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x297778u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29777c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x29777cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x297780: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x297780u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297784: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x297784u;
    {
        const bool branch_taken_0x297784 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x297788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297784u;
        // 0x297788: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297784) {
            ctx->pc = 0x297794u;
            goto label_297794;
        }
    }
    ctx->pc = 0x29778Cu;
    // 0x29778c: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29778Cu;
    {
        const bool branch_taken_0x29778c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x297790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29778Cu;
        // 0x297790: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29778c) {
            ctx->pc = 0x2977A0u;
            goto label_2977a0;
        }
    }
    ctx->pc = 0x297794u;
label_297794:
    // 0x297794: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x297794u;
    {
        const bool branch_taken_0x297794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297794u;
        // 0x297798: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297794) {
            ctx->pc = 0x2978F0u;
            goto label_2978f0;
        }
    }
    ctx->pc = 0x29779Cu;
    // 0x29779c: 0x0  nop
    ctx->pc = 0x29779cu;
    // NOP
label_2977a0:
    // 0x2977a0: 0xc0a5d52  jal         func_297548
    ctx->pc = 0x2977A0u;
    SET_GPR_U32(ctx, 31, 0x2977A8u);
    ctx->pc = 0x2977A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2977A0u;
    // 0x2977a4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297548u, 0x2977A0u, 0x2977A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2977A8u;
label_2977a8:
    // 0x2977a8: 0x3c0142dc  lui         $at, 0x42DC
    ctx->pc = 0x2977a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17116 << 16));
    // 0x2977ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2977acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2977b0: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2977b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2977b4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2977b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2977b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2977b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2977bc: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2977bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2977c0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2977c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2977c4: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2977c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2977c8: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x2977c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2977cc: 0xe6020000  swc1        $f2, 0x0($s0)
    ctx->pc = 0x2977ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2977d0: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2977D0u;
    SET_GPR_U32(ctx, 31, 0x2977D8u);
    ctx->pc = 0x2977D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2977D0u;
    // 0x2977d4: 0xe6010004  swc1        $f1, 0x4($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2977D0u, 0x2977D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2977D8u;
label_2977d8:
    // 0x2977d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2977d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2977dc: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x2977dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x2977e0: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2977E0u;
    SET_GPR_U32(ctx, 31, 0x2977E8u);
    ctx->pc = 0x2977E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2977E0u;
    // 0x2977e4: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2977E0u, 0x2977E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2977E8u;
label_2977e8:
    // 0x2977e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2977e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2977ec: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x2977ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x2977f0: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2977F0u;
    SET_GPR_U32(ctx, 31, 0x2977F8u);
    ctx->pc = 0x2977F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2977F0u;
    // 0x2977f4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2977F0u, 0x2977F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2977F8u;
label_2977f8:
    // 0x2977f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2977f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2977fc: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x2977fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x297800: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x297800u;
    SET_GPR_U32(ctx, 31, 0x297808u);
    ctx->pc = 0x297804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297800u;
    // 0x297804: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x297800u, 0x297808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297808u;
label_297808:
    // 0x297808: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x297808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x29780c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x29780cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x297810: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x297810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x297814: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x297814u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x297818: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x297818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29781c: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x29781Cu;
    SET_GPR_U32(ctx, 31, 0x297824u);
    ctx->pc = 0x297820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29781Cu;
    // 0x297820: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x29781Cu, 0x297824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297824u;
label_297824:
    // 0x297824: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x297824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297828: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x297828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x29782c: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x29782Cu;
    SET_GPR_U32(ctx, 31, 0x297834u);
    ctx->pc = 0x297830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29782Cu;
    // 0x297830: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x29782Cu, 0x297834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297834u;
label_297834:
    // 0x297834: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x297834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297838: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x297838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x29783c: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x29783Cu;
    SET_GPR_U32(ctx, 31, 0x297844u);
    ctx->pc = 0x297840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29783Cu;
    // 0x297840: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x29783Cu, 0x297844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297844u;
label_297844:
    // 0x297844: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x297844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297848: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x297848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x29784c: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x29784Cu;
    SET_GPR_U32(ctx, 31, 0x297854u);
    ctx->pc = 0x297850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29784Cu;
    // 0x297850: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x29784Cu, 0x297854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297854u;
label_297854:
    // 0x297854: 0x24040061  addiu       $a0, $zero, 0x61
    ctx->pc = 0x297854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x297858: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x297858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x29785c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29785cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x297860: 0xae040040  sw          $a0, 0x40($s0)
    ctx->pc = 0x297860u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 4));
    // 0x297864: 0x8e230078  lw          $v1, 0x78($s1)
    ctx->pc = 0x297864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x297868: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x297868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x29786c: 0x10800020  beqz        $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x29786Cu;
    {
        const bool branch_taken_0x29786c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x297870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29786Cu;
        // 0x297870: 0xae040044  sw          $a0, 0x44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29786c) {
            ctx->pc = 0x2978F0u;
            goto label_2978f0;
        }
    }
    ctx->pc = 0x297874u;
    // 0x297874: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x297874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x297878: 0xc0c8304  jal         func_320C10
    ctx->pc = 0x297878u;
    SET_GPR_U32(ctx, 31, 0x297880u);
    ctx->pc = 0x29787Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297878u;
    // 0x29787c: 0x27a60014  addiu       $a2, $sp, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320C10u, 0x297878u, 0x297880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297880u;
label_297880:
    // 0x297880: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x297880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297884: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x297884u;
    {
        const bool branch_taken_0x297884 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x297888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297884u;
        // 0x297888: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297884) {
            ctx->pc = 0x2978A0u;
            goto label_2978a0;
        }
    }
    ctx->pc = 0x29788Cu;
    // 0x29788c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29788cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x297890: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x297890u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x297894: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x297894u;
    {
        const bool branch_taken_0x297894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297894u;
        // 0x297898: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297894) {
            ctx->pc = 0x2978B8u;
            goto label_2978b8;
        }
    }
    ctx->pc = 0x29789Cu;
    // 0x29789c: 0x0  nop
    ctx->pc = 0x29789cu;
    // NOP
label_2978a0:
    // 0x2978a0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2978a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2978a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2978a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2978a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2978a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2978ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2978acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2978b0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2978b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2978b4: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2978b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2978b8:
    // 0x2978b8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2978B8u;
    {
        const bool branch_taken_0x2978b8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2978BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2978B8u;
        // 0x2978bc: 0xe6000018  swc1        $f0, 0x18($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2978b8) {
            ctx->pc = 0x2978D0u;
            goto label_2978d0;
        }
    }
    ctx->pc = 0x2978C0u;
    // 0x2978c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2978c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2978c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2978c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2978c8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2978C8u;
    {
        const bool branch_taken_0x2978c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2978CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2978C8u;
        // 0x2978cc: 0xe600001c  swc1        $f0, 0x1C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2978c8) {
            ctx->pc = 0x2978ECu;
            goto label_2978ec;
        }
    }
    ctx->pc = 0x2978D0u;
label_2978d0:
    // 0x2978d0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2978d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2978d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2978d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2978d8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2978d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2978dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2978dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2978e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2978e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2978e4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2978e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2978e8: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x2978e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
label_2978ec:
    // 0x2978ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2978ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2978f0:
    // 0x2978f0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2978f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2978f4: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2978f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2978f8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2978f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2978fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2978FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2978FCu;
        // 0x297900: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2978FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297904u;
    // 0x297904: 0x0  nop
    ctx->pc = 0x297904u;
    // NOP
    ctx->pc = 0x297908u;
}
