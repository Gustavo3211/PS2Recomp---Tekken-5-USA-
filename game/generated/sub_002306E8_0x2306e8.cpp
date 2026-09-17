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

// Function: sub_002306E8
// Address: 0x2306e8 - 0x230740
void sub_002306E8_0x2306e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002306E8_0x2306e8");
#endif

    switch (ctx->pc) {
        case 0x23071cu: goto label_23071c;
        default: break;
    }

    ctx->pc = 0x2306e8u;

    // 0x2306e8: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x2306e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2306ec: 0xc78084e8  lwc1        $f0, -0x7B18($gp)
    ctx->pc = 0x2306ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2306f0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2306f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2306f4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2306f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2306f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2306f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2306fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2306fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x230700: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x230700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x230704: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x230704u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x230708: 0x3c010016  lui         $at, 0x16
    ctx->pc = 0x230708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)22 << 16));
    // 0x23070c: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x23070cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x230710: 0xc42cd074  lwc1        $f12, -0x2F8C($at)
    ctx->pc = 0x230710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294955124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x230714: 0xc04750a  jal         func_11D428
    ctx->pc = 0x230714u;
    SET_GPR_U32(ctx, 31, 0x23071Cu);
    ctx->pc = 0x230718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230714u;
    // 0x230718: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D428u, 0x230714u, 0x23071Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23071Cu;
label_23071c:
    // 0x23071c: 0x3c0143a0  lui         $at, 0x43A0
    ctx->pc = 0x23071cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17312 << 16));
    // 0x230720: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x230720u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x230724: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x230724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x230728: 0x0  nop
    ctx->pc = 0x230728u;
    // NOP
    // 0x23072c: 0x0  nop
    ctx->pc = 0x23072cu;
    // NOP
    // 0x230730: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x230730u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x230734: 0x3e00008  jr          $ra
    ctx->pc = 0x230734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230734u;
        // 0x230738: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23073Cu;
    // 0x23073c: 0x0  nop
    ctx->pc = 0x23073cu;
    // NOP
    ctx->pc = 0x230740u;
}
