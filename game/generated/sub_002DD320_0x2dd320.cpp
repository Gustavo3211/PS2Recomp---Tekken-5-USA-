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

// Function: sub_002DD320
// Address: 0x2dd320 - 0x2dd4f0
void sub_002DD320_0x2dd320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DD320_0x2dd320");
#endif

    switch (ctx->pc) {
        case 0x2dd380u: goto label_2dd380;
        case 0x2dd390u: goto label_2dd390;
        case 0x2dd3a0u: goto label_2dd3a0;
        case 0x2dd494u: goto label_2dd494;
        default: break;
    }

    ctx->pc = 0x2dd320u;

    // 0x2dd320: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2dd320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2dd324: 0xc7819504  lwc1        $f1, -0x6AFC($gp)
    ctx->pc = 0x2dd324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dd328: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2dd328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2dd32c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2dd32cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd330: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x2dd330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x2dd334: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2dd334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd338: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2dd338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2dd33c: 0x2792c170  addiu       $s2, $gp, -0x3E90
    ctx->pc = 0x2dd33cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x2dd340: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x2dd340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x2dd344: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2dd344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2dd348: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x2dd348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2dd34c: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x2dd34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2dd350: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x2dd350u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2dd354: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x2dd354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dd358: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2dd358u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2dd35c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2dd35cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2dd360: 0x46001864  .word       0x46001864                   # cvt.w.s     $f1, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2dd360u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2dd364: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x2dd364u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2dd368: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2dd368u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2dd36c: 0x44110800  mfc1        $s1, $f1
    ctx->pc = 0x2dd36cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x2dd370: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2dd370u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2dd374: 0x44130800  mfc1        $s3, $f1
    ctx->pc = 0x2dd374u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
    // 0x2dd378: 0xc0b73fc  jal         func_2DCFF0
    ctx->pc = 0x2DD378u;
    SET_GPR_U32(ctx, 31, 0x2DD380u);
    ctx->pc = 0x2DD37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD378u;
    // 0x2dd37c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DCFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCFF0u, 0x2DD378u, 0x2DD380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD380u;
label_2dd380:
    // 0x2dd380: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dd380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd384: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2dd384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2dd388: 0xc0b73fc  jal         func_2DCFF0
    ctx->pc = 0x2DD388u;
    SET_GPR_U32(ctx, 31, 0x2DD390u);
    ctx->pc = 0x2DD38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD388u;
    // 0x2dd38c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DCFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCFF0u, 0x2DD388u, 0x2DD390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD390u;
label_2dd390:
    // 0x2dd390: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dd390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd394: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2dd394u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd398: 0xc0b73fc  jal         func_2DCFF0
    ctx->pc = 0x2DD398u;
    SET_GPR_U32(ctx, 31, 0x2DD3A0u);
    ctx->pc = 0x2DD39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD398u;
    // 0x2dd39c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DCFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCFF0u, 0x2DD398u, 0x2DD3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD3A0u;
