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

// Function: sub_0022DC08
// Address: 0x22dc08 - 0x22de10
void sub_0022DC08_0x22dc08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022DC08_0x22dc08");
#endif

    switch (ctx->pc) {
        case 0x22dc58u: goto label_22dc58;
        case 0x22dcb8u: goto label_22dcb8;
        default: break;
    }

    ctx->pc = 0x22dc08u;

    // 0x22dc08: 0x8caa001c  lw          $t2, 0x1C($a1)
    ctx->pc = 0x22dc08u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x22dc0c: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x22dc0cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22dc10: 0x79620000  lq          $v0, 0x0($t3)
    ctx->pc = 0x22dc10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x22dc14: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22dc14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22dc18: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x22dc18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x22dc1c: 0x2549fffe  addiu       $t1, $t2, -0x2
    ctx->pc = 0x22dc1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967294));
    // 0x22dc20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22dc20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22dc24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22dc24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22dc28: 0x24a80020  addiu       $t0, $a1, 0x20
    ctx->pc = 0x22dc28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x22dc2c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x22dc2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x22dc30: 0x46003206  mov.s       $f8, $f6
    ctx->pc = 0x22dc30u;
    ctx->f[8] = FPU_MOV_S(ctx->f[6]);
    // 0x22dc34: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x22dc34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x22dc38: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x22dc38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22dc3c: 0x19200018  blez        $t1, . + 4 + (0x18 << 2)
    ctx->pc = 0x22DC3Cu;
    {
        const bool branch_taken_0x22dc3c = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x22DC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DC3Cu;
        // 0x22dc40: 0xe7a60004  swc1        $f6, 0x4($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dc3c) {
            ctx->pc = 0x22DCA0u;
            goto label_22dca0;
        }
    }
    ctx->pc = 0x22DC44u;
    // 0x22dc44: 0xa1100  sll         $v0, $t2, 4
    ctx->pc = 0x22dc44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x22dc48: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x22dc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x22dc4c: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x22dc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x22dc50: 0xc4470000  lwc1        $f7, 0x0($v0)
    ctx->pc = 0x22dc50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x22dc54: 0xc4450008  lwc1        $f5, 0x8($v0)
    ctx->pc = 0x22dc54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_22dc58:
    // 0x22dc58: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x22dc58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x22dc5c: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x22dc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x22dc60: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x22dc60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x22dc64: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x22dc64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x22dc68: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x22dc68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x22dc6c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x22dc6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22dc70: 0x46042881  sub.s       $f2, $f5, $f4
    ctx->pc = 0x22dc70u;
    ctx->f[2] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x22dc74: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x22dc74u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x22dc78: 0x4602081a  mula.s      $f1, $f2
    ctx->pc = 0x22dc78u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[2]));
    // 0x22dc7c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x22dc7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22dc80: 0x460338c1  sub.s       $f3, $f7, $f3
    ctx->pc = 0x22dc80u;
    ctx->f[3] = FPU_SUB_S(ctx->f[7], ctx->f[3]);
    // 0x22dc84: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x22dc84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x22dc88: 0x4603001d  msub.s      $f0, $f0, $f3
    ctx->pc = 0x22dc88u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[3]));
    // 0x22dc8c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x22dc8cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x22dc90: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x22dc90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x22dc94: 0x89102a  slt         $v0, $a0, $t1
    ctx->pc = 0x22dc94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x22dc98: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x22DC98u;
    {
        const bool branch_taken_0x22dc98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22DC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DC98u;
        // 0x22dc9c: 0x46003180  add.s       $f6, $f6, $f0 (Delay Slot)
        ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dc98) {
            ctx->pc = 0x22DC58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22dc58;
        }
    }
    ctx->pc = 0x22DCA0u;
