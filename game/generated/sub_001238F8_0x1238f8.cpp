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

// Function: sub_001238F8
// Address: 0x1238f8 - 0x123940
void sub_001238F8_0x1238f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001238F8_0x1238f8");
#endif

    switch (ctx->pc) {
        case 0x123910u: goto label_123910;
        default: break;
    }

    ctx->pc = 0x1238f8u;

    // 0x1238f8: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x1238f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1238fc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1238fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x123900: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x123900u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123904: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x123904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x123908: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x123908u;
    {
        const bool branch_taken_0x123908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12390Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123908u;
        // 0x12390c: 0x3066007f  andi        $a2, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x123908) {
            ctx->pc = 0x123930u;
            goto label_123930;
        }
    }
    ctx->pc = 0x123910u;
label_123910:
    // 0x123910: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x123910u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x123914: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x123914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x123918: 0x24e70007  addiu       $a3, $a3, 0x7
    ctx->pc = 0x123918u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 7));
    // 0x12391c: 0x3062007f  andi        $v0, $v1, 0x7F
    ctx->pc = 0x12391cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x123920: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x123920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x123924: 0xe21004  sllv        $v0, $v0, $a3
    ctx->pc = 0x123924u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x123928: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x123928u;
    {
        const bool branch_taken_0x123928 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12392Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123928u;
        // 0x12392c: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123928) {
            ctx->pc = 0x123910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_123910;
        }
    }
    ctx->pc = 0x123930u;
label_123930:
    // 0x123930: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x123930u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x123934: 0x3e00008  jr          $ra
    ctx->pc = 0x123934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123934u;
        // 0x123938: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12393Cu;
    // 0x12393c: 0x0  nop
    ctx->pc = 0x12393cu;
    // NOP
    ctx->pc = 0x123940u;
}
