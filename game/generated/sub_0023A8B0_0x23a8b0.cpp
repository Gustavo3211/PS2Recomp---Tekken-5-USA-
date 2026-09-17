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

// Function: sub_0023A8B0
// Address: 0x23a8b0 - 0x23aa90
void sub_0023A8B0_0x23a8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A8B0_0x23a8b0");
#endif

    switch (ctx->pc) {
        case 0x23a8e4u: goto label_23a8e4;
        case 0x23a90cu: goto label_23a90c;
        case 0x23a910u: goto label_23a910;
        case 0x23aa40u: goto label_23aa40;
        case 0x23aa50u: goto label_23aa50;
        case 0x23aa68u: goto label_23aa68;
        default: break;
    }

    ctx->pc = 0x23a8b0u;

    // 0x23a8b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x23a8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23a8b4: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x23a8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x23a8b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23a8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23a8bc: 0x2451d730  addiu       $s1, $v0, -0x28D0
    ctx->pc = 0x23a8bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956848));
    // 0x23a8c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23a8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23a8c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23a8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x23a8c8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x23a8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x23a8cc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x23a8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x23a8d0: 0xe7b60038  swc1        $f22, 0x38($sp)
    ctx->pc = 0x23a8d0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x23a8d4: 0xe7b50030  swc1        $f21, 0x30($sp)
    ctx->pc = 0x23a8d4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x23a8d8: 0xe7b40028  swc1        $f20, 0x28($sp)
    ctx->pc = 0x23a8d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x23a8dc: 0xc08eaea  jal         func_23ABA8
    ctx->pc = 0x23A8DCu;
    SET_GPR_U32(ctx, 31, 0x23A8E4u);
    ctx->pc = 0x23A8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A8DCu;
    // 0x23a8e0: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23ABA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23ABA8u, 0x23A8DCu, 0x23A8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A8E4u;
label_23a8e4:
    // 0x23a8e4: 0x50400061  beql        $v0, $zero, . + 4 + (0x61 << 2)
    ctx->pc = 0x23A8E4u;
    {
        const bool branch_taken_0x23a8e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a8e4) {
            ctx->pc = 0x23A8E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A8E4u;
            // 0x23a8e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23AA6Cu;
            goto label_23aa6c;
        }
    }
    ctx->pc = 0x23A8ECu;
    // 0x23a8ec: 0x1200005e  beqz        $s0, . + 4 + (0x5E << 2)
    ctx->pc = 0x23A8ECu;
    {
        const bool branch_taken_0x23a8ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A8ECu;
        // 0x23a8f0: 0x220982d  daddu       $s3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a8ec) {
            ctx->pc = 0x23AA68u;
            goto label_23aa68;
        }
    }
    ctx->pc = 0x23A8F4u;
    // 0x23a8f4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x23a8f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x23a8f8: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x23a8f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x23a8fc: 0xc6350010  lwc1        $f21, 0x10($s1)
    ctx->pc = 0x23a8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x23a900: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x23a900u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a904: 0xc0cb7d4  jal         func_32DF50
    ctx->pc = 0x23A904u;
    SET_GPR_U32(ctx, 31, 0x23A90Cu);
    ctx->pc = 0x23A908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A904u;
    // 0x23a908: 0xc6340014  lwc1        $f20, 0x14($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF50u, 0x23A904u, 0x23A90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A90Cu;
label_23a90c:
    // 0x23a90c: 0x0  nop
    ctx->pc = 0x23a90cu;
    // NOP
