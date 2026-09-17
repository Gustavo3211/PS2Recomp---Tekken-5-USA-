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

// Function: sub_00222088
// Address: 0x222088 - 0x2221f8
void sub_00222088_0x222088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222088_0x222088");
#endif

    switch (ctx->pc) {
        case 0x2220d0u: goto label_2220d0;
        case 0x222130u: goto label_222130;
        default: break;
    }

    ctx->pc = 0x222088u;

    // 0x222088: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x222088u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x22208c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22208cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222090: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x222090u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x222094: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x222094u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x222098: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x222098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22209c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22209cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2220a0: 0x2487fffe  addiu       $a3, $a0, -0x2
    ctx->pc = 0x2220a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
    // 0x2220a4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2220a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x2220a8: 0x46003206  mov.s       $f8, $f6
    ctx->pc = 0x2220a8u;
    ctx->f[8] = FPU_MOV_S(ctx->f[6]);
    // 0x2220ac: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x2220acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2220b0: 0x18e00019  blez        $a3, . + 4 + (0x19 << 2)
    ctx->pc = 0x2220B0u;
    {
        const bool branch_taken_0x2220b0 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x2220B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2220B0u;
        // 0x2220b4: 0xe7a60004  swc1        $f6, 0x4($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2220b0) {
            ctx->pc = 0x222118u;
            goto label_222118;
        }
    }
    ctx->pc = 0x2220B8u;
    // 0x2220b8: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x2220b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2220bc: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2220bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2220c0: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x2220c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x2220c4: 0xc4470000  lwc1        $f7, 0x0($v0)
    ctx->pc = 0x2220c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2220c8: 0xc4450008  lwc1        $f5, 0x8($v0)
    ctx->pc = 0x2220c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2220cc: 0x0  nop
    ctx->pc = 0x2220ccu;
    // NOP
label_2220d0:
    // 0x2220d0: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x2220d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2220d4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2220d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2220d8: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x2220d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2220dc: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x2220dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2220e0: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x2220e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2220e4: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2220e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2220e8: 0x46042881  sub.s       $f2, $f5, $f4
    ctx->pc = 0x2220e8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x2220ec: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2220ecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2220f0: 0x4602081a  mula.s      $f1, $f2
    ctx->pc = 0x2220f0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[2]));
    // 0x2220f4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2220f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2220f8: 0x460338c1  sub.s       $f3, $f7, $f3
    ctx->pc = 0x2220f8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[7], ctx->f[3]);
    // 0x2220fc: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x2220fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x222100: 0x4603001d  msub.s      $f0, $f0, $f3
    ctx->pc = 0x222100u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[3]));
    // 0x222104: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x222104u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x222108: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x222108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x22210c: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x22210cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x222110: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x222110u;
    {
        const bool branch_taken_0x222110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x222114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222110u;
        // 0x222114: 0x46003180  add.s       $f6, $f6, $f0 (Delay Slot)
        ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x222110) {
            ctx->pc = 0x2220D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2220d0;
        }
    }
    ctx->pc = 0x222118u;
label_222118:
    // 0x222118: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x222118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x22211c: 0x18800018  blez        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x22211Cu;
    {
        const bool branch_taken_0x22211c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x222120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22211Cu;
        // 0x222120: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22211c) {
            ctx->pc = 0x222180u;
            goto label_222180;
        }
    }
    ctx->pc = 0x222124u;
    // 0x222124: 0xc7a50008  lwc1        $f5, 0x8($sp)
    ctx->pc = 0x222124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x222128: 0xc7a90000  lwc1        $f9, 0x0($sp)
    ctx->pc = 0x222128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x22212c: 0x460029c6  mov.s       $f7, $f5
    ctx->pc = 0x22212cu;
    ctx->f[7] = FPU_MOV_S(ctx->f[5]);
label_222130:
    // 0x222130: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x222130u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x222134: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x222134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x222138: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x222138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x22213c: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x22213cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x222140: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x222140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x222144: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x222144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x222148: 0x46043881  sub.s       $f2, $f7, $f4
    ctx->pc = 0x222148u;
    ctx->f[2] = FPU_SUB_S(ctx->f[7], ctx->f[4]);
    // 0x22214c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x22214cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x222150: 0x4602081a  mula.s      $f1, $f2
    ctx->pc = 0x222150u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[2]));
    // 0x222154: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x222154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x222158: 0x460348c1  sub.s       $f3, $f9, $f3
    ctx->pc = 0x222158u;
    ctx->f[3] = FPU_SUB_S(ctx->f[9], ctx->f[3]);
    // 0x22215c: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x22215cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x222160: 0x4603001d  msub.s      $f0, $f0, $f3
    ctx->pc = 0x222160u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[3]));
    // 0x222164: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x222164u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x222168: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x222168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x22216c: 0xc4102a  slt         $v0, $a2, $a0
    ctx->pc = 0x22216cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x222170: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x222170u;
    {
        const bool branch_taken_0x222170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x222174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222170u;
        // 0x222174: 0x46004200  add.s       $f8, $f8, $f0 (Delay Slot)
        ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x222170) {
            ctx->pc = 0x222130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_222130;
        }
    }
    ctx->pc = 0x222178u;
    // 0x222178: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x222178u;
    {
        const bool branch_taken_0x222178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22217Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222178u;
        // 0x22217c: 0x61100  sll         $v0, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222178) {
            ctx->pc = 0x222188u;
            goto label_222188;
        }
    }
    ctx->pc = 0x222180u;
label_222180:
    // 0x222180: 0xc7a50008  lwc1        $f5, 0x8($sp)
    ctx->pc = 0x222180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x222184: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x222184u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_222188:
    // 0x222188: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x222188u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22218c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x22218cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x222190: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x222190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x222194: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x222194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x222198: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x222198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22219c: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x22219cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2221a0: 0x46042881  sub.s       $f2, $f5, $f4
    ctx->pc = 0x2221a0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x2221a4: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2221a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2221a8: 0x4602081a  mula.s      $f1, $f2
    ctx->pc = 0x2221a8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[2]));
    // 0x2221ac: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2221acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2221b0: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2221b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2221b4: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x2221b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2221b8: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2221b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2221bc: 0x4601001d  msub.s      $f0, $f0, $f1
    ctx->pc = 0x2221bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[1]));
    // 0x2221c0: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2221c0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2221c4: 0xc78184ac  lwc1        $f1, -0x7B54($gp)
    ctx->pc = 0x2221c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2221c8: 0x46004200  add.s       $f8, $f8, $f0
    ctx->pc = 0x2221c8u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
    // 0x2221cc: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x2221ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x2221d0: 0x46083001  sub.s       $f0, $f6, $f8
    ctx->pc = 0x2221d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[8]);
    // 0x2221d4: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x2221d4u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x2221d8: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2221d8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2221dc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2221dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2221e0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2221E0u;
    {
        const bool branch_taken_0x2221e0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2221E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2221E0u;
        // 0x2221e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2221e0) {
            ctx->pc = 0x2221ECu;
            goto label_2221ec;
        }
    }
    ctx->pc = 0x2221E8u;
    // 0x2221e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2221e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2221ec:
    // 0x2221ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2221ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2221F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2221ECu;
        // 0x2221f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2221ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2221F4u;
    // 0x2221f4: 0x0  nop
    ctx->pc = 0x2221f4u;
    // NOP
    ctx->pc = 0x2221f8u;
}
