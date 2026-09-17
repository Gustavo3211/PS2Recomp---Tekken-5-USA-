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

// Function: sub_0031A880
// Address: 0x31a880 - 0x31aa88
void sub_0031A880_0x31a880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031A880_0x31a880");
#endif

    switch (ctx->pc) {
        case 0x31a9acu: goto label_31a9ac;
        case 0x31aa00u: goto label_31aa00;
        case 0x31aa70u: goto label_31aa70;
        default: break;
    }

    ctx->pc = 0x31a880u;

    // 0x31a880: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31a880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31a884: 0x460e6100  add.s       $f4, $f12, $f14
    ctx->pc = 0x31a884u;
    ctx->f[4] = FPU_ADD_S(ctx->f[12], ctx->f[14]);
    // 0x31a888: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31a888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31a88c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31a88cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a890: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x31a890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x31a894: 0x460f6940  add.s       $f5, $f13, $f15
    ctx->pc = 0x31a894u;
    ctx->f[5] = FPU_ADD_S(ctx->f[13], ctx->f[15]);
    // 0x31a898: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31a898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31a89c: 0xe60c0018  swc1        $f12, 0x18($s0)
    ctx->pc = 0x31a89cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x31a8a0: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x31a8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31a8a4: 0xe60d001c  swc1        $f13, 0x1C($s0)
    ctx->pc = 0x31a8a4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x31a8a8: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x31a8a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31a8ac: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x31A8ACu;
    {
        const bool branch_taken_0x31a8ac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x31A8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A8ACu;
        // 0x31a8b0: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a8ac) {
            ctx->pc = 0x31A8B8u;
            goto label_31a8b8;
        }
    }
    ctx->pc = 0x31A8B4u;
    // 0x31a8b4: 0x460020c6  mov.s       $f3, $f4
    ctx->pc = 0x31a8b4u;
    ctx->f[3] = FPU_MOV_S(ctx->f[4]);
label_31a8b8:
    // 0x31a8b8: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x31a8b8u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x31a8bc: 0x46051034  c.lt.s      $f2, $f5
    ctx->pc = 0x31a8bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31a8c0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x31A8C0u;
    {
        const bool branch_taken_0x31a8c0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x31A8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A8C0u;
        // 0x31a8c4: 0x46001906  mov.s       $f4, $f3 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a8c0) {
            ctx->pc = 0x31A8CCu;
            goto label_31a8cc;
        }
    }
    ctx->pc = 0x31A8C8u;
    // 0x31a8c8: 0x46002886  mov.s       $f2, $f5
    ctx->pc = 0x31a8c8u;
    ctx->f[2] = FPU_MOV_S(ctx->f[5]);
label_31a8cc:
    // 0x31a8cc: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x31a8ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x31a8d0: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x31a8d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x31a8d4: 0x460c1801  sub.s       $f0, $f3, $f12
    ctx->pc = 0x31a8d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[12]);
    // 0x31a8d8: 0x460d1041  sub.s       $f1, $f2, $f13
    ctx->pc = 0x31a8d8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[13]);
    // 0x31a8dc: 0x3c110015  lui         $s1, 0x15
    ctx->pc = 0x31a8dcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)21 << 16));
    // 0x31a8e0: 0x460c3036  c.le.s      $f6, $f12
    ctx->pc = 0x31a8e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31a8e4: 0x46001146  mov.s       $f5, $f2
    ctx->pc = 0x31a8e4u;
    ctx->f[5] = FPU_MOV_S(ctx->f[2]);
    // 0x31a8e8: 0x460061e4  .word       0x460061E4                   # cvt.w.s     $f7, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31a8e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[7], &tmp, sizeof(tmp)); }
    // 0x31a8ec: 0x44053800  mfc1        $a1, $f7
    ctx->pc = 0x31a8ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x31a8f0: 0x26244f00  addiu       $a0, $s1, 0x4F00
    ctx->pc = 0x31a8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20224));
    // 0x31a8f4: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x31a8f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x31a8f8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x31A8F8u;
    {
        const bool branch_taken_0x31a8f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31A8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A8F8u;
        // 0x31a8fc: 0xe6010024  swc1        $f1, 0x24($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a8f8) {
            ctx->pc = 0x31A914u;
            goto label_31a914;
        }
    }
    ctx->pc = 0x31A900u;
    // 0x31a900: 0x46066001  sub.s       $f0, $f12, $f6
    ctx->pc = 0x31a900u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[6]);
    // 0x31a904: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x31a904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x31a908: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31a908u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x31a90c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x31a90cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x31a910: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x31a910u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_31a914:
    // 0x31a914: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x31a914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x31a918: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x31a918u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31a91c: 0x46006864  .word       0x46006864                   # cvt.w.s     $f1, $f13 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31a91cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[13]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x31a920: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x31a920u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x31a924: 0x460d0036  c.le.s      $f0, $f13
    ctx->pc = 0x31a924u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31a928: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x31A928u;
    {
        const bool branch_taken_0x31a928 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31a928) {
            ctx->pc = 0x31A94Cu;
            goto label_31a94c;
        }
    }
    ctx->pc = 0x31A930u;
    // 0x31a930: 0x46006801  sub.s       $f0, $f13, $f0
    ctx->pc = 0x31a930u;
    ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x31a934: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x31a934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x31a938: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31a938u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x31a93c: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x31a93cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x31a940: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x31a940u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x31a944: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x31a944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x31a948: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x31a948u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31a94c:
    // 0x31a94c: 0x46002064  .word       0x46002064                   # cvt.w.s     $f1, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31a94cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x31a950: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x31a950u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x31a954: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x31a954u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31a958: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x31A958u;
    {
        const bool branch_taken_0x31a958 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31a958) {
            ctx->pc = 0x31A974u;
            goto label_31a974;
        }
    }
    ctx->pc = 0x31A960u;
    // 0x31a960: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x31a960u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x31a964: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x31a964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x31a968: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31a968u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x31a96c: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x31a96cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x31a970: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x31a970u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_31a974:
    // 0x31a974: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x31a974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x31a978: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x31a978u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31a97c: 0x46002864  .word       0x46002864                   # cvt.w.s     $f1, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31a97cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x31a980: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x31a980u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x31a984: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x31a984u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31a988: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x31A988u;
    {
        const bool branch_taken_0x31a988 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31A98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A988u;
        // 0x31a98c: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a988) {
            ctx->pc = 0x31A9A4u;
            goto label_31a9a4;
        }
    }
    ctx->pc = 0x31A990u;
    // 0x31a990: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x31a990u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x31a994: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x31a994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x31a998: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31a998u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x31a99c: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x31a99cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x31a9a0: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x31a9a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_31a9a4:
    // 0x31a9a4: 0xc0cd496  jal         func_335258
    ctx->pc = 0x31A9A4u;
    SET_GPR_U32(ctx, 31, 0x31A9ACu);
    ctx->pc = 0x31A9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A9A4u;
    // 0x31a9a8: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335258u, 0x31A9A4u, 0x31A9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A9ACu;
