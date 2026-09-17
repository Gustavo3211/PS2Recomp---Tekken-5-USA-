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

// Function: sub_00312828
// Address: 0x312828 - 0x313388
void sub_00312828_0x312828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00312828_0x312828");
#endif

    switch (ctx->pc) {
        case 0x3128e0u: goto label_3128e0;
        case 0x3128e8u: goto label_3128e8;
        case 0x312904u: goto label_312904;
        case 0x31290cu: goto label_31290c;
        case 0x312924u: goto label_312924;
        case 0x312978u: goto label_312978;
        case 0x3129a0u: goto label_3129a0;
        case 0x3129b4u: goto label_3129b4;
        case 0x3129bcu: goto label_3129bc;
        case 0x3129d0u: goto label_3129d0;
        case 0x3129f8u: goto label_3129f8;
        case 0x312a1cu: goto label_312a1c;
        case 0x312a28u: goto label_312a28;
        case 0x312a30u: goto label_312a30;
        case 0x312a44u: goto label_312a44;
        case 0x312a8cu: goto label_312a8c;
        case 0x312ab4u: goto label_312ab4;
        case 0x312b24u: goto label_312b24;
        case 0x312b30u: goto label_312b30;
        case 0x312b38u: goto label_312b38;
        case 0x312b54u: goto label_312b54;
        case 0x312b74u: goto label_312b74;
        case 0x312b90u: goto label_312b90;
        case 0x312b9cu: goto label_312b9c;
        case 0x31304cu: goto label_31304c;
        case 0x313084u: goto label_313084;
        case 0x313150u: goto label_313150;
        case 0x313248u: goto label_313248;
        case 0x313318u: goto label_313318;
        case 0x313324u: goto label_313324;
        case 0x313334u: goto label_313334;
        case 0x31333cu: goto label_31333c;
        default: break;
    }

    ctx->pc = 0x312828u;

    // 0x312828: 0x8f86cbb0  lw          $a2, -0x3450($gp)
    ctx->pc = 0x312828u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953904)));
    // 0x31282c: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x31282cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x312830: 0xffb40140  sd          $s4, 0x140($sp)
    ctx->pc = 0x312830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 20));
    // 0x312834: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x312834u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312838: 0x28c30004  slti        $v1, $a2, 0x4
    ctx->pc = 0x312838u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x31283c: 0xffb50148  sd          $s5, 0x148($sp)
    ctx->pc = 0x31283cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 21));
    // 0x312840: 0xffb00120  sd          $s0, 0x120($sp)
    ctx->pc = 0x312840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 16));
    // 0x312844: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x312844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x312848: 0xffb10128  sd          $s1, 0x128($sp)
    ctx->pc = 0x312848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 17));
    // 0x31284c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x31284cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312850: 0xffb20130  sd          $s2, 0x130($sp)
    ctx->pc = 0x312850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 18));
    // 0x312854: 0xffb30138  sd          $s3, 0x138($sp)
    ctx->pc = 0x312854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 19));
    // 0x312858: 0xffb60150  sd          $s6, 0x150($sp)
    ctx->pc = 0x312858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 22));
    // 0x31285c: 0xffb70158  sd          $s7, 0x158($sp)
    ctx->pc = 0x31285cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 23));
    // 0x312860: 0xffbe0160  sd          $fp, 0x160($sp)
    ctx->pc = 0x312860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 30));
    // 0x312864: 0xffbf0168  sd          $ra, 0x168($sp)
    ctx->pc = 0x312864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 31));
    // 0x312868: 0xe7b80190  swc1        $f24, 0x190($sp)
    ctx->pc = 0x312868u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x31286c: 0xe7b70188  swc1        $f23, 0x188($sp)
    ctx->pc = 0x31286cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x312870: 0xe7b60180  swc1        $f22, 0x180($sp)
    ctx->pc = 0x312870u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x312874: 0xe7b50178  swc1        $f21, 0x178($sp)
    ctx->pc = 0x312874u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x312878: 0x106002b1  beqz        $v1, . + 4 + (0x2B1 << 2)
    ctx->pc = 0x312878u;
    {
        const bool branch_taken_0x312878 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31287Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312878u;
        // 0x31287c: 0xe7b40170  swc1        $f20, 0x170($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x312878) {
            ctx->pc = 0x313340u;
            goto label_313340;
        }
    }
    ctx->pc = 0x312880u;
    // 0x312880: 0xc781c570  lwc1        $f1, -0x3A90($gp)
    ctx->pc = 0x312880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294952304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x312884: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x312884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x312888: 0xc78095e8  lwc1        $f0, -0x6A18($gp)
    ctx->pc = 0x312888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31288c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31288cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312890: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x312890u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x312894: 0x450102aa  bc1t        . + 4 + (0x2AA << 2)
    ctx->pc = 0x312894u;
    {
        const bool branch_taken_0x312894 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x312898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312894u;
        // 0x312898: 0xaf83cbb0  sw          $v1, -0x3450($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294953904), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312894) {
            ctx->pc = 0x313340u;
            goto label_313340;
        }
    }
    ctx->pc = 0x31289Cu;
    // 0x31289c: 0xc78095ec  lwc1        $f0, -0x6A14($gp)
    ctx->pc = 0x31289cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3128a0: 0xc78295f0  lwc1        $f2, -0x6A10($gp)
    ctx->pc = 0x3128a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3128a4: 0x46010581  sub.s       $f22, $f0, $f1
    ctx->pc = 0x3128a4u;
    ctx->f[22] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3128a8: 0x46161034  c.lt.s      $f2, $f22
    ctx->pc = 0x3128a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3128ac: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3128ACu;
    {
        const bool branch_taken_0x3128ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3128ac) {
            ctx->pc = 0x3128B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3128ACu;
            // 0x3128b0: 0x46001586  mov.s       $f22, $f2 (Delay Slot)
            ctx->f[22] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3128B4u;
            goto label_3128b4;
        }
    }
    ctx->pc = 0x3128B4u;
label_3128b4:
    // 0x3128b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3128b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3128b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3128b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3128bc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3128bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x3128c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3128c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3128c4: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x3128c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x3128c8: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x3128c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x3128cc: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x3128ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x3128d0: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x3128d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x3128d4: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x3128d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x3128d8: 0xc0cb7d4  jal         func_32DF50
    ctx->pc = 0x3128D8u;
    SET_GPR_U32(ctx, 31, 0x3128E0u);
    ctx->pc = 0x3128DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3128D8u;
    // 0x3128dc: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF50u, 0x3128D8u, 0x3128E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3128E0u;
label_3128e0:
    // 0x3128e0: 0xc0caf20  jal         func_32BC80
    ctx->pc = 0x3128E0u;
    SET_GPR_U32(ctx, 31, 0x3128E8u);
    ctx->pc = 0x3128E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3128E0u;
    // 0x3128e4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32BC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32BC80u, 0x3128E0u, 0x3128E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3128E8u;
label_3128e8:
    // 0x3128e8: 0xdbbc0000  lqc2        $vf28, 0x0($sp)
    ctx->pc = 0x3128e8u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3128ec: 0xdbbd0010  lqc2        $vf29, 0x10($sp)
    ctx->pc = 0x3128ecu;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3128f0: 0xdbbe0020  lqc2        $vf30, 0x20($sp)
    ctx->pc = 0x3128f0u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3128f4: 0xdbbf0030  lqc2        $vf31, 0x30($sp)
    ctx->pc = 0x3128f4u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3128f8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3128f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3128fc: 0xc0cbad8  jal         func_32EB60
    ctx->pc = 0x3128FCu;
    SET_GPR_U32(ctx, 31, 0x312904u);
    ctx->pc = 0x312900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3128FCu;
    // 0x312900: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EB60u, 0x3128FCu, 0x312904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312904u;
