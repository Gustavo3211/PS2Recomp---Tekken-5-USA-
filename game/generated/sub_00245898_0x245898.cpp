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

// Function: sub_00245898
// Address: 0x245898 - 0x2458c0
void sub_00245898_0x245898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245898_0x245898");
#endif

    switch (ctx->pc) {
        case 0x2458acu: goto label_2458ac;
        default: break;
    }

    ctx->pc = 0x245898u;

    // 0x245898: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x245898u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x24589c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24589cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2458a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2458a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2458a4: 0xc04a43b  jal         func_1290EC
    ctx->pc = 0x2458A4u;
    SET_GPR_U32(ctx, 31, 0x2458ACu);
    ctx->pc = 0x2458A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2458A4u;
    // 0x2458a8: 0x24a53210  addiu       $a1, $a1, 0x3210 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1290ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1290ECu, 0x2458A4u, 0x2458ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2458ACu;
label_2458ac:
    // 0x2458ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2458acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2458b0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2458b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2458b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2458B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2458B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2458B4u;
        // 0x2458b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2458B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2458BCu;
    // 0x2458bc: 0x0  nop
    ctx->pc = 0x2458bcu;
    // NOP
    ctx->pc = 0x2458c0u;
}