label_22dca0:
    // 0x22dca0: 0x2549ffff  addiu       $t1, $t2, -0x1
    ctx->pc = 0x22dca0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x22dca4: 0x19200018  blez        $t1, . + 4 + (0x18 << 2)
    ctx->pc = 0x22DCA4u;
    {
        const bool branch_taken_0x22dca4 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x22DCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DCA4u;
        // 0x22dca8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dca4) {
            ctx->pc = 0x22DD08u;
            goto label_22dd08;
        }
    }
    ctx->pc = 0x22DCACu;
    // 0x22dcac: 0xc7a50008  lwc1        $f5, 0x8($sp)
    ctx->pc = 0x22dcacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x22dcb0: 0xc7a90000  lwc1        $f9, 0x0($sp)
    ctx->pc = 0x22dcb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x22dcb4: 0x460029c6  mov.s       $f7, $f5
    ctx->pc = 0x22dcb4u;
    ctx->f[7] = FPU_MOV_S(ctx->f[5]);
label_22dcb8:
    // 0x22dcb8: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x22dcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x22dcbc: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x22dcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x22dcc0: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x22dcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x22dcc4: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x22dcc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x22dcc8: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x22dcc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x22dccc: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x22dcccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22dcd0: 0x46043881  sub.s       $f2, $f7, $f4
    ctx->pc = 0x22dcd0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[7], ctx->f[4]);
    // 0x22dcd4: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x22dcd4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x22dcd8: 0x4602081a  mula.s      $f1, $f2
    ctx->pc = 0x22dcd8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[2]));
    // 0x22dcdc: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x22dcdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22dce0: 0x460348c1  sub.s       $f3, $f9, $f3
    ctx->pc = 0x22dce0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[9], ctx->f[3]);
    // 0x22dce4: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x22dce4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x22dce8: 0x4603001d  msub.s      $f0, $f0, $f3
    ctx->pc = 0x22dce8u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[3]));
    // 0x22dcec: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x22dcecu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x22dcf0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x22dcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x22dcf4: 0x89102a  slt         $v0, $a0, $t1
    ctx->pc = 0x22dcf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x22dcf8: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x22DCF8u;
    {
        const bool branch_taken_0x22dcf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22DCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DCF8u;
        // 0x22dcfc: 0x46004200  add.s       $f8, $f8, $f0 (Delay Slot)
        ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dcf8) {
            ctx->pc = 0x22DCB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22dcb8;
        }
    }
    ctx->pc = 0x22DD00u;
    // 0x22dd00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x22DD00u;
    {
        const bool branch_taken_0x22dd00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DD00u;
        // 0x22dd04: 0x41100  sll         $v0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dd00) {
            ctx->pc = 0x22DD10u;
            goto label_22dd10;
        }
    }
    ctx->pc = 0x22DD08u;