label_312904:
    // 0x312904: 0xc0cc1c2  jal         func_330708
    ctx->pc = 0x312904u;
    SET_GPR_U32(ctx, 31, 0x31290Cu);
    ctx->pc = 0x312908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312904u;
    // 0x312908: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330708u, 0x312904u, 0x31290Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31290Cu;
label_31290c:
    // 0x31290c: 0xdbbc0000  lqc2        $vf28, 0x0($sp)
    ctx->pc = 0x31290cu;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x312910: 0xdbbd0010  lqc2        $vf29, 0x10($sp)
    ctx->pc = 0x312910u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x312914: 0xdbbe0020  lqc2        $vf30, 0x20($sp)
    ctx->pc = 0x312914u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x312918: 0xdbbf0030  lqc2        $vf31, 0x30($sp)
    ctx->pc = 0x312918u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31291c: 0xc0cb8fc  jal         func_32E3F0
    ctx->pc = 0x31291Cu;
    SET_GPR_U32(ctx, 31, 0x312924u);
    ctx->pc = 0x32E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E3F0u, 0x31291Cu, 0x312924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312924u;
label_312924:
    // 0x312924: 0x8f82c544  lw          $v0, -0x3ABC($gp)
    ctx->pc = 0x312924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952260)));
    // 0x312928: 0x8f85c54c  lw          $a1, -0x3AB4($gp)
    ctx->pc = 0x312928u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952268)));
    // 0x31292c: 0xc781c550  lwc1        $f1, -0x3AB0($gp)
    ctx->pc = 0x31292cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294952272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x312930: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x312930u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x312934: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x312934u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x312938: 0x27b30080  addiu       $s3, $sp, 0x80
    ctx->pc = 0x312938u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31293c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31293cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x312940: 0x27b20070  addiu       $s2, $sp, 0x70
    ctx->pc = 0x312940u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x312944: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x312944u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x312948: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x312948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x31294c: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x31294cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x312950: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x312950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x312954: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x312954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312958: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x312958u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31295c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31295cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x312960: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x312960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312964: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x312964u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x312968: 0xe7b7007c  swc1        $f23, 0x7C($sp)
    ctx->pc = 0x312968u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x31296c: 0xe7b70078  swc1        $f23, 0x78($sp)
    ctx->pc = 0x31296cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x312970: 0xc0cb99a  jal         func_32E668
    ctx->pc = 0x312970u;
    SET_GPR_U32(ctx, 31, 0x312978u);
    ctx->pc = 0x312974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312970u;
    // 0x312974: 0xe7a00070  swc1        $f0, 0x70($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E668u, 0x312970u, 0x312978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312978u;
label_312978:
    // 0x312978: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x312978u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x31297c: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x31297cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x312980: 0xc7a20084  lwc1        $f2, 0x84($sp)
    ctx->pc = 0x312980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x312984: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x312984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312988: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x312988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31298c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x31298cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312990: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x312990u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x312994: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x312994u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x312998: 0xc0cbaa2  jal         func_32EA88
    ctx->pc = 0x312998u;
    SET_GPR_U32(ctx, 31, 0x3129A0u);
    ctx->pc = 0x31299Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312998u;
    // 0x31299c: 0xe7a00068  swc1        $f0, 0x68($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EA88u, 0x312998u, 0x3129A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3129A0u;
label_3129a0:
    // 0x3129a0: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x3129a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3129a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3129a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3129a8: 0x4480c000  mtc1        $zero, $f24
    ctx->pc = 0x3129a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x3129ac: 0xc0cbb52  jal         func_32ED48
    ctx->pc = 0x3129ACu;
    SET_GPR_U32(ctx, 31, 0x3129B4u);
    ctx->pc = 0x3129B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3129ACu;
    // 0x3129b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32ED48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32ED48u, 0x3129ACu, 0x3129B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3129B4u;
label_3129b4:
    // 0x3129b4: 0xc047528  jal         func_11D4A0
    ctx->pc = 0x3129B4u;
    SET_GPR_U32(ctx, 31, 0x3129BCu);
    ctx->pc = 0x3129B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3129B4u;
    // 0x3129b8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D4A0u, 0x3129B4u, 0x3129BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3129BCu;
label_3129bc:
    // 0x3129bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3129bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3129c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3129c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3129c4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3129c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3129c8: 0xc0cbb38  jal         func_32ECE0
    ctx->pc = 0x3129C8u;
    SET_GPR_U32(ctx, 31, 0x3129D0u);
    ctx->pc = 0x3129CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3129C8u;
    // 0x3129cc: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32ECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32ECE0u, 0x3129C8u, 0x3129D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3129D0u;
label_3129d0:
    // 0x3129d0: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x3129d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3129d4: 0x4600c034  c.lt.s      $f24, $f0
    ctx->pc = 0x3129d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3129d8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3129D8u;
    {
        const bool branch_taken_0x3129d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3129d8) {
            ctx->pc = 0x3129DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3129D8u;
            // 0x3129dc: 0x4600ad47  neg.s       $f21, $f21 (Delay Slot)
            ctx->f[21] = FPU_NEG_S(ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3129E0u;
            goto label_3129e0;
        }
    }
    ctx->pc = 0x3129E0u;
label_3129e0:
    // 0x3129e0: 0xc780c558  lwc1        $f0, -0x3AA8($gp)
    ctx->pc = 0x3129e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294952280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3129e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3129e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3129e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3129e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3129ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3129ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3129f0: 0xc0cb99a  jal         func_32E668
    ctx->pc = 0x3129F0u;
    SET_GPR_U32(ctx, 31, 0x3129F8u);
    ctx->pc = 0x3129F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3129F0u;
    // 0x3129f4: 0xe7a00074  swc1        $f0, 0x74($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E668u, 0x3129F0u, 0x3129F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3129F8u;
label_3129f8:
    // 0x3129f8: 0xc7a20080  lwc1        $f2, 0x80($sp)
    ctx->pc = 0x3129f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3129fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3129fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312a00: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x312a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x312a04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x312a04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312a08: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x312a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x312a0c: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x312a0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x312a10: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x312a10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x312a14: 0xc0cbaa2  jal         func_32EA88
    ctx->pc = 0x312A14u;
    SET_GPR_U32(ctx, 31, 0x312A1Cu);
    ctx->pc = 0x312A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312A14u;
    // 0x312a18: 0xe7a00068  swc1        $f0, 0x68($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EA88u, 0x312A14u, 0x312A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312A1Cu;
label_312a1c:
    // 0x312a1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x312a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312a20: 0xc0cbb52  jal         func_32ED48
    ctx->pc = 0x312A20u;
    SET_GPR_U32(ctx, 31, 0x312A28u);
    ctx->pc = 0x312A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312A20u;
    // 0x312a24: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32ED48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32ED48u, 0x312A20u, 0x312A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312A28u;
label_312a28:
    // 0x312a28: 0xc047528  jal         func_11D4A0
    ctx->pc = 0x312A28u;
    SET_GPR_U32(ctx, 31, 0x312A30u);
    ctx->pc = 0x312A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312A28u;
    // 0x312a2c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D4A0u, 0x312A28u, 0x312A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312A30u;
label_312a30:
    // 0x312a30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x312a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312a34: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x312a34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312a38: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x312a38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312a3c: 0xc0cbb38  jal         func_32ECE0
    ctx->pc = 0x312A3Cu;
    SET_GPR_U32(ctx, 31, 0x312A44u);
    ctx->pc = 0x312A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312A3Cu;
    // 0x312a40: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32ECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32ECE0u, 0x312A3Cu, 0x312A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312A44u;
