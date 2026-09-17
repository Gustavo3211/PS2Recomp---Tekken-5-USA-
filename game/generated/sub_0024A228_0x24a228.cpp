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

// Function: sub_0024A228
// Address: 0x24a228 - 0x24a248
void sub_0024A228_0x24a228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A228_0x24a228");
#endif

    switch (ctx->pc) {
        case 0x24a23cu: goto label_24a23c;
        default: break;
    }

    ctx->pc = 0x24a228u;

    // 0x24a228: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x24a228u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
    // 0x24a22c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24a22cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24a230: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24a230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24a234: 0xc092852  jal         func_24A148
    ctx->pc = 0x24A234u;
    SET_GPR_U32(ctx, 31, 0x24A23Cu);
    ctx->pc = 0x24A238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A234u;
    // 0x24a238: 0x24847c80  addiu       $a0, $a0, 0x7C80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A148u, 0x24A234u, 0x24A23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A23Cu;
label_24a23c:
    // 0x24a23c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24a23cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24a240: 0x3e00008  jr          $ra
    ctx->pc = 0x24A240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A240u;
        // 0x24a244: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A248u;
}
