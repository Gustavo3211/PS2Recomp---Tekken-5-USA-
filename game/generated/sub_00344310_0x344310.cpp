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

// Function: sub_00344310
// Address: 0x344310 - 0x344630
void sub_00344310_0x344310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00344310_0x344310");
#endif

    switch (ctx->pc) {
        case 0x344324u: goto label_344324;
        case 0x34434cu: goto label_34434c;
        case 0x3443fcu: goto label_3443fc;
        case 0x3444ccu: goto label_3444cc;
        case 0x34455cu: goto label_34455c;
        case 0x3445d4u: goto label_3445d4;
        case 0x3445e8u: goto label_3445e8;
        case 0x3445f8u: goto label_3445f8;
        case 0x344604u: goto label_344604;
        default: break;
    }

    ctx->pc = 0x344310u;

label_344310:
    // 0x344310: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x344310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x344314: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x344314u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x344318: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x344318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34431c: 0xc0d104a  jal         func_344128
    ctx->pc = 0x34431Cu;
    SET_GPR_U32(ctx, 31, 0x344324u);
    ctx->pc = 0x344320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34431Cu;
    // 0x344320: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x344128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344128u, 0x34431Cu, 0x344324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344324u;
label_344324:
    // 0x344324: 0x3c014780  lui         $at, 0x4780
    ctx->pc = 0x344324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18304 << 16));
    // 0x344328: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x344328u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x34432c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x34432cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x344330: 0xc781966c  lwc1        $f1, -0x6994($gp)
    ctx->pc = 0x344330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x344334: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x344334u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x344338: 0x0  nop
    ctx->pc = 0x344338u;
    // NOP
    // 0x34433c: 0x0  nop
    ctx->pc = 0x34433cu;
    // NOP
    // 0x344340: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x344340u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[20] = ctx->f[0] / ctx->f[1];
    // 0x344344: 0xc0d104a  jal         func_344128
    ctx->pc = 0x344344u;
    SET_GPR_U32(ctx, 31, 0x34434Cu);
    ctx->pc = 0x344128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344128u, 0x344344u, 0x34434Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34434Cu;
label_34434c:
    // 0x34434c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x34434cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x344350: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x344350u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x344354: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x344354u;
    {
        const bool branch_taken_0x344354 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x344354) {
            ctx->pc = 0x344370u;
            goto label_344370;
        }
    }
    ctx->pc = 0x34435Cu;
    // 0x34435c: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x34435cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x344360: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x344360u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x344364: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x344364u;
    {
        const bool branch_taken_0x344364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344364u;
        // 0x344368: 0x4600a000  add.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x344364) {
            ctx->pc = 0x34437Cu;
            goto label_34437c;
        }
    }
    ctx->pc = 0x34436Cu;
    // 0x34436c: 0x0  nop
    ctx->pc = 0x34436cu;
    // NOP
label_344370:
    // 0x344370: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x344370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x344374: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x344374u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x344378: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x344378u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_34437c:
    // 0x34437c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x34437cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x344380: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x344380u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x344384: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x344384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x344388: 0xc7b40008  lwc1        $f20, 0x8($sp)
    ctx->pc = 0x344388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x34438c: 0x3e00008  jr          $ra
    ctx->pc = 0x34438Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34438Cu;
        // 0x344390: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34438Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344394u;
    // 0x344394: 0x0  nop
    ctx->pc = 0x344394u;
    // NOP
    // 0x344398: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x344398u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34439c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34439cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3443a0: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x3443a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x3443a4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x3443a4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x3443a8: 0x460d0034  c.lt.s      $f0, $f13
    ctx->pc = 0x3443a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3443ac: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x3443ACu;
    {
        const bool branch_taken_0x3443ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3443B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3443ACu;
        // 0x3443b0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3443ac) {
            ctx->pc = 0x3443D0u;
            goto label_3443d0;
        }
    }
    ctx->pc = 0x3443B4u;
    // 0x3443b4: 0x0  nop
    ctx->pc = 0x3443b4u;
    // NOP
    // 0x3443b8: 0x0  nop
    ctx->pc = 0x3443b8u;
    // NOP
    // 0x3443bc: 0x460da303  div.s       $f12, $f20, $f13
    ctx->pc = 0x3443bcu;
    if (ctx->f[13] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[12] = ctx->f[20] / ctx->f[13];
    // 0x3443c0: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x3443c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3443c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3443c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3443c8: 0x80d10c4  j           func_344310
    ctx->pc = 0x3443C8u;
    ctx->pc = 0x3443CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3443C8u;
    // 0x3443cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344310u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_344310;
    ctx->pc = 0x3443D0u;
label_3443d0:
    // 0x3443d0: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x3443d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3443d4: 0x45020016  bc1fl       . + 4 + (0x16 << 2)
    ctx->pc = 0x3443D4u;
    {
        const bool branch_taken_0x3443d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3443d4) {
            ctx->pc = 0x3443D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3443D4u;
            // 0x3443d8: 0xe7b40004  swc1        $f20, 0x4($sp) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x344430u;
            goto label_344430;
        }
    }
    ctx->pc = 0x3443DCu;
    // 0x3443dc: 0x0  nop
    ctx->pc = 0x3443dcu;
    // NOP
    // 0x3443e0: 0x0  nop
    ctx->pc = 0x3443e0u;
    // NOP
    // 0x3443e4: 0x460da303  div.s       $f12, $f20, $f13
    ctx->pc = 0x3443e4u;
    if (ctx->f[13] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[12] = ctx->f[20] / ctx->f[13];
    // 0x3443e8: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x3443e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3443ec: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3443ECu;
    {
        const bool branch_taken_0x3443ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3443ec) {
            ctx->pc = 0x3443F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3443ECu;
            // 0x3443f0: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
            ctx->f[12] = FPU_NEG_S(ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3443F4u;
            goto label_3443f4;
        }
    }
    ctx->pc = 0x3443F4u;
label_3443f4:
    // 0x3443f4: 0xc0d10c4  jal         func_344310
    ctx->pc = 0x3443F4u;
    SET_GPR_U32(ctx, 31, 0x3443FCu);
    ctx->pc = 0x344310u;
    goto label_344310;
    ctx->pc = 0x3443FCu;
label_3443fc:
    // 0x3443fc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3443fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x344400: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x344400u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x344404: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x344404u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x344408: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x344408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34440c: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x34440cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x344410: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x344410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x344414: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x344414u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x344418: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x344418u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34441c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x34441cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x344420: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x344420u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x344424: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x344424u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x344428: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x344428u;
    {
        const bool branch_taken_0x344428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34442Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344428u;
        // 0x34442c: 0x431018  mult        $v0, $v0, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x344428) {
            ctx->pc = 0x344454u;
            goto label_344454;
        }
    }
    ctx->pc = 0x344430u;
