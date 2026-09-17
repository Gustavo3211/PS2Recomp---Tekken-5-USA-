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

// Function: sub_00293690
// Address: 0x293690 - 0x293838
void sub_00293690_0x293690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00293690_0x293690");
#endif

    switch (ctx->pc) {
        case 0x293778u: goto label_293778;
        case 0x293794u: goto label_293794;
        case 0x293818u: goto label_293818;
        default: break;
    }

    ctx->pc = 0x293690u;

    // 0x293690: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x293690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x293694: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x293694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x293698: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x293698u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29369c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x29369cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2936a0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2936a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2936a4: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x2936a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x2936a8: 0x1440005d  bnez        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x2936A8u;
    {
        const bool branch_taken_0x2936a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2936ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2936A8u;
        // 0x2936ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2936a8) {
            ctx->pc = 0x293820u;
            goto label_293820;
        }
    }
    ctx->pc = 0x2936B0u;
    // 0x2936b0: 0x262500a0  addiu       $a1, $s1, 0xA0
    ctx->pc = 0x2936b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    // 0x2936b4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2936b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2936b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2936B8u;
    {
        const bool branch_taken_0x2936b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2936BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2936B8u;
        // 0x2936bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2936b8) {
            ctx->pc = 0x2936D0u;
            goto label_2936d0;
        }
    }
    ctx->pc = 0x2936C0u;
    // 0x2936c0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2936c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2936c4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2936c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2936c8: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2936C8u;
    {
        const bool branch_taken_0x2936c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2936c8) {
            ctx->pc = 0x2936CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2936C8u;
            // 0x2936cc: 0x8c82013c  lw          $v0, 0x13C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 316)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2936E0u;
            goto label_2936e0;
        }
    }
    ctx->pc = 0x2936D0u;
label_2936d0:
    // 0x2936d0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2936d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2936d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2936d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2936d8: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2936d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x2936dc: 0x8c82013c  lw          $v0, 0x13C($a0)
    ctx->pc = 0x2936dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x13Cu));
label_2936e0:
    // 0x2936e0: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x2936E0u;
    {
        const bool branch_taken_0x2936e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2936E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2936E0u;
        // 0x2936e4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2936e0) {
            ctx->pc = 0x29381Cu;
            goto label_29381c;
        }
    }
    ctx->pc = 0x2936E8u;
    // 0x2936e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2936e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2936ec: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2936ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2936f0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2936f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2936f4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2936f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2936f8: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x2936f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2936fc: 0x3c0143a0  lui         $at, 0x43A0
    ctx->pc = 0x2936fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17312 << 16));
    // 0x293700: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x293700u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x293704: 0x3c014360  lui         $at, 0x4360
    ctx->pc = 0x293704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17248 << 16));
    // 0x293708: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x293708u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29370c: 0xc7828fe8  lwc1        $f2, -0x7018($gp)
    ctx->pc = 0x29370cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x293710: 0xe6200050  swc1        $f0, 0x50($s1)
    ctx->pc = 0x293710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
    // 0x293714: 0xe6210054  swc1        $f1, 0x54($s1)
    ctx->pc = 0x293714u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
    // 0x293718: 0xe6220058  swc1        $f2, 0x58($s1)
    ctx->pc = 0x293718u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
    // 0x29371c: 0xe6240074  swc1        $f4, 0x74($s1)
    ctx->pc = 0x29371cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
    // 0x293720: 0xae22007c  sw          $v0, 0x7C($s1)
    ctx->pc = 0x293720u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 2));
    // 0x293724: 0xe623008c  swc1        $f3, 0x8C($s1)
    ctx->pc = 0x293724u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 140), bits); }
    // 0x293728: 0xae230090  sw          $v1, 0x90($s1)
    ctx->pc = 0x293728u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 3));
    // 0x29372c: 0xae200060  sw          $zero, 0x60($s1)
    ctx->pc = 0x29372cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 0));
    // 0x293730: 0xae200064  sw          $zero, 0x64($s1)
    ctx->pc = 0x293730u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 0));
    // 0x293734: 0xe6240070  swc1        $f4, 0x70($s1)
    ctx->pc = 0x293734u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
    // 0x293738: 0xae200078  sw          $zero, 0x78($s1)
    ctx->pc = 0x293738u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 0));
    // 0x29373c: 0xe6230080  swc1        $f3, 0x80($s1)
    ctx->pc = 0x29373cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
    // 0x293740: 0xe6230084  swc1        $f3, 0x84($s1)
    ctx->pc = 0x293740u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 132), bits); }
    // 0x293744: 0xe6230088  swc1        $f3, 0x88($s1)
    ctx->pc = 0x293744u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 136), bits); }
    // 0x293748: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x293748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x29374c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x29374Cu;
    {
        const bool branch_taken_0x29374c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29374c) {
            ctx->pc = 0x293750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29374Cu;
            // 0x293750: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x293768u;
            goto label_293768;
        }
    }
    ctx->pc = 0x293754u;
    // 0x293754: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x293754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x293758: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x293758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x29375c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29375Cu;
    {
        const bool branch_taken_0x29375c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x29375c) {
            ctx->pc = 0x293770u;
            goto label_293770;
        }
    }
    ctx->pc = 0x293764u;
    // 0x293764: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x293764u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_293768:
    // 0x293768: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x293768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29376c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x29376cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_293770:
    // 0x293770: 0xc0a4d7e  jal         func_2935F8
    ctx->pc = 0x293770u;
    SET_GPR_U32(ctx, 31, 0x293778u);
    ctx->pc = 0x2935F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2935F8u, 0x293770u, 0x293778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293778u;
