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

// Function: sub_003470E0
// Address: 0x3470e0 - 0x347220
void sub_003470E0_0x3470e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003470E0_0x3470e0");
#endif

    switch (ctx->pc) {
        case 0x3470e0u: goto label_3470e0;
        case 0x3470e4u: goto label_3470e4;
        case 0x3470e8u: goto label_3470e8;
        case 0x3470ecu: goto label_3470ec;
        case 0x3470f0u: goto label_3470f0;
        case 0x3470f4u: goto label_3470f4;
        case 0x3470f8u: goto label_3470f8;
        case 0x3470fcu: goto label_3470fc;
        case 0x347100u: goto label_347100;
        case 0x347104u: goto label_347104;
        case 0x347108u: goto label_347108;
        case 0x34710cu: goto label_34710c;
        case 0x347110u: goto label_347110;
        case 0x347114u: goto label_347114;
        case 0x347118u: goto label_347118;
        case 0x34711cu: goto label_34711c;
        case 0x347120u: goto label_347120;
        case 0x347124u: goto label_347124;
        case 0x347128u: goto label_347128;
        case 0x34712cu: goto label_34712c;
        case 0x347130u: goto label_347130;
        case 0x347134u: goto label_347134;
        case 0x347138u: goto label_347138;
        case 0x34713cu: goto label_34713c;
        case 0x347140u: goto label_347140;
        case 0x347144u: goto label_347144;
        case 0x347148u: goto label_347148;
        case 0x34714cu: goto label_34714c;
        case 0x347150u: goto label_347150;
        case 0x347154u: goto label_347154;
        case 0x347158u: goto label_347158;
        case 0x34715cu: goto label_34715c;
        case 0x347160u: goto label_347160;
        case 0x347164u: goto label_347164;
        case 0x347168u: goto label_347168;
        case 0x34716cu: goto label_34716c;
        case 0x347170u: goto label_347170;
        case 0x347174u: goto label_347174;
        case 0x347178u: goto label_347178;
        case 0x34717cu: goto label_34717c;
        case 0x347180u: goto label_347180;
        case 0x347184u: goto label_347184;
        case 0x347188u: goto label_347188;
        case 0x34718cu: goto label_34718c;
        case 0x347190u: goto label_347190;
        case 0x347194u: goto label_347194;
        case 0x347198u: goto label_347198;
        case 0x34719cu: goto label_34719c;
        case 0x3471a0u: goto label_3471a0;
        case 0x3471a4u: goto label_3471a4;
        case 0x3471a8u: goto label_3471a8;
        case 0x3471acu: goto label_3471ac;
        case 0x3471b0u: goto label_3471b0;
        case 0x3471b4u: goto label_3471b4;
        case 0x3471b8u: goto label_3471b8;
        case 0x3471bcu: goto label_3471bc;
        case 0x3471c0u: goto label_3471c0;
        case 0x3471c4u: goto label_3471c4;
        case 0x3471c8u: goto label_3471c8;
        case 0x3471ccu: goto label_3471cc;
        case 0x3471d0u: goto label_3471d0;
        case 0x3471d4u: goto label_3471d4;
        case 0x3471d8u: goto label_3471d8;
        case 0x3471dcu: goto label_3471dc;
        case 0x3471e0u: goto label_3471e0;
        case 0x3471e4u: goto label_3471e4;
        case 0x3471e8u: goto label_3471e8;
        case 0x3471ecu: goto label_3471ec;
        case 0x3471f0u: goto label_3471f0;
        case 0x3471f4u: goto label_3471f4;
        case 0x3471f8u: goto label_3471f8;
        case 0x3471fcu: goto label_3471fc;
        case 0x347200u: goto label_347200;
        case 0x347204u: goto label_347204;
        case 0x347208u: goto label_347208;
        case 0x34720cu: goto label_34720c;
        case 0x347210u: goto label_347210;
        case 0x347214u: goto label_347214;
        case 0x347218u: goto label_347218;
        case 0x34721cu: goto label_34721c;
        default: break;
    }

    ctx->pc = 0x3470e0u;

