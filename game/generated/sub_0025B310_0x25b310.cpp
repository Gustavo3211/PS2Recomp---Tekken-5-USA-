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

// Function: sub_0025B310
// Address: 0x25b310 - 0x25b540
void sub_0025B310_0x25b310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025B310_0x25b310");
#endif

    switch (ctx->pc) {
        case 0x25b348u: goto label_25b348;
        case 0x25b35cu: goto label_25b35c;
        case 0x25b368u: goto label_25b368;
        case 0x25b38cu: goto label_25b38c;
        case 0x25b398u: goto label_25b398;
        case 0x25b3a4u: goto label_25b3a4;
        case 0x25b3b0u: goto label_25b3b0;
        case 0x25b3c0u: goto label_25b3c0;
        case 0x25b3d0u: goto label_25b3d0;
        case 0x25b3d8u: goto label_25b3d8;
        case 0x25b3e8u: goto label_25b3e8;
        case 0x25b3f4u: goto label_25b3f4;
        case 0x25b400u: goto label_25b400;
        case 0x25b518u: goto label_25b518;
        case 0x25b524u: goto label_25b524;
        default: break;
    }

    ctx->pc = 0x25b310u;

    // 0x25b310: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x25b310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x25b314: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x25b314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x25b318: 0xffb40100  sd          $s4, 0x100($sp)
    ctx->pc = 0x25b318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 20));
    // 0x25b31c: 0x27b400c0  addiu       $s4, $sp, 0xC0
    ctx->pc = 0x25b31cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x25b320: 0xffb200f0  sd          $s2, 0xF0($sp)
    ctx->pc = 0x25b320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 18));
    // 0x25b324: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x25b324u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b328: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25b328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b32c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25b32cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b330: 0xffb100e8  sd          $s1, 0xE8($sp)
    ctx->pc = 0x25b330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 17));
    // 0x25b334: 0xffb300f8  sd          $s3, 0xF8($sp)
    ctx->pc = 0x25b334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 19));
    // 0x25b338: 0xffb000e0  sd          $s0, 0xE0($sp)
    ctx->pc = 0x25b338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 16));
    // 0x25b33c: 0xffbf0108  sd          $ra, 0x108($sp)
    ctx->pc = 0x25b33cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 31));
    // 0x25b340: 0xc04a151  jal         func_128544
    ctx->pc = 0x25B340u;
    SET_GPR_U32(ctx, 31, 0x25B348u);
    ctx->pc = 0x25B344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B340u;
    // 0x25b344: 0x26510030  addiu       $s1, $s2, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x25B340u, 0x25B348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B348u;
label_25b348:
    // 0x25b348: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x25b348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x25b34c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25b34cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25b350: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x25b350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b354: 0xc0849c0  jal         func_212700
    ctx->pc = 0x25B354u;
    SET_GPR_U32(ctx, 31, 0x25B35Cu);
    ctx->pc = 0x25B358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B354u;
    // 0x25b358: 0xe7a000c4  swc1        $f0, 0xC4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x212700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212700u, 0x25B354u, 0x25B35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B35Cu;
label_25b35c:
    // 0x25b35c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x25b35cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b360: 0xc097084  jal         func_25C210
    ctx->pc = 0x25B360u;
    SET_GPR_U32(ctx, 31, 0x25B368u);
    ctx->pc = 0x25B364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B360u;
    // 0x25b364: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C210u, 0x25B360u, 0x25B368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B368u;
label_25b368:
    // 0x25b368: 0xc7818af8  lwc1        $f1, -0x7508($gp)
    ctx->pc = 0x25b368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25b36c: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x25b36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b370: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x25b370u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25b374: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x25b374u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x25b378: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x25b378u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25b37c: 0x45010069  bc1t        . + 4 + (0x69 << 2)
    ctx->pc = 0x25B37Cu;
    {
        const bool branch_taken_0x25b37c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25B380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B37Cu;
        // 0x25b380: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b37c) {
            ctx->pc = 0x25B524u;
            goto label_25b524;
        }
    }
    ctx->pc = 0x25B384u;
    // 0x25b384: 0xc0849c0  jal         func_212700
    ctx->pc = 0x25B384u;
    SET_GPR_U32(ctx, 31, 0x25B38Cu);
    ctx->pc = 0x212700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212700u, 0x25B384u, 0x25B38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B38Cu;
