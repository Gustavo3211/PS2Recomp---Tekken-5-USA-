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

// Function: sub_002F50C0
// Address: 0x2f50c0 - 0x2f52a0
void sub_002F50C0_0x2f50c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F50C0_0x2f50c0");
#endif

    switch (ctx->pc) {
        case 0x2f5254u: goto label_2f5254;
        case 0x2f526cu: goto label_2f526c;
        default: break;
    }

    ctx->pc = 0x2f50c0u;

    // 0x2f50c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f50c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f50c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f50c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f50c8: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x2f50c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f50cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2f50ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2f50d0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f50d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f50d4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2f50d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2f50d8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2f50d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f50dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f50dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2f50e0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f50e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f50e4: 0x14a0002c  bnez        $a1, . + 4 + (0x2C << 2)
    ctx->pc = 0x2F50E4u;
    {
        const bool branch_taken_0x2f50e4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F50E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F50E4u;
        // 0x2f50e8: 0xe7b40028  swc1        $f20, 0x28($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f50e4) {
            ctx->pc = 0x2F5198u;
            goto label_2f5198;
        }
    }
    ctx->pc = 0x2F50ECu;
    // 0x2f50ec: 0x108880  sll         $s1, $s0, 2
    ctx->pc = 0x2f50ecu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2f50f0: 0x3c014780  lui         $at, 0x4780
    ctx->pc = 0x2f50f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18304 << 16));
    // 0x2f50f4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2f50f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2f50f8: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x2f50f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2f50fc: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x2f50fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x2f5100: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f5100u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f5104: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2f5104u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2f5108: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f5108u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f510c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f510cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f5110: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2f5110u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2f5114: 0x0  nop
    ctx->pc = 0x2f5114u;
    // NOP
    // 0x2f5118: 0x0  nop
    ctx->pc = 0x2f5118u;
    // NOP
    // 0x2f511c: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x2f511cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[1];
    // 0x2f5120: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F5120u;
    {
        const bool branch_taken_0x2f5120 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2f5120) {
            ctx->pc = 0x2F5138u;
            goto label_2f5138;
        }
    }
    ctx->pc = 0x2F5128u;
    // 0x2f5128: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x2f5128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x2f512c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f512cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5130: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F5130u;
    {
        const bool branch_taken_0x2f5130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5130u;
        // 0x2f5134: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5130) {
            ctx->pc = 0x2F5144u;
            goto label_2f5144;
        }
    }
    ctx->pc = 0x2F5138u;
label_2f5138:
    // 0x2f5138: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2f5138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2f513c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f513cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5140: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2f5140u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2f5144:
    // 0x2f5144: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f5144u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2f5148: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2f5148u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2f514c: 0x30824000  andi        $v0, $a0, 0x4000
    ctx->pc = 0x2f514cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
    // 0x2f5150: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F5150u;
    {
        const bool branch_taken_0x2f5150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5150u;
        // 0x2f5154: 0x30833fff  andi        $v1, $a0, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5150) {
            ctx->pc = 0x2F5160u;
            goto label_2f5160;
        }
    }
    ctx->pc = 0x2F5158u;
    // 0x2f5158: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2f5158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2f515c: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x2f515cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2f5160:
    // 0x2f5160: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2f5160u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f5164: 0x30828000  andi        $v0, $a0, 0x8000
    ctx->pc = 0x2f5164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
    // 0x2f5168: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2f5168u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2f516c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2f516cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2f5170: 0x8c840340  lw          $a0, 0x340($a0)
    ctx->pc = 0x2f5170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 832)));
    // 0x2f5174: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2f5174u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2f5178: 0x3c014420  lui         $at, 0x4420
    ctx->pc = 0x2f5178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17440 << 16));
    // 0x2f517c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f517cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f5180: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x2f5180u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2f5184: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2f5184u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5188: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2f5188u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2f518c: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x2f518cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2f5190: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2F5190u;
    {
        const bool branch_taken_0x2f5190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5190u;
        // 0x2f5194: 0x46016500  add.s       $f20, $f12, $f1 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5190) {
            ctx->pc = 0x2F5240u;
            goto label_2f5240;
        }
    }
    ctx->pc = 0x2F5198u;
