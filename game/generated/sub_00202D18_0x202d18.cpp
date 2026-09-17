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

// Function: sub_00202D18
// Address: 0x202d18 - 0x202d70
void sub_00202D18_0x202d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202D18_0x202d18");
#endif

    switch (ctx->pc) {
        case 0x202d38u: goto label_202d38;
        default: break;
    }

    ctx->pc = 0x202d18u;

    // 0x202d18: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x202d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x202d1c: 0x24020141  addiu       $v0, $zero, 0x141
    ctx->pc = 0x202d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 321));
    // 0x202d20: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x202d20u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x202d24: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x202D24u;
    {
        const bool branch_taken_0x202d24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x202D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202D24u;
        // 0x202d28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202d24) {
            ctx->pc = 0x202D68u;
            goto label_202d68;
        }
    }
    ctx->pc = 0x202D2Cu;
    // 0x202d2c: 0x24050141  addiu       $a1, $zero, 0x141
    ctx->pc = 0x202d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 321));
    // 0x202d30: 0x2c62012f  sltiu       $v0, $v1, 0x12F
    ctx->pc = 0x202d30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)303) ? 1 : 0);
    // 0x202d34: 0x0  nop
    ctx->pc = 0x202d34u;
    // NOP
label_202d38:
    // 0x202d38: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x202D38u;
    {
        const bool branch_taken_0x202d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x202d38) {
            ctx->pc = 0x202D3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202D38u;
            // 0x202d3c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202D50u;
            goto label_202d50;
        }
    }
    ctx->pc = 0x202D40u;
    // 0x202d40: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x202d40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x202d44: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x202D44u;
    {
        const bool branch_taken_0x202d44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x202D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202D44u;
        // 0x202d48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202d44) {
            ctx->pc = 0x202D68u;
            goto label_202d68;
        }
    }
    ctx->pc = 0x202D4Cu;
    // 0x202d4c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x202d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_202d50:
    // 0x202d50: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x202d50u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x202d54: 0x0  nop
    ctx->pc = 0x202d54u;
    // NOP
    // 0x202d58: 0x0  nop
    ctx->pc = 0x202d58u;
    // NOP
    // 0x202d5c: 0x5465fff6  bnel        $v1, $a1, . + 4 + (-0xA << 2)
    ctx->pc = 0x202D5Cu;
    {
        const bool branch_taken_0x202d5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x202d5c) {
            ctx->pc = 0x202D60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202D5Cu;
            // 0x202d60: 0x2c62012f  sltiu       $v0, $v1, 0x12F (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)303) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x202D38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202d38;
        }
    }
    ctx->pc = 0x202D64u;
    // 0x202d64: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x202d64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_202d68:
    // 0x202d68: 0x3e00008  jr          $ra
    ctx->pc = 0x202D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202D68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202D70u;
}