label_3470e0:
    // 0x3470e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3470e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3470e4:
    // 0x3470e4: 0x8f86c594  lw          $a2, -0x3A6C($gp)
    ctx->pc = 0x3470e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952340)));
label_3470e8:
    // 0x3470e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3470e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3470ec:
    // 0x3470ec: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x3470ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_3470f0:
    // 0x3470f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3470f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3470f4:
    // 0x3470f4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3470f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3470f8:
    // 0x3470f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3470f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3470fc:
    // 0x3470fc: 0x8cc20050  lw          $v0, 0x50($a2)
    ctx->pc = 0x3470fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 80)));
label_347100:
    // 0x347100: 0x8c850018  lw          $a1, 0x18($a0)
    ctx->pc = 0x347100u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_347104:
    // 0x347104: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x347104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_347108:
    // 0x347108: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x347108u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_34710c:
    // 0x34710c: 0xa38025  or          $s0, $a1, $v1
    ctx->pc = 0x34710cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_347110:
    // 0x347110: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x347110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_347114:
    // 0x347114: 0x60f809  jalr        $v1
label_347118:
    if (ctx->pc == 0x347118u) {
        ctx->pc = 0x347118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347114u;
        // 0x347118: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34711Cu;
        goto label_34711c;
    }
    ctx->pc = 0x347114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x34711Cu);
        ctx->pc = 0x347118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347114u;
        // 0x347118: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x347114u, 0x34711Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34711Cu;
label_34711c:
    // 0x34711c: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
label_347120:
    if (ctx->pc == 0x347120u) {
        ctx->pc = 0x347120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34711Cu;
        // 0x347120: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x347124u;
        goto label_347124;
    }
    ctx->pc = 0x34711Cu;
    {
        const bool branch_taken_0x34711c = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x347120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34711Cu;
        // 0x347120: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34711c) {
            ctx->pc = 0x347138u;
            goto label_347138;
        }
    }
    ctx->pc = 0x347124u;
label_347124:
    // 0x347124: 0x44911000  mtc1        $s1, $f2
    ctx->pc = 0x347124u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_347128:
    // 0x347128: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x347128u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_34712c:
    // 0x34712c: 0x10000007  b           . + 4 + (0x7 << 2)
label_347130:
    if (ctx->pc == 0x347130u) {
        ctx->pc = 0x347134u;
        goto label_347134;
    }
    ctx->pc = 0x34712Cu;
    {
        const bool branch_taken_0x34712c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34712c) {
            ctx->pc = 0x34714Cu;
            goto label_34714c;
        }
    }
    ctx->pc = 0x347134u;
label_347134:
    // 0x347134: 0x0  nop
    ctx->pc = 0x347134u;
    // NOP
label_347138:
    // 0x347138: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x347138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_34713c:
    // 0x34713c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34713cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_347140:
    // 0x347140: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x347140u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_347144:
    // 0x347144: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x347144u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_347148:
    // 0x347148: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x347148u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_34714c:
    // 0x34714c: 0x0  nop
    ctx->pc = 0x34714cu;
    // NOP
label_347150:
    // 0x347150: 0x0  nop
    ctx->pc = 0x347150u;
    // NOP
label_347154:
    // 0x347154: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x347154u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[0];
label_347158:
    // 0x347158: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x347158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_34715c:
    // 0x34715c: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x34715cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_347160:
    // 0x347160: 0xc6050010  lwc1        $f5, 0x10($s0)
    ctx->pc = 0x347160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_347164:
    // 0x347164: 0xc6040014  lwc1        $f4, 0x14($s0)
    ctx->pc = 0x347164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_347168:
    // 0x347168: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x347168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_34716c:
    // 0x34716c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x34716cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_347170:
    // 0x347170: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x347170u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_347174:
    // 0x347174: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x347174u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_347178:
    // 0x347178: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x347178u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_34717c:
    // 0x34717c: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x34717cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_347180:
    // 0x347180: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x347180u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_347184:
    // 0x347184: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x347184u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_347188:
    // 0x347188: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x347188u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_34718c:
    // 0x34718c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x34718cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_347190:
    // 0x347190: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x347190u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_347194:
    // 0x347194: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x347194u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_347198:
    // 0x347198: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x347198u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_34719c:
    // 0x34719c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x34719cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_3471a0:
    // 0x3471a0: 0x46002800  add.s       $f0, $f5, $f0
    ctx->pc = 0x3471a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_3471a4:
    // 0x3471a4: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x3471a4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