label_344430:
    // 0x344430: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x344430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x344434: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x344434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x344438: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x344438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x34443c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x34443cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x344440: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x344440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x344444: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x344444u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x344448: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x344448u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x34444c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x34444cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x344450: 0x21380  sll         $v0, $v0, 14
    ctx->pc = 0x344450u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 14));
label_344454:
    // 0x344454: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x344454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x344458: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x344458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x34445c: 0x3e00008  jr          $ra
    ctx->pc = 0x34445Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34445Cu;
        // 0x344460: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34445Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344464u;
    // 0x344464: 0x0  nop
    ctx->pc = 0x344464u;
    // NOP
    // 0x344468: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x344468u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34446c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34446cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x344470: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x344470u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x344474: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x344474u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x344478: 0x460d0034  c.lt.s      $f0, $f13
    ctx->pc = 0x344478u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34447c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x34447Cu;
    {
        const bool branch_taken_0x34447c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x344480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34447Cu;
        // 0x344480: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34447c) {
            ctx->pc = 0x3444A0u;
            goto label_3444a0;
        }
    }
    ctx->pc = 0x344484u;
    // 0x344484: 0x0  nop
    ctx->pc = 0x344484u;
    // NOP
    // 0x344488: 0x0  nop
    ctx->pc = 0x344488u;
    // NOP
    // 0x34448c: 0x460da303  div.s       $f12, $f20, $f13
    ctx->pc = 0x34448cu;
    if (ctx->f[13] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[12] = ctx->f[20] / ctx->f[13];
    // 0x344490: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x344490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x344494: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x344494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x344498: 0x80d104a  j           func_344128
    ctx->pc = 0x344498u;
    ctx->pc = 0x34449Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344498u;
    // 0x34449c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344128u;
    sub_00344128_0x344128(rdram, ctx, runtime); return;
    ctx->pc = 0x3444A0u;
label_3444a0:
    // 0x3444a0: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x3444a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3444a4: 0x45020014  bc1fl       . + 4 + (0x14 << 2)
    ctx->pc = 0x3444A4u;
    {
        const bool branch_taken_0x3444a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3444a4) {
            ctx->pc = 0x3444A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3444A4u;
            // 0x3444a8: 0xe7b40004  swc1        $f20, 0x4($sp) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3444F8u;
            goto label_3444f8;
        }
    }
    ctx->pc = 0x3444ACu;
    // 0x3444ac: 0x0  nop
    ctx->pc = 0x3444acu;
    // NOP
    // 0x3444b0: 0x0  nop
    ctx->pc = 0x3444b0u;
    // NOP
    // 0x3444b4: 0x460da303  div.s       $f12, $f20, $f13
    ctx->pc = 0x3444b4u;
    if (ctx->f[13] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[12] = ctx->f[20] / ctx->f[13];
    // 0x3444b8: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x3444b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3444bc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3444BCu;
    {
        const bool branch_taken_0x3444bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3444bc) {
            ctx->pc = 0x3444C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3444BCu;
            // 0x3444c0: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
            ctx->f[12] = FPU_NEG_S(ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3444C4u;
            goto label_3444c4;
        }
    }
    ctx->pc = 0x3444C4u;
label_3444c4:
    // 0x3444c4: 0xc0d104a  jal         func_344128
    ctx->pc = 0x3444C4u;
    SET_GPR_U32(ctx, 31, 0x3444CCu);
    ctx->pc = 0x344128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344128u, 0x3444C4u, 0x3444CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3444CCu;
label_3444cc:
    // 0x3444cc: 0xc7819670  lwc1        $f1, -0x6990($gp)
    ctx->pc = 0x3444ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3444d0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3444d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3444d4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3444d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3444d8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3444d8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3444dc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3444dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3444e0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3444e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3444e4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3444e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3444e8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3444e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3444ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3444ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3444f0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3444F0u;
    {
        const bool branch_taken_0x3444f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3444F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3444F0u;
        // 0x3444f4: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3444f0) {
            ctx->pc = 0x344524u;
            goto label_344524;
        }
    }
    ctx->pc = 0x3444F8u;
