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

// Function: sub_00126D10
// Address: 0x126d10 - 0x126d70
void sub_00126D10_0x126d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126D10_0x126d10");
#endif

    switch (ctx->pc) {
        case 0x126d20u: goto label_126d20;
        case 0x126d28u: goto label_126d28;
        case 0x126d3cu: goto label_126d3c;
        default: break;
    }

    ctx->pc = 0x126d10u;

    // 0x126d10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x126d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x126d14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x126d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x126d18: 0xc048762  jal         func_121D88
    ctx->pc = 0x126D18u;
    SET_GPR_U32(ctx, 31, 0x126D20u);
    ctx->pc = 0x121D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121D88u, 0x126D18u, 0x126D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126D20u;
label_126d20:
    // 0x126d20: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x126d20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126d24: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x126d24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_126d28:
    // 0x126d28: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x126d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x126d2c: 0x54800004  bnel        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x126D2Cu;
    {
        const bool branch_taken_0x126d2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x126d2c) {
            ctx->pc = 0x126D30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126D2Cu;
            // 0x126d30: 0x8c820014  lw          $v0, 0x14($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126D40u;
            goto label_126d40;
        }
    }
    ctx->pc = 0x126D34u;
    // 0x126d34: 0xc049a82  jal         func_126A08
    ctx->pc = 0x126D34u;
    SET_GPR_U32(ctx, 31, 0x126D3Cu);
    ctx->pc = 0x126A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126A08u, 0x126D34u, 0x126D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126D3Cu;
label_126d3c:
    // 0x126d3c: 0x0  nop
    ctx->pc = 0x126d3cu;
    // NOP
label_126d40:
    // 0x126d40: 0x5040fff9  beql        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x126D40u;
    {
        const bool branch_taken_0x126d40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x126d40) {
            ctx->pc = 0x126D44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126D40u;
            // 0x126d44: 0x24830018  addiu       $v1, $a0, 0x18 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126D28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_126d28;
        }
    }
    ctx->pc = 0x126D48u;
    // 0x126d48: 0x10650006  beq         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x126D48u;
    {
        const bool branch_taken_0x126d48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x126D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126D48u;
        // 0x126d4c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126d48) {
            ctx->pc = 0x126D64u;
            goto label_126d64;
        }
    }
    ctx->pc = 0x126D50u;
    // 0x126d50: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x126d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x126d54: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x126d54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x126d58: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x126d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x126d5c: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x126d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x126d60: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x126d60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_126d64:
    // 0x126d64: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x126d64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x126d68: 0x3e00008  jr          $ra
    ctx->pc = 0x126D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126D68u;
        // 0x126d6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126D68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126D70u;
}