label_23a910:
    // 0x23a910: 0x5200004f  beql        $s0, $zero, . + 4 + (0x4F << 2)
    ctx->pc = 0x23A910u;
    {
        const bool branch_taken_0x23a910 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a910) {
            ctx->pc = 0x23A914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A910u;
            // 0x23a914: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23AA50u;
            goto label_23aa50;
        }
    }
    ctx->pc = 0x23A918u;
    // 0x23a918: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x23a918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23a91c: 0x50a0004c  beql        $a1, $zero, . + 4 + (0x4C << 2)
    ctx->pc = 0x23A91Cu;
    {
        const bool branch_taken_0x23a91c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a91c) {
            ctx->pc = 0x23A920u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A91Cu;
            // 0x23a920: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23AA50u;
            goto label_23aa50;
        }
    }
    ctx->pc = 0x23A924u;
    // 0x23a924: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x23a924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x23a928: 0x50800049  beql        $a0, $zero, . + 4 + (0x49 << 2)
    ctx->pc = 0x23A928u;
    {
        const bool branch_taken_0x23a928 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a928) {
            ctx->pc = 0x23A92Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A928u;
            // 0x23a92c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23AA50u;
            goto label_23aa50;
        }
    }
    ctx->pc = 0x23A930u;
    // 0x23a930: 0xc6670004  lwc1        $f7, 0x4($s3)
    ctx->pc = 0x23a930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x23a934: 0x4616a082  mul.s       $f2, $f20, $f22
    ctx->pc = 0x23a934u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
    // 0x23a938: 0xc6060004  lwc1        $f6, 0x4($s0)
    ctx->pc = 0x23a938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x23a93c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23a93cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23a940: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23a940u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a944: 0x46063841  sub.s       $f1, $f7, $f6
    ctx->pc = 0x23a944u;
    ctx->f[1] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
    // 0x23a948: 0x0  nop
    ctx->pc = 0x23a948u;
    // NOP
    // 0x23a94c: 0x0  nop
    ctx->pc = 0x23a94cu;
    // NOP
    // 0x23a950: 0x461400c3  div.s       $f3, $f0, $f20
    ctx->pc = 0x23a950u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[3] = ctx->f[0] / ctx->f[20];
    // 0x23a954: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x23a954u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a958: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x23A958u;
    {
        const bool branch_taken_0x23a958 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23A95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A958u;
        // 0x23a95c: 0xc6650008  lwc1        $f5, 0x8($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a958) {
            ctx->pc = 0x23A964u;
            goto label_23a964;
        }
    }
    ctx->pc = 0x23A960u;
    // 0x23a960: 0x46140841  sub.s       $f1, $f1, $f20
    ctx->pc = 0x23a960u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
label_23a964:
    // 0x23a964: 0xc604000c  lwc1        $f4, 0xC($s0)
    ctx->pc = 0x23a964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x23a968: 0x46042801  sub.s       $f0, $f5, $f4
    ctx->pc = 0x23a968u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x23a96c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x23a96cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a970: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x23A970u;
    {
        const bool branch_taken_0x23a970 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23a970) {
            ctx->pc = 0x23A974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A970u;
            // 0x23a974: 0x46140001  sub.s       $f0, $f0, $f20 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A978u;
            goto label_23a978;
        }
    }
    ctx->pc = 0x23A978u;
label_23a978:
    // 0x23a978: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x23a978u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x23a97c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x23a97cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x23a980: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x23a980u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x23a984: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x23a984u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x23a988: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x23a988u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x23a98c: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x23a98cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x23a990: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x23a990u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x23a994: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x23a994u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x23a998: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a998u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a99c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23a99cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x23a9a0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x23a9a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x23a9a4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x23a9a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x23a9a8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x23a9a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x23a9ac: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x23a9acu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x23a9b0: 0x460400c0  add.s       $f3, $f0, $f4
    ctx->pc = 0x23a9b0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x23a9b4: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x23a9b4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x23a9b8: 0x46032841  sub.s       $f1, $f5, $f3
    ctx->pc = 0x23a9b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
    // 0x23a9bc: 0x46023801  sub.s       $f0, $f7, $f2
    ctx->pc = 0x23a9bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[7], ctx->f[2]);
    // 0x23a9c0: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x23a9c0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x23a9c4: 0x4601085c  madd.s      $f1, $f1, $f1
    ctx->pc = 0x23a9c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x23a9c8: 0x46150836  c.le.s      $f1, $f21
    ctx->pc = 0x23a9c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a9cc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x23A9CCu;
    {
        const bool branch_taken_0x23a9cc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x23A9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A9CCu;
        // 0x23a9d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a9cc) {
            ctx->pc = 0x23A9D8u;
            goto label_23a9d8;
        }
    }
    ctx->pc = 0x23A9D4u;
    // 0x23a9d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23a9d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23a9d8:
    // 0x23a9d8: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x23A9D8u;
    {
        const bool branch_taken_0x23a9d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a9d8) {
            ctx->pc = 0x23A9DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A9D8u;
            // 0x23a9dc: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23AA48u;
            goto label_23aa48;
        }
    }
    ctx->pc = 0x23A9E0u;
    // 0x23a9e0: 0x4ae00714  vminix.yzw  $vf28, $vf0, $vf0x
    ctx->pc = 0x23a9e0u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x23a9e4: 0x4b000713  vmaxw.x     $vf28, $vf0, $vf0w
    ctx->pc = 0x23a9e4u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x23a9e8: 0x4b600754  vminix.xzw  $vf29, $vf0, $vf0x
    ctx->pc = 0x23a9e8u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x23a9ec: 0x4a800753  vmaxw.y     $vf29, $vf0, $vf0w
    ctx->pc = 0x23a9ecu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x23a9f0: 0x4ba00794  vminix.xyw  $vf30, $vf0, $vf0x
    ctx->pc = 0x23a9f0u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x23a9f4: 0x4a400793  vmaxw.z     $vf30, $vf0, $vf0w
    ctx->pc = 0x23a9f4u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x23a9f8: 0x4bff033c  vmove.xyzw  $vf31, $vf0
    ctx->pc = 0x23a9f8u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x23a9fc: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x23a9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23aa00: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x23aa00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x23aa04: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x23aa04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x23aa08: 0x44061800  mfc1        $a2, $f3
    ctx->pc = 0x23aa08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x23aa0c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x23aa0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x23aa10: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x23aa10u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x23aa14: 0x48a61800  qmtc2.ni    $a2, $vf3
    ctx->pc = 0x23aa14u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x23aa18: 0x4be1e1bc  vmulax.xyzw $ACC, $vf28, $vf1x
    ctx->pc = 0x23aa18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x23aa1c: 0x4be2e8bc  vmaddax.xyzw $ACC, $vf29, $vf2x
    ctx->pc = 0x23aa1cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x23aa20: 0x4be3f0bc  vmaddax.xyzw $ACC, $vf30, $vf3x
    ctx->pc = 0x23aa20u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x23aa24: 0x4be0ffcb  vmaddw.xyzw $vf31, $vf31, $vf0w
    ctx->pc = 0x23aa24u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x23aa28: 0xf8bc0000  sqc2        $vf28, 0x0($a1)
    ctx->pc = 0x23aa28u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x23aa2c: 0xf8bd0010  sqc2        $vf29, 0x10($a1)
    ctx->pc = 0x23aa2cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x23aa30: 0xf8be0020  sqc2        $vf30, 0x20($a1)
    ctx->pc = 0x23aa30u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x23aa34: 0xf8bf0030  sqc2        $vf31, 0x30($a1)
    ctx->pc = 0x23aa34u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x23aa38: 0xc0beb26  jal         func_2FAC98
    ctx->pc = 0x23AA38u;
    SET_GPR_U32(ctx, 31, 0x23AA40u);
    ctx->pc = 0x23AA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AA38u;
    // 0x23aa3c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAC98u, 0x23AA38u, 0x23AA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AA40u;