label_312a44:
    // 0x312a44: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x312a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x312a48: 0x4600c034  c.lt.s      $f24, $f0
    ctx->pc = 0x312a48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x312a4c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x312A4Cu;
    {
        const bool branch_taken_0x312a4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x312a4c) {
            ctx->pc = 0x312A5Cu;
            goto label_312a5c;
        }
    }
    ctx->pc = 0x312A54u;
    // 0x312a54: 0xc78095f4  lwc1        $f0, -0x6A0C($gp)
    ctx->pc = 0x312a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x312a58: 0x46140501  sub.s       $f20, $f0, $f20
    ctx->pc = 0x312a58u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_312a5c:
    // 0x312a5c: 0x0  nop
    ctx->pc = 0x312a5cu;
    // NOP
    // 0x312a60: 0x0  nop
    ctx->pc = 0x312a60u;
    // NOP
    // 0x312a64: 0x4616a803  div.s       $f0, $f21, $f22
    ctx->pc = 0x312a64u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[0] = ctx->f[21] / ctx->f[22];
    // 0x312a68: 0x0  nop
    ctx->pc = 0x312a68u;
    // NOP
    // 0x312a6c: 0x0  nop
    ctx->pc = 0x312a6cu;
    // NOP
    // 0x312a70: 0x4616a043  div.s       $f1, $f20, $f22
    ctx->pc = 0x312a70u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[1] = ctx->f[20] / ctx->f[22];
    // 0x312a74: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x312a74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x312a78: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x312a78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x312a7c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x312A7Cu;
    {
        const bool branch_taken_0x312a7c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x312A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312A7Cu;
        // 0x312a80: 0xe7a100c4  swc1        $f1, 0xC4($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x312a7c) {
            ctx->pc = 0x312A98u;
            goto label_312a98;
        }
    }
    ctx->pc = 0x312A84u;
    // 0x312a84: 0xc0cb7e0  jal         func_32DF80
    ctx->pc = 0x312A84u;
    SET_GPR_U32(ctx, 31, 0x312A8Cu);
    ctx->pc = 0x32DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF80u, 0x312A84u, 0x312A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312A8Cu;
label_312a8c:
    // 0x312a8c: 0x1000022c  b           . + 4 + (0x22C << 2)
    ctx->pc = 0x312A8Cu;
    {
        const bool branch_taken_0x312a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312A8Cu;
        // 0x312a90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312a8c) {
            ctx->pc = 0x313340u;
            goto label_313340;
        }
    }
    ctx->pc = 0x312A94u;
    // 0x312a94: 0x0  nop
    ctx->pc = 0x312a94u;
    // NOP
label_312a98:
    // 0x312a98: 0x4601b834  c.lt.s      $f23, $f1
    ctx->pc = 0x312a98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x312a9c: 0x45000038  bc1f        . + 4 + (0x38 << 2)
    ctx->pc = 0x312A9Cu;
    {
        const bool branch_taken_0x312a9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x312AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312A9Cu;
        // 0x312aa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312a9c) {
            ctx->pc = 0x312B80u;
            goto label_312b80;
        }
    }
    ctx->pc = 0x312AA4u;
    // 0x312aa4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x312aa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312aa8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x312aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x312aac: 0xc0cbb38  jal         func_32ECE0
    ctx->pc = 0x312AACu;
    SET_GPR_U32(ctx, 31, 0x312AB4u);
    ctx->pc = 0x312AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312AACu;
    // 0x312ab0: 0xe7b700c4  swc1        $f23, 0xC4($sp) (Delay Slot)
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x32ECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32ECE0u, 0x312AACu, 0x312AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312AB4u;
label_312ab4:
    // 0x312ab4: 0x4ae00714  vminix.yzw  $vf28, $vf0, $vf0x
    ctx->pc = 0x312ab4u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x312ab8: 0x4b000713  vmaxw.x     $vf28, $vf0, $vf0w
    ctx->pc = 0x312ab8u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x312abc: 0x4b600754  vminix.xzw  $vf29, $vf0, $vf0x
    ctx->pc = 0x312abcu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x312ac0: 0x4a800753  vmaxw.y     $vf29, $vf0, $vf0w
    ctx->pc = 0x312ac0u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x312ac4: 0x4ba00794  vminix.xyw  $vf30, $vf0, $vf0x
    ctx->pc = 0x312ac4u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x312ac8: 0x4a400793  vmaxw.z     $vf30, $vf0, $vf0w
    ctx->pc = 0x312ac8u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x312acc: 0x4bff033c  vmove.xyzw  $vf31, $vf0
    ctx->pc = 0x312accu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x312ad0: 0x3c014780  lui         $at, 0x4780
    ctx->pc = 0x312ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18304 << 16));
    // 0x312ad4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x312ad4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x312ad8: 0x4618b034  c.lt.s      $f22, $f24
    ctx->pc = 0x312ad8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x312adc: 0xc78195f8  lwc1        $f1, -0x6A08($gp)
    ctx->pc = 0x312adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x312ae0: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x312ae0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x312ae4: 0x0  nop
    ctx->pc = 0x312ae4u;
    // NOP
    // 0x312ae8: 0x0  nop
    ctx->pc = 0x312ae8u;
    // NOP
    // 0x312aec: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x312aecu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[1];
    // 0x312af0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x312AF0u;
    {
        const bool branch_taken_0x312af0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x312af0) {
            ctx->pc = 0x312B08u;
            goto label_312b08;
        }
    }
    ctx->pc = 0x312AF8u;
    // 0x312af8: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x312af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x312afc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x312afcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x312b00: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x312B00u;
    {
        const bool branch_taken_0x312b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312B00u;
        // 0x312b04: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x312b00) {
            ctx->pc = 0x312B14u;
            goto label_312b14;
        }
    }
    ctx->pc = 0x312B08u;
label_312b08:
    // 0x312b08: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x312b08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x312b0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x312b0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x312b10: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x312b10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_312b14:
    // 0x312b14: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x312b14u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x312b18: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x312b18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x312b1c: 0xc0cb7ec  jal         func_32DFB0
    ctx->pc = 0x312B1Cu;
    SET_GPR_U32(ctx, 31, 0x312B24u);
    ctx->pc = 0x312B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312B1Cu;
    // 0x312b20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DFB0u, 0x312B1Cu, 0x312B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312B24u;
label_312b24:
    // 0x312b24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x312b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312b28: 0xc0cbad8  jal         func_32EB60
    ctx->pc = 0x312B28u;
    SET_GPR_U32(ctx, 31, 0x312B30u);
    ctx->pc = 0x312B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312B28u;
    // 0x312b2c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EB60u, 0x312B28u, 0x312B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312B30u;
label_312b30:
    // 0x312b30: 0xc0cc1c2  jal         func_330708
    ctx->pc = 0x312B30u;
    SET_GPR_U32(ctx, 31, 0x312B38u);
    ctx->pc = 0x312B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312B30u;
    // 0x312b34: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330708u, 0x312B30u, 0x312B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312B38u;
label_312b38:
    // 0x312b38: 0xdbbc0000  lqc2        $vf28, 0x0($sp)
    ctx->pc = 0x312b38u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x312b3c: 0xdbbd0010  lqc2        $vf29, 0x10($sp)
    ctx->pc = 0x312b3cu;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x312b40: 0xdbbe0020  lqc2        $vf30, 0x20($sp)
    ctx->pc = 0x312b40u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x312b44: 0xdbbf0030  lqc2        $vf31, 0x30($sp)
    ctx->pc = 0x312b44u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x312b48: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x312b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x312b4c: 0xc0cbac2  jal         func_32EB08
    ctx->pc = 0x312B4Cu;
    SET_GPR_U32(ctx, 31, 0x312B54u);
    ctx->pc = 0x312B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312B4Cu;
    // 0x312b50: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EB08u, 0x312B4Cu, 0x312B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312B54u;
