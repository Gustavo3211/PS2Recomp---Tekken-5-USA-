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

// Function: sub_0024E8A8
// Address: 0x24e8a8 - 0x24ed50
void sub_0024E8A8_0x24e8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024E8A8_0x24e8a8");
#endif

    switch (ctx->pc) {
        case 0x24e8ecu: goto label_24e8ec;
        case 0x24e9a4u: goto label_24e9a4;
        case 0x24ea58u: goto label_24ea58;
        case 0x24ea7cu: goto label_24ea7c;
        case 0x24eaccu: goto label_24eacc;
        case 0x24ed30u: goto label_24ed30;
        default: break;
    }

    ctx->pc = 0x24e8a8u;

    // 0x24e8a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24e8a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x24e8ac: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x24e8acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x24e8b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24e8b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e8b4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x24e8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x24e8b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x24e8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x24e8bc: 0xe7b60038  swc1        $f22, 0x38($sp)
    ctx->pc = 0x24e8bcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x24e8c0: 0xe7b50030  swc1        $f21, 0x30($sp)
    ctx->pc = 0x24e8c0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x24e8c4: 0xe7b40028  swc1        $f20, 0x28($sp)
    ctx->pc = 0x24e8c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x24e8c8: 0x8602011c  lh          $v0, 0x11C($s0)
    ctx->pc = 0x24e8c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x24e8cc: 0x144000ac  bnez        $v0, . + 4 + (0xAC << 2)
    ctx->pc = 0x24E8CCu;
    {
        const bool branch_taken_0x24e8cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24E8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E8CCu;
        // 0x24e8d0: 0x261100c0  addiu       $s1, $s0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e8cc) {
            ctx->pc = 0x24EB80u;
            goto label_24eb80;
        }
    }
    ctx->pc = 0x24E8D4u;
    // 0x24e8d4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x24e8d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x24e8d8: 0xc780889c  lwc1        $f0, -0x7764($gp)
    ctx->pc = 0x24e8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24e8dc: 0xe6140044  swc1        $f20, 0x44($s0)
    ctx->pc = 0x24e8dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x24e8e0: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x24e8e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x24e8e4: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x24E8E4u;
    SET_GPR_U32(ctx, 31, 0x24E8ECu);
    ctx->pc = 0x24E8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E8E4u;
    // 0x24e8e8: 0xe6140070  swc1        $f20, 0x70($s0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x24E8E4u, 0x24E8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E8ECu;
label_24e8ec:
    // 0x24e8ec: 0xc78188a0  lwc1        $f1, -0x7760($gp)
    ctx->pc = 0x24e8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24e8f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24e8f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e8f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24e8f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24e8f8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x24e8f8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x24e8fc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x24e8fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x24e900: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x24e900u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x24e904: 0xc78388a4  lwc1        $f3, -0x775C($gp)
    ctx->pc = 0x24e904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24e908: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x24e908u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x24e90c: 0xc78288a8  lwc1        $f2, -0x7758($gp)
    ctx->pc = 0x24e90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24e910: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x24e910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24e914: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x24e914u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x24e918: 0x46010180  add.s       $f6, $f0, $f1
    ctx->pc = 0x24e918u;
    ctx->f[6] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24e91c: 0x46143034  c.lt.s      $f6, $f20
    ctx->pc = 0x24e91cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24e920: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x24E920u;
    {
        const bool branch_taken_0x24e920 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24e920) {
            ctx->pc = 0x24E924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E920u;
            // 0x24e924: 0x46061001  sub.s       $f0, $f2, $f6 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[6]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E92Cu;
            goto label_24e92c;
        }
    }
    ctx->pc = 0x24E928u;
    // 0x24e928: 0x46023000  add.s       $f0, $f6, $f2
    ctx->pc = 0x24e928u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[2]);
