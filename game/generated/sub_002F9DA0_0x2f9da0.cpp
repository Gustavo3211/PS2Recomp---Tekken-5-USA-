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

// Function: sub_002F9DA0
// Address: 0x2f9da0 - 0x2f9de8
void sub_002F9DA0_0x2f9da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F9DA0_0x2f9da0");
#endif

    switch (ctx->pc) {
        case 0x2f9db8u: goto label_2f9db8;
        default: break;
    }

    ctx->pc = 0x2f9da0u;

    // 0x2f9da0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f9da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f9da4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f9da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f9da8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f9da8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9dac: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2f9dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2f9db0: 0xc092656  jal         func_249958
    ctx->pc = 0x2F9DB0u;
    SET_GPR_U32(ctx, 31, 0x2F9DB8u);
    ctx->pc = 0x2F9DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9DB0u;
    // 0x2f9db4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249958u, 0x2F9DB0u, 0x2F9DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9DB8u;
label_2f9db8:
    // 0x2f9db8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F9DB8u;
    {
        const bool branch_taken_0x2f9db8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9DB8u;
        // 0x2f9dbc: 0x26030130  addiu       $v1, $s0, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9db8) {
            ctx->pc = 0x2F9DD8u;
            goto label_2f9dd8;
        }
    }
    ctx->pc = 0x2F9DC0u;
    // 0x2f9dc0: 0xae000160  sw          $zero, 0x160($s0)
    ctx->pc = 0x2f9dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 0));
    // 0x2f9dc4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2f9dc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f9dc8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F9DC8u;
    {
        const bool branch_taken_0x2f9dc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9DC8u;
        // 0x2f9dcc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9dc8) {
            ctx->pc = 0x2F9DDCu;
            goto label_2f9ddc;
        }
    }
    ctx->pc = 0x2F9DD0u;
    // 0x2f9dd0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f9dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f9dd4: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x2f9dd4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_2f9dd8:
    // 0x2f9dd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f9dd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f9ddc:
    // 0x2f9ddc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2f9ddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f9de0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F9DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9DE0u;
        // 0x2f9de4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F9DE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F9DE8u;
}