label_312b54:
    // 0x312b54: 0xc780c550  lwc1        $f0, -0x3AB0($gp)
    ctx->pc = 0x312b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294952272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x312b58: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x312b58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x312b5c: 0xc7b40064  lwc1        $f20, 0x64($sp)
    ctx->pc = 0x312b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x312b60: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x312b60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x312b64: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x312B64u;
    {
        const bool branch_taken_0x312b64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x312b64) {
            ctx->pc = 0x312B88u;
            goto label_312b88;
        }
    }
    ctx->pc = 0x312B6Cu;
    // 0x312b6c: 0xc0cb7e0  jal         func_32DF80
    ctx->pc = 0x312B6Cu;
    SET_GPR_U32(ctx, 31, 0x312B74u);
    ctx->pc = 0x32DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF80u, 0x312B6Cu, 0x312B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312B74u;
label_312b74:
    // 0x312b74: 0x100001f2  b           . + 4 + (0x1F2 << 2)
    ctx->pc = 0x312B74u;
    {
        const bool branch_taken_0x312b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312B74u;
        // 0x312b78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312b74) {
            ctx->pc = 0x313340u;
            goto label_313340;
        }
    }
    ctx->pc = 0x312B7Cu;
    // 0x312b7c: 0x0  nop
    ctx->pc = 0x312b7cu;
    // NOP
label_312b80:
    // 0x312b80: 0xc794c558  lwc1        $f20, -0x3AA8($gp)
    ctx->pc = 0x312b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294952280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x312b84: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x312b84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_312b88:
    // 0x312b88: 0xc0cb7e0  jal         func_32DF80
    ctx->pc = 0x312B88u;
    SET_GPR_U32(ctx, 31, 0x312B90u);
    ctx->pc = 0x32DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF80u, 0x312B88u, 0x312B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312B90u;
label_312b90:
    // 0x312b90: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x312b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312b94: 0xc0cc106  jal         func_330418
    ctx->pc = 0x312B94u;
    SET_GPR_U32(ctx, 31, 0x312B9Cu);
    ctx->pc = 0x312B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312B94u;
    // 0x312b98: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330418u, 0x312B94u, 0x312B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312B9Cu;
label_312b9c:
    // 0x312b9c: 0x3c09003f  lui         $t1, 0x3F
    ctx->pc = 0x312b9cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)63 << 16));
    // 0x312ba0: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x312ba0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x312ba4: 0xc520f880  lwc1        $f0, -0x780($t1)
    ctx->pc = 0x312ba4u;
    { uint32_t bits = FAST_READ32(0x3EF880u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x312ba8: 0xc501f870  lwc1        $f1, -0x790($t0)
    ctx->pc = 0x312ba8u;
    { uint32_t bits = FAST_READ32(0x3EF870u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x312bac: 0xc7a600c0  lwc1        $f6, 0xC0($sp)
    ctx->pc = 0x312bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x312bb0: 0x460100c1  sub.s       $f3, $f0, $f1
    ctx->pc = 0x312bb0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x312bb4: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x312bb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x312bb8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x312bb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x312bbc: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x312bbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x312bc0: 0x46061802  mul.s       $f0, $f3, $f6
    ctx->pc = 0x312bc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x312bc4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x312bc4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x312bc8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x312bc8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x312bcc: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x312bccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x312bd0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x312BD0u;
    {
        const bool branch_taken_0x312bd0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x312bd0) {
            ctx->pc = 0x312BE0u;
            goto label_312be0;
        }
    }
    ctx->pc = 0x312BD8u;
    // 0x312bd8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x312BD8u;
    {
        const bool branch_taken_0x312bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312BD8u;
        // 0x312bdc: 0x46002046  mov.s       $f1, $f4 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x312bd8) {
            ctx->pc = 0x312BECu;
            goto label_312bec;
        }
    }
    ctx->pc = 0x312BE0u;
label_312be0:
    // 0x312be0: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x312be0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x312be4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x312BE4u;
    {
        const bool branch_taken_0x312be4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x312be4) {
            ctx->pc = 0x312BE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312BE4u;
            // 0x312be8: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x312BECu;
            goto label_312bec;
        }
    }
    ctx->pc = 0x312BECu;
label_312bec:
    // 0x312bec: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x312becu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x312bf0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x312bf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x312bf4: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x312bf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x312bf8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x312bf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x312bfc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x312bfcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x312c00: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x312c00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x312c04: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x312c04u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x312c08: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x312c08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x312c0c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x312C0Cu;
    {
        const bool branch_taken_0x312c0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x312C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312C0Cu;
        // 0x312c10: 0xc7a500c4  lwc1        $f5, 0xC4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x312c0c) {
            ctx->pc = 0x312C28u;
            goto label_312c28;
        }
    }
    ctx->pc = 0x312C14u;
    // 0x312c14: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x312c14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x312c18: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x312c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x312c1c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x312c1cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x312c20: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x312c20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x312c24: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x312c24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_312c28:
    // 0x312c28: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x312c28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x312c2c: 0xc500f870  lwc1        $f0, -0x790($t0)
    ctx->pc = 0x312c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4294965360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x312c30: 0x46051842  mul.s       $f1, $f3, $f5
    ctx->pc = 0x312c30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x312c34: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x312c34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x312c38: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x312c38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x312c3c: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x312c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x312c40: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x312c40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x312c44: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x312c44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x312c48: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x312c48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x312c4c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x312c4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x312c50: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x312c50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x312c54: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x312c54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x312c58: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x312c58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x312c5c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x312c5cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x312c60: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x312c60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x312c64: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x312C64u;
    {
        const bool branch_taken_0x312c64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x312C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312C64u;
        // 0x312c68: 0xafa300d0  sw          $v1, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312c64) {
            ctx->pc = 0x312C80u;
            goto label_312c80;
        }
    }
    ctx->pc = 0x312C6Cu;
    // 0x312c6c: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x312c6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x312c70: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x312c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x312c74: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x312c74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x312c78: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x312c78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x312c7c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x312c7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_312c80:
    // 0x312c80: 0x2523f880  addiu       $v1, $t1, -0x780
    ctx->pc = 0x312c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 4294965376));
    // 0x312c84: 0x2502f870  addiu       $v0, $t0, -0x790
    ctx->pc = 0x312c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294965360));
    // 0x312c88: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x312c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x312c8c: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x312c8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x312c90: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x312c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x312c94: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x312c94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x312c98: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x312c98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x312c9c: 0x460100c1  sub.s       $f3, $f0, $f1
    ctx->pc = 0x312c9cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x312ca0: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x312ca0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x312ca4: 0x46061802  mul.s       $f0, $f3, $f6
    ctx->pc = 0x312ca4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x312ca8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x312ca8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x312cac: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x312cacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x312cb0: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x312cb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x312cb4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x312CB4u;
    {
        const bool branch_taken_0x312cb4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x312CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312CB4u;
        // 0x312cb8: 0xafa60100  sw          $a2, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312cb4) {
            ctx->pc = 0x312CC8u;
            goto label_312cc8;
        }
    }
    ctx->pc = 0x312CBCu;
    // 0x312cbc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x312CBCu;
    {
        const bool branch_taken_0x312cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312CBCu;
        // 0x312cc0: 0x46002046  mov.s       $f1, $f4 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x312cbc) {
            ctx->pc = 0x312CD4u;
            goto label_312cd4;
        }
    }
    ctx->pc = 0x312CC4u;
    // 0x312cc4: 0x0  nop
    ctx->pc = 0x312cc4u;
    // NOP
