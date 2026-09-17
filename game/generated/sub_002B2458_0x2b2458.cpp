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

// Function: sub_002B2458
// Address: 0x2b2458 - 0x2b2498
void sub_002B2458_0x2b2458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2458_0x2b2458");
#endif

    switch (ctx->pc) {
        case 0x2b248cu: goto label_2b248c;
        default: break;
    }

    ctx->pc = 0x2b2458u;

    // 0x2b2458: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b2458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b245c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2b245cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2460: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b2460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b2464: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B2464u;
    {
        const bool branch_taken_0x2b2464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2464u;
        // 0x2b2468: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2464) {
            ctx->pc = 0x2B248Cu;
            goto label_2b248c;
        }
    }
    ctx->pc = 0x2B246Cu;
    // 0x2b246c: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x2b246cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
    // 0x2b2470: 0x54820007  bnel        $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B2470u;
    {
        const bool branch_taken_0x2b2470 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b2470) {
            ctx->pc = 0x2B2474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2470u;
            // 0x2b2474: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2490u;
            goto label_2b2490;
        }
    }
    ctx->pc = 0x2B2478u;
    // 0x2b2478: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2b2478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2b247c: 0x8c640074  lw          $a0, 0x74($v1)
    ctx->pc = 0x2b247cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x2b2480: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x2b2480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x2b2484: 0xc0ac8fe  jal         func_2B23F8
    ctx->pc = 0x2B2484u;
    SET_GPR_U32(ctx, 31, 0x2B248Cu);
    ctx->pc = 0x2B2488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2484u;
    // 0x2b2488: 0xac620080  sw          $v0, 0x80($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B23F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B23F8u, 0x2B2484u, 0x2B248Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B248Cu;
label_2b248c:
    // 0x2b248c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b248cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b2490:
    // 0x2b2490: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2490u;
        // 0x2b2494: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2498u;
}
