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

// Function: sub_00218E58
// Address: 0x218e58 - 0x218e90
void sub_00218E58_0x218e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218E58_0x218e58");
#endif

    switch (ctx->pc) {
        case 0x218e6cu: goto label_218e6c;
        default: break;
    }

    ctx->pc = 0x218e58u;

    // 0x218e58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x218e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x218e5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x218e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x218e60: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x218e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x218e64: 0xc0862b2  jal         func_218AC8
    ctx->pc = 0x218E64u;
    SET_GPR_U32(ctx, 31, 0x218E6Cu);
    ctx->pc = 0x218E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218E64u;
    // 0x218e68: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218AC8u, 0x218E64u, 0x218E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218E6Cu;
label_218e6c:
    // 0x218e6c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x218e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x218e70: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x218e70u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x218e74: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x218e74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x218e78: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x218e78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x218e7c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x218e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x218e80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x218e80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218e84: 0x3e00008  jr          $ra
    ctx->pc = 0x218E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218E84u;
        // 0x218e88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218E84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218E8Cu;
    // 0x218e8c: 0x0  nop
    ctx->pc = 0x218e8cu;
    // NOP
    ctx->pc = 0x218e90u;
}
