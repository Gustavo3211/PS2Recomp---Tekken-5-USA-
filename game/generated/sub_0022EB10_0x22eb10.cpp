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

// Function: sub_0022EB10
// Address: 0x22eb10 - 0x22eb48
void sub_0022EB10_0x22eb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022EB10_0x22eb10");
#endif

    switch (ctx->pc) {
        case 0x22eb38u: goto label_22eb38;
        default: break;
    }

    ctx->pc = 0x22eb10u;

    // 0x22eb10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22eb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22eb14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22eb14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22eb18: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x22eb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x22eb1c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x22EB1Cu;
    {
        const bool branch_taken_0x22eb1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22eb1c) {
            ctx->pc = 0x22EB20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22EB1Cu;
            // 0x22eb20: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22EB3Cu;
            goto label_22eb3c;
        }
    }
    ctx->pc = 0x22EB24u;
    // 0x22eb24: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x22eb24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x22eb28: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x22EB28u;
    {
        const bool branch_taken_0x22eb28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22eb28) {
            ctx->pc = 0x22EB2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22EB28u;
            // 0x22eb2c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22EB3Cu;
            goto label_22eb3c;
        }
    }
    ctx->pc = 0x22EB30u;
    // 0x22eb30: 0xc0c82d8  jal         func_320B60
    ctx->pc = 0x22EB30u;
    SET_GPR_U32(ctx, 31, 0x22EB38u);
    ctx->pc = 0x22EB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EB30u;
    // 0x22eb34: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320B60u, 0x22EB30u, 0x22EB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EB38u;
label_22eb38:
    // 0x22eb38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22eb38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22eb3c:
    // 0x22eb3c: 0x3e00008  jr          $ra
    ctx->pc = 0x22EB3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22EB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EB3Cu;
        // 0x22eb40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22EB3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22EB44u;
    // 0x22eb44: 0x0  nop
    ctx->pc = 0x22eb44u;
    // NOP
    ctx->pc = 0x22eb48u;
}
