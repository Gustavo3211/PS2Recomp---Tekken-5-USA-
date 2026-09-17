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

// Function: sub_002E3100
// Address: 0x2e3100 - 0x2e3140
void sub_002E3100_0x2e3100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3100_0x2e3100");
#endif

    switch (ctx->pc) {
        case 0x2e3124u: goto label_2e3124;
        case 0x2e312cu: goto label_2e312c;
        default: break;
    }

    ctx->pc = 0x2e3100u;

    // 0x2e3100: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e3100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e3104: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e3104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e3108: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e3108u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e310c: 0x26020088  addiu       $v0, $s0, 0x88
    ctx->pc = 0x2e310cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 136));
    // 0x2e3110: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2e3110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2e3114: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E3114u;
    {
        const bool branch_taken_0x2e3114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3114u;
        // 0x2e3118: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3114) {
            ctx->pc = 0x2E312Cu;
            goto label_2e312c;
        }
    }
    ctx->pc = 0x2E311Cu;
    // 0x2e311c: 0xc0c11c8  jal         func_304720
    ctx->pc = 0x2E311Cu;
    SET_GPR_U32(ctx, 31, 0x2E3124u);
    ctx->pc = 0x304720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304720u, 0x2E311Cu, 0x2E3124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3124u;
label_2e3124:
    // 0x2e3124: 0xc0b8ce4  jal         func_2E3390
    ctx->pc = 0x2E3124u;
    SET_GPR_U32(ctx, 31, 0x2E312Cu);
    ctx->pc = 0x2E3128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3124u;
    // 0x2e3128: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3390u, 0x2E3124u, 0x2E312Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E312Cu;
label_2e312c:
    // 0x2e312c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e312cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e3130: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2e3130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e3134: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3134u;
        // 0x2e3138: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E313Cu;
    // 0x2e313c: 0x0  nop
    ctx->pc = 0x2e313cu;
    // NOP
    ctx->pc = 0x2e3140u;
}
