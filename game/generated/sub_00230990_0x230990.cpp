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

// Function: sub_00230990
// Address: 0x230990 - 0x2309e0
void sub_00230990_0x230990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230990_0x230990");
#endif

    ctx->pc = 0x230990u;

    // 0x230990: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x230990u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x230994: 0xc78184f8  lwc1        $f1, -0x7B08($gp)
    ctx->pc = 0x230994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230998: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x230998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23099c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23099cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2309a0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2309a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2309a4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2309a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2309a8: 0x3c010016  lui         $at, 0x16
    ctx->pc = 0x2309a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)22 << 16));
    // 0x2309ac: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x2309acu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x2309b0: 0xc422d11c  lwc1        $f2, -0x2EE4($at)
    ctx->pc = 0x2309b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294955292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2309b4: 0x46011032  c.eq.s      $f2, $f1
    ctx->pc = 0x2309b4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2309b8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2309B8u;
    {
        const bool branch_taken_0x2309b8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2309BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2309B8u;
        // 0x2309bc: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2309b8) {
            ctx->pc = 0x2309D0u;
            goto label_2309d0;
        }
    }
    ctx->pc = 0x2309C0u;
    // 0x2309c0: 0xc78184fc  lwc1        $f1, -0x7B04($gp)
    ctx->pc = 0x2309c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2309c4: 0x46011032  c.eq.s      $f2, $f1
    ctx->pc = 0x2309c4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2309c8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2309C8u;
    {
        const bool branch_taken_0x2309c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2309c8) {
            ctx->pc = 0x2309D4u;
            goto label_2309d4;
        }
    }
    ctx->pc = 0x2309D0u;
label_2309d0:
    // 0x2309d0: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x2309d0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
label_2309d4:
    // 0x2309d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2309D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2309D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2309DCu;
    // 0x2309dc: 0x0  nop
    ctx->pc = 0x2309dcu;
    // NOP
    ctx->pc = 0x2309e0u;
}