label_3471a8:
    // 0x3471a8: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x3471a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3471ac:
    // 0x3471ac: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x3471acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_3471b0:
    // 0x3471b0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_3471b4:
    if (ctx->pc == 0x3471B4u) {
        ctx->pc = 0x3471B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3471B0u;
        // 0x3471b4: 0xe6040014  swc1        $f4, 0x14($s0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3471B8u;
        goto label_3471b8;
    }
    ctx->pc = 0x3471B0u;
    {
        const bool branch_taken_0x3471b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3471B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3471B0u;
        // 0x3471b4: 0xe6040014  swc1        $f4, 0x14($s0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3471b0) {
            ctx->pc = 0x3471C0u;
            goto label_3471c0;
        }
    }
    ctx->pc = 0x3471B8u;
label_3471b8:
    // 0x3471b8: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x3471b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
label_3471bc:
    // 0x3471bc: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x3471bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_3471c0:
    // 0x3471c0: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x3471c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3471c4:
    // 0x3471c4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3471c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_3471c8:
    // 0x3471c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3471c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3471cc:
    // 0x3471cc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3471ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3471d0:
    // 0x3471d0: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_3471d4:
    if (ctx->pc == 0x3471D4u) {
        ctx->pc = 0x3471D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3471D0u;
        // 0x3471d4: 0xc6000014  lwc1        $f0, 0x14($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3471D8u;
        goto label_3471d8;
    }
    ctx->pc = 0x3471D0u;
    {
        const bool branch_taken_0x3471d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3471d0) {
            ctx->pc = 0x3471D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3471D0u;
            // 0x3471d4: 0xc6000014  lwc1        $f0, 0x14($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3471E4u;
            goto label_3471e4;
        }
    }
    ctx->pc = 0x3471D8u;
label_3471d8:
    // 0x3471d8: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x3471d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
label_3471dc:
    // 0x3471dc: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x3471dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_3471e0:
    // 0x3471e0: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x3471e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3471e4:
    // 0x3471e4: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x3471e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3471e8:
    // 0x3471e8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_3471ec:
    if (ctx->pc == 0x3471ECu) {
        ctx->pc = 0x3471F0u;
        goto label_3471f0;
    }
    ctx->pc = 0x3471E8u;
    {
        const bool branch_taken_0x3471e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3471e8) {
            ctx->pc = 0x3471F8u;
            goto label_3471f8;
        }
    }
    ctx->pc = 0x3471F0u;
label_3471f0:
    // 0x3471f0: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x3471f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
label_3471f4:
    // 0x3471f4: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x3471f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_3471f8:
    // 0x3471f8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3471f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3471fc:
    // 0x3471fc: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_347200:
    if (ctx->pc == 0x347200u) {
        ctx->pc = 0x347200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3471FCu;
        // 0x347200: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x347204u;
        goto label_347204;
    }
    ctx->pc = 0x3471FCu;
    {
        const bool branch_taken_0x3471fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3471fc) {
            ctx->pc = 0x347200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3471FCu;
            // 0x347200: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x347210u;
            goto label_347210;
        }
    }
    ctx->pc = 0x347204u;
label_347204:
    // 0x347204: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x347204u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
label_347208:
    // 0x347208: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x347208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_34720c:
    // 0x34720c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34720cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_347210:
    // 0x347210: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x347210u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_347214:
    // 0x347214: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x347214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_347218:
    // 0x347218: 0x3e00008  jr          $ra
label_34721c:
    if (ctx->pc == 0x34721Cu) {
        ctx->pc = 0x34721Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347218u;
        // 0x34721c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x347220u;
        goto label_fallthrough_0x347218;
    }
    ctx->pc = 0x347218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34721Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347218u;
        // 0x34721c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x347218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x347218:
    ctx->pc = 0x347220u;
}
