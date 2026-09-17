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

// Function: sub_00304840
// Address: 0x304840 - 0x304860
void sub_00304840_0x304840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304840_0x304840");
#endif

    switch (ctx->pc) {
        case 0x304850u: goto label_304850;
        default: break;
    }

    ctx->pc = 0x304840u;

    // 0x304840: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x304840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x304844: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x304844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x304848: 0xc0be9e6  jal         func_2FA798
    ctx->pc = 0x304848u;
    SET_GPR_U32(ctx, 31, 0x304850u);
    ctx->pc = 0x30484Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304848u;
    // 0x30484c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA798u, 0x304848u, 0x304850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304850u;
label_304850:
    // 0x304850: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x304850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x304854: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x304854u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x304858: 0x3e00008  jr          $ra
    ctx->pc = 0x304858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30485Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304858u;
        // 0x30485c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304860u;
}
