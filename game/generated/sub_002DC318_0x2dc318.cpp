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

// Function: sub_002DC318
// Address: 0x2dc318 - 0x2dc360
void sub_002DC318_0x2dc318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC318_0x2dc318");
#endif

    switch (ctx->pc) {
        case 0x2dc350u: goto label_2dc350;
        default: break;
    }

    ctx->pc = 0x2dc318u;

    // 0x2dc318: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2dc318u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc31c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dc31cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dc320: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x2dc320u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2dc324: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dc324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dc328: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x2dc328u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2dc32c: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x2dc32cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x2dc330: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x2dc330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2dc334: 0x8cc688d0  lw          $a2, -0x7730($a2)
    ctx->pc = 0x2dc334u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294936784)));
    // 0x2dc338: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x2dc338u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2dc33c: 0x3c01003e  lui         $at, 0x3E
    ctx->pc = 0x2dc33cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)62 << 16));
    // 0x2dc340: 0x24218448  addiu       $at, $at, -0x7BB8
    ctx->pc = 0x2dc340u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294935624));
    // 0x2dc344: 0x273821  addu        $a3, $at, $a3
    ctx->pc = 0x2dc344u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 7)));
    // 0x2dc348: 0xc0b7154  jal         func_2DC550
    ctx->pc = 0x2DC348u;
    SET_GPR_U32(ctx, 31, 0x2DC350u);
    ctx->pc = 0x2DC34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC348u;
    // 0x2dc34c: 0x24c608a8  addiu       $a2, $a2, 0x8A8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC550u, 0x2DC348u, 0x2DC350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC350u;
label_2dc350:
    // 0x2dc350: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dc350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dc354: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC354u;
        // 0x2dc358: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC35Cu;
    // 0x2dc35c: 0x0  nop
    ctx->pc = 0x2dc35cu;
    // NOP
    ctx->pc = 0x2dc360u;
}
