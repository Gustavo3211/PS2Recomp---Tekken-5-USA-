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

// Function: sub_0024A590
// Address: 0x24a590 - 0x24a5b0
void sub_0024A590_0x24a590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A590_0x24a590");
#endif

    switch (ctx->pc) {
        case 0x24a5a0u: goto label_24a5a0;
        default: break;
    }

    ctx->pc = 0x24a590u;

    // 0x24a590: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24a590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24a594: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24a594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24a598: 0xc0d6392  jal         func_358E48
    ctx->pc = 0x24A598u;
    SET_GPR_U32(ctx, 31, 0x24A5A0u);
    ctx->pc = 0x24A59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A598u;
    // 0x24a59c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358E48u, 0x24A598u, 0x24A5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A5A0u;
label_24a5a0:
    // 0x24a5a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24a5a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24a5a4: 0x3e00008  jr          $ra
    ctx->pc = 0x24A5A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A5A4u;
        // 0x24a5a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A5A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A5ACu;
    // 0x24a5ac: 0x0  nop
    ctx->pc = 0x24a5acu;
    // NOP
    ctx->pc = 0x24a5b0u;
}
