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

// Function: sub_0020DF00
// Address: 0x20df00 - 0x20df38
void sub_0020DF00_0x20df00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020DF00_0x20df00");
#endif

    switch (ctx->pc) {
        case 0x20df10u: goto label_20df10;
        default: break;
    }

    ctx->pc = 0x20df00u;

    // 0x20df00: 0x2484000e  addiu       $a0, $a0, 0xE
    ctx->pc = 0x20df00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14));
    // 0x20df04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20df04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20df08: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x20df08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20df0c: 0x0  nop
    ctx->pc = 0x20df0cu;
    // NOP
label_20df10:
    // 0x20df10: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x20df10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x20df14: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x20df14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x20df18: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x20df18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x20df1c: 0x28a30008  slti        $v1, $a1, 0x8
    ctx->pc = 0x20df1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x20df20: 0x0  nop
    ctx->pc = 0x20df20u;
    // NOP
    // 0x20df24: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20DF24u;
    {
        const bool branch_taken_0x20df24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20DF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DF24u;
        // 0x20df28: 0xa4460220  sh          $a2, 0x220($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 544), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20df24) {
            ctx->pc = 0x20DF10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20df10;
        }
    }
    ctx->pc = 0x20DF2Cu;
    // 0x20df2c: 0x3e00008  jr          $ra
    ctx->pc = 0x20DF2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DF2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20DF34u;
    // 0x20df34: 0x0  nop
    ctx->pc = 0x20df34u;
    // NOP
    ctx->pc = 0x20df38u;
}
