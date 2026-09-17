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

// Function: sub_0023AA90
// Address: 0x23aa90 - 0x23aad0
void sub_0023AA90_0x23aa90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023AA90_0x23aa90");
#endif

    ctx->pc = 0x23aa90u;

    // 0x23aa90: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x23aa90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x23aa94: 0x2442d730  addiu       $v0, $v0, -0x28D0
    ctx->pc = 0x23aa94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956848));
    // 0x23aa98: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x23aa98u;
    { uint32_t bits = FAST_READ32(0x15D738u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23aa9c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x23aa9cu;
    { uint32_t bits = FAST_READ32(0x15D734u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23aaa0: 0x460d0841  sub.s       $f1, $f1, $f13
    ctx->pc = 0x23aaa0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[13]);
    // 0x23aaa4: 0xc4420010  lwc1        $f2, 0x10($v0)
    ctx->pc = 0x23aaa4u;
    { uint32_t bits = FAST_READ32(0x15D740u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23aaa8: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x23aaa8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x23aaac: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x23aaacu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x23aab0: 0x4601085c  madd.s      $f1, $f1, $f1
    ctx->pc = 0x23aab0u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x23aab4: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x23aab4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23aab8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x23AAB8u;
    {
        const bool branch_taken_0x23aab8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x23AABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AAB8u;
        // 0x23aabc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23aab8) {
            ctx->pc = 0x23AAC4u;
            goto label_23aac4;
        }
    }
    ctx->pc = 0x23AAC0u;
    // 0x23aac0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23aac0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23aac4:
    // 0x23aac4: 0x3e00008  jr          $ra
    ctx->pc = 0x23AAC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23AAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AAC4u;
        // 0x23aac8: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23AAC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23AACCu;
    // 0x23aacc: 0x0  nop
    ctx->pc = 0x23aaccu;
    // NOP
    ctx->pc = 0x23aad0u;
}
