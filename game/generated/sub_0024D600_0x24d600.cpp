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

// Function: sub_0024D600
// Address: 0x24d600 - 0x24d638
void sub_0024D600_0x24d600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024D600_0x24d600");
#endif

    switch (ctx->pc) {
        case 0x24d610u: goto label_24d610;
        default: break;
    }

    ctx->pc = 0x24d600u;

    // 0x24d600: 0x13  mtlo        $zero
    ctx->pc = 0x24d600u;
    ctx->lo = GPR_U64(ctx, 0);
    // 0x24d604: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24D604u;
    {
        const bool branch_taken_0x24d604 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D604u;
        // 0x24d608: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d604) {
            ctx->pc = 0x24D62Cu;
            goto label_24d62c;
        }
    }
    ctx->pc = 0x24D60Cu;
    // 0x24d60c: 0x0  nop
    ctx->pc = 0x24d60cu;
    // NOP
label_24d610:
    // 0x24d610: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x24d610u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x24d614: 0x3083000f  andi        $v1, $a0, 0xF
    ctx->pc = 0x24d614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x24d618: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x24d618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x24d61c: 0x42102  srl         $a0, $a0, 4
    ctx->pc = 0x24d61cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
    // 0x24d620: 0x70650000  madd        $zero, $v1, $a1
    ctx->pc = 0x24d620u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
    // 0x24d624: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x24D624u;
    {
        const bool branch_taken_0x24d624 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D624u;
        // 0x24d628: 0x22840  sll         $a1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d624) {
            ctx->pc = 0x24D610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24d610;
        }
    }
    ctx->pc = 0x24D62Cu;
label_24d62c:
    // 0x24d62c: 0x1012  mflo        $v0
    ctx->pc = 0x24d62cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x24d630: 0x3e00008  jr          $ra
    ctx->pc = 0x24D630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24D638u;
}
