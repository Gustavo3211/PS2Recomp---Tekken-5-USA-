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

// Function: sub_0032C9F8
// Address: 0x32c9f8 - 0x32cb58
void sub_0032C9F8_0x32c9f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032C9F8_0x32c9f8");
#endif

    switch (ctx->pc) {
        case 0x32cb38u: goto label_32cb38;
        default: break;
    }

    ctx->pc = 0x32c9f8u;

    // 0x32c9f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x32c9f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32c9fc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32c9fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32ca00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32ca00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32ca04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32ca04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ca08: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x32ca08u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x32ca0c: 0x46026034  c.lt.s      $f12, $f2
    ctx->pc = 0x32ca0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32ca10: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x32CA10u;
    {
        const bool branch_taken_0x32ca10 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x32CA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CA10u;
        // 0x32ca14: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ca10) {
            ctx->pc = 0x32CA20u;
            goto label_32ca20;
        }
    }
    ctx->pc = 0x32CA18u;
    // 0x32ca18: 0x46006086  mov.s       $f2, $f12
    ctx->pc = 0x32ca18u;
    ctx->f[2] = FPU_MOV_S(ctx->f[12]);
    // 0x32ca1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x32ca1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32ca20:
    // 0x32ca20: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x32ca20u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x32ca24: 0x46036834  c.lt.s      $f13, $f3
    ctx->pc = 0x32ca24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32ca28: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x32CA28u;
    {
        const bool branch_taken_0x32ca28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x32ca28) {
            ctx->pc = 0x32CA2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32CA28u;
            // 0x32ca2c: 0x460068c6  mov.s       $f3, $f13 (Delay Slot)
            ctx->f[3] = FPU_MOV_S(ctx->f[13]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x32CA30u;
            goto label_32ca30;
        }
    }
    ctx->pc = 0x32CA30u;
label_32ca30:
    // 0x32ca30: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x32ca30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32ca34: 0x46000106  mov.s       $f4, $f0
    ctx->pc = 0x32ca34u;
    ctx->f[4] = FPU_MOV_S(ctx->f[0]);
    // 0x32ca38: 0x46047034  c.lt.s      $f14, $f4
    ctx->pc = 0x32ca38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[14], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32ca3c: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x32CA3Cu;
    {
        const bool branch_taken_0x32ca3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x32ca3c) {
            ctx->pc = 0x32CA40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32CA3Cu;
            // 0x32ca40: 0x46007106  mov.s       $f4, $f14 (Delay Slot)
            ctx->f[4] = FPU_MOV_S(ctx->f[14]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x32CA44u;
            goto label_32ca44;
        }
    }
    ctx->pc = 0x32CA44u;
label_32ca44:
    // 0x32ca44: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x32ca44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x32ca48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x32ca48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32ca4c: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x32ca4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x32ca50: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x32ca50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32ca54: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x32ca54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x32ca58: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x32ca58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32ca5c: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32ca5cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x32ca60: 0x44081000  mfc1        $t0, $f2
    ctx->pc = 0x32ca60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x32ca64: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x32CA64u;
    {
        const bool branch_taken_0x32ca64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x32ca64) {
            ctx->pc = 0x32CA80u;
            goto label_32ca80;
        }
    }
    ctx->pc = 0x32CA6Cu;
    // 0x32ca6c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x32ca6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x32ca70: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x32ca70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x32ca74: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32ca74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x32ca78: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x32ca78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x32ca7c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x32ca7cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_32ca80:
    // 0x32ca80: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x32ca80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x32ca84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x32ca84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32ca88: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x32ca88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x32ca8c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x32ca8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32ca90: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x32ca90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x32ca94: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x32ca94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32ca98: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32ca98u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x32ca9c: 0x44071000  mfc1        $a3, $f2
    ctx->pc = 0x32ca9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x32caa0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x32CAA0u;
    {
        const bool branch_taken_0x32caa0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x32caa0) {
            ctx->pc = 0x32CABCu;
            goto label_32cabc;
        }
    }
    ctx->pc = 0x32CAA8u;
    // 0x32caa8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x32caa8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x32caac: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x32caacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x32cab0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32cab0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x32cab4: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x32cab4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x32cab8: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x32cab8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_32cabc:
    // 0x32cabc: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x32cabcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x32cac0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x32cac0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32cac4: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x32cac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x32cac8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x32cac8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32cacc: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x32caccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x32cad0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x32cad0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32cad4: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32cad4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x32cad8: 0x44061000  mfc1        $a2, $f2
    ctx->pc = 0x32cad8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x32cadc: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x32CADCu;
    {
        const bool branch_taken_0x32cadc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x32CAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CADCu;
        // 0x32cae0: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32cadc) {
            ctx->pc = 0x32CAFCu;
            goto label_32cafc;
        }
    }
    ctx->pc = 0x32CAE4u;
    // 0x32cae4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x32cae4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x32cae8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x32cae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x32caec: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32caecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x32caf0: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x32caf0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x32caf4: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x32caf4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x32caf8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x32caf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_32cafc:
    // 0x32cafc: 0x2ce20100  sltiu       $v0, $a3, 0x100
    ctx->pc = 0x32cafcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x32cb00: 0x62380a  movz        $a3, $v1, $v0
    ctx->pc = 0x32cb00u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
    // 0x32cb04: 0x2d040100  sltiu       $a0, $t0, 0x100
    ctx->pc = 0x32cb04u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x32cb08: 0x2cc50100  sltiu       $a1, $a2, 0x100
    ctx->pc = 0x32cb08u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x32cb0c: 0x64400a  movz        $t0, $v1, $a0
    ctx->pc = 0x32cb0cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
    // 0x32cb10: 0x65300a  movz        $a2, $v1, $a1
    ctx->pc = 0x32cb10u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x32cb14: 0x71200  sll         $v0, $a3, 8
    ctx->pc = 0x32cb14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x32cb18: 0x61c00  sll         $v1, $a2, 16
    ctx->pc = 0x32cb18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x32cb1c: 0x1021025  or          $v0, $t0, $v0
    ctx->pc = 0x32cb1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x32cb20: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32cb20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32cb24: 0x2404003d  addiu       $a0, $zero, 0x3D
    ctx->pc = 0x32cb24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x32cb28: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x32cb28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32cb2c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x32cb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x32cb30: 0xc0cd57a  jal         func_3355E8
    ctx->pc = 0x32CB30u;
    SET_GPR_U32(ctx, 31, 0x32CB38u);
    ctx->pc = 0x32CB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CB30u;
    // 0x32cb34: 0x5283e  dsrl32      $a1, $a1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3355E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3355E8u, 0x32CB30u, 0x32CB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CB38u;
label_32cb38:
    // 0x32cb38: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x32cb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x32cb3c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x32cb3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32cb40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32cb40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32cb44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32cb44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32cb48: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x32cb48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x32cb4c: 0x3e00008  jr          $ra
    ctx->pc = 0x32CB4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32CB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CB4Cu;
        // 0x32cb50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32CB4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32CB54u;
    // 0x32cb54: 0x0  nop
    ctx->pc = 0x32cb54u;
    // NOP
    ctx->pc = 0x32cb58u;
}
