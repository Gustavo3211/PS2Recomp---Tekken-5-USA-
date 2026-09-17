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

// Function: sub_002F5B10
// Address: 0x2f5b10 - 0x2f5b40
void sub_002F5B10_0x2f5b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F5B10_0x2f5b10");
#endif

    switch (ctx->pc) {
        case 0x2f5b34u: goto label_2f5b34;
        default: break;
    }

    ctx->pc = 0x2f5b10u;

    // 0x2f5b10: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x2f5b10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x2f5b14: 0x3c060002  lui         $a2, 0x2
    ctx->pc = 0x2f5b14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2 << 16));
    // 0x2f5b18: 0x3c070002  lui         $a3, 0x2
    ctx->pc = 0x2f5b18u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2 << 16));
    // 0x2f5b1c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f5b1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f5b20: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x2f5b20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x2f5b24: 0x34c60002  ori         $a2, $a2, 0x2
    ctx->pc = 0x2f5b24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2);
    // 0x2f5b28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f5b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f5b2c: 0xc0bbe04  jal         func_2EF810
    ctx->pc = 0x2F5B2Cu;
    SET_GPR_U32(ctx, 31, 0x2F5B34u);
    ctx->pc = 0x2F5B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5B2Cu;
    // 0x2f5b30: 0x34e70003  ori         $a3, $a3, 0x3 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)3);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF810u, 0x2F5B2Cu, 0x2F5B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5B34u;
label_2f5b34:
    // 0x2f5b34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f5b34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f5b38: 0x3e00008  jr          $ra
    ctx->pc = 0x2F5B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F5B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5B38u;
        // 0x2f5b3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F5B38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F5B40u;
}