label_312cc8:
    // 0x312cc8: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x312cc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x312ccc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x312CCCu;
    {
        const bool branch_taken_0x312ccc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x312ccc) {
            ctx->pc = 0x312CD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312CCCu;
            // 0x312cd0: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x312CD4u;
            goto label_312cd4;
        }
    }
    ctx->pc = 0x312CD4u;
label_312cd4:
    // 0x312cd4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x312cd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x312cd8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x312cd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x312cdc: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x312cdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x312ce0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x312ce0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x312ce4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x312ce4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x312ce8: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x312ce8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x312cec: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x312cecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x312cf0: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x312cf0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x312cf4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x312CF4u;
    {
        const bool branch_taken_0x312cf4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x312CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312CF4u;
        // 0x312cf8: 0x460518c2  mul.s       $f3, $f3, $f5 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x312cf4) {
            ctx->pc = 0x312D10u;
            goto label_312d10;
        }
    }
    ctx->pc = 0x312CFCu;
    // 0x312cfc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x312cfcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x312d00: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x312d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x312d04: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x312d04u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x312d08: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x312d08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x312d0c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x312d0cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_312d10:
    // 0x312d10: 0x2502f870  addiu       $v0, $t0, -0x790
    ctx->pc = 0x312d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294965360));
    // 0x312d14: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x312d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x312d18: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x312d18u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x312d1c: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x312d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x312d20: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x312d20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x312d24: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x312d24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x312d28: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x312d28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x312d2c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x312d2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x312d30: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x312d30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x312d34: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x312d34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x312d38: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x312d38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x312d3c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x312d3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x312d40: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x312d40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x312d44: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x312d44u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x312d48: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x312d48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x312d4c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x312D4Cu;
    {
        const bool branch_taken_0x312d4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x312D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312D4Cu;
        // 0x312d50: 0xafa700e0  sw          $a3, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312d4c) {
            ctx->pc = 0x312D68u;
            goto label_312d68;
        }
    }
    ctx->pc = 0x312D54u;
    // 0x312d54: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x312d54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x312d58: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x312d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x312d5c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x312d5cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x312d60: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x312d60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x312d64: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x312d64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_312d68:
    // 0x312d68: 0x2523f880  addiu       $v1, $t1, -0x780
    ctx->pc = 0x312d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 4294965376));
    // 0x312d6c: 0x2502f870  addiu       $v0, $t0, -0x790
    ctx->pc = 0x312d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294965360));
    // 0x312d70: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x312d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x312d74: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x312d74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x312d78: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x312d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x312d7c: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x312d7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x312d80: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x312d80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x312d84: 0x460100c1  sub.s       $f3, $f0, $f1
    ctx->pc = 0x312d84u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x312d88: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x312d88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x312d8c: 0x46061802  mul.s       $f0, $f3, $f6
    ctx->pc = 0x312d8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x312d90: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x312d90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x312d94: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x312d94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x312d98: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x312d98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x312d9c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x312D9Cu;
    {
        const bool branch_taken_0x312d9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x312DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312D9Cu;
        // 0x312da0: 0xafa40110  sw          $a0, 0x110($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312d9c) {
            ctx->pc = 0x312DB0u;
            goto label_312db0;
        }
    }
    ctx->pc = 0x312DA4u;
    // 0x312da4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x312DA4u;
    {
        const bool branch_taken_0x312da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312DA4u;
        // 0x312da8: 0x46002046  mov.s       $f1, $f4 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x312da4) {
            ctx->pc = 0x312DBCu;
            goto label_312dbc;
        }
    }
    ctx->pc = 0x312DACu;
    // 0x312dac: 0x0  nop
    ctx->pc = 0x312dacu;
    // NOP
label_312db0:
    // 0x312db0: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x312db0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x312db4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x312DB4u;
    {
        const bool branch_taken_0x312db4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x312db4) {
            ctx->pc = 0x312DB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312DB4u;
            // 0x312db8: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x312DBCu;
            goto label_312dbc;
        }
    }
    ctx->pc = 0x312DBCu;
label_312dbc:
    // 0x312dbc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x312dbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x312dc0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x312dc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x312dc4: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x312dc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x312dc8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x312dc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x312dcc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x312dccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x312dd0: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x312dd0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x312dd4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x312dd4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x312dd8: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x312dd8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x312ddc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x312DDCu;
    {
        const bool branch_taken_0x312ddc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x312DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312DDCu;
        // 0x312de0: 0x460518c2  mul.s       $f3, $f3, $f5 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x312ddc) {
            ctx->pc = 0x312DF8u;
            goto label_312df8;
        }
    }
    ctx->pc = 0x312DE4u;
    // 0x312de4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x312de4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x312de8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x312de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x312dec: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x312decu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x312df0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x312df0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x312df4: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x312df4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_312df8:
    // 0x312df8: 0x2502f870  addiu       $v0, $t0, -0x790
    ctx->pc = 0x312df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294965360));
    // 0x312dfc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x312dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x312e00: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x312e00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x312e04: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x312e04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x312e08: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x312e08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x312e0c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x312e0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x312e10: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x312e10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x312e14: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x312e14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x312e18: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x312e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x312e1c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x312e1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x312e20: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x312e20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x312e24: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x312e24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x312e28: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x312e28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x312e2c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x312e2cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x312e30: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x312e30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x312e34: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x312E34u;
    {
        const bool branch_taken_0x312e34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x312E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312E34u;
        // 0x312e38: 0xafa500f0  sw          $a1, 0xF0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312e34) {
            ctx->pc = 0x312E50u;
            goto label_312e50;
        }
    }
    ctx->pc = 0x312E3Cu;
    // 0x312e3c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x312e3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x312e40: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x312e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x312e44: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x312e44u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x312e48: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x312e48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x312e4c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x312e4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_312e50:
    // 0x312e50: 0x2523f880  addiu       $v1, $t1, -0x780
    ctx->pc = 0x312e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 4294965376));
    // 0x312e54: 0x2502f870  addiu       $v0, $t0, -0x790
    ctx->pc = 0x312e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294965360));
    // 0x312e58: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x312e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x312e5c: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x312e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x312e60: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x312e60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x312e64: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x312e64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x312e68: 0x460100c1  sub.s       $f3, $f0, $f1
    ctx->pc = 0x312e68u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x312e6c: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x312e6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x312e70: 0x46061802  mul.s       $f0, $f3, $f6
    ctx->pc = 0x312e70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x312e74: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x312e74u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x312e78: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x312e78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x312e7c: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x312e7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x312e80: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x312E80u;
    {
        const bool branch_taken_0x312e80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x312E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312E80u;
        // 0x312e84: 0x309e00ff  andi        $fp, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x312e80) {
            ctx->pc = 0x312E90u;
            goto label_312e90;
        }
    }
    ctx->pc = 0x312E88u;
    // 0x312e88: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x312E88u;
    {
        const bool branch_taken_0x312e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312E88u;
        // 0x312e8c: 0x46002046  mov.s       $f1, $f4 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x312e88) {
            ctx->pc = 0x312EA4u;
            goto label_312ea4;
        }
    }
    ctx->pc = 0x312E90u;
label_312e90:
    // 0x312e90: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x312e90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x312e94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x312e94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x312e98: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x312e98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x312e9c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x312E9Cu;
    {
        const bool branch_taken_0x312e9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x312e9c) {
            ctx->pc = 0x312EA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312E9Cu;
            // 0x312ea0: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x312EA4u;
            goto label_312ea4;
        }
    }
    ctx->pc = 0x312EA4u;
