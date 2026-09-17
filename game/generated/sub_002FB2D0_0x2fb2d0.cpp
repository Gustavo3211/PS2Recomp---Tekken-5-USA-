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

// Function: sub_002FB2D0
// Address: 0x2fb2d0 - 0x2fb778
void sub_002FB2D0_0x2fb2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FB2D0_0x2fb2d0");
#endif

    switch (ctx->pc) {
        case 0x2fb344u: goto label_2fb344;
        case 0x2fb374u: goto label_2fb374;
        case 0x2fb380u: goto label_2fb380;
        case 0x2fb38cu: goto label_2fb38c;
        case 0x2fb3a0u: goto label_2fb3a0;
        case 0x2fb3b0u: goto label_2fb3b0;
        case 0x2fb3bcu: goto label_2fb3bc;
        case 0x2fb3c4u: goto label_2fb3c4;
        case 0x2fb408u: goto label_2fb408;
        case 0x2fb468u: goto label_2fb468;
        case 0x2fb4a4u: goto label_2fb4a4;
        case 0x2fb4ccu: goto label_2fb4cc;
        case 0x2fb508u: goto label_2fb508;
        case 0x2fb530u: goto label_2fb530;
        case 0x2fb5e0u: goto label_2fb5e0;
        case 0x2fb608u: goto label_2fb608;
        case 0x2fb638u: goto label_2fb638;
        case 0x2fb660u: goto label_2fb660;
        case 0x2fb690u: goto label_2fb690;
        case 0x2fb6b8u: goto label_2fb6b8;
        case 0x2fb6e8u: goto label_2fb6e8;
        case 0x2fb710u: goto label_2fb710;
        case 0x2fb724u: goto label_2fb724;
        default: break;
    }

    ctx->pc = 0x2fb2d0u;

    // 0x2fb2d0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x2fb2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x2fb2d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2fb2d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2fb2d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2fb2d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fb2dc: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x2fb2dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x2fb2e0: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x2fb2e0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb2e4: 0xffb700a8  sd          $s7, 0xA8($sp)
    ctx->pc = 0x2fb2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 23));
    // 0x2fb2e8: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x2fb2e8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb2ec: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x2fb2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x2fb2f0: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x2fb2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x2fb2f4: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x2fb2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x2fb2f8: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x2fb2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x2fb2fc: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x2fb2fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x2fb300: 0xffb50098  sd          $s5, 0x98($sp)
    ctx->pc = 0x2fb300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
    // 0x2fb304: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x2fb304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x2fb308: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x2fb308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
    // 0x2fb30c: 0xe7bb00f8  swc1        $f27, 0xF8($sp)
    ctx->pc = 0x2fb30cu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x2fb310: 0xe7ba00f0  swc1        $f26, 0xF0($sp)
    ctx->pc = 0x2fb310u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2fb314: 0xe7b900e8  swc1        $f25, 0xE8($sp)
    ctx->pc = 0x2fb314u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x2fb318: 0xe7b800e0  swc1        $f24, 0xE0($sp)
    ctx->pc = 0x2fb318u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2fb31c: 0xe7b700d8  swc1        $f23, 0xD8($sp)
    ctx->pc = 0x2fb31cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x2fb320: 0xe7b600d0  swc1        $f22, 0xD0($sp)
    ctx->pc = 0x2fb320u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2fb324: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x2fb324u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x2fb328: 0x13c000ff  beqz        $fp, . + 4 + (0xFF << 2)
    ctx->pc = 0x2FB328u;
    {
        const bool branch_taken_0x2fb328 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB328u;
        // 0x2fb32c: 0xe7b400c0  swc1        $f20, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb328) {
            ctx->pc = 0x2FB728u;
            goto label_2fb728;
        }
    }
    ctx->pc = 0x2FB330u;
    // 0x2fb330: 0x8ee20024  lw          $v0, 0x24($s7)
    ctx->pc = 0x2fb330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 36)));
    // 0x2fb334: 0x504000fd  beql        $v0, $zero, . + 4 + (0xFD << 2)
    ctx->pc = 0x2FB334u;
    {
        const bool branch_taken_0x2fb334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fb334) {
            ctx->pc = 0x2FB338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB334u;
            // 0x2fb338: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB72Cu;
            goto label_2fb72c;
        }
    }
    ctx->pc = 0x2FB33Cu;
    // 0x2fb33c: 0xc0cb7d4  jal         func_32DF50
    ctx->pc = 0x2FB33Cu;
    SET_GPR_U32(ctx, 31, 0x2FB344u);
    ctx->pc = 0x2FB340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB33Cu;
    // 0x2fb340: 0x8c520008  lw          $s2, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF50u, 0x2FB33Cu, 0x2FB344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB344u;
