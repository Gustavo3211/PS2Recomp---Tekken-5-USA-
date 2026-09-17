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

// Function: sub_0035BD58
// Address: 0x35bd58 - 0x35bd78
void sub_0035BD58_0x35bd58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035BD58_0x35bd58");
#endif

    switch (ctx->pc) {
        case 0x35bd5cu: goto label_35bd5c;
        case 0x35bd68u: goto label_35bd68;
        case 0x35bd6cu: goto label_35bd6c;
        default: break;
    }

    ctx->pc = 0x35bd58u;

    // 0x35bd58: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35bd58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_35bd5c:
    // 0x35bd5c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x35bd5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bd60: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35BD60u;
    SET_GPR_U32(ctx, 31, 0x35BD68u);
    ctx->pc = 0x35BD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BD60u;
    // 0x35bd64: 0x248456a8  addiu       $a0, $a0, 0x56A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35BD60u, 0x35BD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BD68u;
label_35bd68:
    // 0x35bd68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35bd68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35bd6c:
    // 0x35bd6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35bd6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35bd70: 0x3e00008  jr          $ra
    ctx->pc = 0x35BD70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35BD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BD70u;
        // 0x35bd74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35BD70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35BD78u;
}
