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

// Function: sub_0036FA88
// Address: 0x36fa88 - 0x36fad8
void sub_0036FA88_0x36fa88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036FA88_0x36fa88");
#endif

    switch (ctx->pc) {
        case 0x36faacu: goto label_36faac;
        case 0x36fac4u: goto label_36fac4;
        default: break;
    }

    ctx->pc = 0x36fa88u;

    // 0x36fa88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36fa88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36fa8c: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36fa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36fa90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36fa90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36fa94: 0x24507310  addiu       $s0, $v0, 0x7310
    ctx->pc = 0x36fa94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29456));
    // 0x36fa98: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36fa98u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D7310u));
    // 0x36fa9c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36FA9Cu;
    {
        const bool branch_taken_0x36fa9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36FAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FA9Cu;
        // 0x36faa0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fa9c) {
            ctx->pc = 0x36FAC4u;
            goto label_36fac4;
        }
    }
    ctx->pc = 0x36FAA4u;
    // 0x36faa4: 0xc0dc420  jal         func_371080
    ctx->pc = 0x36FAA4u;
    SET_GPR_U32(ctx, 31, 0x36FAACu);
    ctx->pc = 0x371080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371080u, 0x36FAA4u, 0x36FAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FAACu;
label_36faac:
    // 0x36faac: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36faacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36fab0: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x36fab0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36fab4: 0x24a508d0  addiu       $a1, $a1, 0x8D0
    ctx->pc = 0x36fab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2256));
    // 0x36fab8: 0x24c67550  addiu       $a2, $a2, 0x7550
    ctx->pc = 0x36fab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30032));
    // 0x36fabc: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36FABCu;
    SET_GPR_U32(ctx, 31, 0x36FAC4u);
    ctx->pc = 0x36FAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FABCu;
    // 0x36fac0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36FABCu, 0x36FAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FAC4u;
label_36fac4:
    // 0x36fac4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36fac4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fac8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36fac8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36facc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36faccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36fad0: 0x3e00008  jr          $ra
    ctx->pc = 0x36FAD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36FAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FAD0u;
        // 0x36fad4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36FAD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36FAD8u;
}
