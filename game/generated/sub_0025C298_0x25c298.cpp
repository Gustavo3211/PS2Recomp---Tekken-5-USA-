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

// Function: sub_0025C298
// Address: 0x25c298 - 0x25c440
void sub_0025C298_0x25c298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025C298_0x25c298");
#endif

    switch (ctx->pc) {
        case 0x25c324u: goto label_25c324;
        case 0x25c334u: goto label_25c334;
        case 0x25c340u: goto label_25c340;
        case 0x25c354u: goto label_25c354;
        case 0x25c36cu: goto label_25c36c;
        case 0x25c378u: goto label_25c378;
        case 0x25c3b0u: goto label_25c3b0;
        default: break;
    }

    ctx->pc = 0x25c298u;

    // 0x25c298: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x25c298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x25c29c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x25c29cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x25c2a0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x25c2a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c2a4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x25c2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x25c2a8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x25c2a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c2ac: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x25c2acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x25c2b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x25c2b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c2b4: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x25c2b4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x25c2b8: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x25c2b8u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x25c2bc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x25c2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x25c2c0: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x25c2c0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x25c2c4: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x25c2c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x25c2c8: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x25c2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25c2cc: 0xc6050004  lwc1        $f5, 0x4($s0)
    ctx->pc = 0x25c2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x25c2d0: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x25c2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x25c2d4: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x25c2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25c2d8: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x25c2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25c2dc: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x25c2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25c2e0: 0x4602181a  mula.s      $f3, $f2
    ctx->pc = 0x25c2e0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x25c2e4: 0x4601281e  madda.s     $f5, $f1
    ctx->pc = 0x25c2e4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[5], ctx->f[1])));
    // 0x25c2e8: 0x460020dc  madd.s      $f3, $f4, $f0
    ctx->pc = 0x25c2e8u;
    ctx->f[3] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[0]));
    // 0x25c2ec: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x25c2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25c2f0: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x25c2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25c2f4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x25c2f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x25c2f8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25c2f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x25c2fc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x25c2fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x25c300: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x25c300u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x25c304: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25c304u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25c308: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x25c308u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x25c30c: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x25c30cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x25c310: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x25c310u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25c314: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x25C314u;
    {
        const bool branch_taken_0x25c314 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25c314) {
            ctx->pc = 0x25C348u;
            goto label_25c348;
        }
    }
    ctx->pc = 0x25C31Cu;
    // 0x25c31c: 0xc047528  jal         func_11D4A0
    ctx->pc = 0x25C31Cu;
    SET_GPR_U32(ctx, 31, 0x25C324u);
    ctx->pc = 0x25C320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C31Cu;
    // 0x25c320: 0x46151b29  min.s       $f12, $f3, $f21 (Delay Slot)
    ctx->f[12] = std::min(ctx->f[3], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D4A0u, 0x25C31Cu, 0x25C324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C324u;
label_25c324:
    // 0x25c324: 0x4616ab01  sub.s       $f12, $f21, $f22
    ctx->pc = 0x25c324u;
    ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[22]);
    // 0x25c328: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x25c328u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x25c32c: 0xc0474d0  jal         func_11D340
    ctx->pc = 0x25C32Cu;
    SET_GPR_U32(ctx, 31, 0x25C334u);
    ctx->pc = 0x25C330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C32Cu;
    // 0x25c330: 0x460ca302  mul.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D340u, 0x25C32Cu, 0x25C334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C334u;
label_25c334:
    // 0x25c334: 0x4616a302  mul.s       $f12, $f20, $f22
    ctx->pc = 0x25c334u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
    // 0x25c338: 0xc0474d0  jal         func_11D340
    ctx->pc = 0x25C338u;
    SET_GPR_U32(ctx, 31, 0x25C340u);
    ctx->pc = 0x25C33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C338u;
    // 0x25c33c: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D340u, 0x25C338u, 0x25C340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C340u;
label_25c340:
    // 0x25c340: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x25C340u;
    {
        const bool branch_taken_0x25c340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C340u;
        // 0x25c344: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c340) {
            ctx->pc = 0x25C37Cu;
            goto label_25c37c;
        }
    }
    ctx->pc = 0x25C348u;
label_25c348:
    // 0x25c348: 0x460418e8  max.s       $f3, $f3, $f4
    ctx->pc = 0x25c348u;
    ctx->f[3] = std::max(ctx->f[3], ctx->f[4]);
    // 0x25c34c: 0xc047528  jal         func_11D4A0
    ctx->pc = 0x25C34Cu;
    SET_GPR_U32(ctx, 31, 0x25C354u);
    ctx->pc = 0x25C350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C34Cu;
    // 0x25c350: 0x46001b07  neg.s       $f12, $f3 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[3]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D4A0u, 0x25C34Cu, 0x25C354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C354u;
