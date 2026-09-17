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

// Function: sub_0021F008
// Address: 0x21f008 - 0x21f050
void sub_0021F008_0x21f008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021F008_0x21f008");
#endif

    switch (ctx->pc) {
        case 0x21f028u: goto label_21f028;
        default: break;
    }

    ctx->pc = 0x21f008u;

    // 0x21f008: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21f008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21f00c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21f00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21f010: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21f010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21f014: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x21f014u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f018: 0x14820009  bne         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21F018u;
    {
        const bool branch_taken_0x21f018 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x21F01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F018u;
        // 0x21f01c: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f018) {
            ctx->pc = 0x21F040u;
            goto label_21f040;
        }
    }
    ctx->pc = 0x21F020u;
    // 0x21f020: 0xc087e14  jal         func_21F850
    ctx->pc = 0x21F020u;
    SET_GPR_U32(ctx, 31, 0x21F028u);
    ctx->pc = 0x21F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F850u, 0x21F020u, 0x21F028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F028u;
label_21f028:
    // 0x21f028: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f02c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21f02cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21f030: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21f030u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f034: 0x8087e30  j           func_21F8C0
    ctx->pc = 0x21F034u;
    ctx->pc = 0x21F038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F034u;
    // 0x21f038: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F8C0u;
    sub_0021F8C0_0x21f8c0(rdram, ctx, runtime); return;
    ctx->pc = 0x21F03Cu;
    // 0x21f03c: 0x0  nop
    ctx->pc = 0x21f03cu;
    // NOP
label_21f040:
    // 0x21f040: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21f040u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f044: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21f044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21f048: 0x3e00008  jr          $ra
    ctx->pc = 0x21F048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F048u;
        // 0x21f04c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F050u;
}
