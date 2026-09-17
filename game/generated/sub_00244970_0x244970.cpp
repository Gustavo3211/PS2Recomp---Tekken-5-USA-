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

// Function: sub_00244970
// Address: 0x244970 - 0x244a08
void sub_00244970_0x244970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244970_0x244970");
#endif

    switch (ctx->pc) {
        case 0x244990u: goto label_244990;
        default: break;
    }

    ctx->pc = 0x244970u;

    // 0x244970: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x244970u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244974: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x244974u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244978: 0xad800084  sw          $zero, 0x84($t4)
    ctx->pc = 0x244978u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 132), GPR_U32(ctx, 0));
    // 0x24497c: 0x258f0004  addiu       $t7, $t4, 0x4
    ctx->pc = 0x24497cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x244980: 0xad800088  sw          $zero, 0x88($t4)
    ctx->pc = 0x244980u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 136), GPR_U32(ctx, 0));
    // 0x244984: 0x258e0008  addiu       $t6, $t4, 0x8
    ctx->pc = 0x244984u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
    // 0x244988: 0xad80008c  sw          $zero, 0x8C($t4)
    ctx->pc = 0x244988u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 140), GPR_U32(ctx, 0));
    // 0x24498c: 0x2598000c  addiu       $t8, $t4, 0xC
    ctx->pc = 0x24498cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 12), 12));
label_244990:
    // 0x244990: 0xd1040  sll         $v0, $t5, 1
    ctx->pc = 0x244990u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x244994: 0xd1900  sll         $v1, $t5, 4
    ctx->pc = 0x244994u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
    // 0x244998: 0x4d1021  addu        $v0, $v0, $t5
    ctx->pc = 0x244998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x24499c: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x24499cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x2449a0: 0x24640050  addiu       $a0, $v1, 0x50
    ctx->pc = 0x2449a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x2449a4: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2449a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2449a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2449a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2449ac: 0x3035021  addu        $t2, $t8, $v1
    ctx->pc = 0x2449acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 3)));
    // 0x2449b0: 0x1c24821  addu        $t1, $t6, $v0
    ctx->pc = 0x2449b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x2449b4: 0x3045821  addu        $t3, $t8, $a0
    ctx->pc = 0x2449b4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 4)));
    // 0x2449b8: 0x1822821  addu        $a1, $t4, $v0
    ctx->pc = 0x2449b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x2449bc: 0x1e21021  addu        $v0, $t7, $v0
    ctx->pc = 0x2449bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x2449c0: 0x1e33021  addu        $a2, $t7, $v1
    ctx->pc = 0x2449c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 3)));
    // 0x2449c4: 0x1c31821  addu        $v1, $t6, $v1
    ctx->pc = 0x2449c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
    // 0x2449c8: 0x1e43821  addu        $a3, $t7, $a0
    ctx->pc = 0x2449c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 4)));
    // 0x2449cc: 0x1c42021  addu        $a0, $t6, $a0
    ctx->pc = 0x2449ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 4)));
    // 0x2449d0: 0x29a80003  slti        $t0, $t5, 0x3
    ctx->pc = 0x2449d0u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2449d4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2449d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2449d8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2449d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2449dc: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x2449dcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x2449e0: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2449e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x2449e4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2449e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2449e8: 0xad400000  sw          $zero, 0x0($t2)
    ctx->pc = 0x2449e8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 0));
    // 0x2449ec: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x2449ecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x2449f0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2449f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2449f4: 0x1500ffe6  bnez        $t0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x2449F4u;
    {
        const bool branch_taken_0x2449f4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x2449F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2449F4u;
        // 0x2449f8: 0xad600000  sw          $zero, 0x0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2449f4) {
            ctx->pc = 0x244990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_244990;
        }
    }
    ctx->pc = 0x2449FCu;
    // 0x2449fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2449FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2449FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244A04u;
    // 0x244a04: 0x0  nop
    ctx->pc = 0x244a04u;
    // NOP
    ctx->pc = 0x244a08u;
}