label_25c354:
    // 0x25c354: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25c354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25c358: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25c358u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x25c35c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x25c35cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x25c360: 0x46166301  sub.s       $f12, $f12, $f22
    ctx->pc = 0x25c360u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[22]);
    // 0x25c364: 0xc0474d0  jal         func_11D340
    ctx->pc = 0x25C364u;
    SET_GPR_U32(ctx, 31, 0x25C36Cu);
    ctx->pc = 0x25C368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C364u;
    // 0x25c368: 0x460ca302  mul.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D340u, 0x25C364u, 0x25C36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C36Cu;
label_25c36c:
    // 0x25c36c: 0x4616a302  mul.s       $f12, $f20, $f22
    ctx->pc = 0x25c36cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
    // 0x25c370: 0xc0474d0  jal         func_11D340
    ctx->pc = 0x25C370u;
    SET_GPR_U32(ctx, 31, 0x25C378u);
    ctx->pc = 0x25C374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C370u;
    // 0x25c374: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D340u, 0x25C370u, 0x25C378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C378u;
label_25c378:
    // 0x25c378: 0x46000587  neg.s       $f22, $f0
    ctx->pc = 0x25c378u;
    ctx->f[22] = FPU_NEG_S(ctx->f[0]);
label_25c37c:
    // 0x25c37c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25c37cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25c380: 0xc7818b18  lwc1        $f1, -0x74E8($gp)
    ctx->pc = 0x25c380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25c384: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x25c384u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x25c388: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x25c388u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x25c38c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x25c38cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25c390: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x25C390u;
    {
        const bool branch_taken_0x25c390 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25c390) {
            ctx->pc = 0x25C3A8u;
            goto label_25c3a8;
        }
    }
    ctx->pc = 0x25C398u;
    // 0x25c398: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x25c398u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25c39c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x25C39Cu;
    {
        const bool branch_taken_0x25c39c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C39Cu;
        // 0x25c3a0: 0x7e420000  sq          $v0, 0x0($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c39c) {
            ctx->pc = 0x25C41Cu;
            goto label_25c41c;
        }
    }
    ctx->pc = 0x25C3A4u;
    // 0x25c3a4: 0x0  nop
    ctx->pc = 0x25c3a4u;
    // NOP
label_25c3a8:
    // 0x25c3a8: 0xc0474d0  jal         func_11D340
    ctx->pc = 0x25C3A8u;
    SET_GPR_U32(ctx, 31, 0x25C3B0u);
    ctx->pc = 0x25C3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C3A8u;
    // 0x25c3ac: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D340u, 0x25C3A8u, 0x25C3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C3B0u;
label_25c3b0:
    // 0x25c3b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25c3b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25c3b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25c3b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25c3b8: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x25c3b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c3bc: 0x0  nop
    ctx->pc = 0x25c3bcu;
    // NOP
    // 0x25c3c0: 0x0  nop
    ctx->pc = 0x25c3c0u;
    // NOP
    // 0x25c3c4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x25c3c4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x25c3c8: 0x4600a806  mov.s       $f0, $f21
    ctx->pc = 0x25c3c8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[21]);
    // 0x25c3cc: 0xda100000  lqc2        $vf16, 0x0($s0)
    ctx->pc = 0x25c3ccu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25c3d0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x25c3d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x25c3d4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x25c3d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x25c3d8: 0x4be18418  vmulx.xyzw  $vf16, $vf16, $vf1x
    ctx->pc = 0x25c3d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x25c3dc: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x25c3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x25c3e0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x25c3e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c3e4: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x25c3e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c3e8: 0x4600b006  mov.s       $f0, $f22
    ctx->pc = 0x25c3e8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[22]);
    // 0x25c3ec: 0xdbb00000  lqc2        $vf16, 0x0($sp)
    ctx->pc = 0x25c3ecu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25c3f0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x25c3f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x25c3f4: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x25c3f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x25c3f8: 0xd87f0000  lqc2        $vf31, 0x0($v1)
    ctx->pc = 0x25c3f8u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25c3fc: 0x4be0803c  vaddax.xyzw $ACC, $vf16, $vf0x
    ctx->pc = 0x25c3fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x25c400: 0x4be1fc08  vmaddx.xyzw $vf16, $vf31, $vf1x
    ctx->pc = 0x25c400u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x25c404: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x25c404u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x25c408: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x25c408u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25c40c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x25c40cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x25c410: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x25c410u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x25c414: 0x4be18418  vmulx.xyzw  $vf16, $vf16, $vf1x
    ctx->pc = 0x25c414u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x25c418: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x25c418u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
label_25c41c:
    // 0x25c41c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x25c41cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25c420: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x25c420u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25c424: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x25c424u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25c428: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x25c428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x25c42c: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x25c42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x25c430: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x25c430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x25c434: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x25c434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25c438: 0x3e00008  jr          $ra
    ctx->pc = 0x25C438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C438u;
        // 0x25c43c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25C440u;
}