label_24e92c:
    // 0x24e92c: 0x46000142  mul.s       $f5, $f0, $f0
    ctx->pc = 0x24e92cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x24e930: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x24e930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x24e934: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x24e934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x24e938: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x24e938u;
    { uint32_t bits = FAST_READ32(0x3AB6ECu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24e93c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x24e93cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x24e940: 0x46002902  mul.s       $f4, $f5, $f0
    ctx->pc = 0x24e940u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x24e944: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x24e944u;
    { uint32_t bits = FAST_READ32(0x3AB6E8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24e948: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x24e948u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[3], ctx->f[0]));
    // 0x24e94c: 0x460520c2  mul.s       $f3, $f4, $f5
    ctx->pc = 0x24e94cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x24e950: 0x4602201e  madda.s     $f4, $f2
    ctx->pc = 0x24e950u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[2])));
    // 0x24e954: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x24e954u;
    { uint32_t bits = FAST_READ32(0x3AB6E4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24e958: 0x46051902  mul.s       $f4, $f3, $f5
    ctx->pc = 0x24e958u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x24e95c: 0x4601181e  madda.s     $f3, $f1
    ctx->pc = 0x24e95cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[1])));
    // 0x24e960: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x24e960u;
    { uint32_t bits = FAST_READ32(0x3AB6E0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24e964: 0x460520c2  mul.s       $f3, $f4, $f5
    ctx->pc = 0x24e964u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x24e968: 0x4602201e  madda.s     $f4, $f2
    ctx->pc = 0x24e968u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[2])));
    // 0x24e96c: 0x4601195c  madd.s      $f5, $f3, $f1
    ctx->pc = 0x24e96cu;
    ctx->f[5] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x24e970: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24e970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24e974: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24e974u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e978: 0x46002886  mov.s       $f2, $f5
    ctx->pc = 0x24e978u;
    ctx->f[2] = FPU_MOV_S(ctx->f[5]);
    // 0x24e97c: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x24e97cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x24e980: 0x4602105d  msub.s      $f1, $f2, $f2
    ctx->pc = 0x24e980u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x24e984: 0x46010004  c1          0x10004
    ctx->pc = 0x24e984u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x24e988: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x24e988u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x24e98c: 0x46143034  c.lt.s      $f6, $f20
    ctx->pc = 0x24e98cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24e990: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x24E990u;
    {
        const bool branch_taken_0x24e990 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24E994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E990u;
        // 0x24e994: 0xe6220004  swc1        $f2, 0x4($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e990) {
            ctx->pc = 0x24E99Cu;
            goto label_24e99c;
        }
    }
    ctx->pc = 0x24E998u;
    // 0x24e998: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x24e998u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_24e99c:
    // 0x24e99c: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x24E99Cu;
    SET_GPR_U32(ctx, 31, 0x24E9A4u);
    ctx->pc = 0x24E9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E99Cu;
    // 0x24e9a0: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x24E99Cu, 0x24E9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E9A4u;
label_24e9a4:
    // 0x24e9a4: 0xc78188ac  lwc1        $f1, -0x7754($gp)
    ctx->pc = 0x24e9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24e9a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24e9a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e9ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24e9acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24e9b0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x24e9b0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x24e9b4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x24e9b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x24e9b8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x24e9b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x24e9bc: 0xc78188b0  lwc1        $f1, -0x7750($gp)
    ctx->pc = 0x24e9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24e9c0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x24e9c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x24e9c4: 0xc78288b4  lwc1        $f2, -0x774C($gp)
    ctx->pc = 0x24e9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24e9c8: 0x46010182  mul.s       $f6, $f0, $f1
    ctx->pc = 0x24e9c8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x24e9cc: 0x46143034  c.lt.s      $f6, $f20
    ctx->pc = 0x24e9ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24e9d0: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x24E9D0u;
    {
        const bool branch_taken_0x24e9d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24e9d0) {
            ctx->pc = 0x24E9D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E9D0u;
            // 0x24e9d4: 0x46061001  sub.s       $f0, $f2, $f6 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[6]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E9DCu;
            goto label_24e9dc;
        }
    }
    ctx->pc = 0x24E9D8u;
    // 0x24e9d8: 0x46023000  add.s       $f0, $f6, $f2
    ctx->pc = 0x24e9d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[2]);
