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

// Function: sub_0024A4A0
// Address: 0x24a4a0 - 0x24a4d0
void sub_0024A4A0_0x24a4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A4A0_0x24a4a0");
#endif

    switch (ctx->pc) {
        case 0x24a4c4u: goto label_24a4c4;
        default: break;
    }

    ctx->pc = 0x24a4a0u;

    // 0x24a4a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24a4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24a4a4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x24a4a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a4a8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x24a4a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24a4ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24a4acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a4b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24a4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24a4b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x24a4b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a4b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24a4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24a4bc: 0xc09289a  jal         func_24A268
    ctx->pc = 0x24A4BCu;
    SET_GPR_U32(ctx, 31, 0x24A4C4u);
    ctx->pc = 0x24A4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A4BCu;
    // 0x24a4c0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A268u, 0x24A4BCu, 0x24A4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A4C4u;
label_24a4c4:
    // 0x24a4c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24a4c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24a4c8: 0x3e00008  jr          $ra
    ctx->pc = 0x24A4C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A4C8u;
        // 0x24a4cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A4C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A4D0u;
}
