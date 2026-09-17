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

// Function: sub_0027AE68
// Address: 0x27ae68 - 0x27aeb8
void sub_0027AE68_0x27ae68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027AE68_0x27ae68");
#endif

    ctx->pc = 0x27ae68u;

    // 0x27ae68: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x27ae68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x27ae6c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x27AE6Cu;
    {
        const bool branch_taken_0x27ae6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27AE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AE6Cu;
        // 0x27ae70: 0x2c62000c  sltiu       $v0, $v1, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ae6c) {
            ctx->pc = 0x27AE80u;
            goto label_27ae80;
        }
    }
    ctx->pc = 0x27AE74u;
    // 0x27ae74: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x27ae74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27ae78: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x27AE78u;
    {
        const bool branch_taken_0x27ae78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AE78u;
        // 0x27ae7c: 0xc480001c  lwc1        $f0, 0x1C($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ae78) {
            ctx->pc = 0x27AEA8u;
            goto label_27aea8;
        }
    }
    ctx->pc = 0x27AE80u;
label_27ae80:
    // 0x27ae80: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27AE80u;
    {
        const bool branch_taken_0x27ae80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27AE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AE80u;
        // 0x27ae84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ae80) {
            ctx->pc = 0x27AE98u;
            goto label_27ae98;
        }
    }
    ctx->pc = 0x27AE88u;
    // 0x27ae88: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x27ae88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x27ae8c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x27AE8Cu;
    {
        const bool branch_taken_0x27ae8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27AE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AE8Cu;
        // 0x27ae90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ae8c) {
            ctx->pc = 0x27AE98u;
            goto label_27ae98;
        }
    }
    ctx->pc = 0x27AE94u;
    // 0x27ae94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27ae94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27ae98:
    // 0x27ae98: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x27AE98u;
    {
        const bool branch_taken_0x27ae98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ae98) {
            ctx->pc = 0x27AEB0u;
            goto label_27aeb0;
        }
    }
    ctx->pc = 0x27AEA0u;
    // 0x27aea0: 0xc4810750  lwc1        $f1, 0x750($a0)
    ctx->pc = 0x27aea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27aea4: 0xc4800758  lwc1        $f0, 0x758($a0)
    ctx->pc = 0x27aea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27aea8:
    // 0x27aea8: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x27aea8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x27aeac: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x27aeacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_27aeb0:
    // 0x27aeb0: 0x3e00008  jr          $ra
    ctx->pc = 0x27AEB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27AEB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27AEB8u;
}
