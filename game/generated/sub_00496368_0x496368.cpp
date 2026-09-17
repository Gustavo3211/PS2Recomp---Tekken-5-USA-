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

// Function: sub_00496368
// Address: 0x496368 - 0x4963b0
void sub_00496368_0x496368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00496368_0x496368");
#endif

    switch (ctx->pc) {
        case 0x496378u: goto label_496378;
        case 0x496388u: goto label_496388;
        default: break;
    }

    ctx->pc = 0x496368u;

    // 0x496368: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x496368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49636c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49636cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x496370: 0xc124620  jal         func_491880
    ctx->pc = 0x496370u;
    SET_GPR_U32(ctx, 31, 0x496378u);
    ctx->pc = 0x491880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491880u, 0x496370u, 0x496378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496378u;
label_496378:
    // 0x496378: 0x34039958  ori         $v1, $zero, 0x9958
    ctx->pc = 0x496378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)39256);
    // 0x49637c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x49637cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x496380: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x496380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x496384: 0x0  nop
    ctx->pc = 0x496384u;
    // NOP
label_496388:
    // 0x496388: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x496388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x49638c: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x49638cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x496390: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x496390u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x496394: 0x22403  sra         $a0, $v0, 16
    ctx->pc = 0x496394u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
    // 0x496398: 0x0  nop
    ctx->pc = 0x496398u;
    // NOP
    // 0x49639c: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x49639Cu;
    {
        const bool branch_taken_0x49639c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x4963A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49639Cu;
        // 0x4963a0: 0x246301e2  addiu       $v1, $v1, 0x1E2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 482));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49639c) {
            ctx->pc = 0x496388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_496388;
        }
    }
    ctx->pc = 0x4963A4u;
    // 0x4963a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4963a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4963a8: 0x3e00008  jr          $ra
    ctx->pc = 0x4963A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4963ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4963A8u;
        // 0x4963ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4963A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4963B0u;
}
