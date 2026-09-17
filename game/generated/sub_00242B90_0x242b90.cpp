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

// Function: sub_00242B90
// Address: 0x242b90 - 0x242bd0
void sub_00242B90_0x242b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242B90_0x242b90");
#endif

    switch (ctx->pc) {
        case 0x242bb4u: goto label_242bb4;
        case 0x242bbcu: goto label_242bbc;
        default: break;
    }

    ctx->pc = 0x242b90u;

    // 0x242b90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x242b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x242b94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x242b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x242b98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x242b98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242b9c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x242b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x242ba0: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x242ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x242ba4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x242BA4u;
    {
        const bool branch_taken_0x242ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x242ba4) {
            ctx->pc = 0x242BB4u;
            goto label_242bb4;
        }
    }
    ctx->pc = 0x242BACu;
    // 0x242bac: 0xc08be60  jal         func_22F980
    ctx->pc = 0x242BACu;
    SET_GPR_U32(ctx, 31, 0x242BB4u);
    ctx->pc = 0x22F980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F980u, 0x242BACu, 0x242BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242BB4u;
label_242bb4:
    // 0x242bb4: 0xc090ad6  jal         func_242B58
    ctx->pc = 0x242BB4u;
    SET_GPR_U32(ctx, 31, 0x242BBCu);
    ctx->pc = 0x242BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242BB4u;
    // 0x242bb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x242B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242B58u, 0x242BB4u, 0x242BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242BBCu;
label_242bbc:
    // 0x242bbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x242bbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x242bc0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x242bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x242bc4: 0x3e00008  jr          $ra
    ctx->pc = 0x242BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242BC4u;
        // 0x242bc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242BC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x242BCCu;
    // 0x242bcc: 0x0  nop
    ctx->pc = 0x242bccu;
    // NOP
    ctx->pc = 0x242bd0u;
}
