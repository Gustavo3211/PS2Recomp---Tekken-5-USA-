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

// Function: sub_002F3CB0
// Address: 0x2f3cb0 - 0x2f3d18
void sub_002F3CB0_0x2f3cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F3CB0_0x2f3cb0");
#endif

    switch (ctx->pc) {
        case 0x2f3ce8u: goto label_2f3ce8;
        default: break;
    }

    ctx->pc = 0x2f3cb0u;

    // 0x2f3cb0: 0x24840140  addiu       $a0, $a0, 0x140
    ctx->pc = 0x2f3cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    // 0x2f3cb4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2f3cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f3cb8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F3CB8u;
    {
        const bool branch_taken_0x2f3cb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3cb8) {
            ctx->pc = 0x2F3CBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3CB8u;
            // 0x2f3cbc: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3CD8u;
            goto label_2f3cd8;
        }
    }
    ctx->pc = 0x2F3CC0u;
    // 0x2f3cc0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2f3cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2f3cc4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2f3cc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3cc8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2f3cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2f3ccc: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F3CCCu;
    {
        const bool branch_taken_0x2f3ccc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f3ccc) {
            ctx->pc = 0x2F3CD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3CCCu;
            // 0x2f3cd0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3CE8u;
            goto label_2f3ce8;
        }
    }
    ctx->pc = 0x2F3CD4u;
    // 0x2f3cd4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2f3cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_2f3cd8:
    // 0x2f3cd8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f3cd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3cdc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2f3cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2f3ce0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f3ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3ce4: 0x0  nop
    ctx->pc = 0x2f3ce4u;
    // NOP
label_2f3ce8:
    // 0x2f3ce8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2f3ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2f3cec: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2f3cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2f3cf0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2f3cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2f3cf4: 0x28830008  slti        $v1, $a0, 0x8
    ctx->pc = 0x2f3cf4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2f3cf8: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x2f3cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x2f3cfc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2F3CFCu;
    {
        const bool branch_taken_0x2f3cfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3CFCu;
        // 0x2f3d00: 0x8cc6001c  lw          $a2, 0x1C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3cfc) {
            ctx->pc = 0x2F3CE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f3ce8;
        }
    }
    ctx->pc = 0x2F3D04u;
    // 0x2f3d04: 0x3e00008  jr          $ra
    ctx->pc = 0x2F3D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3D04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F3D0Cu;
    // 0x2f3d0c: 0x0  nop
    ctx->pc = 0x2f3d0cu;
    // NOP
    // 0x2f3d10: 0x3e00008  jr          $ra
    ctx->pc = 0x2F3D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F3D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3D10u;
        // 0x2f3d14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3D10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F3D18u;
}
