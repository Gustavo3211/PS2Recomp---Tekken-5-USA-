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

// Function: sub_0031AB78
// Address: 0x31ab78 - 0x31ac00
void sub_0031AB78_0x31ab78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031AB78_0x31ab78");
#endif

    ctx->pc = 0x31ab78u;

    // 0x31ab78: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x31AB78u;
    {
        const bool branch_taken_0x31ab78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ab78) {
            ctx->pc = 0x31ABB8u;
            goto label_31abb8;
        }
    }
    ctx->pc = 0x31AB80u;
    // 0x31ab80: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x31ab80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31ab84: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x31ab84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x31ab88: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x31ab88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31ab8c: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31ab8cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x31ab90: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x31ab90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x31ab94: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x31ab94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31ab98: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x31AB98u;
    {
        const bool branch_taken_0x31ab98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31ab98) {
            ctx->pc = 0x31AB9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31AB98u;
            // 0x31ab9c: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31ABB8u;
            goto label_31abb8;
        }
    }
    ctx->pc = 0x31ABA0u;
    // 0x31aba0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x31aba0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x31aba4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x31aba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x31aba8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31aba8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x31abac: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x31abacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x31abb0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x31abb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x31abb4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x31abb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_31abb8:
    // 0x31abb8: 0x10c0000f  beqz        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x31ABB8u;
    {
        const bool branch_taken_0x31abb8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x31abb8) {
            ctx->pc = 0x31ABF8u;
            goto label_31abf8;
        }
    }
    ctx->pc = 0x31ABC0u;
    // 0x31abc0: 0xc480002c  lwc1        $f0, 0x2C($a0)
    ctx->pc = 0x31abc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31abc4: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x31abc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x31abc8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x31abc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31abcc: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31abccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x31abd0: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x31abd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x31abd4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x31abd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31abd8: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x31ABD8u;
    {
        const bool branch_taken_0x31abd8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31abd8) {
            ctx->pc = 0x31ABDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31ABD8u;
            // 0x31abdc: 0xacc40000  sw          $a0, 0x0($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31ABF8u;
            goto label_31abf8;
        }
    }
    ctx->pc = 0x31ABE0u;
    // 0x31abe0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x31abe0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x31abe4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x31abe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x31abe8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31abe8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x31abec: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x31abecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x31abf0: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x31abf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x31abf4: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x31abf4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
label_31abf8:
    // 0x31abf8: 0x3e00008  jr          $ra
    ctx->pc = 0x31ABF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31ABF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31AC00u;
}
