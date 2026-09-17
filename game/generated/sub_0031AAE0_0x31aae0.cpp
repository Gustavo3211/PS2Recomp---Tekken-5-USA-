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

// Function: sub_0031AAE0
// Address: 0x31aae0 - 0x31ab68
void sub_0031AAE0_0x31aae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031AAE0_0x31aae0");
#endif

    ctx->pc = 0x31aae0u;

    // 0x31aae0: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x31AAE0u;
    {
        const bool branch_taken_0x31aae0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x31aae0) {
            ctx->pc = 0x31AB20u;
            goto label_31ab20;
        }
    }
    ctx->pc = 0x31AAE8u;
    // 0x31aae8: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x31aae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31aaec: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x31aaecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x31aaf0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x31aaf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31aaf4: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31aaf4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x31aaf8: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x31aaf8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x31aafc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x31aafcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31ab00: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x31AB00u;
    {
        const bool branch_taken_0x31ab00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31ab00) {
            ctx->pc = 0x31AB04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31AB00u;
            // 0x31ab04: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31AB20u;
            goto label_31ab20;
        }
    }
    ctx->pc = 0x31AB08u;
    // 0x31ab08: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x31ab08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x31ab0c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x31ab0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x31ab10: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31ab10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x31ab14: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x31ab14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x31ab18: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x31ab18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x31ab1c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x31ab1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_31ab20:
    // 0x31ab20: 0x10c0000f  beqz        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x31AB20u;
    {
        const bool branch_taken_0x31ab20 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ab20) {
            ctx->pc = 0x31AB60u;
            goto label_31ab60;
        }
    }
    ctx->pc = 0x31AB28u;
    // 0x31ab28: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x31ab28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31ab2c: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x31ab2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x31ab30: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x31ab30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31ab34: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31ab34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x31ab38: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x31ab38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x31ab3c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x31ab3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31ab40: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x31AB40u;
    {
        const bool branch_taken_0x31ab40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31ab40) {
            ctx->pc = 0x31AB44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31AB40u;
            // 0x31ab44: 0xacc40000  sw          $a0, 0x0($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31AB60u;
            goto label_31ab60;
        }
    }
    ctx->pc = 0x31AB48u;
    // 0x31ab48: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x31ab48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x31ab4c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x31ab4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x31ab50: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31ab50u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x31ab54: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x31ab54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x31ab58: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x31ab58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x31ab5c: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x31ab5cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
label_31ab60:
    // 0x31ab60: 0x3e00008  jr          $ra
    ctx->pc = 0x31AB60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31AB60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31AB68u;
}
