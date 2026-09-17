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

// Function: sub_0033CE70
// Address: 0x33ce70 - 0x33cea8
void sub_0033CE70_0x33ce70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033CE70_0x33ce70");
#endif

    ctx->pc = 0x33ce70u;

    // 0x33ce70: 0x2ca2003b  sltiu       $v0, $a1, 0x3B
    ctx->pc = 0x33ce70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
    // 0x33ce74: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x33CE74u;
    {
        const bool branch_taken_0x33ce74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CE74u;
        // 0x33ce78: 0xa0850017  sb          $a1, 0x17($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 23), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ce74) {
            ctx->pc = 0x33CEB8u;
            return;
        }
    }
    ctx->pc = 0x33CE7Cu;
    // 0x33ce7c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x33ce7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x33ce80: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x33ce80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x33ce84: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x33ce84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x33ce88: 0x8c633e80  lw          $v1, 0x3E80($v1)
    ctx->pc = 0x33ce88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16000)));
    // 0x33ce8c: 0x600008  jr          $v1
    ctx->pc = 0x33CE8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x33CE98u: goto label_33ce98;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CE8Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x33CE94u;
    // 0x33ce94: 0x0  nop
    ctx->pc = 0x33ce94u;
    // NOP
label_33ce98:
    // 0x33ce98: 0x24c2003f  addiu       $v0, $a2, 0x3F
    ctx->pc = 0x33ce98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 63));
    // 0x33ce9c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x33CE9Cu;
    {
        const bool branch_taken_0x33ce9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CE9Cu;
        // 0x33cea0: 0x21182  srl         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ce9c) {
            ctx->pc = 0x33CEBCu;
            return;
        }
    }
    ctx->pc = 0x33CEA4u;
    // 0x33cea4: 0x0  nop
    ctx->pc = 0x33cea4u;
    // NOP
    ctx->pc = 0x33cea8u;
}
