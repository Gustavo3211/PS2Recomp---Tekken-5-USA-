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

// Function: sub_0012A9C8
// Address: 0x12a9c8 - 0x12aa10
void sub_0012A9C8_0x12a9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012A9C8_0x12a9c8");
#endif

    switch (ctx->pc) {
        case 0x12a9f8u: goto label_12a9f8;
        default: break;
    }

    ctx->pc = 0x12a9c8u;

    // 0x12a9c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12a9c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12a9cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12a9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12a9d0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x12a9d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a9d4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x12a9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x12a9d8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x12a9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x12a9dc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12A9DCu;
    {
        const bool branch_taken_0x12a9dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A9DCu;
        // 0x12a9e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a9dc) {
            ctx->pc = 0x12A9F0u;
            goto label_12a9f0;
        }
    }
    ctx->pc = 0x12A9E4u;
    // 0x12a9e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x12A9E4u;
    {
        const bool branch_taken_0x12a9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A9E4u;
        // 0x12a9e8: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a9e4) {
            ctx->pc = 0x12AA00u;
            goto label_12aa00;
        }
    }
    ctx->pc = 0x12A9ECu;
    // 0x12a9ec: 0x0  nop
    ctx->pc = 0x12a9ecu;
    // NOP
label_12a9f0:
    // 0x12a9f0: 0xc04b8b2  jal         func_12E2C8
    ctx->pc = 0x12A9F0u;
    SET_GPR_U32(ctx, 31, 0x12A9F8u);
    ctx->pc = 0x12E2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E2C8u, 0x12A9F0u, 0x12A9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A9F8u;
label_12a9f8:
    // 0x12a9f8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x12a9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x12a9fc: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x12a9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_12aa00:
    // 0x12aa00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12aa00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12aa04: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x12aa04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12aa08: 0x3e00008  jr          $ra
    ctx->pc = 0x12AA08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12AA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AA08u;
        // 0x12aa0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12AA08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12AA10u;
}
