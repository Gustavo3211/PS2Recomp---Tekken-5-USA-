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

// Function: sub_0028F068
// Address: 0x28f068 - 0x28f098
void sub_0028F068_0x28f068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F068_0x28f068");
#endif

    switch (ctx->pc) {
        case 0x28f078u: goto label_28f078;
        default: break;
    }

    ctx->pc = 0x28f068u;

    // 0x28f068: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28f068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28f06c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28f06cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28f070: 0xc0a3c16  jal         func_28F058
    ctx->pc = 0x28F070u;
    SET_GPR_U32(ctx, 31, 0x28F078u);
    ctx->pc = 0x28F058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F058u, 0x28F070u, 0x28F078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F078u;
label_28f078:
    // 0x28f078: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x28f078u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f07c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x28F07Cu;
    {
        const bool branch_taken_0x28f07c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F07Cu;
        // 0x28f080: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f07c) {
            ctx->pc = 0x28F088u;
            goto label_28f088;
        }
    }
    ctx->pc = 0x28F084u;
    // 0x28f084: 0x8c62013c  lw          $v0, 0x13C($v1)
    ctx->pc = 0x28f084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 316)));
label_28f088:
    // 0x28f088: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28f088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f08c: 0x3e00008  jr          $ra
    ctx->pc = 0x28F08Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F08Cu;
        // 0x28f090: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F08Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F094u;
    // 0x28f094: 0x0  nop
    ctx->pc = 0x28f094u;
    // NOP
    ctx->pc = 0x28f098u;
}
