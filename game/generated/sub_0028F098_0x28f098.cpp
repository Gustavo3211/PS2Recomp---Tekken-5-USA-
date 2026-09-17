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

// Function: sub_0028F098
// Address: 0x28f098 - 0x28f0c8
void sub_0028F098_0x28f098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F098_0x28f098");
#endif

    switch (ctx->pc) {
        case 0x28f0a8u: goto label_28f0a8;
        default: break;
    }

    ctx->pc = 0x28f098u;

    // 0x28f098: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28f098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28f09c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28f09cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28f0a0: 0xc0a3c16  jal         func_28F058
    ctx->pc = 0x28F0A0u;
    SET_GPR_U32(ctx, 31, 0x28F0A8u);
    ctx->pc = 0x28F058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F058u, 0x28F0A0u, 0x28F0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F0A8u;
label_28f0a8:
    // 0x28f0a8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x28f0a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f0ac: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28F0ACu;
    {
        const bool branch_taken_0x28f0ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F0ACu;
        // 0x28f0b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f0ac) {
            ctx->pc = 0x28F0BCu;
            goto label_28f0bc;
        }
    }
    ctx->pc = 0x28F0B4u;
    // 0x28f0b4: 0x8c62016c  lw          $v0, 0x16C($v1)
    ctx->pc = 0x28f0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 364)));
    // 0x28f0b8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x28f0b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_28f0bc:
    // 0x28f0bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28f0bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f0c0: 0x3e00008  jr          $ra
    ctx->pc = 0x28F0C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F0C0u;
        // 0x28f0c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F0C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F0C8u;
}