label_25b38c:
    // 0x25b38c: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x25b38cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x25b390: 0xc0849c0  jal         func_212700
    ctx->pc = 0x25B390u;
    SET_GPR_U32(ctx, 31, 0x25B398u);
    ctx->pc = 0x25B394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B390u;
    // 0x25b394: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212700u, 0x25B390u, 0x25B398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B398u;
label_25b398:
    // 0x25b398: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25b398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b39c: 0xc097084  jal         func_25C210
    ctx->pc = 0x25B39Cu;
    SET_GPR_U32(ctx, 31, 0x25B3A4u);
    ctx->pc = 0x25B3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B39Cu;
    // 0x25b3a0: 0x26450040  addiu       $a1, $s2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C210u, 0x25B39Cu, 0x25B3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B3A4u;
label_25b3a4:
    // 0x25b3a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25b3a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b3a8: 0xc097084  jal         func_25C210
    ctx->pc = 0x25B3A8u;
    SET_GPR_U32(ctx, 31, 0x25B3B0u);
    ctx->pc = 0x25B3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B3A8u;
    // 0x25b3ac: 0x26450050  addiu       $a1, $s2, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C210u, 0x25B3A8u, 0x25B3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B3B0u;
label_25b3b0:
    // 0x25b3b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25b3b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b3b4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x25b3b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b3b8: 0xc08493a  jal         func_2124E8
    ctx->pc = 0x25B3B8u;
    SET_GPR_U32(ctx, 31, 0x25B3C0u);
    ctx->pc = 0x25B3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B3B8u;
    // 0x25b3bc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2124E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124E8u, 0x25B3B8u, 0x25B3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B3C0u;
label_25b3c0:
    // 0x25b3c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25b3c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b3c4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x25b3c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b3c8: 0xc08493a  jal         func_2124E8
    ctx->pc = 0x25B3C8u;
    SET_GPR_U32(ctx, 31, 0x25B3D0u);
    ctx->pc = 0x25B3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B3C8u;
    // 0x25b3cc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2124E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124E8u, 0x25B3C8u, 0x25B3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B3D0u;
label_25b3d0:
    // 0x25b3d0: 0xc0968aa  jal         func_25A2A8
    ctx->pc = 0x25B3D0u;
    SET_GPR_U32(ctx, 31, 0x25B3D8u);
    ctx->pc = 0x25B3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B3D0u;
    // 0x25b3d4: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A2A8u, 0x25B3D0u, 0x25B3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B3D8u;
label_25b3d8:
    // 0x25b3d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25b3d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b3dc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x25b3dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x25b3e0: 0xc097066  jal         func_25C198
    ctx->pc = 0x25B3E0u;
    SET_GPR_U32(ctx, 31, 0x25B3E8u);
    ctx->pc = 0x25B3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B3E0u;
    // 0x25b3e4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C198u, 0x25B3E0u, 0x25B3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B3E8u;
label_25b3e8:
    // 0x25b3e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x25b3e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b3ec: 0xc097084  jal         func_25C210
    ctx->pc = 0x25B3ECu;
    SET_GPR_U32(ctx, 31, 0x25B3F4u);
    ctx->pc = 0x25B3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B3ECu;
    // 0x25b3f0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C210u, 0x25B3ECu, 0x25B3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B3F4u;
label_25b3f4:
    // 0x25b3f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x25b3f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b3f8: 0xc084986  jal         func_212618
    ctx->pc = 0x25B3F8u;
    SET_GPR_U32(ctx, 31, 0x25B400u);
    ctx->pc = 0x25B3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B3F8u;
    // 0x25b3fc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212618u, 0x25B3F8u, 0x25B400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B400u;