label_312ea4:
    // 0x312ea4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x312ea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x312ea8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x312ea8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x312eac: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x312eacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x312eb0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x312eb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x312eb4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x312eb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x312eb8: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x312eb8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x312ebc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x312ebcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x312ec0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x312ec0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x312ec4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x312EC4u;
    {
        const bool branch_taken_0x312ec4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x312EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312EC4u;
        // 0x312ec8: 0x460518c2  mul.s       $f3, $f3, $f5 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x312ec4) {
            ctx->pc = 0x312EE0u;
            goto label_312ee0;
        }
    }
    ctx->pc = 0x312ECCu;
    // 0x312ecc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x312eccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x312ed0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x312ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x312ed4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x312ed4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x312ed8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x312ed8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x312edc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x312edcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_312ee0:
    // 0x312ee0: 0x2502f870  addiu       $v0, $t0, -0x790
    ctx->pc = 0x312ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294965360));
    // 0x312ee4: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x312ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x312ee8: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x312ee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x312eec: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x312eecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x312ef0: 0x307700ff  andi        $s7, $v1, 0xFF
    ctx->pc = 0x312ef0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x312ef4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x312ef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x312ef8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x312ef8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x312efc: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x312efcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x312f00: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x312f00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x312f04: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x312f04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x312f08: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x312f08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x312f0c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x312f0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x312f10: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x312f10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x312f14: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x312f14u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x312f18: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x312f18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x312f1c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x312F1Cu;
    {
        const bool branch_taken_0x312f1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x312f1c) {
            ctx->pc = 0x312F38u;
            goto label_312f38;
        }
    }
    ctx->pc = 0x312F24u;
    // 0x312f24: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x312f24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x312f28: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x312f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x312f2c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x312f2cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x312f30: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x312f30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x312f34: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x312f34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_312f38:
    // 0x312f38: 0x44940800  mtc1        $s4, $f1
    ctx->pc = 0x312f38u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x312f3c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x312f3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x312f40: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x312f40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x312f44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x312f44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x312f48: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x312f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x312f4c: 0x307600ff  andi        $s6, $v1, 0xFF
    ctx->pc = 0x312f4cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x312f50: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x312F50u;
    {
        const bool branch_taken_0x312f50 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x312F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312F50u;
        // 0x312f54: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x312f50) {
            ctx->pc = 0x312F68u;
            goto label_312f68;
        }
    }
    ctx->pc = 0x312F58u;
    // 0x312f58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x312f58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x312f5c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x312f5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x312f60: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x312F60u;
    {
        const bool branch_taken_0x312f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312F60u;
        // 0x312f64: 0x8f83cbac  lw          $v1, -0x3454($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953900)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312f60) {
            ctx->pc = 0x312F84u;
            goto label_312f84;
        }
    }
    ctx->pc = 0x312F68u;
label_312f68:
    // 0x312f68: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x312f68u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x312f6c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x312f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x312f70: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x312f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x312f74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x312f74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x312f78: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x312f78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x312f7c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x312f7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x312f80: 0x8f83cbac  lw          $v1, -0x3454($gp)
    ctx->pc = 0x312f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953900)));
label_312f84:
    // 0x312f84: 0x0  nop
    ctx->pc = 0x312f84u;
    // NOP
    // 0x312f88: 0x0  nop
    ctx->pc = 0x312f88u;
    // NOP
    // 0x312f8c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x312f8cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x312f90: 0x142827  nor         $a1, $zero, $s4
    ctx->pc = 0x312f90u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 20)));
    // 0x312f94: 0x3c083000  lui         $t0, 0x3000
    ctx->pc = 0x312f94u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)12288 << 16));
    // 0x312f98: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x312f98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x312f9c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x312f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x312fa0: 0x28c40000  slti        $a0, $a2, 0x0
    ctx->pc = 0x312fa0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x312fa4: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x312fa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312fa8: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x312fa8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x312fac: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x312facu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x312fb0: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x312fb0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x312fb4: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x312fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x312fb8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x312fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x312fbc: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x312fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x312fc0: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x312fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x312fc4: 0x34a5004c  ori         $a1, $a1, 0x4C
    ctx->pc = 0x312fc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)76);
    // 0x312fc8: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x312fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x312fcc: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x312fccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x312fd0: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x312fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x312fd4: 0x52bc0  sll         $a1, $a1, 15
    ctx->pc = 0x312fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 15));
    // 0x312fd8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x312fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x312fdc: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x312fdcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x312fe0: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x312fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x312fe4: 0x3c045100  lui         $a0, 0x5100
    ctx->pc = 0x312fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20736 << 16));
    // 0x312fe8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x312fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x312fec: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x312fecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x312ff0: 0x3c14001b  lui         $s4, 0x1B
    ctx->pc = 0x312ff0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)27 << 16));
    // 0x312ff4: 0x26946610  addiu       $s4, $s4, 0x6610
    ctx->pc = 0x312ff4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 26128));
    // 0x312ff8: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x312ff8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x312ffc: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x312ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x313000: 0x2888825  or          $s1, $s4, $t0
    ctx->pc = 0x313000u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 20) | GPR_U64(ctx, 8));
    // 0x313004: 0x2408004c  addiu       $t0, $zero, 0x4C
    ctx->pc = 0x313004u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x313008: 0x26330030  addiu       $s3, $s1, 0x30
    ctx->pc = 0x313008u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x31300c: 0x26300040  addiu       $s0, $s1, 0x40
    ctx->pc = 0x31300cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x313010: 0x34e7002d  ori         $a3, $a3, 0x2D
    ctx->pc = 0x313010u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)45);
    // 0x313014: 0x3484002d  ori         $a0, $a0, 0x2D
    ctx->pc = 0x313014u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45);
    // 0x313018: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x313018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x31301c: 0xaf86cbac  sw          $a2, -0x3454($gp)
    ctx->pc = 0x31301cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953900), GPR_U32(ctx, 6));
    // 0x313020: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x313020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x313024: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x313024u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
    // 0x313028: 0xae64000c  sw          $a0, 0xC($s3)
    ctx->pc = 0x313028u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 4));
    // 0x31302c: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x31302cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x313030: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x313030u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x313034: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x313034u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x313038: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x313038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x31303c: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x31303cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x313040: 0x26300050  addiu       $s0, $s1, 0x50
    ctx->pc = 0x313040u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x313044: 0xc0c468c  jal         func_311A30
    ctx->pc = 0x313044u;
    SET_GPR_U32(ctx, 31, 0x31304Cu);
    ctx->pc = 0x313048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313044u;
    // 0x313048: 0xfe080008  sd          $t0, 0x8($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311A30u, 0x313044u, 0x31304Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31304Cu;
label_31304c:
    // 0x31304c: 0x8f83c544  lw          $v1, -0x3ABC($gp)
    ctx->pc = 0x31304cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952260)));
    // 0x313050: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x313050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x313054: 0x3405ff00  ori         $a1, $zero, 0xFF00
    ctx->pc = 0x313054u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x313058: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x313058u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x31305c: 0x319ba  dsrl        $v1, $v1, 6
    ctx->pc = 0x31305cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 6);
    // 0x313060: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x313060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x313064: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x313064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x313068: 0x2404004e  addiu       $a0, $zero, 0x4E
    ctx->pc = 0x313068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x31306c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x31306cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x313070: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x313070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x313074: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x313074u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x313078: 0x26300060  addiu       $s0, $s1, 0x60
    ctx->pc = 0x313078u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x31307c: 0xc0c4696  jal         func_311A58
    ctx->pc = 0x31307Cu;
    SET_GPR_U32(ctx, 31, 0x313084u);
    ctx->pc = 0x313080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31307Cu;
    // 0x313080: 0xfe040008  sd          $a0, 0x8($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311A58u, 0x31307Cu, 0x313084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313084u;
