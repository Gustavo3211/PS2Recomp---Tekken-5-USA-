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

// Function: sub_002772F8
// Address: 0x2772f8 - 0x277330
void sub_002772F8_0x2772f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002772F8_0x2772f8");
#endif

    switch (ctx->pc) {
        case 0x277300u: goto label_277300;
        default: break;
    }

    ctx->pc = 0x2772f8u;

    // 0x2772f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2772f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2772fc: 0x0  nop
    ctx->pc = 0x2772fcu;
    // NOP
label_277300:
    // 0x277300: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x277300u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x277304: 0x8f84ca68  lw          $a0, -0x3598($gp)
    ctx->pc = 0x277304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953576)));
    // 0x277308: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x277308u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x27730c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x27730cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x277310: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x277310u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x277314: 0x28a30002  slti        $v1, $a1, 0x2
    ctx->pc = 0x277314u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x277318: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x277318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x27731c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x27731Cu;
    {
        const bool branch_taken_0x27731c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x277320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27731Cu;
        // 0x277320: 0xa4400000  sh          $zero, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27731c) {
            ctx->pc = 0x277300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_277300;
        }
    }
    ctx->pc = 0x277324u;
    // 0x277324: 0x3e00008  jr          $ra
    ctx->pc = 0x277324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27732Cu;
    // 0x27732c: 0x0  nop
    ctx->pc = 0x27732cu;
    // NOP
    ctx->pc = 0x277330u;
}
