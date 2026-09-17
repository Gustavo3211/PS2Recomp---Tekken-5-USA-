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

// Function: sub_00331A78
// Address: 0x331a78 - 0x331b80
void sub_00331A78_0x331a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00331A78_0x331a78");
#endif

    ctx->pc = 0x331a78u;

    // 0x331a78: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x331a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x331a7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x331a7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x331a80: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x331a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x331a84: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x331a84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x331a88: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x331a88u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x331a8c: 0x46017bc2  mul.s       $f15, $f15, $f1
    ctx->pc = 0x331a8cu;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[1]);
    // 0x331a90: 0x46006b42  mul.s       $f13, $f13, $f0
    ctx->pc = 0x331a90u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x331a94: 0x46007382  mul.s       $f14, $f14, $f0
    ctx->pc = 0x331a94u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x331a98: 0x46006329  min.s       $f12, $f12, $f0
    ctx->pc = 0x331a98u;
    ctx->f[12] = std::min(ctx->f[12], ctx->f[0]);
    // 0x331a9c: 0x46006b69  min.s       $f13, $f13, $f0
    ctx->pc = 0x331a9cu;
    ctx->f[13] = std::min(ctx->f[13], ctx->f[0]);
    // 0x331aa0: 0x460073a9  min.s       $f14, $f14, $f0
    ctx->pc = 0x331aa0u;
    ctx->f[14] = std::min(ctx->f[14], ctx->f[0]);
    // 0x331aa4: 0x46007be9  min.s       $f15, $f15, $f0
    ctx->pc = 0x331aa4u;
    ctx->f[15] = std::min(ctx->f[15], ctx->f[0]);
    // 0x331aa8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x331aa8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x331aac: 0x46016328  max.s       $f12, $f12, $f1
    ctx->pc = 0x331aacu;
    ctx->f[12] = std::max(ctx->f[12], ctx->f[1]);
    // 0x331ab0: 0x46016b68  max.s       $f13, $f13, $f1
    ctx->pc = 0x331ab0u;
    ctx->f[13] = std::max(ctx->f[13], ctx->f[1]);
    // 0x331ab4: 0x460173a8  max.s       $f14, $f14, $f1
    ctx->pc = 0x331ab4u;
    ctx->f[14] = std::max(ctx->f[14], ctx->f[1]);
    // 0x331ab8: 0x46017be8  max.s       $f15, $f15, $f1
    ctx->pc = 0x331ab8u;
    ctx->f[15] = std::max(ctx->f[15], ctx->f[1]);
    // 0x331abc: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x331abcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x331ac0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x331ac0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x331ac4: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x331ac4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x331ac8: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x331ac8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x331acc: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x331accu;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
    // 0x331ad0: 0x46006124  .word       0x46006124                   # cvt.w.s     $f4, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x331ad0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x331ad4: 0x44032000  mfc1        $v1, $f4
    ctx->pc = 0x331ad4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x331ad8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x331AD8u;
    {
        const bool branch_taken_0x331ad8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x331ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331AD8u;
        // 0x331adc: 0x460010c6  mov.s       $f3, $f2 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x331ad8) {
            ctx->pc = 0x331AF4u;
            goto label_331af4;
        }
    }
    ctx->pc = 0x331AE0u;
    // 0x331ae0: 0x46006001  sub.s       $f0, $f12, $f0
    ctx->pc = 0x331ae0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x331ae4: 0x46000124  .word       0x46000124                   # cvt.w.s     $f4, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x331ae4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x331ae8: 0x44032000  mfc1        $v1, $f4
    ctx->pc = 0x331ae8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x331aec: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x331aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x331af0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x331af0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_331af4:
    // 0x331af4: 0x460d0836  c.le.s      $f1, $f13
    ctx->pc = 0x331af4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x331af8: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x331af8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x331afc: 0x46006824  .word       0x46006824                   # cvt.w.s     $f0, $f13 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x331afcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[13]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x331b00: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x331b00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x331b04: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x331B04u;
    {
        const bool branch_taken_0x331b04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x331b04) {
            ctx->pc = 0x331B20u;
            goto label_331b20;
        }
    }
    ctx->pc = 0x331B0Cu;
    // 0x331b0c: 0x46016801  sub.s       $f0, $f13, $f1
    ctx->pc = 0x331b0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[1]);
    // 0x331b10: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x331b10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x331b14: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x331b14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x331b18: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x331b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x331b1c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x331b1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_331b20:
    // 0x331b20: 0x460e1036  c.le.s      $f2, $f14
    ctx->pc = 0x331b20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x331b24: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x331b24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    // 0x331b28: 0x46007024  .word       0x46007024                   # cvt.w.s     $f0, $f14 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x331b28u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[14]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x331b2c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x331b2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x331b30: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x331B30u;
    {
        const bool branch_taken_0x331b30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x331b30) {
            ctx->pc = 0x331B4Cu;
            goto label_331b4c;
        }
    }
    ctx->pc = 0x331B38u;
    // 0x331b38: 0x46027001  sub.s       $f0, $f14, $f2
    ctx->pc = 0x331b38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[14], ctx->f[2]);
    // 0x331b3c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x331b3cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x331b40: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x331b40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x331b44: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x331b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x331b48: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x331b48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_331b4c:
    // 0x331b4c: 0x460f1836  c.le.s      $f3, $f15
    ctx->pc = 0x331b4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[15])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x331b50: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x331b50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
    // 0x331b54: 0x46007824  .word       0x46007824                   # cvt.w.s     $f0, $f15 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x331b54u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[15]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x331b58: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x331b58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x331b5c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x331B5Cu;
    {
        const bool branch_taken_0x331b5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x331b5c) {
            ctx->pc = 0x331B78u;
            goto label_331b78;
        }
    }
    ctx->pc = 0x331B64u;
    // 0x331b64: 0x46037801  sub.s       $f0, $f15, $f3
    ctx->pc = 0x331b64u;
    ctx->f[0] = FPU_SUB_S(ctx->f[15], ctx->f[3]);
    // 0x331b68: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x331b68u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x331b6c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x331b6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x331b70: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x331b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x331b74: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x331b74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_331b78:
    // 0x331b78: 0x3e00008  jr          $ra
    ctx->pc = 0x331B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331B78u;
        // 0x331b7c: 0xac83002c  sw          $v1, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x331B78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x331B80u;
}
