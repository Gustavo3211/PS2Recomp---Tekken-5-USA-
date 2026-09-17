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

// Function: sub_002DFE18
// Address: 0x2dfe18 - 0x2dfe58
void sub_002DFE18_0x2dfe18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DFE18_0x2dfe18");
#endif

    switch (ctx->pc) {
        case 0x2dfe38u: goto label_2dfe38;
        default: break;
    }

    ctx->pc = 0x2dfe18u;

    // 0x2dfe18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dfe18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dfe1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2dfe1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2dfe20: 0x24900052  addiu       $s0, $a0, 0x52
    ctx->pc = 0x2dfe20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 82));
    // 0x2dfe24: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x2dfe24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2dfe28: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DFE28u;
    {
        const bool branch_taken_0x2dfe28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DFE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFE28u;
        // 0x2dfe2c: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfe28) {
            ctx->pc = 0x2DFE3Cu;
            goto label_2dfe3c;
        }
    }
    ctx->pc = 0x2DFE30u;
    // 0x2dfe30: 0xc085080  jal         func_214200
    ctx->pc = 0x2DFE30u;
    SET_GPR_U32(ctx, 31, 0x2DFE38u);
    ctx->pc = 0x214200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214200u, 0x2DFE30u, 0x2DFE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFE38u;
label_2dfe38:
    // 0x2dfe38: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x2dfe38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2dfe3c:
    // 0x2dfe3c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2dfe3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2dfe40: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2DFE40u;
    {
        const bool branch_taken_0x2dfe40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2dfe40) {
            ctx->pc = 0x2DFE44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DFE40u;
            // 0x2dfe44: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DFE48u;
            goto label_2dfe48;
        }
    }
    ctx->pc = 0x2DFE48u;
label_2dfe48:
    // 0x2dfe48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2dfe48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dfe4c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2dfe4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2dfe50: 0x3e00008  jr          $ra
    ctx->pc = 0x2DFE50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DFE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFE50u;
        // 0x2dfe54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DFE50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DFE58u;
}