label_2fb344:
    // 0x2fb344: 0x3c14001b  lui         $s4, 0x1B
    ctx->pc = 0x2fb344u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)27 << 16));
    // 0x2fb348: 0x26560020  addiu       $s6, $s2, 0x20
    ctx->pc = 0x2fb348u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x2fb34c: 0x26530030  addiu       $s3, $s2, 0x30
    ctx->pc = 0x2fb34cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x2fb350: 0x2682ec00  addiu       $v0, $s4, -0x1400
    ctx->pc = 0x2fb350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962176));
    // 0x2fb354: 0xd85c0000  lqc2        $vf28, 0x0($v0)
    ctx->pc = 0x2fb354u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(FAST_READ128(0x1AEC00u));
    // 0x2fb358: 0xd85d0010  lqc2        $vf29, 0x10($v0)
    ctx->pc = 0x2fb358u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(FAST_READ128(0x1AEC10u));
    // 0x2fb35c: 0xd85e0020  lqc2        $vf30, 0x20($v0)
    ctx->pc = 0x2fb35cu;
    ctx->vu0_vf[30] = _mm_castsi128_ps(FAST_READ128(0x1AEC20u));
    // 0x2fb360: 0xd85f0030  lqc2        $vf31, 0x30($v0)
    ctx->pc = 0x2fb360u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(FAST_READ128(0x1AEC30u));
    // 0x2fb364: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2fb364u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2fb368: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2fb368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb36c: 0xc0cb99a  jal         func_32E668
    ctx->pc = 0x2FB36Cu;
    SET_GPR_U32(ctx, 31, 0x2FB374u);
    ctx->pc = 0x2FB370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB36Cu;
    // 0x2fb370: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E668u, 0x2FB36Cu, 0x2FB374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB374u;
label_2fb374:
    // 0x2fb374: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2fb374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb378: 0xc0cb99a  jal         func_32E668
    ctx->pc = 0x2FB378u;
    SET_GPR_U32(ctx, 31, 0x2FB380u);
    ctx->pc = 0x2FB37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB378u;
    // 0x2fb37c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E668u, 0x2FB378u, 0x2FB380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB380u;
label_2fb380:
    // 0x2fb380: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2fb380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb384: 0xc0cb9d8  jal         func_32E760
    ctx->pc = 0x2FB384u;
    SET_GPR_U32(ctx, 31, 0x2FB38Cu);
    ctx->pc = 0x2FB388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB384u;
    // 0x2fb388: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E760u, 0x2FB384u, 0x2FB38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB38Cu;
label_2fb38c:
    // 0x2fb38c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2fb38cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb390: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x2fb390u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fb394: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2fb394u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2fb398: 0xc0cb99a  jal         func_32E668
    ctx->pc = 0x2FB398u;
    SET_GPR_U32(ctx, 31, 0x2FB3A0u);
    ctx->pc = 0x2FB39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB398u;
    // 0x2fb39c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E668u, 0x2FB398u, 0x2FB3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB3A0u;
label_2fb3a0:
    // 0x2fb3a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fb3a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb3a4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2fb3a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb3a8: 0xc0cb97c  jal         func_32E5F0
    ctx->pc = 0x2FB3A8u;
    SET_GPR_U32(ctx, 31, 0x2FB3B0u);
    ctx->pc = 0x2FB3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB3A8u;
    // 0x2fb3ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E5F0u, 0x2FB3A8u, 0x2FB3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB3B0u;
label_2fb3b0:
    // 0x2fb3b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2fb3b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb3b4: 0xc0cb9d8  jal         func_32E760
    ctx->pc = 0x2FB3B4u;
    SET_GPR_U32(ctx, 31, 0x2FB3BCu);
    ctx->pc = 0x2FB3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB3B4u;
    // 0x2fb3b8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E760u, 0x2FB3B4u, 0x2FB3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB3BCu;