label_313084:
    // 0x313084: 0x9f83c540  lwu         $v1, -0x3AC0($gp)
    ctx->pc = 0x313084u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294952256)));
    // 0x313088: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x313088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31308c: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x31308cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x313090: 0x42478  dsll        $a0, $a0, 17
    ctx->pc = 0x313090u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 17);
    // 0x313094: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x313094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x313098: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x313098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x31309c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x31309cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3130a0: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x3130a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x3130a4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3130a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3130a8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x3130a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3130ac: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x3130acu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x3130b0: 0x26300070  addiu       $s0, $s1, 0x70
    ctx->pc = 0x3130b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x3130b4: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x3130b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x3130b8: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x3130b8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x3130bc: 0xfe050008  sd          $a1, 0x8($s0)
    ctx->pc = 0x3130bcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 5));
    // 0x3130c0: 0x26300080  addiu       $s0, $s1, 0x80
    ctx->pc = 0x3130c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x3130c4: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x3130c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x3130c8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3130c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3130cc: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x3130ccu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x3130d0: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x3130d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x3130d4: 0x8f83c54c  lw          $v1, -0x3AB4($gp)
    ctx->pc = 0x3130d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952268)));
    // 0x3130d8: 0x8f82c550  lw          $v0, -0x3AB0($gp)
    ctx->pc = 0x3130d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952272)));
    // 0x3130dc: 0x31938  dsll        $v1, $v1, 4
    ctx->pc = 0x3130dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 4);
    // 0x3130e0: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x3130e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x3130e4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3130e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3130e8: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x3130e8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x3130ec: 0x26300090  addiu       $s0, $s1, 0x90
    ctx->pc = 0x3130ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x3130f0: 0xfe040008  sd          $a0, 0x8($s0)
    ctx->pc = 0x3130f0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 4));
    // 0x3130f4: 0x8fa20094  lw          $v0, 0x94($sp)
    ctx->pc = 0x3130f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x3130f8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3130f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3130fc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3130fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x313100: 0x214ba  dsrl        $v0, $v0, 18
    ctx->pc = 0x313100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 18);
    // 0x313104: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x313104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x313108: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x313108u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x31310c: 0x263000a0  addiu       $s0, $s1, 0xA0
    ctx->pc = 0x31310cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    // 0x313110: 0xfe060008  sd          $a2, 0x8($s0)
    ctx->pc = 0x313110u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 6));
    // 0x313114: 0x8f82c574  lw          $v0, -0x3A8C($gp)
    ctx->pc = 0x313114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952308)));
    // 0x313118: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x313118u;
    {
        const bool branch_taken_0x313118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x313118) {
            ctx->pc = 0x31311Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313118u;
            // 0x31311c: 0x24020048  addiu       $v0, $zero, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313124u;
            goto label_313124;
        }
    }
    ctx->pc = 0x313120u;
    // 0x313120: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x313120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_313124:
    // 0x313124: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x313124u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x313128: 0x263000b0  addiu       $s0, $s1, 0xB0
    ctx->pc = 0x313128u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
    // 0x31312c: 0x26120010  addiu       $s2, $s0, 0x10
    ctx->pc = 0x31312cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x313130: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x313130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x313134: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x313134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x313138: 0xfe000000  sd          $zero, 0x0($s0)
    ctx->pc = 0x313138u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 0));
    // 0x31313c: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x31313cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x313140: 0x26500010  addiu       $s0, $s2, 0x10
    ctx->pc = 0x313140u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x313144: 0xfe430008  sd          $v1, 0x8($s2)
    ctx->pc = 0x313144u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 3));
    // 0x313148: 0xc0cbf82  jal         func_32FE08
    ctx->pc = 0x313148u;
    SET_GPR_U32(ctx, 31, 0x313150u);
    ctx->pc = 0x31314Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313148u;
    // 0x31314c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FE08u, 0x313148u, 0x313150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313150u;
label_313150:
    // 0x313150: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x313150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x313154: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x313154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x313158: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x313158u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
    // 0x31315c: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x31315cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x313160: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x313160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x313164: 0xfe040008  sd          $a0, 0x8($s0)
    ctx->pc = 0x313164u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 4));
    // 0x313168: 0x26500020  addiu       $s0, $s2, 0x20
    ctx->pc = 0x313168u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x31316c: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x31316cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x313170: 0x3c053400  lui         $a1, 0x3400
    ctx->pc = 0x313170u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)13312 << 16));
    // 0x313174: 0x24040521  addiu       $a0, $zero, 0x521
    ctx->pc = 0x313174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1313));
    // 0x313178: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x313178u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31317c: 0x8f82c544  lw          $v0, -0x3ABC($gp)
    ctx->pc = 0x31317cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952260)));
    // 0x313180: 0x8f83c548  lw          $v1, -0x3AB8($gp)
    ctx->pc = 0x313180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952264)));
    // 0x313184: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x313184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x313188: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x313188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x31318c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x31318cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x313190: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x313190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x313194: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x313194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x313198: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x313198u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x31319c: 0x26500030  addiu       $s0, $s2, 0x30
    ctx->pc = 0x31319cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x3131a0: 0x8f82c55c  lw          $v0, -0x3AA4($gp)
    ctx->pc = 0x3131a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952284)));
    // 0x3131a4: 0xfe040008  sd          $a0, 0x8($s0)
    ctx->pc = 0x3131a4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 4));
    // 0x3131a8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3131a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3131ac: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x3131acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x3131b0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x3131b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x3131b4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3131b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x3131b8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3131b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3131bc: 0x8f83c55c  lw          $v1, -0x3AA4($gp)
    ctx->pc = 0x3131bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952284)));
    // 0x3131c0: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x3131c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3131c4: 0x18400044  blez        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x3131C4u;
    {
        const bool branch_taken_0x3131c4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3131C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3131C4u;
        // 0x3131c8: 0x26500040  addiu       $s0, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3131c4) {
            ctx->pc = 0x3132D8u;
            goto label_3132d8;
        }
    }
    ctx->pc = 0x3131CCu;
    // 0x3131cc: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x3131ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x3131d0: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x3131d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3131d4: 0x94a3c  dsll32      $t1, $t1, 8
    ctx->pc = 0x3131d4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 8));
    // 0x3131d8: 0x94a3a  dsrl        $t1, $t1, 8
    ctx->pc = 0x3131d8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> 8);
    // 0x3131dc: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x3131dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x3131e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3131e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3131e4: 0x22c38  dsll        $a1, $v0, 16
    ctx->pc = 0x3131e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << 16);
    // 0x3131e8: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x3131e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x3131ec: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x3131ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x3131f0: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x3131f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x3131f4: 0x22238  dsll        $a0, $v0, 8
    ctx->pc = 0x3131f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 8);
    // 0x3131f8: 0x3402fe00  ori         $v0, $zero, 0xFE00
    ctx->pc = 0x3131f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    // 0x3131fc: 0x213bc  dsll32      $v0, $v0, 14
    ctx->pc = 0x3131fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 14));
    // 0x313200: 0x33a38  dsll        $a3, $v1, 8
    ctx->pc = 0x313200u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << 8);
    // 0x313204: 0x1e1c38  dsll        $v1, $fp, 16
    ctx->pc = 0x313204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) << 16);
    // 0x313208: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x313208u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x31320c: 0x8fa70100  lw          $a3, 0x100($sp)
    ctx->pc = 0x31320cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x313210: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x313210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x313214: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x313214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x313218: 0xe23025  or          $a2, $a3, $v0
    ctx->pc = 0x313218u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x31321c: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x31321cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x313220: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x313220u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x313224: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x313224u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x313228: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x313228u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x31322c: 0x171e38  dsll        $v1, $s7, 24
    ctx->pc = 0x31322cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) << 24);
    // 0x313230: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x313230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x313234: 0x162e38  dsll        $a1, $s6, 24
    ctx->pc = 0x313234u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) << 24);
    // 0x313238: 0x433825  or          $a3, $v0, $v1
    ctx->pc = 0x313238u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31323c: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x31323cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x313240: 0x45438  dsll        $t2, $a0, 16
    ctx->pc = 0x313240u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) << 16);
    // 0x313244: 0x0  nop
    ctx->pc = 0x313244u;
    // NOP
