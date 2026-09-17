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

// Function: sub_002E1528
// Address: 0x2e1528 - 0x2e1560
void sub_002E1528_0x2e1528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1528_0x2e1528");
#endif

    switch (ctx->pc) {
        case 0x2e153cu: goto label_2e153c;
        case 0x2e1544u: goto label_2e1544;
        default: break;
    }

    ctx->pc = 0x2e1528u;

    // 0x2e1528: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e1528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e152c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e152cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e1530: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2e1530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2e1534: 0xc0b7a98  jal         func_2DEA60
    ctx->pc = 0x2E1534u;
    SET_GPR_U32(ctx, 31, 0x2E153Cu);
    ctx->pc = 0x2E1538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1534u;
    // 0x2e1538: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DEA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DEA60u, 0x2E1534u, 0x2E153Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E153Cu;
label_2e153c:
    // 0x2e153c: 0xc0be9d0  jal         func_2FA740
    ctx->pc = 0x2E153Cu;
    SET_GPR_U32(ctx, 31, 0x2E1544u);
    ctx->pc = 0x2E1540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E153Cu;
    // 0x2e1540: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA740u, 0x2E153Cu, 0x2E1544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1544u;
label_2e1544:
    // 0x2e1544: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2e1544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e1548: 0xae020070  sw          $v0, 0x70($s0)
    ctx->pc = 0x2e1548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
    // 0x2e154c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2e154cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e1550: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e1550u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e1554: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1554u;
        // 0x2e1558: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E155Cu;
    // 0x2e155c: 0x0  nop
    ctx->pc = 0x2e155cu;
    // NOP
    ctx->pc = 0x2e1560u;
}
