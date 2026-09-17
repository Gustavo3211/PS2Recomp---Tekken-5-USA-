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

// Function: sub_0031BEC0
// Address: 0x31bec0 - 0x31c020
void sub_0031BEC0_0x31bec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031BEC0_0x31bec0");
#endif

    ctx->pc = 0x31bec0u;

    // 0x31bec0: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x31bec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x31bec4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x31bec4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31bec8: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x31bec8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31becc: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x31beccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x31bed0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x31bed0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31bed4: 0x46006886  mov.s       $f2, $f13
    ctx->pc = 0x31bed4u;
    ctx->f[2] = FPU_MOV_S(ctx->f[13]);
    // 0x31bed8: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x31bed8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x31bedc: 0x460070c6  mov.s       $f3, $f14
    ctx->pc = 0x31bedcu;
    ctx->f[3] = FPU_MOV_S(ctx->f[14]);
    // 0x31bee0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x31bee0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31bee4: 0x46000164  .word       0x46000164                   # cvt.w.s     $f5, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31bee4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x31bee8: 0x440a2800  mfc1        $t2, $f5
    ctx->pc = 0x31bee8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x31beec: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x31BEECu;
    {
        const bool branch_taken_0x31beec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31BEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BEECu;
        // 0x31bef0: 0x46007906  mov.s       $f4, $f15 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[15]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31beec) {
            ctx->pc = 0x31BF08u;
            goto label_31bf08;
        }
    }
    ctx->pc = 0x31BEF4u;
    // 0x31bef4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x31bef4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x31bef8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x31bef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x31befc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31befcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x31bf00: 0x440a0800  mfc1        $t2, $f1
    ctx->pc = 0x31bf00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x31bf04: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x31bf04u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
label_31bf08:
    // 0x31bf08: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x31bf08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x31bf0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x31bf0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31bf10: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x31bf10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x31bf14: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x31bf14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x31bf18: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x31bf18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x31bf1c: 0x46006836  c.le.s      $f13, $f0
    ctx->pc = 0x31bf1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31bf20: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31bf20u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x31bf24: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x31bf24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x31bf28: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x31BF28u;
    {
        const bool branch_taken_0x31bf28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31bf28) {
            ctx->pc = 0x31BF44u;
            goto label_31bf44;
        }
    }
    ctx->pc = 0x31BF30u;
    // 0x31bf30: 0x460d0001  sub.s       $f0, $f0, $f13
    ctx->pc = 0x31bf30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[13]);
    // 0x31bf34: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x31bf34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x31bf38: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31bf38u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x31bf3c: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x31bf3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x31bf40: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x31bf40u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
label_31bf44:
    // 0x31bf44: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x31bf44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x31bf48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x31bf48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31bf4c: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x31bf4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x31bf50: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x31bf50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x31bf54: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x31bf54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x31bf58: 0x46007036  c.le.s      $f14, $f0
    ctx->pc = 0x31bf58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[14], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31bf5c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31bf5cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x31bf60: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x31bf60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x31bf64: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x31BF64u;
    {
        const bool branch_taken_0x31bf64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31bf64) {
            ctx->pc = 0x31BF80u;
            goto label_31bf80;
        }
    }
    ctx->pc = 0x31BF6Cu;
    // 0x31bf6c: 0x460e0001  sub.s       $f0, $f0, $f14
    ctx->pc = 0x31bf6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[14]);
    // 0x31bf70: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x31bf70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x31bf74: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31bf74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x31bf78: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x31bf78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x31bf7c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x31bf7cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_31bf80:
    // 0x31bf80: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x31bf80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x31bf84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x31bf84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31bf88: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x31bf88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x31bf8c: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x31bf8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x31bf90: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x31bf90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x31bf94: 0x46007836  c.le.s      $f15, $f0
    ctx->pc = 0x31bf94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[15], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31bf98: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31bf98u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x31bf9c: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x31bf9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x31bfa0: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x31BFA0u;
    {
        const bool branch_taken_0x31bfa0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31bfa0) {
            ctx->pc = 0x31BFA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31BFA0u;
            // 0x31bfa4: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31BFC0u;
            goto label_31bfc0;
        }
    }
    ctx->pc = 0x31BFA8u;
    // 0x31bfa8: 0x460f0001  sub.s       $f0, $f0, $f15
    ctx->pc = 0x31bfa8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[15]);
    // 0x31bfac: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x31bfacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x31bfb0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31bfb0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x31bfb4: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x31bfb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x31bfb8: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x31bfb8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x31bfbc: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x31bfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_31bfc0:
    // 0x31bfc0: 0x29240100  slti        $a0, $t1, 0x100
    ctx->pc = 0x31bfc0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x31bfc4: 0x29050100  slti        $a1, $t0, 0x100
    ctx->pc = 0x31bfc4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x31bfc8: 0x28e60100  slti        $a2, $a3, 0x100
    ctx->pc = 0x31bfc8u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x31bfcc: 0x44480a  movz        $t1, $v0, $a0
    ctx->pc = 0x31bfccu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 2));
    // 0x31bfd0: 0x46380a  movz        $a3, $v0, $a2
    ctx->pc = 0x31bfd0u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
    // 0x31bfd4: 0x29430100  slti        $v1, $t2, 0x100
    ctx->pc = 0x31bfd4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x31bfd8: 0x45400a  movz        $t0, $v0, $a1
    ctx->pc = 0x31bfd8u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 2));
    // 0x31bfdc: 0x43500a  movz        $t2, $v0, $v1
    ctx->pc = 0x31bfdcu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 2));
    // 0x31bfe0: 0x29230000  slti        $v1, $t1, 0x0
    ctx->pc = 0x31bfe0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x31bfe4: 0x29020000  slti        $v0, $t0, 0x0
    ctx->pc = 0x31bfe4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x31bfe8: 0x28e40000  slti        $a0, $a3, 0x0
    ctx->pc = 0x31bfe8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x31bfec: 0x3480b  movn        $t1, $zero, $v1
    ctx->pc = 0x31bfecu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
    // 0x31bff0: 0x2400b  movn        $t0, $zero, $v0
    ctx->pc = 0x31bff0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
    // 0x31bff4: 0x4380b  movn        $a3, $zero, $a0
    ctx->pc = 0x31bff4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
    // 0x31bff8: 0x92200  sll         $a0, $t1, 8
    ctx->pc = 0x31bff8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
    // 0x31bffc: 0x29420000  slti        $v0, $t2, 0x0
    ctx->pc = 0x31bffcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x31c000: 0x71e00  sll         $v1, $a3, 24
    ctx->pc = 0x31c000u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x31c004: 0x2500b  movn        $t2, $zero, $v0
    ctx->pc = 0x31c004u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 0));
    // 0x31c008: 0x81400  sll         $v0, $t0, 16
    ctx->pc = 0x31c008u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x31c00c: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x31c00cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x31c010: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x31c010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x31c014: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x31c014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31c018: 0x3e00008  jr          $ra
    ctx->pc = 0x31C018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31C01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C018u;
        // 0x31c01c: 0xad630004  sw          $v1, 0x4($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31C020u;
}
