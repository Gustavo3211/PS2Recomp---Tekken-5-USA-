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

// Function: sub_002F7B70
// Address: 0x2f7b70 - 0x2f7ba0
void sub_002F7B70_0x2f7b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F7B70_0x2f7b70");
#endif

    switch (ctx->pc) {
        case 0x2f7b84u: goto label_2f7b84;
        default: break;
    }

    ctx->pc = 0x2f7b70u;

    // 0x2f7b70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f7b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f7b74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f7b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f7b78: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2f7b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2f7b7c: 0xc0bdeb0  jal         func_2F7AC0
    ctx->pc = 0x2F7B7Cu;
    SET_GPR_U32(ctx, 31, 0x2F7B84u);
    ctx->pc = 0x2F7B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7B7Cu;
    // 0x2f7b80: 0x24900100  addiu       $s0, $a0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F7AC0u, 0x2F7B7Cu, 0x2F7B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7B84u;
label_2f7b84:
    // 0x2f7b84: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2f7b84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2f7b88: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2f7b88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f7b8c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2f7b8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2f7b90: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2f7b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f7b94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f7b94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f7b98: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7B98u;
        // 0x2f7b9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F7B98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F7BA0u;
}
