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

// Function: sub_0029E880
// Address: 0x29e880 - 0x29e8d0
void sub_0029E880_0x29e880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029E880_0x29e880");
#endif

    switch (ctx->pc) {
        case 0x29e888u: goto label_29e888;
        case 0x29e8a8u: goto label_29e8a8;
        default: break;
    }

    ctx->pc = 0x29e880u;

    // 0x29e880: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29e880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e884: 0x0  nop
    ctx->pc = 0x29e884u;
    // NOP
label_29e888:
    // 0x29e888: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x29e888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x29e88c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x29e88cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x29e890: 0x28a20021  slti        $v0, $a1, 0x21
    ctx->pc = 0x29e890u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x29e894: 0x0  nop
    ctx->pc = 0x29e894u;
    // NOP
    // 0x29e898: 0x0  nop
    ctx->pc = 0x29e898u;
    // NOP
    // 0x29e89c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x29E89Cu;
    {
        const bool branch_taken_0x29e89c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29E8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E89Cu;
        // 0x29e8a0: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e89c) {
            ctx->pc = 0x29E888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29e888;
        }
    }
    ctx->pc = 0x29E8A4u;
    // 0x29e8a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29e8a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29e8a8:
    // 0x29e8a8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x29e8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x29e8ac: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x29e8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x29e8b0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x29e8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x29e8b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29e8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29e8b8: 0x28a30021  slti        $v1, $a1, 0x21
    ctx->pc = 0x29e8b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x29e8bc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x29e8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x29e8c0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x29E8C0u;
    {
        const bool branch_taken_0x29e8c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29E8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E8C0u;
        // 0x29e8c4: 0xac400028  sw          $zero, 0x28($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e8c0) {
            ctx->pc = 0x29E8A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29e8a8;
        }
    }
    ctx->pc = 0x29E8C8u;
    // 0x29e8c8: 0x3e00008  jr          $ra
    ctx->pc = 0x29E8C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E8C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E8D0u;
}
