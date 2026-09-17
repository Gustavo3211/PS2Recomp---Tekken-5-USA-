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

// Function: sub_00331970
// Address: 0x331970 - 0x331a78
void sub_00331970_0x331970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00331970_0x331970");
#endif

    ctx->pc = 0x331970u;

    // 0x331970: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x331970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x331974: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x331974u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x331978: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x331978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x33197c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x33197cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x331980: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x331980u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x331984: 0x46017bc2  mul.s       $f15, $f15, $f1
    ctx->pc = 0x331984u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[1]);
    // 0x331988: 0x46006b42  mul.s       $f13, $f13, $f0
    ctx->pc = 0x331988u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x33198c: 0x46007382  mul.s       $f14, $f14, $f0
    ctx->pc = 0x33198cu;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x331990: 0x46006329  min.s       $f12, $f12, $f0
    ctx->pc = 0x331990u;
    ctx->f[12] = std::min(ctx->f[12], ctx->f[0]);
    // 0x331994: 0x46006b69  min.s       $f13, $f13, $f0
    ctx->pc = 0x331994u;
    ctx->f[13] = std::min(ctx->f[13], ctx->f[0]);
    // 0x331998: 0x460073a9  min.s       $f14, $f14, $f0
    ctx->pc = 0x331998u;
    ctx->f[14] = std::min(ctx->f[14], ctx->f[0]);
    // 0x33199c: 0x46007be9  min.s       $f15, $f15, $f0
    ctx->pc = 0x33199cu;
    ctx->f[15] = std::min(ctx->f[15], ctx->f[0]);
    // 0x3319a0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3319a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3319a4: 0x46016328  max.s       $f12, $f12, $f1
    ctx->pc = 0x3319a4u;
    ctx->f[12] = std::max(ctx->f[12], ctx->f[1]);
    // 0x3319a8: 0x46016b68  max.s       $f13, $f13, $f1
    ctx->pc = 0x3319a8u;
    ctx->f[13] = std::max(ctx->f[13], ctx->f[1]);
    // 0x3319ac: 0x460173a8  max.s       $f14, $f14, $f1
    ctx->pc = 0x3319acu;
    ctx->f[14] = std::max(ctx->f[14], ctx->f[1]);
    // 0x3319b0: 0x46017be8  max.s       $f15, $f15, $f1
    ctx->pc = 0x3319b0u;
    ctx->f[15] = std::max(ctx->f[15], ctx->f[1]);
    // 0x3319b4: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x3319b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x3319b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3319b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3319bc: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x3319bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3319c0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x3319c0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x3319c4: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x3319c4u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
    // 0x3319c8: 0x46006124  .word       0x46006124                   # cvt.w.s     $f4, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3319c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x3319cc: 0x44032000  mfc1        $v1, $f4
    ctx->pc = 0x3319ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3319d0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x3319D0u;
    {
        const bool branch_taken_0x3319d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3319D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3319D0u;
        // 0x3319d4: 0x460010c6  mov.s       $f3, $f2 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3319d0) {
            ctx->pc = 0x3319ECu;
            goto label_3319ec;
        }
    }
    ctx->pc = 0x3319D8u;
    // 0x3319d8: 0x46006001  sub.s       $f0, $f12, $f0
    ctx->pc = 0x3319d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x3319dc: 0x46000124  .word       0x46000124                   # cvt.w.s     $f4, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3319dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x3319e0: 0x44032000  mfc1        $v1, $f4
    ctx->pc = 0x3319e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3319e4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3319e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3319e8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3319e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3319ec:
    // 0x3319ec: 0x460d0836  c.le.s      $f1, $f13
    ctx->pc = 0x3319ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3319f0: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x3319f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x3319f4: 0x46006824  .word       0x46006824                   # cvt.w.s     $f0, $f13 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3319f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[13]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3319f8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3319f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3319fc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x3319FCu;
    {
        const bool branch_taken_0x3319fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3319fc) {
            ctx->pc = 0x331A18u;
            goto label_331a18;
        }
    }
    ctx->pc = 0x331A04u;
    // 0x331a04: 0x46016801  sub.s       $f0, $f13, $f1
    ctx->pc = 0x331a04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[1]);
    // 0x331a08: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x331a08u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x331a0c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x331a0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x331a10: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x331a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x331a14: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x331a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_331a18:
    // 0x331a18: 0x460e1036  c.le.s      $f2, $f14
    ctx->pc = 0x331a18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x331a1c: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x331a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x331a20: 0x46007024  .word       0x46007024                   # cvt.w.s     $f0, $f14 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x331a20u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[14]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x331a24: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x331a24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x331a28: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x331A28u;
    {
        const bool branch_taken_0x331a28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x331a28) {
            ctx->pc = 0x331A44u;
            goto label_331a44;
        }
    }
    ctx->pc = 0x331A30u;
    // 0x331a30: 0x46027001  sub.s       $f0, $f14, $f2
    ctx->pc = 0x331a30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[14], ctx->f[2]);
    // 0x331a34: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x331a34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x331a38: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x331a38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x331a3c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x331a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x331a40: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x331a40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_331a44:
    // 0x331a44: 0x460f1836  c.le.s      $f3, $f15
    ctx->pc = 0x331a44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[15])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x331a48: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x331a48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x331a4c: 0x46007824  .word       0x46007824                   # cvt.w.s     $f0, $f15 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x331a4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[15]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x331a50: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x331a50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x331a54: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x331A54u;
    {
        const bool branch_taken_0x331a54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x331a54) {
            ctx->pc = 0x331A70u;
            goto label_331a70;
        }
    }
    ctx->pc = 0x331A5Cu;
    // 0x331a5c: 0x46037801  sub.s       $f0, $f15, $f3
    ctx->pc = 0x331a5cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[15], ctx->f[3]);
    // 0x331a60: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x331a60u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x331a64: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x331a64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x331a68: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x331a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x331a6c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x331a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_331a70:
    // 0x331a70: 0x3e00008  jr          $ra
    ctx->pc = 0x331A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331A70u;
        // 0x331a74: 0xac83001c  sw          $v1, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x331A70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x331A78u;
}
