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

// Function: sub_002EA968
// Address: 0x2ea968 - 0x2ea980
void sub_002EA968_0x2ea968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EA968_0x2ea968");
#endif

    switch (ctx->pc) {
        case 0x2ea96cu: goto label_2ea96c;
        case 0x2ea970u: goto label_2ea970;
        default: break;
    }

    ctx->pc = 0x2ea968u;

    // 0x2ea968: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ea968u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ea96c:
    // 0x2ea96c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ea96cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2ea970:
    // 0x2ea970: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ea970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ea974: 0x3e00008  jr          $ra
    ctx->pc = 0x2EA974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EA978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA974u;
        // 0x2ea978: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EA974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EA97Cu;
    // 0x2ea97c: 0x0  nop
    ctx->pc = 0x2ea97cu;
    // NOP
    ctx->pc = 0x2ea980u;
}
