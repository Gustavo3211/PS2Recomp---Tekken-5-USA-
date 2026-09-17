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

// Function: sub_0031BA88
// Address: 0x31ba88 - 0x31baa8
void sub_0031BA88_0x31ba88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031BA88_0x31ba88");
#endif

    switch (ctx->pc) {
        case 0x31ba9cu: goto label_31ba9c;
        default: break;
    }

    ctx->pc = 0x31ba88u;

    // 0x31ba88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31ba88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31ba8c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31ba8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ba90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31ba90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31ba94: 0xc0c731c  jal         func_31CC70
    ctx->pc = 0x31BA94u;
    SET_GPR_U32(ctx, 31, 0x31BA9Cu);
    ctx->pc = 0x31BA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BA94u;
    // 0x31ba98: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CC70u, 0x31BA94u, 0x31BA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BA9Cu;
label_31ba9c:
    // 0x31ba9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31ba9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31baa0: 0x3e00008  jr          $ra
    ctx->pc = 0x31BAA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31BAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BAA0u;
        // 0x31baa4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31BAA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31BAA8u;
}