label_31a9ac:
    // 0x31a9ac: 0xc60c0020  lwc1        $f12, 0x20($s0)
    ctx->pc = 0x31a9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x31a9b0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x31a9b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x31a9b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x31a9b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31a9b8: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x31a9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x31a9bc: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x31a9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31a9c0: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x31a9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x31a9c4: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x31a9c4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x31a9c8: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x31a9c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x31a9cc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x31a9ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x31a9d0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x31a9d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x31a9d4: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x31a9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31a9d8: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x31a9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31a9dc: 0xc60e0038  lwc1        $f14, 0x38($s0)
    ctx->pc = 0x31a9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x31a9e0: 0x460c6b01  sub.s       $f12, $f13, $f12
    ctx->pc = 0x31a9e0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[13], ctx->f[12]);
    // 0x31a9e4: 0xc60f003c  lwc1        $f15, 0x3C($s0)
    ctx->pc = 0x31a9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x31a9e8: 0x46006b41  sub.s       $f13, $f13, $f0
    ctx->pc = 0x31a9e8u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x31a9ec: 0x46026301  sub.s       $f12, $f12, $f2
    ctx->pc = 0x31a9ecu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
    // 0x31a9f0: 0x46016b41  sub.s       $f13, $f13, $f1
    ctx->pc = 0x31a9f0u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[1]);
    // 0x31a9f4: 0xe60c0028  swc1        $f12, 0x28($s0)
    ctx->pc = 0x31a9f4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x31a9f8: 0xc0ce56e  jal         func_3395B8
    ctx->pc = 0x31A9F8u;
    SET_GPR_U32(ctx, 31, 0x31AA00u);
    ctx->pc = 0x31A9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A9F8u;
    // 0x31a9fc: 0xe60d002c  swc1        $f13, 0x2C($s0) (Delay Slot)
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3395B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3395B8u, 0x31A9F8u, 0x31AA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AA00u;
label_31aa00:
    // 0x31aa00: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x31aa00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31aa04: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x31aa04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x31aa08: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x31aa08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31aa0c: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31aa0cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x31aa10: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x31aa10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x31aa14: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x31aa14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31aa18: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x31AA18u;
    {
        const bool branch_taken_0x31aa18 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31AA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AA18u;
        // 0x31aa1c: 0x26244f00  addiu       $a0, $s1, 0x4F00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31aa18) {
            ctx->pc = 0x31AA34u;
            goto label_31aa34;
        }
    }
    ctx->pc = 0x31AA20u;
    // 0x31aa20: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x31aa20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x31aa24: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x31aa24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x31aa28: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31aa28u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x31aa2c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x31aa2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x31aa30: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x31aa30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_31aa34:
    // 0x31aa34: 0xc600002c  lwc1        $f0, 0x2C($s0)
    ctx->pc = 0x31aa34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31aa38: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x31aa38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x31aa3c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x31aa3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31aa40: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31aa40u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x31aa44: 0x44061000  mfc1        $a2, $f2
    ctx->pc = 0x31aa44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x31aa48: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x31aa48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31aa4c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x31AA4Cu;
    {
        const bool branch_taken_0x31aa4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31aa4c) {
            ctx->pc = 0x31AA68u;
            goto label_31aa68;
        }
    }
    ctx->pc = 0x31AA54u;
    // 0x31aa54: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x31aa54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x31aa58: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x31aa58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x31aa5c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31aa5cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x31aa60: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x31aa60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x31aa64: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x31aa64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_31aa68:
    // 0x31aa68: 0xc0cd482  jal         func_335208
    ctx->pc = 0x31AA68u;
    SET_GPR_U32(ctx, 31, 0x31AA70u);
    ctx->pc = 0x335208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335208u, 0x31AA68u, 0x31AA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AA70u;
label_31aa70:
    // 0x31aa70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31aa70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31aa74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x31aa74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31aa78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31aa78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31aa7c: 0x3e00008  jr          $ra
    ctx->pc = 0x31AA7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31AA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AA7Cu;
        // 0x31aa80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31AA7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31AA84u;
    // 0x31aa84: 0x0  nop
    ctx->pc = 0x31aa84u;
    // NOP
    ctx->pc = 0x31aa88u;
}
