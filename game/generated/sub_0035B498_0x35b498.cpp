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

// Function: sub_0035B498
// Address: 0x35b498 - 0x35b4c0
void sub_0035B498_0x35b498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035B498_0x35b498");
#endif

    switch (ctx->pc) {
        case 0x35b4acu: goto label_35b4ac;
        default: break;
    }

    ctx->pc = 0x35b498u;

    // 0x35b498: 0x3c04001d  lui         $a0, 0x1D
    ctx->pc = 0x35b498u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)29 << 16));
    // 0x35b49c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35b49cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35b4a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35b4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35b4a4: 0xc044cac  jal         func_1132B0
    ctx->pc = 0x35B4A4u;
    SET_GPR_U32(ctx, 31, 0x35B4ACu);
    ctx->pc = 0x35B4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B4A4u;
    // 0x35b4a8: 0x24841350  addiu       $a0, $a0, 0x1350 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1132B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1132B0u, 0x35B4A4u, 0x35B4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B4ACu;
label_35b4ac:
    // 0x35b4ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35b4acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b4b0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x35b4b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x35b4b4: 0x3e00008  jr          $ra
    ctx->pc = 0x35B4B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B4B4u;
        // 0x35b4b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B4B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B4BCu;
    // 0x35b4bc: 0x0  nop
    ctx->pc = 0x35b4bcu;
    // NOP
    ctx->pc = 0x35b4c0u;
}
