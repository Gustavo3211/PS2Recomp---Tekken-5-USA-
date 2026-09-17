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

// Function: sub_00202CC0
// Address: 0x202cc0 - 0x202d18
void sub_00202CC0_0x202cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202CC0_0x202cc0");
#endif

    switch (ctx->pc) {
        case 0x202ce0u: goto label_202ce0;
        default: break;
    }

    ctx->pc = 0x202cc0u;

    // 0x202cc0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x202cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x202cc4: 0x24020141  addiu       $v0, $zero, 0x141
    ctx->pc = 0x202cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 321));
    // 0x202cc8: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x202cc8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x202ccc: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x202CCCu;
    {
        const bool branch_taken_0x202ccc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x202CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202CCCu;
        // 0x202cd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202ccc) {
            ctx->pc = 0x202D10u;
            goto label_202d10;
        }
    }
    ctx->pc = 0x202CD4u;
    // 0x202cd4: 0x24050141  addiu       $a1, $zero, 0x141
    ctx->pc = 0x202cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 321));
    // 0x202cd8: 0x2c62011d  sltiu       $v0, $v1, 0x11D
    ctx->pc = 0x202cd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)285) ? 1 : 0);
    // 0x202cdc: 0x0  nop
    ctx->pc = 0x202cdcu;
    // NOP
label_202ce0:
    // 0x202ce0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x202CE0u;
    {
        const bool branch_taken_0x202ce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x202ce0) {
            ctx->pc = 0x202CE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202CE0u;
            // 0x202ce4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202CF8u;
            goto label_202cf8;
        }
    }
    ctx->pc = 0x202CE8u;
    // 0x202ce8: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x202ce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x202cec: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x202CECu;
    {
        const bool branch_taken_0x202cec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x202CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202CECu;
        // 0x202cf0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202cec) {
            ctx->pc = 0x202D10u;
            goto label_202d10;
        }
    }
    ctx->pc = 0x202CF4u;
    // 0x202cf4: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x202cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_202cf8:
    // 0x202cf8: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x202cf8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x202cfc: 0x0  nop
    ctx->pc = 0x202cfcu;
    // NOP
    // 0x202d00: 0x0  nop
    ctx->pc = 0x202d00u;
    // NOP
    // 0x202d04: 0x5465fff6  bnel        $v1, $a1, . + 4 + (-0xA << 2)
    ctx->pc = 0x202D04u;
    {
        const bool branch_taken_0x202d04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x202d04) {
            ctx->pc = 0x202D08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202D04u;
            // 0x202d08: 0x2c62011d  sltiu       $v0, $v1, 0x11D (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)285) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x202CE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202ce0;
        }
    }
    ctx->pc = 0x202D0Cu;
    // 0x202d0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x202d0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_202d10:
    // 0x202d10: 0x3e00008  jr          $ra
    ctx->pc = 0x202D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202D10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202D18u;
}