label_2fb3bc:
    // 0x2fb3bc: 0xc0cb7e0  jal         func_32DF80
    ctx->pc = 0x2FB3BCu;
    SET_GPR_U32(ctx, 31, 0x2FB3C4u);
    ctx->pc = 0x2FB3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB3BCu;
    // 0x2fb3c0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF80u, 0x2FB3BCu, 0x2FB3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB3C4u;
label_2fb3c4:
    // 0x2fb3c4: 0x4614a882  mul.s       $f2, $f21, $f20
    ctx->pc = 0x2fb3c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
    // 0x2fb3c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2fb3c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2fb3cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2fb3ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fb3d0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2fb3d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fb3d4: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2fb3d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fb3d8: 0x450100d4  bc1t        . + 4 + (0xD4 << 2)
    ctx->pc = 0x2FB3D8u;
    {
        const bool branch_taken_0x2fb3d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FB3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB3D8u;
        // 0x2fb3dc: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb3d8) {
            ctx->pc = 0x2FB72Cu;
            goto label_2fb72c;
        }
    }
    ctx->pc = 0x2FB3E0u;
    // 0x2fb3e0: 0x8ee20020  lw          $v0, 0x20($s7)
    ctx->pc = 0x2fb3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 32)));
    // 0x2fb3e4: 0x2690ec00  addiu       $s0, $s4, -0x1400
    ctx->pc = 0x2fb3e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962176));
    // 0x2fb3e8: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x2fb3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x2fb3ec: 0xc7819524  lwc1        $f1, -0x6ADC($gp)
    ctx->pc = 0x2fb3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fb3f0: 0xc4400088  lwc1        $f0, 0x88($v0)
    ctx->pc = 0x2fb3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fb3f4: 0xc4580094  lwc1        $f24, 0x94($v0)
    ctx->pc = 0x2fb3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2fb3f8: 0x46010682  mul.s       $f26, $f0, $f1
    ctx->pc = 0x2fb3f8u;
    ctx->f[26] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2fb3fc: 0xc454008c  lwc1        $f20, 0x8C($v0)
    ctx->pc = 0x2fb3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2fb400: 0xc0cb7d4  jal         func_32DF50
    ctx->pc = 0x2FB400u;
    SET_GPR_U32(ctx, 31, 0x2FB408u);
    ctx->pc = 0x2FB404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB400u;
    // 0x2fb404: 0xc4550090  lwc1        $f21, 0x90($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF50u, 0x2FB400u, 0x2FB408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB408u;
label_2fb408:
    // 0x2fb408: 0xda1c0040  lqc2        $vf28, 0x40($s0)
    ctx->pc = 0x2fb408u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2fb40c: 0xda1d0050  lqc2        $vf29, 0x50($s0)
    ctx->pc = 0x2fb40cu;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2fb410: 0xda1e0060  lqc2        $vf30, 0x60($s0)
    ctx->pc = 0x2fb410u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2fb414: 0xda1f0070  lqc2        $vf31, 0x70($s0)
    ctx->pc = 0x2fb414u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2fb418: 0x27b50040  addiu       $s5, $sp, 0x40
    ctx->pc = 0x2fb418u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2fb41c: 0x4600a007  neg.s       $f0, $f20
    ctx->pc = 0x2fb41cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
    // 0x2fb420: 0xda700000  lqc2        $vf16, 0x0($s3)
    ctx->pc = 0x2fb420u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2fb424: 0xda510000  lqc2        $vf17, 0x0($s2)
    ctx->pc = 0x2fb424u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2fb428: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2fb428u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2fb42c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2fb42cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2fb430: 0x4bc0803c  vaddax.xyz  $ACC, $vf16, $vf0x
    ctx->pc = 0x2fb430u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2fb434: 0x4bc18c08  vmaddx.xyz  $vf16, $vf17, $vf1x
    ctx->pc = 0x2fb434u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2fb438: 0xfab00000  sqc2        $vf16, 0x0($s5)
    ctx->pc = 0x2fb438u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2fb43c: 0x27b40050  addiu       $s4, $sp, 0x50
    ctx->pc = 0x2fb43cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2fb440: 0xda700000  lqc2        $vf16, 0x0($s3)
    ctx->pc = 0x2fb440u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2fb444: 0xda510000  lqc2        $vf17, 0x0($s2)
    ctx->pc = 0x2fb444u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2fb448: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x2fb448u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2fb44c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2fb44cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2fb450: 0x4bc0803c  vaddax.xyz  $ACC, $vf16, $vf0x
    ctx->pc = 0x2fb450u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2fb454: 0x4bc18c08  vmaddx.xyz  $vf16, $vf17, $vf1x
    ctx->pc = 0x2fb454u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2fb458: 0xfa900000  sqc2        $vf16, 0x0($s4)
    ctx->pc = 0x2fb458u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2fb45c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2fb45cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb460: 0xc0cb99a  jal         func_32E668
    ctx->pc = 0x2FB460u;
    SET_GPR_U32(ctx, 31, 0x2FB468u);
    ctx->pc = 0x2FB464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB460u;
    // 0x2fb464: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E668u, 0x2FB460u, 0x2FB468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB468u;
