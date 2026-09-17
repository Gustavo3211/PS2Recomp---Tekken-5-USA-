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

// Function: sub_002F5880
// Address: 0x2f5880 - 0x2f58c0
void sub_002F5880_0x2f5880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F5880_0x2f5880");
#endif

    switch (ctx->pc) {
        case 0x2f5890u: goto label_2f5890;
        default: break;
    }

    ctx->pc = 0x2f5880u;

    // 0x2f5880: 0x24870008  addiu       $a3, $a0, 0x8
    ctx->pc = 0x2f5880u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2f5884: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f5884u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5888: 0x2408efff  addiu       $t0, $zero, -0x1001
    ctx->pc = 0x2f5888u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2f588c: 0x0  nop
    ctx->pc = 0x2f588cu;
    // NOP
label_2f5890:
    // 0x2f5890: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2f5890u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2f5894: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2f5894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2f5898: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2f5898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2f589c: 0x28c50004  slti        $a1, $a2, 0x4
    ctx->pc = 0x2f589cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2f58a0: 0x8c6400f0  lw          $a0, 0xF0($v1)
    ctx->pc = 0x2f58a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x2f58a4: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2f58a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2f58a8: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x2f58a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x2f58ac: 0x14a0fff8  bnez        $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2F58ACu;
    {
        const bool branch_taken_0x2f58ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F58B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F58ACu;
        // 0x2f58b0: 0xac820080  sw          $v0, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f58ac) {
            ctx->pc = 0x2F5890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f5890;
        }
    }
    ctx->pc = 0x2F58B4u;
    // 0x2f58b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F58B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F58B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F58BCu;
    // 0x2f58bc: 0x0  nop
    ctx->pc = 0x2f58bcu;
    // NOP
    ctx->pc = 0x2f58c0u;
}
