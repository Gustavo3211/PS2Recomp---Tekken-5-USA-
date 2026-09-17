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

// Function: sub_00372130
// Address: 0x372130 - 0x372170
void sub_00372130_0x372130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00372130_0x372130");
#endif

    switch (ctx->pc) {
        case 0x372158u: goto label_372158;
        default: break;
    }

    ctx->pc = 0x372130u;

    // 0x372130: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x372130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x372134: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x372134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x372138: 0x2790cc80  addiu       $s0, $gp, -0x3380
    ctx->pc = 0x372138u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 28), 4294954112));
    // 0x37213c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x37213cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x372140: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x372140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372144: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x372144u;
    {
        const bool branch_taken_0x372144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x372148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372144u;
        // 0x372148: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372144) {
            ctx->pc = 0x372158u;
            goto label_372158;
        }
    }
    ctx->pc = 0x37214Cu;
    // 0x37214c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x37214cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x372150: 0xc0493d2  jal         func_124F48
    ctx->pc = 0x372150u;
    SET_GPR_U32(ctx, 31, 0x372158u);
    ctx->pc = 0x372154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372150u;
    // 0x372154: 0x24a50e58  addiu       $a1, $a1, 0xE58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F48u, 0x372150u, 0x372158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372158u;
label_372158:
    // 0x372158: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x372158u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37215c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x37215cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x372160: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x372160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x372164: 0x3e00008  jr          $ra
    ctx->pc = 0x372164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372164u;
        // 0x372168: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37216Cu;
    // 0x37216c: 0x0  nop
    ctx->pc = 0x37216cu;
    // NOP
    ctx->pc = 0x372170u;
}
