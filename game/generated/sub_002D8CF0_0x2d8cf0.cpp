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

// Function: sub_002D8CF0
// Address: 0x2d8cf0 - 0x2d8d70
void sub_002D8CF0_0x2d8cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8CF0_0x2d8cf0");
#endif

    switch (ctx->pc) {
        case 0x2d8d18u: goto label_2d8d18;
        default: break;
    }

    ctx->pc = 0x2d8cf0u;

    // 0x2d8cf0: 0x10a00019  beqz        $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2D8CF0u;
    {
        const bool branch_taken_0x2d8cf0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8cf0) {
            ctx->pc = 0x2D8D58u;
            goto label_2d8d58;
        }
    }
    ctx->pc = 0x2D8CF8u;
    // 0x2d8cf8: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x2d8cf8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d8cfc: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2D8CFCu;
    {
        const bool branch_taken_0x2d8cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8cfc) {
            ctx->pc = 0x2D8D58u;
            goto label_2d8d58;
        }
    }
    ctx->pc = 0x2D8D04u;
    // 0x2d8d04: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x2d8d04u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    // 0x2d8d08: 0x34e790d0  ori         $a3, $a3, 0x90D0
    ctx->pc = 0x2d8d08u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)37072);
    // 0x2d8d0c: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x2d8d0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x2d8d10: 0x24880008  addiu       $t0, $a0, 0x8
    ctx->pc = 0x2d8d10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2d8d14: 0x0  nop
    ctx->pc = 0x2d8d14u;
    // NOP
label_2d8d18:
    // 0x2d8d18: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2d8d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2d8d1c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2d8d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2d8d20: 0x8c4290d0  lw          $v0, -0x6F30($v0)
    ctx->pc = 0x2d8d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938832)));
    // 0x2d8d24: 0x94a60000  lhu         $a2, 0x0($a1)
    ctx->pc = 0x2d8d24u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d8d28: 0x284207ff  slti        $v0, $v0, 0x7FF
    ctx->pc = 0x2d8d28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2047) ? 1 : 0);
    // 0x2d8d2c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D8D2Cu;
    {
        const bool branch_taken_0x2d8d2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8D2Cu;
        // 0x2d8d30: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8d2c) {
            ctx->pc = 0x2D8D4Cu;
            goto label_2d8d4c;
        }
    }
    ctx->pc = 0x2D8D34u;
    // 0x2d8d34: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x2d8d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2d8d38: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2d8d38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2d8d3c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d8d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d8d40: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2d8d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2d8d44: 0xa44600a0  sh          $a2, 0xA0($v0)
    ctx->pc = 0x2d8d44u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 160), (uint16_t)GPR_U32(ctx, 6));
    // 0x2d8d48: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x2d8d48u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_2d8d4c:
    // 0x2d8d4c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x2d8d4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d8d50: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x2D8D50u;
    {
        const bool branch_taken_0x2d8d50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d8d50) {
            ctx->pc = 0x2D8D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d8d18;
        }
    }
    ctx->pc = 0x2D8D58u;
label_2d8d58:
    // 0x2d8d58: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8D58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D8D60u;
    // 0x2d8d60: 0x2782bba8  addiu       $v0, $gp, -0x4458
    ctx->pc = 0x2d8d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294949800));
    // 0x2d8d64: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8D64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D8D6Cu;
    // 0x2d8d6c: 0x0  nop
    ctx->pc = 0x2d8d6cu;
    // NOP
    ctx->pc = 0x2d8d70u;
}
