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

// Function: sub_0020C048
// Address: 0x20c048 - 0x20c080
void sub_0020C048_0x20c048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020C048_0x20c048");
#endif

    switch (ctx->pc) {
        case 0x20c060u: goto label_20c060;
        case 0x20c070u: goto label_20c070;
        default: break;
    }

    ctx->pc = 0x20c048u;

    // 0x20c048: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20c048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20c04c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20c04cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20c050: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20c050u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c054: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x20c054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x20c058: 0xc0b6a28  jal         func_2DA8A0
    ctx->pc = 0x20C058u;
    SET_GPR_U32(ctx, 31, 0x20C060u);
    ctx->pc = 0x20C05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C058u;
    // 0x20c05c: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA8A0u, 0x20C058u, 0x20C060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C060u;
label_20c060:
    // 0x20c060: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x20C060u;
    {
        const bool branch_taken_0x20c060 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c060) {
            ctx->pc = 0x20C064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C060u;
            // 0x20c064: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C074u;
            goto label_20c074;
        }
    }
    ctx->pc = 0x20C068u;
    // 0x20c068: 0xc0b6ae0  jal         func_2DAB80
    ctx->pc = 0x20C068u;
    SET_GPR_U32(ctx, 31, 0x20C070u);
    ctx->pc = 0x2DAB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAB80u, 0x20C068u, 0x20C070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C070u;
label_20c070:
    // 0x20c070: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20c070u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20c074:
    // 0x20c074: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20c074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20c078: 0x3e00008  jr          $ra
    ctx->pc = 0x20C078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C078u;
        // 0x20c07c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20C080u;
}