label_2fb468:
    // 0x2fb468: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x2fb468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fb46c: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x2fb46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fb470: 0x0  nop
    ctx->pc = 0x2fb470u;
    // NOP
    // 0x2fb474: 0x0  nop
    ctx->pc = 0x2fb474u;
    // NOP
    // 0x2fb478: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x2fb478u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
    // 0x2fb47c: 0xdab00000  lqc2        $vf16, 0x0($s5)
    ctx->pc = 0x2fb47cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2fb480: 0xdad10000  lqc2        $vf17, 0x0($s6)
    ctx->pc = 0x2fb480u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2fb484: 0x4402a800  mfc1        $v0, $f21
    ctx->pc = 0x2fb484u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2fb488: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2fb488u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2fb48c: 0x4bc0803c  vaddax.xyz  $ACC, $vf16, $vf0x
    ctx->pc = 0x2fb48cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2fb490: 0x4bc18c08  vmaddx.xyz  $vf16, $vf17, $vf1x
    ctx->pc = 0x2fb490u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2fb494: 0xfa300000  sqc2        $vf16, 0x0($s1)
    ctx->pc = 0x2fb494u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2fb498: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fb498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb49c: 0xc0cb99a  jal         func_32E668
    ctx->pc = 0x2FB49Cu;
    SET_GPR_U32(ctx, 31, 0x2FB4A4u);
    ctx->pc = 0x2FB4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB49Cu;
    // 0x2fb4a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E668u, 0x2FB49Cu, 0x2FB4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB4A4u;
label_2fb4a4:
    // 0x2fb4a4: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2fb4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fb4a8: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x2fb4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fb4ac: 0x0  nop
    ctx->pc = 0x2fb4acu;
    // NOP
    // 0x2fb4b0: 0x0  nop
    ctx->pc = 0x2fb4b0u;
    // NOP
    // 0x2fb4b4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2fb4b4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2fb4b8: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x2fb4b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x2fb4bc: 0x460006c5  abs.s       $f27, $f0
    ctx->pc = 0x2fb4bcu;
    ctx->f[27] = FPU_ABS_S(ctx->f[0]);
    // 0x2fb4c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2fb4c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb4c4: 0xc0cb99a  jal         func_32E668
    ctx->pc = 0x2FB4C4u;
    SET_GPR_U32(ctx, 31, 0x2FB4CCu);
    ctx->pc = 0x2FB4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB4C4u;
    // 0x2fb4c8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E668u, 0x2FB4C4u, 0x2FB4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB4CCu;
label_2fb4cc:
    // 0x2fb4cc: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x2fb4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fb4d0: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x2fb4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fb4d4: 0x0  nop
    ctx->pc = 0x2fb4d4u;
    // NOP
    // 0x2fb4d8: 0x0  nop
    ctx->pc = 0x2fb4d8u;
    // NOP
    // 0x2fb4dc: 0x46000d83  div.s       $f22, $f1, $f0
    ctx->pc = 0x2fb4dcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[22] = ctx->f[1] / ctx->f[0];
    // 0x2fb4e0: 0xda900000  lqc2        $vf16, 0x0($s4)
    ctx->pc = 0x2fb4e0u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2fb4e4: 0xdad10000  lqc2        $vf17, 0x0($s6)
    ctx->pc = 0x2fb4e4u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2fb4e8: 0x4402a800  mfc1        $v0, $f21
    ctx->pc = 0x2fb4e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2fb4ec: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2fb4ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2fb4f0: 0x4bc0803c  vaddax.xyz  $ACC, $vf16, $vf0x
    ctx->pc = 0x2fb4f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2fb4f4: 0x4bc18c08  vmaddx.xyz  $vf16, $vf17, $vf1x
    ctx->pc = 0x2fb4f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2fb4f8: 0xfa300000  sqc2        $vf16, 0x0($s1)
    ctx->pc = 0x2fb4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2fb4fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fb4fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb500: 0xc0cb99a  jal         func_32E668
    ctx->pc = 0x2FB500u;
    SET_GPR_U32(ctx, 31, 0x2FB508u);
    ctx->pc = 0x2FB504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB500u;
    // 0x2fb504: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E668u, 0x2FB500u, 0x2FB508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB508u;