label_2f5198:
    // 0x2f5198: 0x108880  sll         $s1, $s0, 2
    ctx->pc = 0x2f5198u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2f519c: 0x3c014780  lui         $at, 0x4780
    ctx->pc = 0x2f519cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18304 << 16));
    // 0x2f51a0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2f51a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2f51a4: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x2f51a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2f51a8: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x2f51a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x2f51ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f51acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f51b0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2f51b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2f51b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f51b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f51b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f51b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f51bc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2f51bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2f51c0: 0x0  nop
    ctx->pc = 0x2f51c0u;
    // NOP
    // 0x2f51c4: 0x0  nop
    ctx->pc = 0x2f51c4u;
    // NOP
    // 0x2f51c8: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x2f51c8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[1];
    // 0x2f51cc: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F51CCu;
    {
        const bool branch_taken_0x2f51cc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2f51cc) {
            ctx->pc = 0x2F51E8u;
            goto label_2f51e8;
        }
    }
    ctx->pc = 0x2F51D4u;
    // 0x2f51d4: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x2f51d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x2f51d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f51d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f51dc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F51DCu;
    {
        const bool branch_taken_0x2f51dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F51E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F51DCu;
        // 0x2f51e0: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f51dc) {
            ctx->pc = 0x2F51F4u;
            goto label_2f51f4;
        }
    }
    ctx->pc = 0x2F51E4u;
    // 0x2f51e4: 0x0  nop
    ctx->pc = 0x2f51e4u;
    // NOP
label_2f51e8:
    // 0x2f51e8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2f51e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2f51ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f51ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f51f0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2f51f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2f51f4:
    // 0x2f51f4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f51f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2f51f8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2f51f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2f51fc: 0x30824000  andi        $v0, $a0, 0x4000
    ctx->pc = 0x2f51fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
    // 0x2f5200: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F5200u;
    {
        const bool branch_taken_0x2f5200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5200u;
        // 0x2f5204: 0x30833fff  andi        $v1, $a0, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5200) {
            ctx->pc = 0x2F5210u;
            goto label_2f5210;
        }
    }
    ctx->pc = 0x2F5208u;
    // 0x2f5208: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2f5208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2f520c: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x2f520cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2f5210:
    // 0x2f5210: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2f5210u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f5214: 0x30828000  andi        $v0, $a0, 0x8000
    ctx->pc = 0x2f5214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
    // 0x2f5218: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2f5218u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2f521c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2f521cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2f5220: 0x8c840340  lw          $a0, 0x340($a0)
    ctx->pc = 0x2f5220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 832)));
    // 0x2f5224: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2f5224u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2f5228: 0x3c014420  lui         $at, 0x4420
    ctx->pc = 0x2f5228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17440 << 16));
    // 0x2f522c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f522cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f5230: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x2f5230u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2f5234: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2f5234u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5238: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x2f5238u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2f523c: 0x46016501  sub.s       $f20, $f12, $f1
    ctx->pc = 0x2f523cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
label_2f5240:
    // 0x2f5240: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2f5240u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2f5244: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f5244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5248: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2f5248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2f524c: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2F524Cu;
    SET_GPR_U32(ctx, 31, 0x2F5254u);
    ctx->pc = 0x2F5250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F524Cu;
    // 0x2f5250: 0x8c440050  lw          $a0, 0x50($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2F524Cu, 0x2F5254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5254u;
label_2f5254:
    // 0x2f5254: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x2f5254u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x2f5258: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2f5258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2f525c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f525cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2f5260: 0x8c440050  lw          $a0, 0x50($v0)
    ctx->pc = 0x2f5260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x2f5264: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2F5264u;
    SET_GPR_U32(ctx, 31, 0x2F526Cu);
    ctx->pc = 0x2F5268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5264u;
    // 0x2f5268: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2F5264u, 0x2F526Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F526Cu;
label_2f526c:
    // 0x2f526c: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x2f526cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2f5270: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2f5270u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2f5274: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2f5274u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f5278: 0x2842005a  slti        $v0, $v0, 0x5A
    ctx->pc = 0x2f5278u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)90) ? 1 : 0);
    // 0x2f527c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f527cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f5280: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f5280u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f5284: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2f5284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2f5288: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2f5288u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f528c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f528cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f5290: 0xc7b40028  lwc1        $f20, 0x28($sp)
    ctx->pc = 0x2f5290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f5294: 0x3e00008  jr          $ra
    ctx->pc = 0x2F5294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F5298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5294u;
        // 0x2f5298: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F5294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F529Cu;
    // 0x2f529c: 0x0  nop
    ctx->pc = 0x2f529cu;
    // NOP
    ctx->pc = 0x2f52a0u;
}
