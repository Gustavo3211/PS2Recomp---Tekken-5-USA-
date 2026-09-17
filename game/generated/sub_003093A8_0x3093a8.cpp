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

// Function: sub_003093A8
// Address: 0x3093a8 - 0x3094a8
void sub_003093A8_0x3093a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003093A8_0x3093a8");
#endif

    ctx->pc = 0x3093a8u;

    // 0x3093a8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x3093a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3093ac: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x3093acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3093b0: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x3093b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x3093b4: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x3093b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3093b8: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x3093b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x3093bc: 0x44853000  mtc1        $a1, $f6
    ctx->pc = 0x3093bcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x3093c0: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x3093c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x3093c4: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x3093c4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3093c8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3093c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3093cc: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3093CCu;
    {
        const bool branch_taken_0x3093cc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3093D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3093CCu;
        // 0x3093d0: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3093cc) {
            ctx->pc = 0x3093E8u;
            goto label_3093e8;
        }
    }
    ctx->pc = 0x3093D4u;
    // 0x3093d4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3093d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3093d8: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x3093d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x3093dc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3093DCu;
    {
        const bool branch_taken_0x3093dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3093dc) {
            ctx->pc = 0x3093F4u;
            goto label_3093f4;
        }
    }
    ctx->pc = 0x3093E4u;
    // 0x3093e4: 0x0  nop
    ctx->pc = 0x3093e4u;
    // NOP
label_3093e8:
    // 0x3093e8: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x3093e8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3093ec: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x3093ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x3093f0: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x3093f0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_3093f4:
    // 0x3093f4: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x3093f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x3093f8: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x3093f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x3093fc: 0x46060881  sub.s       $f2, $f1, $f6
    ctx->pc = 0x3093fcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
    // 0x309400: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x309400u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x309404: 0x0  nop
    ctx->pc = 0x309404u;
    // NOP
    // 0x309408: 0x0  nop
    ctx->pc = 0x309408u;
    // NOP
    // 0x30940c: 0x460518c3  div.s       $f3, $f3, $f5
    ctx->pc = 0x30940cu;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[5];
    // 0x309410: 0x46012801  sub.s       $f0, $f5, $f1
    ctx->pc = 0x309410u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x309414: 0x46073101  sub.s       $f4, $f6, $f7
    ctx->pc = 0x309414u;
    ctx->f[4] = FPU_SUB_S(ctx->f[6], ctx->f[7]);
    // 0x309418: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x309418u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x30941c: 0x46041902  mul.s       $f4, $f3, $f4
    ctx->pc = 0x30941cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x309420: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x309420u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x309424: 0x46023080  add.s       $f2, $f6, $f2
    ctx->pc = 0x309424u;
    ctx->f[2] = FPU_ADD_S(ctx->f[6], ctx->f[2]);
    // 0x309428: 0x46072100  add.s       $f4, $f4, $f7
    ctx->pc = 0x309428u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[7]);
    // 0x30942c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x30942cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x309430: 0x46041041  sub.s       $f1, $f2, $f4
    ctx->pc = 0x309430u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x309434: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x309434u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x309438: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x309438u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x30943c: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x30943cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x309440: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x309440u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x309444: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x309444u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x309448: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x309448u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x30944c: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x30944cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x309450: 0x46032000  add.s       $f0, $f4, $f3
    ctx->pc = 0x309450u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x309454: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x309454u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309458: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x309458u;
    {
        const bool branch_taken_0x309458 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x30945Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309458u;
        // 0x30945c: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309458) {
            ctx->pc = 0x3094A0u;
            goto label_3094a0;
        }
    }
    ctx->pc = 0x309460u;
    // 0x309460: 0x46070034  c.lt.s      $f0, $f7
    ctx->pc = 0x309460u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309464: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x309464u;
    {
        const bool branch_taken_0x309464 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x309468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309464u;
        // 0x309468: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309464) {
            ctx->pc = 0x3094A0u;
            goto label_3094a0;
        }
    }
    ctx->pc = 0x30946Cu;
    // 0x30946c: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x30946cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x309470: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x309470u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x309474: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x309474u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x309478: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x309478u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x30947c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x30947cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309480: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x309480u;
    {
        const bool branch_taken_0x309480 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x309480) {
            ctx->pc = 0x309484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x309480u;
            // 0x309484: 0x308200ff  andi        $v0, $a0, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3094A0u;
            goto label_3094a0;
        }
    }
    ctx->pc = 0x309488u;
    // 0x309488: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x309488u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x30948c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x30948cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x309490: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x309490u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x309494: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x309494u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x309498: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x309498u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x30949c: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x30949cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_3094a0:
    // 0x3094a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3094A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3094A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3094A8u;
}