label_2fb508:
    // 0x2fb508: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2fb508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fb50c: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x2fb50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fb510: 0x0  nop
    ctx->pc = 0x2fb510u;
    // NOP
    // 0x2fb514: 0x0  nop
    ctx->pc = 0x2fb514u;
    // NOP
    // 0x2fb518: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2fb518u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2fb51c: 0x4600b001  sub.s       $f0, $f22, $f0
    ctx->pc = 0x2fb51cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
    // 0x2fb520: 0x46000645  abs.s       $f25, $f0
    ctx->pc = 0x2fb520u;
    ctx->f[25] = FPU_ABS_S(ctx->f[0]);
    // 0x2fb524: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2fb524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb528: 0xc0cb99a  jal         func_32E668
    ctx->pc = 0x2FB528u;
    SET_GPR_U32(ctx, 31, 0x2FB530u);
    ctx->pc = 0x2FB52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB528u;
    // 0x2fb52c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E668u, 0x2FB528u, 0x2FB530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB530u;
label_2fb530:
    // 0x2fb530: 0x4614b034  c.lt.s      $f22, $f20
    ctx->pc = 0x2fb530u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fb534: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x2fb534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fb538: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x2fb538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fb53c: 0x0  nop
    ctx->pc = 0x2fb53cu;
    // NOP
    // 0x2fb540: 0x0  nop
    ctx->pc = 0x2fb540u;
    // NOP
    // 0x2fb544: 0x46000dc3  div.s       $f23, $f1, $f0
    ctx->pc = 0x2fb544u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[23] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[23] = ctx->f[1] / ctx->f[0];
    // 0x2fb548: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x2FB548u;
    {
        const bool branch_taken_0x2fb548 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2fb548) {
            ctx->pc = 0x2FB54Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB548u;
            // 0x2fb54c: 0x461ba501  sub.s       $f20, $f20, $f27 (Delay Slot)
            ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[27]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB568u;
            goto label_2fb568;
        }
    }
    ctx->pc = 0x2FB550u;
    // 0x2fb550: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fb550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fb554: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x2fb554u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x2fb558: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x2fb558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x2fb55c: 0x4600b506  mov.s       $f20, $f22
    ctx->pc = 0x2fb55cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[22]);
    // 0x2fb560: 0x4600ad86  mov.s       $f22, $f21
    ctx->pc = 0x2fb560u;
    ctx->f[22] = FPU_MOV_S(ctx->f[21]);
    // 0x2fb564: 0x461ba501  sub.s       $f20, $f20, $f27
    ctx->pc = 0x2fb564u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[27]);
label_2fb568:
    // 0x2fb568: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2fb568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fb56c: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x2fb56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fb570: 0x4619b580  add.s       $f22, $f22, $f25
    ctx->pc = 0x2fb570u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[25]);
    // 0x2fb574: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2fb574u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2fb578: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2fb578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fb57c: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x2fb57cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2fb580: 0x4614b834  c.lt.s      $f23, $f20
    ctx->pc = 0x2fb580u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fb584: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x2fb584u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2fb588: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2FB588u;
    {
        const bool branch_taken_0x2fb588 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FB58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB588u;
        // 0x2fb58c: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb588) {
            ctx->pc = 0x2FB59Cu;
            goto label_2fb59c;
        }
    }
    ctx->pc = 0x2FB590u;
    // 0x2fb590: 0x4617b034  c.lt.s      $f22, $f23
    ctx->pc = 0x2fb590u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fb594: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2FB594u;
    {
        const bool branch_taken_0x2fb594 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FB598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB594u;
        // 0x2fb598: 0x8fa20060  lw          $v0, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb594) {
            ctx->pc = 0x2FB5B0u;
            goto label_2fb5b0;
        }
    }
    ctx->pc = 0x2FB59Cu;