label_24e9dc:
    // 0x24e9dc: 0x46000142  mul.s       $f5, $f0, $f0
    ctx->pc = 0x24e9dcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x24e9e0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x24e9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x24e9e4: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x24e9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x24e9e8: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x24e9e8u;
    { uint32_t bits = FAST_READ32(0x3AB6ECu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24e9ec: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x24e9ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x24e9f0: 0x46002902  mul.s       $f4, $f5, $f0
    ctx->pc = 0x24e9f0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x24e9f4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x24e9f4u;
    { uint32_t bits = FAST_READ32(0x3AB6E8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24e9f8: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x24e9f8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[3], ctx->f[0]));
    // 0x24e9fc: 0x460520c2  mul.s       $f3, $f4, $f5
    ctx->pc = 0x24e9fcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x24ea00: 0x4602201e  madda.s     $f4, $f2
    ctx->pc = 0x24ea00u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[2])));
    // 0x24ea04: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x24ea04u;
    { uint32_t bits = FAST_READ32(0x3AB6E4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24ea08: 0x46051902  mul.s       $f4, $f3, $f5
    ctx->pc = 0x24ea08u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x24ea0c: 0x4601181e  madda.s     $f3, $f1
    ctx->pc = 0x24ea0cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[1])));
    // 0x24ea10: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x24ea10u;
    { uint32_t bits = FAST_READ32(0x3AB6E0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ea14: 0x460520c2  mul.s       $f3, $f4, $f5
    ctx->pc = 0x24ea14u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x24ea18: 0x4602201e  madda.s     $f4, $f2
    ctx->pc = 0x24ea18u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[2])));
    // 0x24ea1c: 0x4601195c  madd.s      $f5, $f3, $f1
    ctx->pc = 0x24ea1cu;
    ctx->f[5] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x24ea20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24ea20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24ea24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24ea24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24ea28: 0x46002886  mov.s       $f2, $f5
    ctx->pc = 0x24ea28u;
    ctx->f[2] = FPU_MOV_S(ctx->f[5]);
    // 0x24ea2c: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x24ea2cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x24ea30: 0x4602105d  msub.s      $f1, $f2, $f2
    ctx->pc = 0x24ea30u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x24ea34: 0x46010004  c1          0x10004
    ctx->pc = 0x24ea34u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x24ea38: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x24ea38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x24ea3c: 0x46163034  c.lt.s      $f6, $f22
    ctx->pc = 0x24ea3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24ea40: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x24EA40u;
    {
        const bool branch_taken_0x24ea40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24EA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EA40u;
        // 0x24ea44: 0xe622000c  swc1        $f2, 0xC($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ea40) {
            ctx->pc = 0x24EA4Cu;
            goto label_24ea4c;
        }
    }
    ctx->pc = 0x24EA48u;
    // 0x24ea48: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x24ea48u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_24ea4c:
    // 0x24ea4c: 0xc79488b8  lwc1        $f20, -0x7748($gp)
    ctx->pc = 0x24ea4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x24ea50: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x24EA50u;
    SET_GPR_U32(ctx, 31, 0x24EA58u);
    ctx->pc = 0x24EA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EA50u;
    // 0x24ea54: 0xe6200008  swc1        $f0, 0x8($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x24EA50u, 0x24EA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EA58u;
label_24ea58:
    // 0x24ea58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24ea58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24ea5c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24ea5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24ea60: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x24ea60u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x24ea64: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x24ea64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x24ea68: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x24ea68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x24ea6c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x24ea6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x24ea70: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x24ea70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x24ea74: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x24EA74u;
    SET_GPR_U32(ctx, 31, 0x24EA7Cu);
    ctx->pc = 0x24EA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EA74u;
    // 0x24ea78: 0xe620001c  swc1        $f0, 0x1C($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x24EA74u, 0x24EA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EA7Cu;
label_24ea7c:
    // 0x24ea7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24ea7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24ea80: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24ea80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24ea84: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x24ea84u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x24ea88: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x24ea88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x24ea8c: 0x3c014150  lui         $at, 0x4150
    ctx->pc = 0x24ea8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16720 << 16));
    // 0x24ea90: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x24ea90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x24ea94: 0xc623001c  lwc1        $f3, 0x1C($s1)
    ctx->pc = 0x24ea94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24ea98: 0xe6360024  swc1        $f22, 0x24($s1)
    ctx->pc = 0x24ea98u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x24ea9c: 0xc78188bc  lwc1        $f1, -0x7744($gp)
    ctx->pc = 0x24ea9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24eaa0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x24eaa0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x24eaa4: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x24eaa4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x24eaa8: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x24eaa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x24eaac: 0x86020066  lh          $v0, 0x66($s0)
    ctx->pc = 0x24eaacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 102)));
    // 0x24eab0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24eab0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24eab4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24eab4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24eab8: 0x0  nop
    ctx->pc = 0x24eab8u;
    // NOP
    // 0x24eabc: 0x0  nop
    ctx->pc = 0x24eabcu;
    // NOP
    // 0x24eac0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x24eac0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x24eac4: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x24EAC4u;
    SET_GPR_U32(ctx, 31, 0x24EACCu);
    ctx->pc = 0x24EAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EAC4u;
    // 0x24eac8: 0xe6210028  swc1        $f1, 0x28($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x24EAC4u, 0x24EACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EACCu;
