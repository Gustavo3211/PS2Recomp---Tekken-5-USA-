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

// Function: sub_002DC0F8
// Address: 0x2dc0f8 - 0x2dc140
void sub_002DC0F8_0x2dc0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC0F8_0x2dc0f8");
#endif

    switch (ctx->pc) {
        case 0x2dc130u: goto label_2dc130;
        default: break;
    }

    ctx->pc = 0x2dc0f8u;

    // 0x2dc0f8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2dc0f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc0fc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dc0fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dc100: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x2dc100u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2dc104: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dc104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dc108: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x2dc108u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2dc10c: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x2dc10cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x2dc110: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x2dc110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2dc114: 0x8cc688d0  lw          $a2, -0x7730($a2)
    ctx->pc = 0x2dc114u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294936784)));
    // 0x2dc118: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x2dc118u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2dc11c: 0x3c01003e  lui         $at, 0x3E
    ctx->pc = 0x2dc11cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)62 << 16));
    // 0x2dc120: 0x24218448  addiu       $at, $at, -0x7BB8
    ctx->pc = 0x2dc120u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294935624));
    // 0x2dc124: 0x273821  addu        $a3, $at, $a3
    ctx->pc = 0x2dc124u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 7)));
    // 0x2dc128: 0xc0b705c  jal         func_2DC170
    ctx->pc = 0x2DC128u;
    SET_GPR_U32(ctx, 31, 0x2DC130u);
    ctx->pc = 0x2DC12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC128u;
    // 0x2dc12c: 0x24c608a8  addiu       $a2, $a2, 0x8A8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC170u, 0x2DC128u, 0x2DC130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC130u;
label_2dc130:
    // 0x2dc130: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dc130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dc134: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC134u;
        // 0x2dc138: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC13Cu;
    // 0x2dc13c: 0x0  nop
    ctx->pc = 0x2dc13cu;
    // NOP
    ctx->pc = 0x2dc140u;
}
