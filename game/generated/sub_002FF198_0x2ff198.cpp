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

// Function: sub_002FF198
// Address: 0x2ff198 - 0x2ff1d0
void sub_002FF198_0x2ff198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FF198_0x2ff198");
#endif

    switch (ctx->pc) {
        case 0x2ff1acu: goto label_2ff1ac;
        default: break;
    }

    ctx->pc = 0x2ff198u;

    // 0x2ff198: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ff198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ff19c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ff19cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ff1a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ff1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2ff1a4: 0xc0bf826  jal         func_2FE098
    ctx->pc = 0x2FF1A4u;
    SET_GPR_U32(ctx, 31, 0x2FF1ACu);
    ctx->pc = 0x2FF1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF1A4u;
    // 0x2ff1a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE098u, 0x2FF1A4u, 0x2FF1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF1ACu;
label_2ff1ac:
    // 0x2ff1ac: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FF1ACu;
    {
        const bool branch_taken_0x2ff1ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff1ac) {
            ctx->pc = 0x2FF1B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF1ACu;
            // 0x2ff1b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF1C4u;
            goto label_2ff1c4;
        }
    }
    ctx->pc = 0x2FF1B4u;
    // 0x2ff1b4: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x2ff1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2ff1b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2ff1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2ff1bc: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x2ff1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
    // 0x2ff1c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ff1c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ff1c4:
    // 0x2ff1c4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ff1c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ff1c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FF1C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FF1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF1C8u;
        // 0x2ff1cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF1C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FF1D0u;
}
