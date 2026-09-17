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

// Function: sub_002E9408
// Address: 0x2e9408 - 0x2e9450
void sub_002E9408_0x2e9408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E9408_0x2e9408");
#endif

    switch (ctx->pc) {
        case 0x2e9420u: goto label_2e9420;
        default: break;
    }

    ctx->pc = 0x2e9408u;

    // 0x2e9408: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e9408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e940c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e940cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e9410: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e9410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e9414: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2e9414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2e9418: 0xc0bbe48  jal         func_2EF920
    ctx->pc = 0x2E9418u;
    SET_GPR_U32(ctx, 31, 0x2E9420u);
    ctx->pc = 0x2E941Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9418u;
    // 0x2e941c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF920u, 0x2E9418u, 0x2E9420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9420u;
label_2e9420:
    // 0x2e9420: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2e9420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2e9424: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2e9424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e9428: 0x2442f670  addiu       $v0, $v0, -0x990
    ctx->pc = 0x2e9428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964848));
    // 0x2e942c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2e942cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EF674u));
    // 0x2e9430: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x2e9430u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e9434: 0xa2040140  sb          $a0, 0x140($s0)
    ctx->pc = 0x2e9434u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 320), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e9438: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x2e9438u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EF680u));
    // 0x2e943c: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x2e943cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e9440: 0xa2040141  sb          $a0, 0x141($s0)
    ctx->pc = 0x2e9440u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 321), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e9444: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e9444u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e9448: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E944Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9448u;
        // 0x2e944c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E9450u;
}
