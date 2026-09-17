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

// Function: sub_00311A58
// Address: 0x311a58 - 0x311a80
void sub_00311A58_0x311a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00311A58_0x311a58");
#endif

    switch (ctx->pc) {
        case 0x311a6cu: goto label_311a6c;
        default: break;
    }

    ctx->pc = 0x311a58u;

    // 0x311a58: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x311a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x311a5c: 0x2404fff2  addiu       $a0, $zero, -0xE
    ctx->pc = 0x311a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967282));
    // 0x311a60: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x311a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x311a64: 0xc0cc106  jal         func_330418
    ctx->pc = 0x311A64u;
    SET_GPR_U32(ctx, 31, 0x311A6Cu);
    ctx->pc = 0x311A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311A64u;
    // 0x311a68: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330418u, 0x311A64u, 0x311A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311A6Cu;
label_311a6c:
    // 0x311a6c: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x311a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x311a70: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x311a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x311a74: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x311a74u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x311a78: 0x3e00008  jr          $ra
    ctx->pc = 0x311A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311A78u;
        // 0x311a7c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311A78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x311A80u;
}
