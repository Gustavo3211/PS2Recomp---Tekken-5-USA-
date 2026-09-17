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

// Function: sub_00339DDC
// Address: 0x339ddc - 0x339e00
void sub_00339DDC_0x339ddc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00339DDC_0x339ddc");
#endif

    switch (ctx->pc) {
        case 0x339ddcu: goto label_339ddc;
        case 0x339de0u: goto label_339de0;
        case 0x339de4u: goto label_339de4;
        case 0x339de8u: goto label_339de8;
        case 0x339decu: goto label_339dec;
        case 0x339df0u: goto label_339df0;
        case 0x339df4u: goto label_339df4;
        case 0x339df8u: goto label_339df8;
        case 0x339dfcu: goto label_339dfc;
        default: break;
    }

    ctx->pc = 0x339ddcu;

label_339ddc:
    // 0x339ddc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x339ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_339de0:
    // 0x339de0: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x339de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_339de4:
    // 0x339de4: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x339de4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_339de8:
    // 0x339de8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x339de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_339dec:
    // 0x339dec: 0x40f809  jalr        $v0
label_339df0:
    if (ctx->pc == 0x339DF0u) {
        ctx->pc = 0x339DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339DECu;
        // 0x339df0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339DF4u;
        goto label_339df4;
    }
    ctx->pc = 0x339DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x339DF4u);
        ctx->pc = 0x339DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339DECu;
        // 0x339df0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339DECu, 0x339DF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x339DF4u;
label_339df4:
    // 0x339df4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x339df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_339df8:
    // 0x339df8: 0x3e00008  jr          $ra
label_339dfc:
    if (ctx->pc == 0x339DFCu) {
        ctx->pc = 0x339DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339DF8u;
        // 0x339dfc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339E00u;
        goto label_fallthrough_0x339df8;
    }
    ctx->pc = 0x339DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339DF8u;
        // 0x339dfc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339DF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x339df8:
    ctx->pc = 0x339E00u;
}
