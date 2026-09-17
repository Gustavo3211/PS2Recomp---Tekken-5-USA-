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

// Function: sub_00250008
// Address: 0x250008 - 0x250230
void sub_00250008_0x250008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250008_0x250008");
#endif

    switch (ctx->pc) {
        case 0x250174u: goto label_250174;
        case 0x2501b0u: goto label_2501b0;
        default: break;
    }

    ctx->pc = 0x250008u;

    // 0x250008: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x250008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x25000c: 0x8602011c  lh          $v0, 0x11C($s0)
    ctx->pc = 0x25000cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x250010: 0x14400073  bnez        $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x250010u;
    {
        const bool branch_taken_0x250010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x250014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250010u;
        // 0x250014: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250010) {
            ctx->pc = 0x2501E0u;
            goto label_2501e0;
        }
    }
    ctx->pc = 0x250018u;
    // 0x250018: 0xc6060010  lwc1        $f6, 0x10($s0)
    ctx->pc = 0x250018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x25001c: 0x261100c0  addiu       $s1, $s0, 0xC0
    ctx->pc = 0x25001cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x250020: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x250020u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x250024: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x250024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x250028: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x250028u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25002c: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x25002cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x250030: 0xc7808908  lwc1        $f0, -0x76F8($gp)
    ctx->pc = 0x250030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x250034: 0x9224002a  lbu         $a0, 0x2A($s1)
    ctx->pc = 0x250034u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 42)));
    // 0x250038: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x250038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x25003c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x25003Cu;
    {
        const bool branch_taken_0x25003c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x250040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25003Cu;
        // 0x250040: 0xc6070014  lwc1        $f7, 0x14($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25003c) {
            ctx->pc = 0x250050u;
            goto label_250050;
        }
    }
    ctx->pc = 0x250044u;
    // 0x250044: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x250044u;
    {
        const bool branch_taken_0x250044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250044u;
        // 0x250048: 0x46003000  add.s       $f0, $f6, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x250044) {
            ctx->pc = 0x250054u;
            goto label_250054;
        }
    }
    ctx->pc = 0x25004Cu;
    // 0x25004c: 0x0  nop
    ctx->pc = 0x25004cu;
    // NOP
label_250050:
    // 0x250050: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x250050u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
label_250054:
    // 0x250054: 0x46000142  mul.s       $f5, $f0, $f0
    ctx->pc = 0x250054u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x250058: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x250058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x25005c: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x25005cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x250060: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x250060u;
    { uint32_t bits = FAST_READ32(0x3AB6ECu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x250064: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x250064u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x250068: 0x46002902  mul.s       $f4, $f5, $f0
    ctx->pc = 0x250068u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x25006c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x25006cu;
    { uint32_t bits = FAST_READ32(0x3AB6E8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x250070: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x250070u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[3], ctx->f[0]));
    // 0x250074: 0x460520c2  mul.s       $f3, $f4, $f5
    ctx->pc = 0x250074u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x250078: 0x4602201e  madda.s     $f4, $f2
    ctx->pc = 0x250078u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[2])));
    // 0x25007c: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x25007cu;
    { uint32_t bits = FAST_READ32(0x3AB6E4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x250080: 0x46051902  mul.s       $f4, $f3, $f5
    ctx->pc = 0x250080u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x250084: 0x4601181e  madda.s     $f3, $f1
    ctx->pc = 0x250084u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[1])));
    // 0x250088: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x250088u;
    { uint32_t bits = FAST_READ32(0x3AB6E0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25008c: 0x460520c2  mul.s       $f3, $f4, $f5
    ctx->pc = 0x25008cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x250090: 0x4602201e  madda.s     $f4, $f2
    ctx->pc = 0x250090u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[2])));
    // 0x250094: 0x4601195c  madd.s      $f5, $f3, $f1
    ctx->pc = 0x250094u;
    ctx->f[5] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x250098: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x250098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25009c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25009cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2500a0: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x2500a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x2500a4: 0x46002886  mov.s       $f2, $f5
    ctx->pc = 0x2500a4u;
    ctx->f[2] = FPU_MOV_S(ctx->f[5]);
    // 0x2500a8: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x2500a8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x2500ac: 0x4602105d  msub.s      $f1, $f2, $f2
    ctx->pc = 0x2500acu;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2500b0: 0x460100c4  c1          0x100C4
    ctx->pc = 0x2500b0u;
    ctx->f[3] = FPU_SQRT_S(ctx->f[0]);
    // 0x2500b4: 0xc780890c  lwc1        $f0, -0x76F4($gp)
    ctx->pc = 0x2500b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2500b8: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x2500b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2500bc: 0x46043034  c.lt.s      $f6, $f4
    ctx->pc = 0x2500bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2500c0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2500C0u;
    {
        const bool branch_taken_0x2500c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2500C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2500C0u;
        // 0x2500c4: 0x46001202  mul.s       $f8, $f2, $f0 (Delay Slot)
        ctx->f[8] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2500c0) {
            ctx->pc = 0x2500CCu;
            goto label_2500cc;
        }
    }
    ctx->pc = 0x2500C8u;
    // 0x2500c8: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x2500c8u;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