label_3444f8:
    // 0x3444f8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3444f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3444fc: 0xc7829674  lwc1        $f2, -0x698C($gp)
    ctx->pc = 0x3444fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x344500: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x344500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x344504: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x344504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x344508: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x344508u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34450c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x34450cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x344510: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x344510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x344514: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x344514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x344518: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x344518u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34451c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x34451cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x344520: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x344520u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_344524:
    // 0x344524: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x344524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x344528: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x344528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x34452c: 0x3e00008  jr          $ra
    ctx->pc = 0x34452Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34452Cu;
        // 0x344530: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34452Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344534u;
    // 0x344534: 0x0  nop
    ctx->pc = 0x344534u;
    // NOP
    // 0x344538: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x344538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34453c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34453cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x344540: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x344540u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344544: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x344544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x344548: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x344548u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34454c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x34454cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344550: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x344550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x344554: 0xc0cbb52  jal         func_32ED48
    ctx->pc = 0x344554u;
    SET_GPR_U32(ctx, 31, 0x34455Cu);
    ctx->pc = 0x344558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344554u;
    // 0x344558: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32ED48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32ED48u, 0x344554u, 0x34455Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34455Cu;
label_34455c:
    // 0x34455c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x34455cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x344560: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x344560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x344564: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x344564u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344568: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x344568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x34456c: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x34456cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x344570: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x344570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x344574: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x344574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x344578: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x344578u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x34457c: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x34457cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x344580: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x344580u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x344584: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x344584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x344588: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x344588u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34458c: 0x3e00008  jr          $ra
    ctx->pc = 0x34458Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34458Cu;
        // 0x344590: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34458Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344594u;
    // 0x344594: 0x0  nop
    ctx->pc = 0x344594u;
    // NOP
    // 0x344598: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x344598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x34459c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x34459cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x3445a0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3445a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3445a4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x3445a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x3445a8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3445a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3445ac: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x3445acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x3445b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3445b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3445b4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3445b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3445b8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3445b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3445bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3445bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3445c0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x3445c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x3445c4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x3445c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x3445c8: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x3445c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x3445cc: 0xc0cba88  jal         func_32EA20
    ctx->pc = 0x3445CCu;
    SET_GPR_U32(ctx, 31, 0x3445D4u);
    ctx->pc = 0x3445D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3445CCu;
    // 0x3445d0: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EA20u, 0x3445CCu, 0x3445D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3445D4u;
label_3445d4:
    // 0x3445d4: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x3445d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3445d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3445d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3445dc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3445dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3445e0: 0xc0cba88  jal         func_32EA20
    ctx->pc = 0x3445E0u;
    SET_GPR_U32(ctx, 31, 0x3445E8u);
    ctx->pc = 0x3445E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3445E0u;
    // 0x3445e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EA20u, 0x3445E0u, 0x3445E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3445E8u;
label_3445e8:
    // 0x3445e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3445e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3445ec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3445ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3445f0: 0xc0cbb38  jal         func_32ECE0
    ctx->pc = 0x3445F0u;
    SET_GPR_U32(ctx, 31, 0x3445F8u);
    ctx->pc = 0x3445F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3445F0u;
    // 0x3445f4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32ECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32ECE0u, 0x3445F0u, 0x3445F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3445F8u;
label_3445f8:
    // 0x3445f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3445f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3445fc: 0xc0cbb52  jal         func_32ED48
    ctx->pc = 0x3445FCu;
    SET_GPR_U32(ctx, 31, 0x344604u);
    ctx->pc = 0x344600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3445FCu;
    // 0x344600: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32ED48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32ED48u, 0x3445FCu, 0x344604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344604u;
label_344604:
    // 0x344604: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x344604u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344608: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x344608u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x34460c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x34460cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x344610: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x344610u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x344614: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x344614u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x344618: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x344618u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34461c: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x34461cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x344620: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x344620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x344624: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x344624u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344628: 0x3e00008  jr          $ra
    ctx->pc = 0x344628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34462Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344628u;
        // 0x34462c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344630u;
}
