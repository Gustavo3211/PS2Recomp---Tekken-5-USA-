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

// Function: sub_0023ABA8
// Address: 0x23aba8 - 0x23abd0
void sub_0023ABA8_0x23aba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023ABA8_0x23aba8");
#endif

    ctx->pc = 0x23aba8u;

    // 0x23aba8: 0x8f82a918  lw          $v0, -0x56E8($gp)
    ctx->pc = 0x23aba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945048)));
    // 0x23abac: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x23abacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23abb0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x23abb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23abb4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23abb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23abb8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x23ABB8u;
    {
        const bool branch_taken_0x23abb8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x23ABBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ABB8u;
        // 0x23abbc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23abb8) {
            ctx->pc = 0x23ABC4u;
            goto label_23abc4;
        }
    }
    ctx->pc = 0x23ABC0u;
    // 0x23abc0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x23abc0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23abc4:
    // 0x23abc4: 0x3e00008  jr          $ra
    ctx->pc = 0x23ABC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23ABC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ABC4u;
        // 0x23abc8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23ABC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23ABCCu;
    // 0x23abcc: 0x0  nop
    ctx->pc = 0x23abccu;
    // NOP
    ctx->pc = 0x23abd0u;
}
