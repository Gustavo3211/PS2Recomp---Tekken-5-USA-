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

// Function: sub_00220828
// Address: 0x220828 - 0x220860
void sub_00220828_0x220828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220828_0x220828");
#endif

    switch (ctx->pc) {
        case 0x220838u: goto label_220838;
        default: break;
    }

    ctx->pc = 0x220828u;

    // 0x220828: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x220828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x22082c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22082cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x220830: 0x24455f10  addiu       $a1, $v0, 0x5F10
    ctx->pc = 0x220830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24336));
    // 0x220834: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x220834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_220838:
    // 0x220838: 0x41180  sll         $v0, $a0, 6
    ctx->pc = 0x220838u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x22083c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x22083cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x220840: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x220840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x220844: 0x28830002  slti        $v1, $a0, 0x2
    ctx->pc = 0x220844u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x220848: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x220848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x22084c: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x22084cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x220850: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x220850u;
    {
        const bool branch_taken_0x220850 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x220854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220850u;
        // 0x220854: 0xe4400034  swc1        $f0, 0x34($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x220850) {
            ctx->pc = 0x220838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_220838;
        }
    }
    ctx->pc = 0x220858u;
    // 0x220858: 0x3e00008  jr          $ra
    ctx->pc = 0x220858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x220860u;
}
