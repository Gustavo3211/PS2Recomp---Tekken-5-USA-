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

// Function: sub_0024A248
// Address: 0x24a248 - 0x24a268
void sub_0024A248_0x24a248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A248_0x24a248");
#endif

    switch (ctx->pc) {
        case 0x24a25cu: goto label_24a25c;
        default: break;
    }

    ctx->pc = 0x24a248u;

    // 0x24a248: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x24a248u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
    // 0x24a24c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24a24cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24a250: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24a250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24a254: 0xc09286a  jal         func_24A1A8
    ctx->pc = 0x24A254u;
    SET_GPR_U32(ctx, 31, 0x24A25Cu);
    ctx->pc = 0x24A258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A254u;
    // 0x24a258: 0x24847c80  addiu       $a0, $a0, 0x7C80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A1A8u, 0x24A254u, 0x24A25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A25Cu;
label_24a25c:
    // 0x24a25c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24a25cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24a260: 0x3e00008  jr          $ra
    ctx->pc = 0x24A260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A260u;
        // 0x24a264: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A268u;
}
