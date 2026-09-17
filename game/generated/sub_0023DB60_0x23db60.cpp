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

// Function: sub_0023DB60
// Address: 0x23db60 - 0x23dbe8
void sub_0023DB60_0x23db60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023DB60_0x23db60");
#endif

    ctx->pc = 0x23db60u;

    // 0x23db60: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x23DB60u;
    {
        const bool branch_taken_0x23db60 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x23db60) {
            ctx->pc = 0x23DB78u;
            goto label_23db78;
        }
    }
    ctx->pc = 0x23DB68u;
    // 0x23db68: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x23db68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x23db6c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x23DB6Cu;
    {
        const bool branch_taken_0x23db6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DB6Cu;
        // 0x23db70: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23db6c) {
            ctx->pc = 0x23DB88u;
            goto label_23db88;
        }
    }
    ctx->pc = 0x23DB74u;
    // 0x23db74: 0x0  nop
    ctx->pc = 0x23db74u;
    // NOP
label_23db78:
    // 0x23db78: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x23DB78u;
    {
        const bool branch_taken_0x23db78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x23db78) {
            ctx->pc = 0x23DB7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DB78u;
            // 0x23db7c: 0x8c830050  lw          $v1, 0x50($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DB90u;
            goto label_23db90;
        }
    }
    ctx->pc = 0x23DB80u;
    // 0x23db80: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x23db80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x23db84: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23db84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_23db88:
    // 0x23db88: 0xac820050  sw          $v0, 0x50($a0)
    ctx->pc = 0x23db88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 2));
    // 0x23db8c: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x23db8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_23db90:
    // 0x23db90: 0x28620006  slti        $v0, $v1, 0x6
    ctx->pc = 0x23db90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x23db94: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x23DB94u;
    {
        const bool branch_taken_0x23db94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23db94) {
            ctx->pc = 0x23DB98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DB94u;
            // 0x23db98: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DBACu;
            goto label_23dbac;
        }
    }
    ctx->pc = 0x23DB9Cu;
    // 0x23db9c: 0x28620007  slti        $v0, $v1, 0x7
    ctx->pc = 0x23db9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x23dba0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23DBA0u;
    {
        const bool branch_taken_0x23dba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DBA0u;
        // 0x23dba4: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dba0) {
            ctx->pc = 0x23DBB0u;
            goto label_23dbb0;
        }
    }
    ctx->pc = 0x23DBA8u;
    // 0x23dba8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x23dba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_23dbac:
    // 0x23dbac: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x23dbacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_23dbb0:
    // 0x23dbb0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23DBB0u;
    {
        const bool branch_taken_0x23dbb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DBB0u;
        // 0x23dbb4: 0xac830050  sw          $v1, 0x50($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dbb0) {
            ctx->pc = 0x23DBC8u;
            goto label_23dbc8;
        }
    }
    ctx->pc = 0x23DBB8u;
    // 0x23dbb8: 0x2462fffd  addiu       $v0, $v1, -0x3
    ctx->pc = 0x23dbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x23dbbc: 0x3e00008  jr          $ra
    ctx->pc = 0x23DBBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23DBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DBBCu;
        // 0x23dbc0: 0xac820054  sw          $v0, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23DBBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23DBC4u;
    // 0x23dbc4: 0x0  nop
    ctx->pc = 0x23dbc4u;
    // NOP
label_23dbc8:
    // 0x23dbc8: 0x2862fffd  slti        $v0, $v1, -0x3
    ctx->pc = 0x23dbc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967293) ? 1 : 0);
    // 0x23dbcc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23DBCCu;
    {
        const bool branch_taken_0x23dbcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DBCCu;
        // 0x23dbd0: 0x24620003  addiu       $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dbcc) {
            ctx->pc = 0x23DBE0u;
            goto label_23dbe0;
        }
    }
    ctx->pc = 0x23DBD4u;
    // 0x23dbd4: 0x3e00008  jr          $ra
    ctx->pc = 0x23DBD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23DBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DBD4u;
        // 0x23dbd8: 0xac820054  sw          $v0, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23DBD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23DBDCu;
    // 0x23dbdc: 0x0  nop
    ctx->pc = 0x23dbdcu;
    // NOP
label_23dbe0:
    // 0x23dbe0: 0x3e00008  jr          $ra
    ctx->pc = 0x23DBE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23DBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DBE0u;
        // 0x23dbe4: 0xac800054  sw          $zero, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23DBE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23DBE8u;
}
