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

// Function: sub_0028F0C8
// Address: 0x28f0c8 - 0x28f120
void sub_0028F0C8_0x28f0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F0C8_0x28f0c8");
#endif

    switch (ctx->pc) {
        case 0x28f0e0u: goto label_28f0e0;
        default: break;
    }

    ctx->pc = 0x28f0c8u;

    // 0x28f0c8: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x28f0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x28f0cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28f0ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f0d0: 0x24467270  addiu       $a2, $v0, 0x7270
    ctx->pc = 0x28f0d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 29296));
    // 0x28f0d4: 0x2407efff  addiu       $a3, $zero, -0x1001
    ctx->pc = 0x28f0d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x28f0d8: 0x24c80004  addiu       $t0, $a2, 0x4
    ctx->pc = 0x28f0d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x28f0dc: 0x0  nop
    ctx->pc = 0x28f0dcu;
    // NOP
label_28f0e0:
    // 0x28f0e0: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28F0E0u;
    {
        const bool branch_taken_0x28f0e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F0E0u;
        // 0x28f0e4: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f0e0) {
            ctx->pc = 0x28F0F0u;
            goto label_28f0f0;
        }
    }
    ctx->pc = 0x28F0E8u;
    // 0x28f0e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28F0E8u;
    {
        const bool branch_taken_0x28f0e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F0E8u;
        // 0x28f0ec: 0x461021  addu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f0e8) {
            ctx->pc = 0x28F0F4u;
            goto label_28f0f4;
        }
    }
    ctx->pc = 0x28F0F0u;
label_28f0f0:
    // 0x28f0f0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x28f0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_28f0f4:
    // 0x28f0f4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x28f0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28f0f8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F0F8u;
    {
        const bool branch_taken_0x28f0f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F0F8u;
        // 0x28f0fc: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f0f8) {
            ctx->pc = 0x28F10Cu;
            goto label_28f10c;
        }
    }
    ctx->pc = 0x28F100u;
    // 0x28f100: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x28f100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x28f104: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x28f104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x28f108: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x28f108u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_28f10c:
    // 0x28f10c: 0x28a20021  slti        $v0, $a1, 0x21
    ctx->pc = 0x28f10cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x28f110: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x28F110u;
    {
        const bool branch_taken_0x28f110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28f110) {
            ctx->pc = 0x28F0E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28f0e0;
        }
    }
    ctx->pc = 0x28F118u;
    // 0x28f118: 0x3e00008  jr          $ra
    ctx->pc = 0x28F118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F120u;
}
