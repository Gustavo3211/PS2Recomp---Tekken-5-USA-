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

// Function: sub_0031B6C8
// Address: 0x31b6c8 - 0x31b6f8
void sub_0031B6C8_0x31b6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031B6C8_0x31b6c8");
#endif

    switch (ctx->pc) {
        case 0x31b6dcu: goto label_31b6dc;
        default: break;
    }

    ctx->pc = 0x31b6c8u;

    // 0x31b6c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31b6c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31b6cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31b6ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31b6d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x31b6d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x31b6d4: 0xc0c6c30  jal         func_31B0C0
    ctx->pc = 0x31B6D4u;
    SET_GPR_U32(ctx, 31, 0x31B6DCu);
    ctx->pc = 0x31B6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B6D4u;
    // 0x31b6d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B0C0u, 0x31B6D4u, 0x31B6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B6DCu;
label_31b6dc:
    // 0x31b6dc: 0x2e100001  sltiu       $s0, $s0, 0x1
    ctx->pc = 0x31b6dcu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x31b6e0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x31b6e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31b6e4: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x31b6e4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x31b6e8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x31b6e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b6ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31b6ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31b6f0: 0x3e00008  jr          $ra
    ctx->pc = 0x31B6F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31B6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B6F0u;
        // 0x31b6f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B6F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31B6F8u;
}
