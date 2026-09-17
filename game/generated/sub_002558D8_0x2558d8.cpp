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

// Function: sub_002558D8
// Address: 0x2558d8 - 0x255910
void sub_002558D8_0x2558d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002558D8_0x2558d8");
#endif

    ctx->pc = 0x2558d8u;

    // 0x2558d8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2558d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2558dc: 0x8c448880  lw          $a0, -0x7780($v0)
    ctx->pc = 0x2558dcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A8880u));
    // 0x2558e0: 0x2c83001e  sltiu       $v1, $a0, 0x1E
    ctx->pc = 0x2558e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
    // 0x2558e4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2558E4u;
    {
        const bool branch_taken_0x2558e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2558E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2558E4u;
        // 0x2558e8: 0x28820012  slti        $v0, $a0, 0x12 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)18) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2558e4) {
            ctx->pc = 0x2558F0u;
            goto label_2558f0;
        }
    }
    ctx->pc = 0x2558ECu;
    // 0x2558ec: 0x2200a  movz        $a0, $zero, $v0
    ctx->pc = 0x2558ecu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_2558f0:
    // 0x2558f0: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x2558f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2558f4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2558f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2558f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2558f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2558fc: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x2558fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
    // 0x255900: 0x24211dc0  addiu       $at, $at, 0x1DC0
    ctx->pc = 0x255900u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 7616));
    // 0x255904: 0x3e00008  jr          $ra
    ctx->pc = 0x255904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x255908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255904u;
        // 0x255908: 0x221021  addu        $v0, $at, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25590Cu;
    // 0x25590c: 0x0  nop
    ctx->pc = 0x25590cu;
    // NOP
    ctx->pc = 0x255910u;
}
