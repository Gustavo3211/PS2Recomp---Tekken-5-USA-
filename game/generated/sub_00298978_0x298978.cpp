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

// Function: sub_00298978
// Address: 0x298978 - 0x298998
void sub_00298978_0x298978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298978_0x298978");
#endif

    switch (ctx->pc) {
        case 0x298980u: goto label_298980;
        case 0x298984u: goto label_298984;
        default: break;
    }

    ctx->pc = 0x298978u;

    // 0x298978: 0xc049a82  jal         func_126A08
    ctx->pc = 0x298978u;
    SET_GPR_U32(ctx, 31, 0x298980u);
    ctx->pc = 0x126A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126A08u, 0x298978u, 0x298980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298980u;
label_298980:
    // 0x298980: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x298980u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_298984:
    // 0x298984: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x298984u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x298988: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x298988u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29898c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x29898cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x298990: 0x3e00008  jr          $ra
    ctx->pc = 0x298990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298990u;
        // 0x298994: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298998u;
}