label_25b400:
    // 0x25b400: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x25b400u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b404: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x25b404u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25b408: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x25b408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x25b40c: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x25b40cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25b410: 0xdba90010  lqc2        $vf9, 0x10($sp)
    ctx->pc = 0x25b410u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25b414: 0xdbaa0020  lqc2        $vf10, 0x20($sp)
    ctx->pc = 0x25b414u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25b418: 0xdbab0030  lqc2        $vf11, 0x30($sp)
    ctx->pc = 0x25b418u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25b41c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x25b41cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25b420: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x25b420u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x25b424: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x25b424u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x25b428: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x25b428u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x25b42c: 0x4be441bc  vmulax.xyzw $ACC, $vf8, $vf4x
    ctx->pc = 0x25b42cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x25b430: 0x4be448bd  vmadday.xyzw $ACC, $vf9, $vf4y
    ctx->pc = 0x25b430u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x25b434: 0x4be450be  vmaddaz.xyzw $ACC, $vf10, $vf4z
    ctx->pc = 0x25b434u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x25b438: 0x4be4590b  vmaddw.xyzw $vf4, $vf11, $vf4w
    ctx->pc = 0x25b438u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x25b43c: 0x4be541bc  vmulax.xyzw $ACC, $vf8, $vf5x
    ctx->pc = 0x25b43cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x25b440: 0x4be548bd  vmadday.xyzw $ACC, $vf9, $vf5y
    ctx->pc = 0x25b440u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x25b444: 0x4be550be  vmaddaz.xyzw $ACC, $vf10, $vf5z
    ctx->pc = 0x25b444u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x25b448: 0x4be5594b  vmaddw.xyzw $vf5, $vf11, $vf5w
    ctx->pc = 0x25b448u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x25b44c: 0x4be641bc  vmulax.xyzw $ACC, $vf8, $vf6x
    ctx->pc = 0x25b44cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x25b450: 0x4be648bd  vmadday.xyzw $ACC, $vf9, $vf6y
    ctx->pc = 0x25b450u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x25b454: 0x4be650be  vmaddaz.xyzw $ACC, $vf10, $vf6z
    ctx->pc = 0x25b454u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x25b458: 0x4be6598b  vmaddw.xyzw $vf6, $vf11, $vf6w
    ctx->pc = 0x25b458u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x25b45c: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x25b45cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x25b460: 0x4be748bd  vmadday.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x25b460u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x25b464: 0x4be750be  vmaddaz.xyzw $ACC, $vf10, $vf7z
    ctx->pc = 0x25b464u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x25b468: 0x4be759cb  vmaddw.xyzw $vf7, $vf11, $vf7w
    ctx->pc = 0x25b468u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x25b46c: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x25b46cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x25b470: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x25b470u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x25b474: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x25b474u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x25b478: 0xf8670030  sqc2        $vf7, 0x30($v1)
    ctx->pc = 0x25b478u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x25b47c: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x25b47cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x25b480: 0x7ba400b0  lq          $a0, 0xB0($sp)
    ctx->pc = 0x25b480u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x25b484: 0x78c50000  lq          $a1, 0x0($a2)
    ctx->pc = 0x25b484u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x25b488: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x25b488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x25b48c: 0x7c650030  sq          $a1, 0x30($v1)
    ctx->pc = 0x25b48cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 5));
    // 0x25b490: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x25b490u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x25b494: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x25b494u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25b498: 0xdba90010  lqc2        $vf9, 0x10($sp)
    ctx->pc = 0x25b498u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25b49c: 0xdbaa0020  lqc2        $vf10, 0x20($sp)
    ctx->pc = 0x25b49cu;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25b4a0: 0xdbab0030  lqc2        $vf11, 0x30($sp)
    ctx->pc = 0x25b4a0u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25b4a4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x25b4a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25b4a8: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x25b4a8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x25b4ac: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x25b4acu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x25b4b0: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x25b4b0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x25b4b4: 0x4be441bc  vmulax.xyzw $ACC, $vf8, $vf4x
    ctx->pc = 0x25b4b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x25b4b8: 0x4be448bd  vmadday.xyzw $ACC, $vf9, $vf4y
    ctx->pc = 0x25b4b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x25b4bc: 0x4be450be  vmaddaz.xyzw $ACC, $vf10, $vf4z
    ctx->pc = 0x25b4bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x25b4c0: 0x4be4590b  vmaddw.xyzw $vf4, $vf11, $vf4w
    ctx->pc = 0x25b4c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x25b4c4: 0x4be541bc  vmulax.xyzw $ACC, $vf8, $vf5x
    ctx->pc = 0x25b4c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x25b4c8: 0x4be548bd  vmadday.xyzw $ACC, $vf9, $vf5y
    ctx->pc = 0x25b4c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x25b4cc: 0x4be550be  vmaddaz.xyzw $ACC, $vf10, $vf5z
    ctx->pc = 0x25b4ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x25b4d0: 0x4be5594b  vmaddw.xyzw $vf5, $vf11, $vf5w
    ctx->pc = 0x25b4d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x25b4d4: 0x4be641bc  vmulax.xyzw $ACC, $vf8, $vf6x
    ctx->pc = 0x25b4d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x25b4d8: 0x4be648bd  vmadday.xyzw $ACC, $vf9, $vf6y
    ctx->pc = 0x25b4d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x25b4dc: 0x4be650be  vmaddaz.xyzw $ACC, $vf10, $vf6z
    ctx->pc = 0x25b4dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x25b4e0: 0x4be6598b  vmaddw.xyzw $vf6, $vf11, $vf6w
    ctx->pc = 0x25b4e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x25b4e4: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x25b4e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x25b4e8: 0x4be748bd  vmadday.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x25b4e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x25b4ec: 0x4be750be  vmaddaz.xyzw $ACC, $vf10, $vf7z
    ctx->pc = 0x25b4ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x25b4f0: 0x4be759cb  vmaddw.xyzw $vf7, $vf11, $vf7w
    ctx->pc = 0x25b4f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x25b4f4: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x25b4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x25b4f8: 0xf8450010  sqc2        $vf5, 0x10($v0)
    ctx->pc = 0x25b4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x25b4fc: 0xf8460020  sqc2        $vf6, 0x20($v0)
    ctx->pc = 0x25b4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x25b500: 0xf8470030  sqc2        $vf7, 0x30($v0)
    ctx->pc = 0x25b500u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x25b504: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x25b504u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x25b508: 0x26440040  addiu       $a0, $s2, 0x40
    ctx->pc = 0x25b508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x25b50c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x25b50cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25b510: 0xc0971b6  jal         func_25C6D8
    ctx->pc = 0x25B510u;
    SET_GPR_U32(ctx, 31, 0x25B518u);
    ctx->pc = 0x25B514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B510u;
    // 0x25b514: 0x7c430030  sq          $v1, 0x30($v0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C6D8u, 0x25B510u, 0x25B518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B518u;
