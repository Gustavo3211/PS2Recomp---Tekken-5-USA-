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

// Function: sub_0022BD68
// Address: 0x22bd68 - 0x22bda8
void sub_0022BD68_0x22bd68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022BD68_0x22bd68");
#endif

    switch (ctx->pc) {
        case 0x22bd80u: goto label_22bd80;
        default: break;
    }

    ctx->pc = 0x22bd68u;

    // 0x22bd68: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x22bd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22bd6c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x22bd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x22bd70: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x22BD70u;
    {
        const bool branch_taken_0x22bd70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x22bd70) {
            ctx->pc = 0x22BD9Cu;
            goto label_22bd9c;
        }
    }
    ctx->pc = 0x22BD78u;
    // 0x22bd78: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x22bd78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x22bd7c: 0x0  nop
    ctx->pc = 0x22bd7cu;
    // NOP
label_22bd80:
    // 0x22bd80: 0x0  nop
    ctx->pc = 0x22bd80u;
    // NOP
    // 0x22bd84: 0x0  nop
    ctx->pc = 0x22bd84u;
    // NOP
    // 0x22bd88: 0x0  nop
    ctx->pc = 0x22bd88u;
    // NOP
    // 0x22bd8c: 0x0  nop
    ctx->pc = 0x22bd8cu;
    // NOP
    // 0x22bd90: 0x0  nop
    ctx->pc = 0x22bd90u;
    // NOP
    // 0x22bd94: 0x5482fffa  bnel        $a0, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x22BD94u;
    {
        const bool branch_taken_0x22bd94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x22bd94) {
            ctx->pc = 0x22BD98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22BD94u;
            // 0x22bd98: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22BD80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22bd80;
        }
    }
    ctx->pc = 0x22BD9Cu;
label_22bd9c:
    // 0x22bd9c: 0x3e00008  jr          $ra
    ctx->pc = 0x22BD9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BD9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22BDA4u;
    // 0x22bda4: 0x0  nop
    ctx->pc = 0x22bda4u;
    // NOP
    ctx->pc = 0x22bda8u;
}