label_2fb59c:
    // 0x2fb59c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2fb59cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2fb5a0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2fb5a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2fb5a4: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x2FB5A4u;
    {
        const bool branch_taken_0x2fb5a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fb5a4) {
            ctx->pc = 0x2FB71Cu;
            goto label_2fb71c;
        }
    }
    ctx->pc = 0x2FB5ACu;
    // 0x2fb5ac: 0x0  nop
    ctx->pc = 0x2fb5acu;
    // NOP
label_2fb5b0:
    // 0x2fb5b0: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2FB5B0u;
    {
        const bool branch_taken_0x2fb5b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB5B0u;
        // 0x2fb5b4: 0x27b00030  addiu       $s0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb5b0) {
            ctx->pc = 0x2FB668u;
            goto label_2fb668;
        }
    }
    ctx->pc = 0x2FB5B8u;
    // 0x2fb5b8: 0xda900000  lqc2        $vf16, 0x0($s4)
    ctx->pc = 0x2fb5b8u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2fb5bc: 0xda110000  lqc2        $vf17, 0x0($s0)
    ctx->pc = 0x2fb5bcu;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2fb5c0: 0x4402c000  mfc1        $v0, $f24
    ctx->pc = 0x2fb5c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[24], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2fb5c4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2fb5c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2fb5c8: 0x4bc0803c  vaddax.xyz  $ACC, $vf16, $vf0x
    ctx->pc = 0x2fb5c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2fb5cc: 0x4bc18c08  vmaddx.xyz  $vf16, $vf17, $vf1x
    ctx->pc = 0x2fb5ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2fb5d0: 0xfbb00000  sqc2        $vf16, 0x0($sp)
    ctx->pc = 0x2fb5d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2fb5d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2fb5d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb5d8: 0xc0cb99a  jal         func_32E668
    ctx->pc = 0x2FB5D8u;
    SET_GPR_U32(ctx, 31, 0x2FB5E0u);
    ctx->pc = 0x2FB5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB5D8u;
    // 0x2fb5dc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E668u, 0x2FB5D8u, 0x2FB5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB5E0u;
label_2fb5e0:
    // 0x2fb5e0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2fb5e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb5e4: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2fb5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fb5e8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2fb5e8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x2fb5ec: 0xc7ae000c  lwc1        $f14, 0xC($sp)
    ctx->pc = 0x2fb5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2fb5f0: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x2fb5f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x2fb5f4: 0x0  nop
    ctx->pc = 0x2fb5f4u;
    // NOP
    // 0x2fb5f8: 0x0  nop
    ctx->pc = 0x2fb5f8u;
    // NOP
    // 0x2fb5fc: 0x460e0383  div.s       $f14, $f0, $f14
    ctx->pc = 0x2fb5fcu;
    if (ctx->f[14] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[14] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[14] = ctx->f[0] / ctx->f[14];
    // 0x2fb600: 0xc0dcbb4  jal         func_372ED0
    ctx->pc = 0x2FB600u;
    SET_GPR_U32(ctx, 31, 0x2FB608u);
    ctx->pc = 0x2FB604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB600u;
    // 0x2fb604: 0x4600d3c6  mov.s       $f15, $f26 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[26]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x372ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372ED0u, 0x2FB600u, 0x2FB608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB608u;
label_2fb608:
    // 0x2fb608: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2fb608u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2fb60c: 0x4600c007  neg.s       $f0, $f24
    ctx->pc = 0x2fb60cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[24]);
    // 0x2fb610: 0xdab00000  lqc2        $vf16, 0x0($s5)
    ctx->pc = 0x2fb610u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2fb614: 0xda110000  lqc2        $vf17, 0x0($s0)
    ctx->pc = 0x2fb614u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2fb618: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2fb618u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2fb61c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2fb61cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2fb620: 0x4bc0803c  vaddax.xyz  $ACC, $vf16, $vf0x
    ctx->pc = 0x2fb620u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2fb624: 0x4bc18c08  vmaddx.xyz  $vf16, $vf17, $vf1x
    ctx->pc = 0x2fb624u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2fb628: 0xfbb00000  sqc2        $vf16, 0x0($sp)
    ctx->pc = 0x2fb628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2fb62c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2fb62cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb630: 0xc0cb99a  jal         func_32E668
    ctx->pc = 0x2FB630u;
    SET_GPR_U32(ctx, 31, 0x2FB638u);
    ctx->pc = 0x2FB634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB630u;
    // 0x2fb634: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E668u, 0x2FB630u, 0x2FB638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB638u;
