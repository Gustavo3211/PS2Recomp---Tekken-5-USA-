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

// Function: sub_00202C10
// Address: 0x202c10 - 0x202c38
void sub_00202C10_0x202c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202C10_0x202c10");
#endif

    switch (ctx->pc) {
        case 0x202c20u: goto label_202c20;
        case 0x202c2cu: goto label_202c2c;
        default: break;
    }

    ctx->pc = 0x202c10u;

    // 0x202c10: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x202c10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x202c14: 0x50450005  beql        $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x202C14u;
    {
        const bool branch_taken_0x202c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x202c14) {
            ctx->pc = 0x202C18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202C14u;
            // 0x202c18: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202C2Cu;
            goto label_202c2c;
        }
    }
    ctx->pc = 0x202C1Cu;
    // 0x202c1c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x202c1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_202c20:
    // 0x202c20: 0x29020004  slti        $v0, $t0, 0x4
    ctx->pc = 0x202c20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x202c24: 0x1440ff6a  bnez        $v0, . + 4 + (-0x96 << 2)
    ctx->pc = 0x202C24u;
    {
        const bool branch_taken_0x202c24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x202C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202C24u;
        // 0x202c28: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202c24) {
            ctx->pc = 0x2029D0u;
            return;
        }
    }
    ctx->pc = 0x202C2Cu;
label_202c2c:
    // 0x202c2c: 0x3e00008  jr          $ra
    ctx->pc = 0x202C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202C2Cu;
        // 0x202c30: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202C2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202C34u;
    // 0x202c34: 0x0  nop
    ctx->pc = 0x202c34u;
    // NOP
    ctx->pc = 0x202c38u;
}
