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

// Function: sub_002190E0
// Address: 0x2190e0 - 0x219110
void sub_002190E0_0x2190e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002190E0_0x2190e0");
#endif

    ctx->pc = 0x2190e0u;

    // 0x2190e0: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x2190e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2190e4: 0x2c850050  sltiu       $a1, $a0, 0x50
    ctx->pc = 0x2190e4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)80) ? 1 : 0);
    // 0x2190e8: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x2190e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2190ec: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2190ECu;
    {
        const bool branch_taken_0x2190ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2190F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2190ECu;
        // 0x2190f0: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2190ec) {
            ctx->pc = 0x219104u;
            goto label_219104;
        }
    }
    ctx->pc = 0x2190F4u;
    // 0x2190f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2190f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2190f8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2190f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2190fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2190fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x219100: 0x8c425b80  lw          $v0, 0x5B80($v0)
    ctx->pc = 0x219100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23424)));
label_219104:
    // 0x219104: 0x3e00008  jr          $ra
    ctx->pc = 0x219104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21910Cu;
    // 0x21910c: 0x0  nop
    ctx->pc = 0x21910cu;
    // NOP
    ctx->pc = 0x219110u;
}
