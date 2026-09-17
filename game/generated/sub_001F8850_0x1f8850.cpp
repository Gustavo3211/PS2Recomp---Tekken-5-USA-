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

// Function: sub_001F8850
// Address: 0x1f8850 - 0x1f8880
void sub_001F8850_0x1f8850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8850_0x1f8850");
#endif

    switch (ctx->pc) {
        case 0x1f8860u: goto label_1f8860;
        default: break;
    }

    ctx->pc = 0x1f8850u;

    // 0x1f8850: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f8850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f8854: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f8854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f8858: 0xc07e220  jal         func_1F8880
    ctx->pc = 0x1F8858u;
    SET_GPR_U32(ctx, 31, 0x1F8860u);
    ctx->pc = 0x1F8880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8880u, 0x1F8858u, 0x1F8860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8860u;
label_1f8860:
    // 0x1f8860: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f8860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f8864: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x1f8864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x1f8868: 0x244255b0  addiu       $v0, $v0, 0x55B0
    ctx->pc = 0x1f8868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21936));
    // 0x1f886c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f886cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f8870: 0xac43004c  sw          $v1, 0x4C($v0)
    ctx->pc = 0x1f8870u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1555FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1555FCu, _value); } while (0);
    // 0x1f8874: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x1f8874u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1555E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1555E8u, _value); } while (0);
    // 0x1f8878: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F887Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8878u;
        // 0x1f887c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8880u;
}
