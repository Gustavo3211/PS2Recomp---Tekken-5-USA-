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

// Function: sub_0033DBB8
// Address: 0x33dbb8 - 0x33dbf0
void sub_0033DBB8_0x33dbb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033DBB8_0x33dbb8");
#endif

    ctx->pc = 0x33dbb8u;

    // 0x33dbb8: 0x24a2001f  addiu       $v0, $a1, 0x1F
    ctx->pc = 0x33dbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 31));
    // 0x33dbbc: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x33dbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x33dbc0: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x33dbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x33dbc4: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x33DBC4u;
    {
        const bool branch_taken_0x33dbc4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x33DBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DBC4u;
        // 0x33dbc8: 0x21040  sll         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33dbc4) {
            ctx->pc = 0x33DBE0u;
            goto label_33dbe0;
        }
    }
    ctx->pc = 0x33DBCCu;
    // 0x33dbcc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x33dbccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x33dbd0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x33dbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33dbd4: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x33dbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x33dbd8: 0x3e00008  jr          $ra
    ctx->pc = 0x33DBD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33DBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DBD8u;
        // 0x33dbdc: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33DBD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33DBE0u;
label_33dbe0:
    // 0x33dbe0: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x33dbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x33dbe4: 0x3e00008  jr          $ra
    ctx->pc = 0x33DBE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33DBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DBE4u;
        // 0x33dbe8: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33DBE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33DBECu;
    // 0x33dbec: 0x0  nop
    ctx->pc = 0x33dbecu;
    // NOP
    ctx->pc = 0x33dbf0u;
}
