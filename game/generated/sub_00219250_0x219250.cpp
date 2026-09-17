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

// Function: sub_00219250
// Address: 0x219250 - 0x219280
void sub_00219250_0x219250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219250_0x219250");
#endif

    ctx->pc = 0x219250u;

    // 0x219250: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x219250u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x219254: 0x28a60009  slti        $a2, $a1, 0x9
    ctx->pc = 0x219254u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x219258: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x219258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x21925c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21925cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219260: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x219260u;
    {
        const bool branch_taken_0x219260 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x219264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219260u;
        // 0x219264: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219260) {
            ctx->pc = 0x219274u;
            goto label_219274;
        }
    }
    ctx->pc = 0x219268u;
    // 0x219268: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x219268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x21926c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x21926cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x219270: 0x90425980  lbu         $v0, 0x5980($v0)
    ctx->pc = 0x219270u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 22912)));
label_219274:
    // 0x219274: 0x3e00008  jr          $ra
    ctx->pc = 0x219274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21927Cu;
    // 0x21927c: 0x0  nop
    ctx->pc = 0x21927cu;
    // NOP
    ctx->pc = 0x219280u;
}