label_2dd3a0:
    // 0x2dd3a0: 0x44804000  mtc1        $zero, $f8
    ctx->pc = 0x2dd3a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x2dd3a4: 0xc7ab0014  lwc1        $f11, 0x14($sp)
    ctx->pc = 0x2dd3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x2dd3a8: 0xc7a70000  lwc1        $f7, 0x0($sp)
    ctx->pc = 0x2dd3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2dd3ac: 0x46005847  neg.s       $f1, $f11
    ctx->pc = 0x2dd3acu;
    ctx->f[1] = FPU_NEG_S(ctx->f[11]);
    // 0x2dd3b0: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2dd3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dd3b4: 0x46003887  neg.s       $f2, $f7
    ctx->pc = 0x2dd3b4u;
    ctx->f[2] = FPU_NEG_S(ctx->f[7]);
    // 0x2dd3b8: 0xc7a60004  lwc1        $f6, 0x4($sp)
    ctx->pc = 0x2dd3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2dd3bc: 0xc7a40020  lwc1        $f4, 0x20($sp)
    ctx->pc = 0x2dd3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2dd3c0: 0x46005a82  mul.s       $f10, $f11, $f0
    ctx->pc = 0x2dd3c0u;
    ctx->f[10] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x2dd3c4: 0x460b3242  mul.s       $f9, $f6, $f11
    ctx->pc = 0x2dd3c4u;
    ctx->f[9] = FPU_MUL_S(ctx->f[6], ctx->f[11]);
    // 0x2dd3c8: 0xc7a50010  lwc1        $f5, 0x10($sp)
    ctx->pc = 0x2dd3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2dd3cc: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x2dd3ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2dd3d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2dd3d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2dd3d4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2dd3d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2dd3d8: 0x460b1082  mul.s       $f2, $f2, $f11
    ctx->pc = 0x2dd3d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[11]);
    // 0x2dd3dc: 0xe608000c  swc1        $f8, 0xC($s0)
    ctx->pc = 0x2dd3dcu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x2dd3e0: 0x46003ac2  mul.s       $f11, $f7, $f0
    ctx->pc = 0x2dd3e0u;
    ctx->f[11] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x2dd3e4: 0xe603003c  swc1        $f3, 0x3C($s0)
    ctx->pc = 0x2dd3e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x2dd3e8: 0x460439c2  mul.s       $f7, $f7, $f4
    ctx->pc = 0x2dd3e8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
    // 0x2dd3ec: 0xe6090028  swc1        $f9, 0x28($s0)
    ctx->pc = 0x2dd3ecu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x2dd3f0: 0x46062102  mul.s       $f4, $f4, $f6
    ctx->pc = 0x2dd3f0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x2dd3f4: 0xe6010010  swc1        $f1, 0x10($s0)
    ctx->pc = 0x2dd3f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x2dd3f8: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x2dd3f8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2dd3fc: 0xe6020024  swc1        $f2, 0x24($s0)
    ctx->pc = 0x2dd3fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x2dd400: 0x460558c2  mul.s       $f3, $f11, $f5
    ctx->pc = 0x2dd400u;
    ctx->f[3] = FPU_MUL_S(ctx->f[11], ctx->f[5]);
    // 0x2dd404: 0xe60a0000  swc1        $f10, 0x0($s0)
    ctx->pc = 0x2dd404u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2dd408: 0x46003847  neg.s       $f1, $f7
    ctx->pc = 0x2dd408u;
    ctx->f[1] = FPU_NEG_S(ctx->f[7]);
    // 0x2dd40c: 0xe6050020  swc1        $f5, 0x20($s0)
    ctx->pc = 0x2dd40cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x2dd410: 0x46052082  mul.s       $f2, $f4, $f5
    ctx->pc = 0x2dd410u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x2dd414: 0xe608002c  swc1        $f8, 0x2C($s0)
    ctx->pc = 0x2dd414u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x2dd418: 0x46003007  neg.s       $f0, $f6
    ctx->pc = 0x2dd418u;
    ctx->f[0] = FPU_NEG_S(ctx->f[6]);
    // 0x2dd41c: 0xe608001c  swc1        $f8, 0x1C($s0)
    ctx->pc = 0x2dd41cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x2dd420: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x2dd420u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x2dd424: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x2dd424u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dd428: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x2dd428u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x2dd42c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2dd42cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dd430: 0x460b1080  add.s       $f2, $f2, $f11
    ctx->pc = 0x2dd430u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[11]);
    // 0x2dd434: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x2dd434u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd438: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2dd438u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2dd43c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2dd43cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2dd440: 0xe6030004  swc1        $f3, 0x4($s0)
    ctx->pc = 0x2dd440u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2dd444: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x2dd444u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x2dd448: 0xe6020018  swc1        $f2, 0x18($s0)
    ctx->pc = 0x2dd448u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x2dd44c: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x2dd44cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x2dd450: 0xe6010014  swc1        $f1, 0x14($s0)
    ctx->pc = 0x2dd450u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x2dd454: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2dd454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2dd458: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2dd458u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dd45c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DD45Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD45Cu;
        // 0x2dd460: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD45Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DD464u;
    // 0x2dd464: 0x0  nop
    ctx->pc = 0x2dd464u;
    // NOP
    // 0x2dd468: 0xc7809508  lwc1        $f0, -0x6AF8($gp)
    ctx->pc = 0x2dd468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dd46c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dd46cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dd470: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2dd470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2dd474: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2dd474u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd478: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x2dd478u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2dd47c: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x2dd47cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x2dd480: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2dd480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2dd484: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2dd484u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2dd488: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x2dd488u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2dd48c: 0xc0b73fc  jal         func_2DCFF0
    ctx->pc = 0x2DD48Cu;
    SET_GPR_U32(ctx, 31, 0x2DD494u);
    ctx->pc = 0x2DD490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD48Cu;
    // 0x2dd490: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DCFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCFF0u, 0x2DD48Cu, 0x2DD494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD494u;
label_2dd494:
    // 0x2dd494: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dd494u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dd498: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x2dd498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2dd49c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2dd49cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dd4a0: 0x46001887  neg.s       $f2, $f3
    ctx->pc = 0x2dd4a0u;
    ctx->f[2] = FPU_NEG_S(ctx->f[3]);
    // 0x2dd4a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2dd4a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2dd4a8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2dd4a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2dd4ac: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x2dd4acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2dd4b0: 0xe6040028  swc1        $f4, 0x28($s0)
    ctx->pc = 0x2dd4b0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x2dd4b4: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2dd4b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2dd4b8: 0xe6020010  swc1        $f2, 0x10($s0)
    ctx->pc = 0x2dd4b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x2dd4bc: 0xe6010014  swc1        $f1, 0x14($s0)
    ctx->pc = 0x2dd4bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x2dd4c0: 0xe6030004  swc1        $f3, 0x4($s0)
    ctx->pc = 0x2dd4c0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2dd4c4: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x2dd4c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x2dd4c8: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x2dd4c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x2dd4cc: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x2dd4ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x2dd4d0: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x2dd4d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x2dd4d4: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x2dd4d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x2dd4d8: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x2dd4d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x2dd4dc: 0xe604003c  swc1        $f4, 0x3C($s0)
    ctx->pc = 0x2dd4dcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x2dd4e0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2dd4e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2dd4e4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2dd4e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dd4e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DD4E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD4E8u;
        // 0x2dd4ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD4E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DD4F0u;
}
