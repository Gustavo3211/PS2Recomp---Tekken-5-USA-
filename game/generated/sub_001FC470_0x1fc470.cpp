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

// Function: sub_001FC470
// Address: 0x1fc470 - 0x1fc4b0
void sub_001FC470_0x1fc470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC470_0x1fc470");
#endif

    switch (ctx->pc) {
        case 0x1fc484u: goto label_1fc484;
        case 0x1fc494u: goto label_1fc494;
        default: break;
    }

    ctx->pc = 0x1fc470u;

    // 0x1fc470: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fc470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fc474: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fc474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fc478: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1fc478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1fc47c: 0xc07e580  jal         func_1F9600
    ctx->pc = 0x1FC47Cu;
    SET_GPR_U32(ctx, 31, 0x1FC484u);
    ctx->pc = 0x1FC480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC47Cu;
    // 0x1fc480: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9600u, 0x1FC47Cu, 0x1FC484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC484u;
label_1fc484:
    // 0x1fc484: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FC484u;
    {
        const bool branch_taken_0x1fc484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc484) {
            ctx->pc = 0x1FC488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC484u;
            // 0x1fc488: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC49Cu;
            goto label_1fc49c;
        }
    }
    ctx->pc = 0x1FC48Cu;
    // 0x1fc48c: 0xc07e588  jal         func_1F9620
    ctx->pc = 0x1FC48Cu;
    SET_GPR_U32(ctx, 31, 0x1FC494u);
    ctx->pc = 0x1F9620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9620u, 0x1FC48Cu, 0x1FC494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC494u;
label_1fc494:
    // 0x1fc494: 0x2c500001  sltiu       $s0, $v0, 0x1
    ctx->pc = 0x1fc494u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1fc498: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1fc498u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fc49c:
    // 0x1fc49c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fc49cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc4a0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1fc4a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fc4a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC4A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC4A4u;
        // 0x1fc4a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC4A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC4ACu;
    // 0x1fc4ac: 0x0  nop
    ctx->pc = 0x1fc4acu;
    // NOP
    ctx->pc = 0x1fc4b0u;
}