label_2fb638:
    // 0x2fb638: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2fb638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb63c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2fb63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fb640: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x2fb640u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x2fb644: 0xc7ae000c  lwc1        $f14, 0xC($sp)
    ctx->pc = 0x2fb644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2fb648: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x2fb648u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x2fb64c: 0x0  nop
    ctx->pc = 0x2fb64cu;
    // NOP
    // 0x2fb650: 0x0  nop
    ctx->pc = 0x2fb650u;
    // NOP
    // 0x2fb654: 0x460e0383  div.s       $f14, $f0, $f14
    ctx->pc = 0x2fb654u;
    if (ctx->f[14] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[14] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[14] = ctx->f[0] / ctx->f[14];
    // 0x2fb658: 0xc0dcbb4  jal         func_372ED0
    ctx->pc = 0x2FB658u;
    SET_GPR_U32(ctx, 31, 0x2FB660u);
    ctx->pc = 0x2FB65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB658u;
    // 0x2fb65c: 0x4600d3c6  mov.s       $f15, $f26 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[26]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x372ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372ED0u, 0x2FB658u, 0x2FB660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB660u;
label_2fb660:
    // 0x2fb660: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2FB660u;
    {
        const bool branch_taken_0x2fb660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB660u;
        // 0x2fb664: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb660) {
            ctx->pc = 0x2FB714u;
            goto label_2fb714;
        }
    }
    ctx->pc = 0x2FB668u;
label_2fb668:
    // 0x2fb668: 0xdab00000  lqc2        $vf16, 0x0($s5)
    ctx->pc = 0x2fb668u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2fb66c: 0xda110000  lqc2        $vf17, 0x0($s0)
    ctx->pc = 0x2fb66cu;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2fb670: 0x4402c000  mfc1        $v0, $f24
    ctx->pc = 0x2fb670u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[24], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2fb674: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2fb674u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2fb678: 0x4bc0803c  vaddax.xyz  $ACC, $vf16, $vf0x
    ctx->pc = 0x2fb678u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2fb67c: 0x4bc18c08  vmaddx.xyz  $vf16, $vf17, $vf1x
    ctx->pc = 0x2fb67cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2fb680: 0xfbb00000  sqc2        $vf16, 0x0($sp)
    ctx->pc = 0x2fb680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2fb684: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2fb684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb688: 0xc0cb99a  jal         func_32E668
    ctx->pc = 0x2FB688u;
    SET_GPR_U32(ctx, 31, 0x2FB690u);
    ctx->pc = 0x2FB68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB688u;
    // 0x2fb68c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E668u, 0x2FB688u, 0x2FB690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB690u;
label_2fb690:
    // 0x2fb690: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2fb690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb694: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2fb694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fb698: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2fb698u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x2fb69c: 0xc7ae000c  lwc1        $f14, 0xC($sp)
    ctx->pc = 0x2fb69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2fb6a0: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x2fb6a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x2fb6a4: 0x0  nop
    ctx->pc = 0x2fb6a4u;
    // NOP
    // 0x2fb6a8: 0x0  nop
    ctx->pc = 0x2fb6a8u;
    // NOP
    // 0x2fb6ac: 0x460e0383  div.s       $f14, $f0, $f14
    ctx->pc = 0x2fb6acu;
    if (ctx->f[14] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[14] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[14] = ctx->f[0] / ctx->f[14];
    // 0x2fb6b0: 0xc0dcbb4  jal         func_372ED0
    ctx->pc = 0x2FB6B0u;
    SET_GPR_U32(ctx, 31, 0x2FB6B8u);
    ctx->pc = 0x2FB6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB6B0u;
    // 0x2fb6b4: 0x4600d3c6  mov.s       $f15, $f26 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[26]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x372ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372ED0u, 0x2FB6B0u, 0x2FB6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB6B8u;
label_2fb6b8:
    // 0x2fb6b8: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2fb6b8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2fb6bc: 0x4600c007  neg.s       $f0, $f24
    ctx->pc = 0x2fb6bcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[24]);
    // 0x2fb6c0: 0xda900000  lqc2        $vf16, 0x0($s4)
    ctx->pc = 0x2fb6c0u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2fb6c4: 0xda110000  lqc2        $vf17, 0x0($s0)
    ctx->pc = 0x2fb6c4u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2fb6c8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2fb6c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2fb6cc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2fb6ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2fb6d0: 0x4bc0803c  vaddax.xyz  $ACC, $vf16, $vf0x
    ctx->pc = 0x2fb6d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2fb6d4: 0x4bc18c08  vmaddx.xyz  $vf16, $vf17, $vf1x
    ctx->pc = 0x2fb6d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2fb6d8: 0xfbb00000  sqc2        $vf16, 0x0($sp)
    ctx->pc = 0x2fb6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2fb6dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2fb6dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb6e0: 0xc0cb99a  jal         func_32E668
    ctx->pc = 0x2FB6E0u;
    SET_GPR_U32(ctx, 31, 0x2FB6E8u);
    ctx->pc = 0x2FB6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB6E0u;
    // 0x2fb6e4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E668u, 0x2FB6E0u, 0x2FB6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB6E8u;
