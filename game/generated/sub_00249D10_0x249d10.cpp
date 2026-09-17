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

// Function: sub_00249D10
// Address: 0x249d10 - 0x249d40
void sub_00249D10_0x249d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249D10_0x249d10");
#endif

    switch (ctx->pc) {
        case 0x249d2cu: goto label_249d2c;
        case 0x249d34u: goto label_249d34;
        default: break;
    }

    ctx->pc = 0x249d10u;

    // 0x249d10: 0x8f82a9c0  lw          $v0, -0x5640($gp)
    ctx->pc = 0x249d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945216)));
    // 0x249d14: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x249d14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x249d18: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x249D18u;
    {
        const bool branch_taken_0x249d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x249D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249D18u;
        // 0x249d1c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249d18) {
            ctx->pc = 0x249D34u;
            goto label_249d34;
        }
    }
    ctx->pc = 0x249D20u;
    // 0x249d20: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x249d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x249d24: 0xc0926f4  jal         func_249BD0
    ctx->pc = 0x249D24u;
    SET_GPR_U32(ctx, 31, 0x249D2Cu);
    ctx->pc = 0x249D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249D24u;
    // 0x249d28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249BD0u, 0x249D24u, 0x249D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249D2Cu;
label_249d2c:
    // 0x249d2c: 0xc09260c  jal         func_249830
    ctx->pc = 0x249D2Cu;
    SET_GPR_U32(ctx, 31, 0x249D34u);
    ctx->pc = 0x249D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249D2Cu;
    // 0x249d30: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249830u, 0x249D2Cu, 0x249D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249D34u;
label_249d34:
    // 0x249d34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x249d34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x249d38: 0x3e00008  jr          $ra
    ctx->pc = 0x249D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249D38u;
        // 0x249d3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249D38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249D40u;
}