label_24eacc:
    // 0x24eacc: 0x96030066  lhu         $v1, 0x66($s0)
    ctx->pc = 0x24eaccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 102)));
    // 0x24ead0: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x24ead0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x24ead4: 0x8e050048  lw          $a1, 0x48($s0)
    ctx->pc = 0x24ead4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x24ead8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24ead8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24eadc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24eadcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24eae0: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x24eae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x24eae4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x24eae4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x24eae8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x24eae8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x24eaec: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x24eaecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x24eaf0: 0x14a40007  bne         $a1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24EAF0u;
    {
        const bool branch_taken_0x24eaf0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x24EAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EAF0u;
        // 0x24eaf4: 0xa6030066  sh          $v1, 0x66($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 102), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24eaf0) {
            ctx->pc = 0x24EB10u;
            goto label_24eb10;
        }
    }
    ctx->pc = 0x24EAF8u;
    // 0x24eaf8: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x24eaf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24eafc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x24eafcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x24eb00: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24eb00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24eb04: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24EB04u;
    {
        const bool branch_taken_0x24eb04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EB04u;
        // 0x24eb08: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24eb04) {
            ctx->pc = 0x24EB14u;
            goto label_24eb14;
        }
    }
    ctx->pc = 0x24EB0Cu;
    // 0x24eb0c: 0x0  nop
    ctx->pc = 0x24eb0cu;
    // NOP
label_24eb10:
    // 0x24eb10: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x24eb10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24eb14:
    // 0x24eb14: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x24eb14u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x24eb18: 0x0  nop
    ctx->pc = 0x24eb18u;
    // NOP
    // 0x24eb1c: 0x0  nop
    ctx->pc = 0x24eb1cu;
    // NOP
    // 0x24eb20: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x24eb20u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x24eb24: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x24eb24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x24eb28: 0x8602006c  lh          $v0, 0x6C($s0)
    ctx->pc = 0x24eb28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x24eb2c: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x24eb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x24eb30: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24eb30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24eb34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24eb34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24eb38: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24eb38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24eb3c: 0x0  nop
    ctx->pc = 0x24eb3cu;
    // NOP
    // 0x24eb40: 0x0  nop
    ctx->pc = 0x24eb40u;
    // NOP
    // 0x24eb44: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x24eb44u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x24eb48: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x24eb48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x24eb4c: 0x8602006a  lh          $v0, 0x6A($s0)
    ctx->pc = 0x24eb4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 106)));
    // 0x24eb50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24eb50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24eb54: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24eb54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24eb58: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x24eb58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x24eb5c: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x24eb5cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x24eb60: 0x9602011c  lhu         $v0, 0x11C($s0)
    ctx->pc = 0x24eb60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x24eb64: 0x96030064  lhu         $v1, 0x64($s0)
    ctx->pc = 0x24eb64u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x24eb68: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24eb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24eb6c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x24eb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x24eb70: 0xa602011c  sh          $v0, 0x11C($s0)
    ctx->pc = 0x24eb70u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 284), (uint16_t)GPR_U32(ctx, 2));
    // 0x24eb74: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x24EB74u;
    {
        const bool branch_taken_0x24eb74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EB74u;
        // 0x24eb78: 0xa6030064  sh          $v1, 0x64($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 100), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24eb74) {
            ctx->pc = 0x24ED08u;
            goto label_24ed08;
        }
    }
    ctx->pc = 0x24EB7Cu;
    // 0x24eb7c: 0x0  nop
    ctx->pc = 0x24eb7cu;
    // NOP
