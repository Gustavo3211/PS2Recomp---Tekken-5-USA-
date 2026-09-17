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

// Function: sub_00298220
// Address: 0x298220 - 0x298268
void sub_00298220_0x298220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298220_0x298220");
#endif

    ctx->pc = 0x298220u;

    // 0x298220: 0xc7819010  lwc1        $f1, -0x6FF0($gp)
    ctx->pc = 0x298220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x298224: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x298224u;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
    // 0x298228: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x298228u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29822c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x29822Cu;
    {
        const bool branch_taken_0x29822c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29822c) {
            ctx->pc = 0x298248u;
            goto label_298248;
        }
    }
    ctx->pc = 0x298234u;
    // 0x298234: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x298234u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x298238: 0xc7809014  lwc1        $f0, -0x6FEC($gp)
    ctx->pc = 0x298238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29823c: 0x3e00008  jr          $ra
    ctx->pc = 0x29823Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29823Cu;
        // 0x298240: 0x46006000  add.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29823Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298244u;
    // 0x298244: 0x0  nop
    ctx->pc = 0x298244u;
    // NOP
label_298248:
    // 0x298248: 0xc78c9018  lwc1        $f12, -0x6FE8($gp)
    ctx->pc = 0x298248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29824c: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x29824cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x298250: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x298250u;
    {
        const bool branch_taken_0x298250 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x298250) {
            ctx->pc = 0x298260u;
            goto label_298260;
        }
    }
    ctx->pc = 0x298258u;
    // 0x298258: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x298258u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x29825c: 0x460c0801  sub.s       $f0, $f1, $f12
    ctx->pc = 0x29825cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
label_298260:
    // 0x298260: 0x3e00008  jr          $ra
    ctx->pc = 0x298260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298268u;
}
