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

// Function: sub_002FF1D0
// Address: 0x2ff1d0 - 0x2ff210
void sub_002FF1D0_0x2ff1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FF1D0_0x2ff1d0");
#endif

    switch (ctx->pc) {
        case 0x2ff1ecu: goto label_2ff1ec;
        default: break;
    }

    ctx->pc = 0x2ff1d0u;

    // 0x2ff1d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ff1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ff1d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ff1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ff1d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ff1d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff1dc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2ff1dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff1e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ff1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2ff1e4: 0xc0bf80a  jal         func_2FE028
    ctx->pc = 0x2FF1E4u;
    SET_GPR_U32(ctx, 31, 0x2FF1ECu);
    ctx->pc = 0x2FF1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF1E4u;
    // 0x2ff1e8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE028u, 0x2FF1E4u, 0x2FF1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF1ECu;
label_2ff1ec:
    // 0x2ff1ec: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FF1ECu;
    {
        const bool branch_taken_0x2ff1ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff1ec) {
            ctx->pc = 0x2FF1F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF1ECu;
            // 0x2ff1f0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF204u;
            goto label_2ff204;
        }
    }
    ctx->pc = 0x2FF1F4u;
    // 0x2ff1f4: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x2ff1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2ff1f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2ff1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2ff1fc: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x2ff1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
    // 0x2ff200: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ff200u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ff204:
    // 0x2ff204: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ff204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ff208: 0x3e00008  jr          $ra
    ctx->pc = 0x2FF208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FF20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF208u;
        // 0x2ff20c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FF210u;
}
