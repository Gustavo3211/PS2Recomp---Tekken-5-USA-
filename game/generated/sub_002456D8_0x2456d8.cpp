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

// Function: sub_002456D8
// Address: 0x2456d8 - 0x245708
void sub_002456D8_0x2456d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002456D8_0x2456d8");
#endif

    ctx->pc = 0x2456d8u;

    // 0x2456d8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2456d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2456dc: 0x8c4388ac  lw          $v1, -0x7754($v0)
    ctx->pc = 0x2456dcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A88ACu));
    // 0x2456e0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2456E0u;
    {
        const bool branch_taken_0x2456e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2456E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2456E0u;
        // 0x2456e4: 0x3c020016  lui         $v0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2456e0) {
            ctx->pc = 0x2456FCu;
            goto label_2456fc;
        }
    }
    ctx->pc = 0x2456E8u;
    // 0x2456e8: 0x244268d0  addiu       $v0, $v0, 0x68D0
    ctx->pc = 0x2456e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26832));
    // 0x2456ec: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x2456ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2456f0: 0x4600002  bltz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2456F0u;
    {
        const bool branch_taken_0x2456f0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2456F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2456F0u;
        // 0x2456f4: 0x2464ffff  addiu       $a0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2456f0) {
            ctx->pc = 0x2456FCu;
            goto label_2456fc;
        }
    }
    ctx->pc = 0x2456F8u;
    // 0x2456f8: 0xac440020  sw          $a0, 0x20($v0)
    ctx->pc = 0x2456f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 4));
label_2456fc:
    // 0x2456fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2456FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2456FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x245704u;
    // 0x245704: 0x0  nop
    ctx->pc = 0x245704u;
    // NOP
    ctx->pc = 0x245708u;
}