label_24eb80:
    // 0x24eb80: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x24eb80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x24eb84: 0x8c6288ac  lw          $v0, -0x7754($v1)
    ctx->pc = 0x24eb84u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A88ACu));
    // 0x24eb88: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24EB88u;
    {
        const bool branch_taken_0x24eb88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EB88u;
        // 0x24eb8c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24eb88) {
            ctx->pc = 0x24EBA0u;
            goto label_24eba0;
        }
    }
    ctx->pc = 0x24EB90u;
    // 0x24eb90: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x24eb90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x24eb94: 0x8c4323b4  lw          $v1, 0x23B4($v0)
    ctx->pc = 0x24eb94u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B23B4u));
    // 0x24eb98: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x24eb98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x24eb9c: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x24eb9cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_24eba0:
    // 0x24eba0: 0x5080005a  beql        $a0, $zero, . + 4 + (0x5A << 2)
    ctx->pc = 0x24EBA0u;
    {
        const bool branch_taken_0x24eba0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24eba0) {
            ctx->pc = 0x24EBA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24EBA0u;
            // 0x24eba4: 0x86020064  lh          $v0, 0x64($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24ED0Cu;
            goto label_24ed0c;
        }
    }
    ctx->pc = 0x24EBA8u;
    // 0x24eba8: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x24eba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24ebac: 0xc6210028  lwc1        $f1, 0x28($s1)
    ctx->pc = 0x24ebacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ebb0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x24ebb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x24ebb4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24ebb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24ebb8: 0xc78388c0  lwc1        $f3, -0x7740($gp)
    ctx->pc = 0x24ebb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24ebbc: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x24ebbcu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x24ebc0: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x24ebc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24ebc4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x24EBC4u;
    {
        const bool branch_taken_0x24ebc4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24EBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EBC4u;
        // 0x24ebc8: 0xe6200024  swc1        $f0, 0x24($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ebc4) {
            ctx->pc = 0x24EBD8u;
            goto label_24ebd8;
        }
    }
    ctx->pc = 0x24EBCCu;
    // 0x24ebcc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24EBCCu;
    {
        const bool branch_taken_0x24ebcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EBCCu;
        // 0x24ebd0: 0x46030840  add.s       $f1, $f1, $f3 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ebcc) {
            ctx->pc = 0x24EBDCu;
            goto label_24ebdc;
        }
    }
    ctx->pc = 0x24EBD4u;
    // 0x24ebd4: 0x0  nop
    ctx->pc = 0x24ebd4u;
    // NOP
label_24ebd8:
    // 0x24ebd8: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x24ebd8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_24ebdc:
    // 0x24ebdc: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x24ebdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x24ebe0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x24ebe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x24ebe4: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x24ebe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x24ebe8: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x24ebe8u;
    { uint32_t bits = FAST_READ32(0x3AB6ECu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24ebec: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x24ebecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x24ebf0: 0x46010142  mul.s       $f5, $f0, $f1
    ctx->pc = 0x24ebf0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x24ebf4: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x24ebf4u;
    { uint32_t bits = FAST_READ32(0x3AB6E8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24ebf8: 0x46012018  adda.s      $f4, $f1
    ctx->pc = 0x24ebf8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[4], ctx->f[1]));
    // 0x24ebfc: 0x46002902  mul.s       $f4, $f5, $f0
    ctx->pc = 0x24ebfcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x24ec00: 0x4603281e  madda.s     $f5, $f3
    ctx->pc = 0x24ec00u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[5], ctx->f[3])));
    // 0x24ec04: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x24ec04u;
    { uint32_t bits = FAST_READ32(0x3AB6E4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24ec08: 0x46002142  mul.s       $f5, $f4, $f0
    ctx->pc = 0x24ec08u;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x24ec0c: 0x4602201e  madda.s     $f4, $f2
    ctx->pc = 0x24ec0cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[2])));
    // 0x24ec10: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x24ec10u;
    { uint32_t bits = FAST_READ32(0x3AB6E0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24ec14: 0x46002902  mul.s       $f4, $f5, $f0
    ctx->pc = 0x24ec14u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x24ec18: 0x4603281e  madda.s     $f5, $f3
    ctx->pc = 0x24ec18u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[5], ctx->f[3])));
    // 0x24ec1c: 0x4602201c  madd.s      $f0, $f4, $f2
    ctx->pc = 0x24ec1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[2]));
    // 0x24ec20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24ec20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24ec24: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24ec24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24ec28: 0xc78388c4  lwc1        $f3, -0x773C($gp)
    ctx->pc = 0x24ec28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24ec2c: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x24ec2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ec30: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24ec30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24ec34: 0xc6210020  lwc1        $f1, 0x20($s1)
    ctx->pc = 0x24ec34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ec38: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x24ec38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x24ec3c: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x24ec3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x24ec40: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x24ec40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x24ec44: 0xc626001c  lwc1        $f6, 0x1C($s1)
    ctx->pc = 0x24ec44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x24ec48: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x24ec48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24ec4c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x24ec4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x24ec50: 0xc623000c  lwc1        $f3, 0xC($s1)
    ctx->pc = 0x24ec50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24ec54: 0xc6240000  lwc1        $f4, 0x0($s1)
    ctx->pc = 0x24ec54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24ec58: 0xc6250008  lwc1        $f5, 0x8($s1)
    ctx->pc = 0x24ec58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x24ec5c: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x24ec5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x24ec60: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x24ec60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x24ec64: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x24ec64u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x24ec68: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x24ec68u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x24ec6c: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x24ec6cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x24ec70: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x24ec70u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x24ec74: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x24ec74u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x24ec78: 0xe7a40004  swc1        $f4, 0x4($sp)
    ctx->pc = 0x24ec78u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x24ec7c: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x24ec7cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x24ec80: 0xe7a50000  swc1        $f5, 0x0($sp)
    ctx->pc = 0x24ec80u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x24ec84: 0xdbb00000  lqc2        $vf16, 0x0($sp)
    ctx->pc = 0x24ec84u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24ec88: 0xd85f0000  lqc2        $vf31, 0x0($v0)
    ctx->pc = 0x24ec88u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24ec8c: 0x4bff842a  vmul.xyzw   $vf16, $vf16, $vf31
    ctx->pc = 0x24ec8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x24ec90: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x24ec90u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x24ec94: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x24ec94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x24ec98: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x24ec98u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ec9c: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x24ec9cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24eca0: 0xd87f0000  lqc2        $vf31, 0x0($v1)
    ctx->pc = 0x24eca0u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24eca4: 0x4bdf8428  vadd.xyz    $vf16, $vf16, $vf31
    ctx->pc = 0x24eca4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x24eca8: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x24eca8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x24ecac: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x24ecacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24ecb0: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x24ecb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ecb4: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x24ecb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x24ecb8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x24ecb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x24ecbc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24ecbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24ecc0: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x24ecc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x24ecc4: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x24ecc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ecc8: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x24ecc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24eccc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24ecccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24ecd0: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x24ecd0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24ecd4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24ecd4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24ecd8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x24ecd8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x24ecdc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x24ECDCu;
    {
        const bool branch_taken_0x24ecdc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24ECE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ECDCu;
        // 0x24ece0: 0xe6200018  swc1        $f0, 0x18($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ecdc) {
            ctx->pc = 0x24ECF8u;
            goto label_24ecf8;
        }
    }
    ctx->pc = 0x24ECE4u;
    // 0x24ece4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x24ece4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x24ece8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x24ece8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x24ecec: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24ececu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24ecf0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x24ecf0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x24ecf4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x24ecf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_24ecf8:
    // 0x24ecf8: 0x96020064  lhu         $v0, 0x64($s0)
    ctx->pc = 0x24ecf8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x24ecfc: 0xa603006a  sh          $v1, 0x6A($s0)
    ctx->pc = 0x24ecfcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 3));
    // 0x24ed00: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24ed00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24ed04: 0xa6020064  sh          $v0, 0x64($s0)
    ctx->pc = 0x24ed04u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 100), (uint16_t)GPR_U32(ctx, 2));
