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

// Function: sub_0031BD80
// Address: 0x31bd80 - 0x31bda0
void sub_0031BD80_0x31bd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031BD80_0x31bd80");
#endif

    switch (ctx->pc) {
        case 0x31bd94u: goto label_31bd94;
        default: break;
    }

    ctx->pc = 0x31bd80u;

    // 0x31bd80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31bd80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31bd84: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31bd84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bd88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31bd88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31bd8c: 0xc0c731c  jal         func_31CC70
    ctx->pc = 0x31BD8Cu;
    SET_GPR_U32(ctx, 31, 0x31BD94u);
    ctx->pc = 0x31BD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BD8Cu;
    // 0x31bd90: 0xafa60004  sw          $a2, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CC70u, 0x31BD8Cu, 0x31BD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BD94u;
label_31bd94:
    // 0x31bd94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31bd94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31bd98: 0x3e00008  jr          $ra
    ctx->pc = 0x31BD98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31BD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BD98u;
        // 0x31bd9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31BD98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31BDA0u;
}