label_2500cc:
    // 0x2500cc: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2500ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2500d0: 0xc7818910  lwc1        $f1, -0x76F0($gp)
    ctx->pc = 0x2500d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2500d4: 0x46043834  c.lt.s      $f7, $f4
    ctx->pc = 0x2500d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2500d8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2500D8u;
    {
        const bool branch_taken_0x2500d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2500DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2500D8u;
        // 0x2500dc: 0xe4600004  swc1        $f0, 0x4($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2500d8) {
            ctx->pc = 0x2500E8u;
            goto label_2500e8;
        }
    }
    ctx->pc = 0x2500E0u;
    // 0x2500e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2500E0u;
    {
        const bool branch_taken_0x2500e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2500E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2500E0u;
        // 0x2500e4: 0x46013800  add.s       $f0, $f7, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[7], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2500e0) {
            ctx->pc = 0x2500ECu;
            goto label_2500ec;
        }
    }
    ctx->pc = 0x2500E8u;
label_2500e8:
    // 0x2500e8: 0x46070801  sub.s       $f0, $f1, $f7
    ctx->pc = 0x2500e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[7]);
label_2500ec:
    // 0x2500ec: 0x46000142  mul.s       $f5, $f0, $f0
    ctx->pc = 0x2500ecu;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2500f0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2500f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2500f4: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x2500f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x2500f8: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x2500f8u;
    { uint32_t bits = FAST_READ32(0x3AB6ECu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2500fc: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x2500fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x250100: 0x46002902  mul.s       $f4, $f5, $f0
    ctx->pc = 0x250100u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x250104: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x250104u;
    { uint32_t bits = FAST_READ32(0x3AB6E8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x250108: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x250108u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[3], ctx->f[0]));
    // 0x25010c: 0x460520c2  mul.s       $f3, $f4, $f5
    ctx->pc = 0x25010cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x250110: 0x4602201e  madda.s     $f4, $f2
    ctx->pc = 0x250110u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[2])));
    // 0x250114: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x250114u;
    { uint32_t bits = FAST_READ32(0x3AB6E4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x250118: 0x46051902  mul.s       $f4, $f3, $f5
    ctx->pc = 0x250118u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x25011c: 0x4601181e  madda.s     $f3, $f1
    ctx->pc = 0x25011cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[1])));
    // 0x250120: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x250120u;
    { uint32_t bits = FAST_READ32(0x3AB6E0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x250124: 0x460520c2  mul.s       $f3, $f4, $f5
    ctx->pc = 0x250124u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x250128: 0x4602201e  madda.s     $f4, $f2
    ctx->pc = 0x250128u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[2])));
    // 0x25012c: 0x4601195c  madd.s      $f5, $f3, $f1
    ctx->pc = 0x25012cu;
    ctx->f[5] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x250130: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x250130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x250134: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x250134u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x250138: 0x46002846  mov.s       $f1, $f5
    ctx->pc = 0x250138u;
    ctx->f[1] = FPU_MOV_S(ctx->f[5]);
    // 0x25013c: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x25013cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x250140: 0x4601089d  msub.s      $f2, $f1, $f1
    ctx->pc = 0x250140u;
    ctx->f[2] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x250144: 0x460200c4  c1          0x200C4
    ctx->pc = 0x250144u;
    ctx->f[3] = FPU_SQRT_S(ctx->f[0]);
    // 0x250148: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x250148u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25014c: 0x46080842  mul.s       $f1, $f1, $f8
    ctx->pc = 0x25014cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x250150: 0x46003834  c.lt.s      $f7, $f0
    ctx->pc = 0x250150u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x250154: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x250154u;
    {
        const bool branch_taken_0x250154 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x250158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250154u;
        // 0x250158: 0xe4610008  swc1        $f1, 0x8($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x250154) {
            ctx->pc = 0x250160u;
            goto label_250160;
        }
    }
    ctx->pc = 0x25015Cu;
    // 0x25015c: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x25015cu;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
label_250160:
    // 0x250160: 0x46081802  mul.s       $f0, $f3, $f8
    ctx->pc = 0x250160u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[8]);
    // 0x250164: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x250164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250168: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x250168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25016c: 0xc094e68  jal         func_2539A0
    ctx->pc = 0x25016Cu;
    SET_GPR_U32(ctx, 31, 0x250174u);
    ctx->pc = 0x250170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25016Cu;
    // 0x250170: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2539A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2539A0u, 0x25016Cu, 0x250174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250174u;