label_23aa40:
    // 0x23aa40: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23AA40u;
    {
        const bool branch_taken_0x23aa40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AA40u;
        // 0x23aa44: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23aa40) {
            ctx->pc = 0x23AA54u;
            goto label_23aa54;
        }
    }
    ctx->pc = 0x23AA48u;
label_23aa48:
    // 0x23aa48: 0xc0beb2e  jal         func_2FACB8
    ctx->pc = 0x23AA48u;
    SET_GPR_U32(ctx, 31, 0x23AA50u);
    ctx->pc = 0x2FACB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FACB8u, 0x23AA48u, 0x23AA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AA50u;
label_23aa50:
    // 0x23aa50: 0x26100014  addiu       $s0, $s0, 0x14
    ctx->pc = 0x23aa50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_23aa54:
    // 0x23aa54: 0x2a4200c4  slti        $v0, $s2, 0xC4
    ctx->pc = 0x23aa54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)196) ? 1 : 0);
    // 0x23aa58: 0x1440ffad  bnez        $v0, . + 4 + (-0x53 << 2)
    ctx->pc = 0x23AA58u;
    {
        const bool branch_taken_0x23aa58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23aa58) {
            ctx->pc = 0x23A910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a910;
        }
    }
    ctx->pc = 0x23AA60u;
    // 0x23aa60: 0xc0cb7e0  jal         func_32DF80
    ctx->pc = 0x23AA60u;
    SET_GPR_U32(ctx, 31, 0x23AA68u);
    ctx->pc = 0x32DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF80u, 0x23AA60u, 0x23AA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AA68u;
label_23aa68:
    // 0x23aa68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23aa68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23aa6c:
    // 0x23aa6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23aa6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23aa70: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23aa70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23aa74: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23aa74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23aa78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23aa78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23aa7c: 0xc7b60038  lwc1        $f22, 0x38($sp)
    ctx->pc = 0x23aa7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x23aa80: 0xc7b50030  lwc1        $f21, 0x30($sp)
    ctx->pc = 0x23aa80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x23aa84: 0xc7b40028  lwc1        $f20, 0x28($sp)
    ctx->pc = 0x23aa84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23aa88: 0x3e00008  jr          $ra
    ctx->pc = 0x23AA88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23AA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AA88u;
        // 0x23aa8c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23AA88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23AA90u;
}
