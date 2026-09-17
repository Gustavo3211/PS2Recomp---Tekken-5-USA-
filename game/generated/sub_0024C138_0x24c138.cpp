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

// Function: sub_0024C138
// Address: 0x24c138 - 0x24c190
void sub_0024C138_0x24c138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024C138_0x24c138");
#endif

    switch (ctx->pc) {
        case 0x24c168u: goto label_24c168;
        default: break;
    }

    ctx->pc = 0x24c138u;

    // 0x24c138: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x24c138u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x24c13c: 0x24870008  addiu       $a3, $a0, 0x8
    ctx->pc = 0x24c13cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x24c140: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x24c140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x24c144: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24c144u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c148: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24c148u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24c14c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x24c14cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24c150: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x24c150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x24c154: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x24c154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x24c158: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24c158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24c15c: 0x906384c9  lbu         $v1, -0x7B37($v1)
    ctx->pc = 0x24c15cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294935753)));
    // 0x24c160: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x24c160u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x24c164: 0xac83003c  sw          $v1, 0x3C($a0)
    ctx->pc = 0x24c164u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
label_24c168:
    // 0x24c168: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x24c168u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x24c16c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x24c16cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x24c170: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x24c170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x24c174: 0x28c30008  slti        $v1, $a2, 0x8
    ctx->pc = 0x24c174u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x24c178: 0x0  nop
    ctx->pc = 0x24c178u;
    // NOP
    // 0x24c17c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x24C17Cu;
    {
        const bool branch_taken_0x24c17c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24C180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C17Cu;
        // 0x24c180: 0xac480040  sw          $t0, 0x40($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c17c) {
            ctx->pc = 0x24C168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24c168;
        }
    }
    ctx->pc = 0x24C184u;
    // 0x24c184: 0x3e00008  jr          $ra
    ctx->pc = 0x24C184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C18Cu;
    // 0x24c18c: 0x0  nop
    ctx->pc = 0x24c18cu;
    // NOP
    ctx->pc = 0x24c190u;
}