label_22dd08:
    // 0x22dd08: 0xc7a50008  lwc1        $f5, 0x8($sp)
    ctx->pc = 0x22dd08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x22dd0c: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x22dd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_22dd10:
    // 0x22dd10: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x22dd10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22dd14: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x22dd14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x22dd18: 0xc5020000  lwc1        $f2, 0x0($t0)
    ctx->pc = 0x22dd18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22dd1c: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x22dd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x22dd20: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x22dd20u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22dd24: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x22dd24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x22dd28: 0x46042841  sub.s       $f1, $f5, $f4
    ctx->pc = 0x22dd28u;
    ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x22dd2c: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x22dd2cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x22dd30: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x22dd30u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x22dd34: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x22dd34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22dd38: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x22dd38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22dd3c: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x22dd3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x22dd40: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x22dd40u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x22dd44: 0x4601001d  msub.s      $f0, $f0, $f1
    ctx->pc = 0x22dd44u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[1]));
    // 0x22dd48: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x22dd48u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x22dd4c: 0xc78184c0  lwc1        $f1, -0x7B40($gp)
    ctx->pc = 0x22dd4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22dd50: 0x46004200  add.s       $f8, $f8, $f0
    ctx->pc = 0x22dd50u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
    // 0x22dd54: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x22dd54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x22dd58: 0x46083001  sub.s       $f0, $f6, $f8
    ctx->pc = 0x22dd58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[8]);
    // 0x22dd5c: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x22dd5cu;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x22dd60: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x22dd60u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x22dd64: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x22dd64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22dd68: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x22DD68u;
    {
        const bool branch_taken_0x22dd68 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22DD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DD68u;
        // 0x22dd6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dd68) {
            ctx->pc = 0x22DD74u;
            goto label_22dd74;
        }
    }
    ctx->pc = 0x22DD70u;
    // 0x22dd70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22dd70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22dd74:
    // 0x22dd74: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x22dd74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x22dd78: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x22DD78u;
    {
        const bool branch_taken_0x22dd78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DD78u;
        // 0x22dd7c: 0x24a20010  addiu       $v0, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dd78) {
            ctx->pc = 0x22DE04u;
            goto label_22de04;
        }
    }
    ctx->pc = 0x22DD80u;
    // 0x22dd80: 0xc5060008  lwc1        $f6, 0x8($t0)
    ctx->pc = 0x22dd80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x22dd84: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x22dd84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x22dd88: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x22dd88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22dd8c: 0xc4450004  lwc1        $f5, 0x4($v0)
    ctx->pc = 0x22dd8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x22dd90: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x22dd90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22dd94: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x22dd94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22dd98: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x22dd98u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x22dd9c: 0x4600281e  madda.s     $f5, $f0
    ctx->pc = 0x22dd9cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[5], ctx->f[0])));
    // 0x22dda0: 0x4606205c  madd.s      $f1, $f4, $f6
    ctx->pc = 0x22dda0u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[6]));
    // 0x22dda4: 0xc5630000  lwc1        $f3, 0x0($t3)
    ctx->pc = 0x22dda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x22dda8: 0xc5660008  lwc1        $f6, 0x8($t3)
    ctx->pc = 0x22dda8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x22ddac: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x22ddacu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x22ddb0: 0xc4e30000  lwc1        $f3, 0x0($a3)
    ctx->pc = 0x22ddb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x22ddb4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22ddb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22ddb8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22ddb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ddbc: 0x46062102  mul.s       $f4, $f4, $f6
    ctx->pc = 0x22ddbcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x22ddc0: 0x0  nop
    ctx->pc = 0x22ddc0u;
    // NOP
    // 0x22ddc4: 0x0  nop
    ctx->pc = 0x22ddc4u;
    // NOP
    // 0x22ddc8: 0x46050003  div.s       $f0, $f0, $f5
    ctx->pc = 0x22ddc8u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[5];
    // 0x22ddcc: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x22ddccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x22ddd0: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x22ddd0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x22ddd4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x22ddd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x22ddd8: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x22ddd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22dddc: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x22DDDCu;
    {
        const bool branch_taken_0x22dddc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22dddc) {
            ctx->pc = 0x22DDE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22DDDCu;
            // 0x22dde0: 0xc4e00004  lwc1        $f0, 0x4($a3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x22DDF0u;
            goto label_22ddf0;
        }
    }
    ctx->pc = 0x22DDE4u;
    // 0x22dde4: 0xe4e10000  swc1        $f1, 0x0($a3)
    ctx->pc = 0x22dde4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x22dde8: 0xace60008  sw          $a2, 0x8($a3)
    ctx->pc = 0x22dde8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 6));
    // 0x22ddec: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x22ddecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22ddf0:
    // 0x22ddf0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22ddf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22ddf4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x22DDF4u;
    {
        const bool branch_taken_0x22ddf4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22ddf4) {
            ctx->pc = 0x22DE04u;
            goto label_22de04;
        }
    }
    ctx->pc = 0x22DDFCu;
    // 0x22ddfc: 0xace6000c  sw          $a2, 0xC($a3)
    ctx->pc = 0x22ddfcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 6));
    // 0x22de00: 0xe4e10004  swc1        $f1, 0x4($a3)
    ctx->pc = 0x22de00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
label_22de04:
    // 0x22de04: 0x3e00008  jr          $ra
    ctx->pc = 0x22DE04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22DE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DE04u;
        // 0x22de08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22DE04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22DE0Cu;
    // 0x22de0c: 0x0  nop
    ctx->pc = 0x22de0cu;
    // NOP
    ctx->pc = 0x22de10u;
}
