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

// Function: sub_001F9968
// Address: 0x1f9968 - 0x1f9980
void sub_001F9968_0x1f9968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9968_0x1f9968");
#endif

    switch (ctx->pc) {
        case 0x1f996cu: goto label_1f996c;
        case 0x1f9974u: goto label_1f9974;
        default: break;
    }

    ctx->pc = 0x1f9968u;

    // 0x1f9968: 0x2402029b  addiu       $v0, $zero, 0x29B
    ctx->pc = 0x1f9968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 667));
label_1f996c:
    // 0x1f996c: 0xa6020304  sh          $v0, 0x304($s0)
    ctx->pc = 0x1f996cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 772), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f9970: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f9970u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f9974:
    // 0x1f9974: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1f9974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f9978: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F997Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9978u;
        // 0x1f997c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9980u;
}
