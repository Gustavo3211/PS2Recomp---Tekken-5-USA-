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

// Function: sub_0031A230
// Address: 0x31a230 - 0x31a250
void sub_0031A230_0x31a230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031A230_0x31a230");
#endif

    switch (ctx->pc) {
        case 0x31a244u: goto label_31a244;
        default: break;
    }

    ctx->pc = 0x31a230u;

    // 0x31a230: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x31a230u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x31a234: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31a234u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31a238: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31a238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31a23c: 0xc0c75ec  jal         func_31D7B0
    ctx->pc = 0x31A23Cu;
    SET_GPR_U32(ctx, 31, 0x31A244u);
    ctx->pc = 0x31A240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A23Cu;
    // 0x31a240: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D7B0u, 0x31A23Cu, 0x31A244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A244u;
label_31a244:
    // 0x31a244: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31a244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31a248: 0x3e00008  jr          $ra
    ctx->pc = 0x31A248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A248u;
        // 0x31a24c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31A250u;
}
