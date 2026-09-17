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

// Function: sub_002077E0
// Address: 0x2077e0 - 0x207840
void sub_002077E0_0x2077e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002077E0_0x2077e0");
#endif

    switch (ctx->pc) {
        case 0x207800u: goto label_207800;
        default: break;
    }

    ctx->pc = 0x2077e0u;

    // 0x2077e0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2077e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2077e4: 0x94e2003c  lhu         $v0, 0x3C($a3)
    ctx->pc = 0x2077e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x2077e8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2077e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2077ec: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2077ECu;
    {
        const bool branch_taken_0x2077ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2077ec) {
            ctx->pc = 0x207834u;
            goto label_207834;
        }
    }
    ctx->pc = 0x2077F4u;
    // 0x2077f4: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x2077f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x2077f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2077f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2077fc: 0x24485600  addiu       $t0, $v0, 0x5600
    ctx->pc = 0x2077fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 22016));
label_207800:
    // 0x207800: 0x94e4003c  lhu         $a0, 0x3C($a3)
    ctx->pc = 0x207800u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x207804: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x207804u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x207808: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x207808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x20780c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x20780cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x207810: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x207810u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x207814: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x207814u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x207818: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x207818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20781c: 0x28c50008  slti        $a1, $a2, 0x8
    ctx->pc = 0x20781cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x207820: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x207820u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x207824: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x207824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x207828: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x207828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x20782c: 0x14a0fff4  bnez        $a1, . + 4 + (-0xC << 2)
    ctx->pc = 0x20782Cu;
    {
        const bool branch_taken_0x20782c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x207830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20782Cu;
        // 0x207830: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20782c) {
            ctx->pc = 0x207800u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_207800;
        }
    }
    ctx->pc = 0x207834u;
label_207834:
    // 0x207834: 0x3e00008  jr          $ra
    ctx->pc = 0x207834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20783Cu;
    // 0x20783c: 0x0  nop
    ctx->pc = 0x20783cu;
    // NOP
    ctx->pc = 0x207840u;
}
