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

// Function: sub_001261C0
// Address: 0x1261c0 - 0x1261e8
void sub_001261C0_0x1261c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001261C0_0x1261c0");
#endif

    switch (ctx->pc) {
        case 0x1261d0u: goto label_1261d0;
        default: break;
    }

    ctx->pc = 0x1261c0u;

    // 0x1261c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1261c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1261c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1261c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1261c8: 0xc04972c  jal         func_125CB0
    ctx->pc = 0x1261C8u;
    SET_GPR_U32(ctx, 31, 0x1261D0u);
    ctx->pc = 0x1261CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1261C8u;
    // 0x1261cc: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125CB0u, 0x1261C8u, 0x1261D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1261D0u;
label_1261d0:
    // 0x1261d0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1261d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1261d4: 0x38430000  xori        $v1, $v0, 0x0
    ctx->pc = 0x1261d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x1261d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1261d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1261dc: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x1261dcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1261e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1261E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1261E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1261E0u;
        // 0x1261e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1261E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1261E8u;
}