label_293778:
    // 0x293778: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x293778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29377c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29377cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x293780: 0x10800027  beqz        $a0, . + 4 + (0x27 << 2)
    ctx->pc = 0x293780u;
    {
        const bool branch_taken_0x293780 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x293784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293780u;
        // 0x293784: 0xae240094  sw          $a0, 0x94($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293780) {
            ctx->pc = 0x293820u;
            goto label_293820;
        }
    }
    ctx->pc = 0x293788u;
    // 0x293788: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x293788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29378c: 0xc0c8304  jal         func_320C10
    ctx->pc = 0x29378Cu;
    SET_GPR_U32(ctx, 31, 0x293794u);
    ctx->pc = 0x293790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29378Cu;
    // 0x293790: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320C10u, 0x29378Cu, 0x293794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293794u;
label_293794:
    // 0x293794: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x293794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x293798: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x293798u;
    {
        const bool branch_taken_0x293798 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x29379Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293798u;
        // 0x29379c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293798) {
            ctx->pc = 0x2937B0u;
            goto label_2937b0;
        }
    }
    ctx->pc = 0x2937A0u;
    // 0x2937a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2937a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2937a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2937a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2937a8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2937A8u;
    {
        const bool branch_taken_0x2937a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2937ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2937A8u;
        // 0x2937ac: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2937a8) {
            ctx->pc = 0x2937C8u;
            goto label_2937c8;
        }
    }
    ctx->pc = 0x2937B0u;
label_2937b0:
    // 0x2937b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2937b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2937b4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2937b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2937b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2937b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2937bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2937bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2937c0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2937c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2937c4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2937c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2937c8:
    // 0x2937c8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2937C8u;
    {
        const bool branch_taken_0x2937c8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2937CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2937C8u;
        // 0x2937cc: 0xe6200068  swc1        $f0, 0x68($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2937c8) {
            ctx->pc = 0x2937E0u;
            goto label_2937e0;
        }
    }
    ctx->pc = 0x2937D0u;
    // 0x2937d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2937d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2937d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2937d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2937d8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2937D8u;
    {
        const bool branch_taken_0x2937d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2937DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2937D8u;
        // 0x2937dc: 0xe620006c  swc1        $f0, 0x6C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 108), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2937d8) {
            ctx->pc = 0x2937FCu;
            goto label_2937fc;
        }
    }
    ctx->pc = 0x2937E0u;
label_2937e0:
    // 0x2937e0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2937e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2937e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2937e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2937e8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2937e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2937ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2937ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2937f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2937f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2937f4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2937f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2937f8: 0xe620006c  swc1        $f0, 0x6C($s1)
    ctx->pc = 0x2937f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 108), bits); }
label_2937fc:
    // 0x2937fc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2937fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x293800: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x293800u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x293804: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x293804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293808: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x293808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29380c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29380cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293810: 0xc0b79f8  jal         func_2DE7E0
    ctx->pc = 0x293810u;
    SET_GPR_U32(ctx, 31, 0x293818u);
    ctx->pc = 0x293814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293810u;
    // 0x293814: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE7E0u, 0x293810u, 0x293818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293818u;
label_293818:
    // 0x293818: 0xae300048  sw          $s0, 0x48($s1)
    ctx->pc = 0x293818u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 16));
label_29381c:
    // 0x29381c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29381cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_293820:
    // 0x293820: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x293820u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x293824: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x293824u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x293828: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x293828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29382c: 0x3e00008  jr          $ra
    ctx->pc = 0x29382Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x293830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29382Cu;
        // 0x293830: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29382Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x293834u;
    // 0x293834: 0x0  nop
    ctx->pc = 0x293834u;
    // NOP
    ctx->pc = 0x293838u;
}