label_24ed08:
    // 0x24ed08: 0x86020064  lh          $v0, 0x64($s0)
    ctx->pc = 0x24ed08u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 100)));
label_24ed0c:
    // 0x24ed0c: 0x86030066  lh          $v1, 0x66($s0)
    ctx->pc = 0x24ed0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 102)));
    // 0x24ed10: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x24ed10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x24ed14: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24ED14u;
    {
        const bool branch_taken_0x24ed14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24ED18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ED14u;
        // 0x24ed18: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ed14) {
            ctx->pc = 0x24ED28u;
            goto label_24ed28;
        }
    }
    ctx->pc = 0x24ED1Cu;
    // 0x24ed1c: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x24ed1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x24ed20: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x24ed20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x24ed24: 0xae020118  sw          $v0, 0x118($s0)
    ctx->pc = 0x24ed24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 2));
label_24ed28:
    // 0x24ed28: 0xc0947f6  jal         func_251FD8
    ctx->pc = 0x24ED28u;
    SET_GPR_U32(ctx, 31, 0x24ED30u);
    ctx->pc = 0x24ED2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24ED28u;
    // 0x24ed2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251FD8u, 0x24ED28u, 0x24ED30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24ED30u;
label_24ed30:
    // 0x24ed30: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x24ed30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24ed34: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x24ed34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24ed38: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x24ed38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24ed3c: 0xc7b60038  lwc1        $f22, 0x38($sp)
    ctx->pc = 0x24ed3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x24ed40: 0xc7b50030  lwc1        $f21, 0x30($sp)
    ctx->pc = 0x24ed40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x24ed44: 0xc7b40028  lwc1        $f20, 0x28($sp)
    ctx->pc = 0x24ed44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x24ed48: 0x3e00008  jr          $ra
    ctx->pc = 0x24ED48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24ED4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ED48u;
        // 0x24ed4c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24ED48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24ED50u;
}