label_2fb6e8:
    // 0x2fb6e8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2fb6e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb6ec: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2fb6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fb6f0: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x2fb6f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x2fb6f4: 0xc7ae000c  lwc1        $f14, 0xC($sp)
    ctx->pc = 0x2fb6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2fb6f8: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x2fb6f8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x2fb6fc: 0x0  nop
    ctx->pc = 0x2fb6fcu;
    // NOP
    // 0x2fb700: 0x0  nop
    ctx->pc = 0x2fb700u;
    // NOP
    // 0x2fb704: 0x460e0383  div.s       $f14, $f0, $f14
    ctx->pc = 0x2fb704u;
    if (ctx->f[14] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[14] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[14] = ctx->f[0] / ctx->f[14];
    // 0x2fb708: 0xc0dcbb4  jal         func_372ED0
    ctx->pc = 0x2FB708u;
    SET_GPR_U32(ctx, 31, 0x2FB710u);
    ctx->pc = 0x2FB70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB708u;
    // 0x2fb70c: 0x4600d3c6  mov.s       $f15, $f26 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[26]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x372ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372ED0u, 0x2FB708u, 0x2FB710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB710u;
label_2fb710:
    // 0x2fb710: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2fb710u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2fb714:
    // 0x2fb714: 0x4614a828  max.s       $f0, $f21, $f20
    ctx->pc = 0x2fb714u;
    ctx->f[0] = std::max(ctx->f[21], ctx->f[20]);
    // 0x2fb718: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2fb718u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2fb71c:
    // 0x2fb71c: 0xc0cb7e0  jal         func_32DF80
    ctx->pc = 0x2FB71Cu;
    SET_GPR_U32(ctx, 31, 0x2FB724u);
    ctx->pc = 0x32DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF80u, 0x2FB71Cu, 0x2FB724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB724u;
label_2fb724:
    // 0x2fb724: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x2fb724u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_2fb728:
    // 0x2fb728: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x2fb728u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2fb72c:
    // 0x2fb72c: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x2fb72cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2fb730: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x2fb730u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2fb734: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x2fb734u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2fb738: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x2fb738u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2fb73c: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x2fb73cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2fb740: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x2fb740u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2fb744: 0xdfb700a8  ld          $s7, 0xA8($sp)
    ctx->pc = 0x2fb744u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2fb748: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x2fb748u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2fb74c: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x2fb74cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2fb750: 0xc7bb00f8  lwc1        $f27, 0xF8($sp)
    ctx->pc = 0x2fb750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x2fb754: 0xc7ba00f0  lwc1        $f26, 0xF0($sp)
    ctx->pc = 0x2fb754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x2fb758: 0xc7b900e8  lwc1        $f25, 0xE8($sp)
    ctx->pc = 0x2fb758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2fb75c: 0xc7b800e0  lwc1        $f24, 0xE0($sp)
    ctx->pc = 0x2fb75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2fb760: 0xc7b700d8  lwc1        $f23, 0xD8($sp)
    ctx->pc = 0x2fb760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2fb764: 0xc7b600d0  lwc1        $f22, 0xD0($sp)
    ctx->pc = 0x2fb764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2fb768: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x2fb768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2fb76c: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x2fb76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2fb770: 0x3e00008  jr          $ra
    ctx->pc = 0x2FB770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB770u;
        // 0x2fb774: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FB778u;
}