label_250174:
    // 0x250174: 0x86020068  lh          $v0, 0x68($s0)
    ctx->pc = 0x250174u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x250178: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x250178u;
    {
        const bool branch_taken_0x250178 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x25017Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250178u;
        // 0x25017c: 0x96030068  lhu         $v1, 0x68($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250178) {
            ctx->pc = 0x2501A8u;
            goto label_2501a8;
        }
    }
    ctx->pc = 0x250180u;
    // 0x250180: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x250180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x250184: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x250184u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x250188: 0x1c600007  bgtz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x250188u;
    {
        const bool branch_taken_0x250188 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x25018Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250188u;
        // 0x25018c: 0xa6020068  sh          $v0, 0x68($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 104), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250188) {
            ctx->pc = 0x2501A8u;
            goto label_2501a8;
        }
    }
    ctx->pc = 0x250190u;
    // 0x250190: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x250190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x250194: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x250194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x250198: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x250198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x25019c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x25019Cu;
    {
        const bool branch_taken_0x25019c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2501A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25019Cu;
        // 0x2501a0: 0xae020118  sw          $v0, 0x118($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25019c) {
            ctx->pc = 0x25021Cu;
            goto label_25021c;
        }
    }
    ctx->pc = 0x2501A4u;
    // 0x2501a4: 0x0  nop
    ctx->pc = 0x2501a4u;
    // NOP
label_2501a8:
    // 0x2501a8: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x2501A8u;
    SET_GPR_U32(ctx, 31, 0x2501B0u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x2501A8u, 0x2501B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2501B0u;
label_2501b0:
    // 0x2501b0: 0x86230028  lh          $v1, 0x28($s1)
    ctx->pc = 0x2501b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x2501b4: 0x9604011c  lhu         $a0, 0x11C($s0)
    ctx->pc = 0x2501b4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x2501b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2501b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2501bc: 0x96050066  lhu         $a1, 0x66($s0)
    ctx->pc = 0x2501bcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 102)));
    // 0x2501c0: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x2501c0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2501c4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2501c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2501c8: 0xa604011c  sh          $a0, 0x11C($s0)
    ctx->pc = 0x2501c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 284), (uint16_t)GPR_U32(ctx, 4));
    // 0x2501cc: 0x3010  mfhi        $a2
    ctx->pc = 0x2501ccu;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x2501d0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2501d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2501d4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2501D4u;
    {
        const bool branch_taken_0x2501d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2501D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2501D4u;
        // 0x2501d8: 0xa6050064  sh          $a1, 0x64($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 100), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2501d4) {
            ctx->pc = 0x25021Cu;
            goto label_25021c;
        }
    }
    ctx->pc = 0x2501DCu;
    // 0x2501dc: 0x0  nop
    ctx->pc = 0x2501dcu;
    // NOP
label_2501e0:
    // 0x2501e0: 0x8c6288ac  lw          $v0, -0x7754($v1)
    ctx->pc = 0x2501e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936748)));
    // 0x2501e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2501E4u;
    {
        const bool branch_taken_0x2501e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2501E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2501E4u;
        // 0x2501e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2501e4) {
            ctx->pc = 0x2501FCu;
            goto label_2501fc;
        }
    }
    ctx->pc = 0x2501ECu;
    // 0x2501ec: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2501ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2501f0: 0x8c4323b4  lw          $v1, 0x23B4($v0)
    ctx->pc = 0x2501f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B23B4u));
    // 0x2501f4: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x2501f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2501f8: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x2501f8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2501fc:
    // 0x2501fc: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2501FCu;
    {
        const bool branch_taken_0x2501fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2501fc) {
            ctx->pc = 0x250200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2501FCu;
            // 0x250200: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250220u;
            goto label_250220;
        }
    }
    ctx->pc = 0x250204u;
    // 0x250204: 0x96020064  lhu         $v0, 0x64($s0)
    ctx->pc = 0x250204u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x250208: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x250208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x25020c: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x25020cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x250210: 0x1c600002  bgtz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x250210u;
    {
        const bool branch_taken_0x250210 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x250214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250210u;
        // 0x250214: 0xa6020064  sh          $v0, 0x64($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 100), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250210) {
            ctx->pc = 0x25021Cu;
            goto label_25021c;
        }
    }
    ctx->pc = 0x250218u;
    // 0x250218: 0xa600011c  sh          $zero, 0x11C($s0)
    ctx->pc = 0x250218u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 284), (uint16_t)GPR_U32(ctx, 0));
label_25021c:
    // 0x25021c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x25021cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_250220:
    // 0x250220: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x250220u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x250224: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x250224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x250228: 0x3e00008  jr          $ra
    ctx->pc = 0x250228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25022Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250228u;
        // 0x25022c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x250230u;
}