label_313248:
    // 0x313248: 0xfe070000  sd          $a3, 0x0($s0)
    ctx->pc = 0x313248u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 7));
    // 0x31324c: 0x82180  sll         $a0, $t0, 6
    ctx->pc = 0x31324cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
    // 0x313250: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x313250u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x313254: 0x9fa200c8  lwu         $v0, 0xC8($sp)
    ctx->pc = 0x313254u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x313258: 0x9fa300c0  lwu         $v1, 0xC0($sp)
    ctx->pc = 0x313258u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x31325c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31325cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x313260: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x313260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x313264: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x313264u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x313268: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x313268u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x31326c: 0x8f82c550  lw          $v0, -0x3AB0($gp)
    ctx->pc = 0x31326cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952272)));
    // 0x313270: 0x8f83c54c  lw          $v1, -0x3AB4($gp)
    ctx->pc = 0x313270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952268)));
    // 0x313274: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x313274u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x313278: 0xfe050008  sd          $a1, 0x8($s0)
    ctx->pc = 0x313278u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 5));
    // 0x31327c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31327cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x313280: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x313280u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x313284: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x313284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x313288: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x313288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x31328c: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x31328cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x313290: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x313290u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x313294: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x313294u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x313298: 0x9fa200c8  lwu         $v0, 0xC8($sp)
    ctx->pc = 0x313298u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31329c: 0x9fa300c4  lwu         $v1, 0xC4($sp)
    ctx->pc = 0x31329cu;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x3132a0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3132a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3132a4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3132a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3132a8: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x3132a8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x3132ac: 0x8f82c54c  lw          $v0, -0x3AB4($gp)
    ctx->pc = 0x3132acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952268)));
    // 0x3132b0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3132b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3132b4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3132b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3132b8: 0x4a1825  or          $v1, $v0, $t2
    ctx->pc = 0x3132b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x3132bc: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x3132bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x3132c0: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x3132c0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x3132c4: 0x8f83c55c  lw          $v1, -0x3AA4($gp)
    ctx->pc = 0x3132c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952284)));
    // 0x3132c8: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x3132c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3132cc: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x3132ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3132d0: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x3132D0u;
    {
        const bool branch_taken_0x3132d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3132D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3132D0u;
        // 0x3132d4: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3132d0) {
            ctx->pc = 0x313248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_313248;
        }
    }
    ctx->pc = 0x3132D8u;
label_3132d8:
    // 0x3132d8: 0x2862000a  slti        $v0, $v1, 0xA
    ctx->pc = 0x3132d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x3132dc: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3132DCu;
    {
        const bool branch_taken_0x3132dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3132dc) {
            ctx->pc = 0x3132E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3132DCu;
            // 0x3132e0: 0x26300320  addiu       $s0, $s1, 0x320 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 800));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313300u;
            goto label_313300;
        }
    }
    ctx->pc = 0x3132E4u;
    // 0x3132e4: 0x26830310  addiu       $v1, $s4, 0x310
    ctx->pc = 0x3132e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 784));
    // 0x3132e8: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x3132e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x3132ec: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3132ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3132f0: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x3132f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x3132f4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x3132f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x3132f8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x3132f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x3132fc: 0x26300320  addiu       $s0, $s1, 0x320
    ctx->pc = 0x3132fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 800));
label_313300:
    // 0x313300: 0x3c026000  lui         $v0, 0x6000
    ctx->pc = 0x313300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24576 << 16));
    // 0x313304: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x313304u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x313308: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x313308u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x31330c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x31330cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x313310: 0xc0c6870  jal         func_31A1C0
    ctx->pc = 0x313310u;
    SET_GPR_U32(ctx, 31, 0x313318u);
    ctx->pc = 0x313314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313310u;
    // 0x313314: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A1C0u, 0x313310u, 0x313318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313318u;
label_313318:
    // 0x313318: 0x26240310  addiu       $a0, $s1, 0x310
    ctx->pc = 0x313318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
    // 0x31331c: 0xc0cbf98  jal         func_32FE60
    ctx->pc = 0x31331Cu;
    SET_GPR_U32(ctx, 31, 0x313324u);
    ctx->pc = 0x313320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31331Cu;
    // 0x313320: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FE60u, 0x31331Cu, 0x313324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313324u;
label_313324:
    // 0x313324: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x313324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313328: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x313328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31332c: 0xc0cc0c2  jal         func_330308
    ctx->pc = 0x31332Cu;
    SET_GPR_U32(ctx, 31, 0x313334u);
    ctx->pc = 0x313330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31332Cu;
    // 0x313330: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330308u, 0x31332Cu, 0x313334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313334u;
label_313334:
    // 0x313334: 0xc0c6878  jal         func_31A1E0
    ctx->pc = 0x313334u;
    SET_GPR_U32(ctx, 31, 0x31333Cu);
    ctx->pc = 0x31A1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A1E0u, 0x313334u, 0x31333Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31333Cu;
label_31333c:
    // 0x31333c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31333cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_313340:
    // 0x313340: 0xdfb00120  ld          $s0, 0x120($sp)
    ctx->pc = 0x313340u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x313344: 0xdfb10128  ld          $s1, 0x128($sp)
    ctx->pc = 0x313344u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x313348: 0xdfb20130  ld          $s2, 0x130($sp)
    ctx->pc = 0x313348u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x31334c: 0xdfb30138  ld          $s3, 0x138($sp)
    ctx->pc = 0x31334cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x313350: 0xdfb40140  ld          $s4, 0x140($sp)
    ctx->pc = 0x313350u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x313354: 0xdfb50148  ld          $s5, 0x148($sp)
    ctx->pc = 0x313354u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x313358: 0xdfb60150  ld          $s6, 0x150($sp)
    ctx->pc = 0x313358u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x31335c: 0xdfb70158  ld          $s7, 0x158($sp)
    ctx->pc = 0x31335cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x313360: 0xdfbe0160  ld          $fp, 0x160($sp)
    ctx->pc = 0x313360u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x313364: 0xdfbf0168  ld          $ra, 0x168($sp)
    ctx->pc = 0x313364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x313368: 0xc7b80190  lwc1        $f24, 0x190($sp)
    ctx->pc = 0x313368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x31336c: 0xc7b70188  lwc1        $f23, 0x188($sp)
    ctx->pc = 0x31336cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x313370: 0xc7b60180  lwc1        $f22, 0x180($sp)
    ctx->pc = 0x313370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x313374: 0xc7b50178  lwc1        $f21, 0x178($sp)
    ctx->pc = 0x313374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x313378: 0xc7b40170  lwc1        $f20, 0x170($sp)
    ctx->pc = 0x313378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x31337c: 0x3e00008  jr          $ra
    ctx->pc = 0x31337Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x313380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31337Cu;
        // 0x313380: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31337Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x313384u;
    // 0x313384: 0x0  nop
    ctx->pc = 0x313384u;
    // NOP
    ctx->pc = 0x313388u;
}