label_25b518:
    // 0x25b518: 0x26440050  addiu       $a0, $s2, 0x50
    ctx->pc = 0x25b518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x25b51c: 0xc0971b6  jal         func_25C6D8
    ctx->pc = 0x25B51Cu;
    SET_GPR_U32(ctx, 31, 0x25B524u);
    ctx->pc = 0x25B520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B51Cu;
    // 0x25b520: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C6D8u, 0x25B51Cu, 0x25B524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B524u;
label_25b524:
    // 0x25b524: 0xdfb000e0  ld          $s0, 0xE0($sp)
    ctx->pc = 0x25b524u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x25b528: 0xdfb100e8  ld          $s1, 0xE8($sp)
    ctx->pc = 0x25b528u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25b52c: 0xdfb200f0  ld          $s2, 0xF0($sp)
    ctx->pc = 0x25b52cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x25b530: 0xdfb300f8  ld          $s3, 0xF8($sp)
    ctx->pc = 0x25b530u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x25b534: 0xdfb40100  ld          $s4, 0x100($sp)
    ctx->pc = 0x25b534u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x25b538: 0xdfbf0108  ld          $ra, 0x108($sp)
    ctx->pc = 0x25b538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x25b53c: 0x3e00008  jr          $ra
    ctx->pc = 0x25B53Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B53Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25B544u;
}
