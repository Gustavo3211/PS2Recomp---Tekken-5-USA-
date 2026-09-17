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

// Function: sub_0021F370
// Address: 0x21f370 - 0x21f3a0
void sub_0021F370_0x21f370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021F370_0x21f370");
#endif

    switch (ctx->pc) {
        case 0x21f394u: goto label_21f394;
        default: break;
    }

    ctx->pc = 0x21f370u;

    // 0x21f370: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x21f370u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x21f374: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x21f374u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x21f378: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x21f378u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x21f37c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21f37cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21f380: 0x2484c1c0  addiu       $a0, $a0, -0x3E40
    ctx->pc = 0x21f380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951360));
    // 0x21f384: 0x24a5c2c0  addiu       $a1, $a1, -0x3D40
    ctx->pc = 0x21f384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951616));
    // 0x21f388: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21f388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21f38c: 0xc0c252a  jal         func_3094A8
    ctx->pc = 0x21F38Cu;
    SET_GPR_U32(ctx, 31, 0x21F394u);
    ctx->pc = 0x21F390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F38Cu;
    // 0x21f390: 0x24c6c3c0  addiu       $a2, $a2, -0x3C40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294951872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3094A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3094A8u, 0x21F38Cu, 0x21F394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F394u;
label_21f394:
    // 0x21f394: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21f394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f398: 0x3e00008  jr          $ra
    ctx->pc = 0x21F398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F398u;
        // 0x21f39c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F3A0u;
}
