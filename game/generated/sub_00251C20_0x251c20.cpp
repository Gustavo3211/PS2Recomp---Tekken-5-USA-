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

// Function: sub_00251C20
// Address: 0x251c20 - 0x251c70
void sub_00251C20_0x251c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00251C20_0x251c20");
#endif

    switch (ctx->pc) {
        case 0x251c48u: goto label_251c48;
        default: break;
    }

    ctx->pc = 0x251c20u;

    // 0x251c20: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x251c20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x251c24: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x251c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x251c28: 0x24840047  addiu       $a0, $a0, 0x47
    ctx->pc = 0x251c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 71));
    // 0x251c2c: 0x2c820067  sltiu       $v0, $a0, 0x67
    ctx->pc = 0x251c2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)103) ? 1 : 0);
    // 0x251c30: 0x2200a  movz        $a0, $zero, $v0
    ctx->pc = 0x251c30u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x251c34: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x251c34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x251c38: 0x3c010016  lui         $at, 0x16
    ctx->pc = 0x251c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)22 << 16));
    // 0x251c3c: 0x24217f70  addiu       $at, $at, 0x7F70
    ctx->pc = 0x251c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 32624));
    // 0x251c40: 0x242021  addu        $a0, $at, $a0
    ctx->pc = 0x251c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x251c44: 0x0  nop
    ctx->pc = 0x251c44u;
    // NOP
label_251c48:
    // 0x251c48: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x251c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x251c4c: 0xa480000c  sh          $zero, 0xC($a0)
    ctx->pc = 0x251c4cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x251c50: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x251c50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x251c54: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x251c54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x251c58: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x251c58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x251c5c: 0xa480000e  sh          $zero, 0xE($a0)
    ctx->pc = 0x251c5cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x251c60: 0x1c60fff9  bgtz        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x251C60u;
    {
        const bool branch_taken_0x251c60 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x251C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251C60u;
        // 0x251c64: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251c60) {
            ctx->pc = 0x251C48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_251c48;
        }
    }
    ctx->pc = 0x251C68u;
    // 0x251c68: 0x3e00008  jr          $ra
    ctx->pc = 0x251C68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251C68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x251C70u;
}
