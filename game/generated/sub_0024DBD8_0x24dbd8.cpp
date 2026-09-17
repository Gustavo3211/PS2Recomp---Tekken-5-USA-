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

// Function: sub_0024DBD8
// Address: 0x24dbd8 - 0x24dc00
void sub_0024DBD8_0x24dbd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024DBD8_0x24dbd8");
#endif

    ctx->pc = 0x24dbd8u;

label_24dbd8:
    // 0x24dbd8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x24dbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24dbdc: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x24dbdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x24dbe0: 0x0  nop
    ctx->pc = 0x24dbe0u;
    // NOP
    // 0x24dbe4: 0x0  nop
    ctx->pc = 0x24dbe4u;
    // NOP
    // 0x24dbe8: 0x0  nop
    ctx->pc = 0x24dbe8u;
    // NOP
    // 0x24dbec: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x24DBECu;
    {
        const bool branch_taken_0x24dbec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24DBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DBECu;
        // 0x24dbf0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dbec) {
            ctx->pc = 0x24DBD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24dbd8;
        }
    }
    ctx->pc = 0x24DBF4u;
    // 0x24dbf4: 0x3e00008  jr          $ra
    ctx->pc = 0x24DBF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24DBF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24DBFCu;
    // 0x24dbfc: 0x0  nop
    ctx->pc = 0x24dbfcu;
    // NOP
    ctx->pc = 0x24dc00u;
}
