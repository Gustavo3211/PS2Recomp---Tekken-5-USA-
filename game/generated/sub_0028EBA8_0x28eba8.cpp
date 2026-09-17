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

// Function: sub_0028EBA8
// Address: 0x28eba8 - 0x28ebe0
void sub_0028EBA8_0x28eba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028EBA8_0x28eba8");
#endif

    switch (ctx->pc) {
        case 0x28ebb8u: goto label_28ebb8;
        default: break;
    }

    ctx->pc = 0x28eba8u;

    // 0x28eba8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28eba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28ebac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28ebacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28ebb0: 0xc0a3a88  jal         func_28EA20
    ctx->pc = 0x28EBB0u;
    SET_GPR_U32(ctx, 31, 0x28EBB8u);
    ctx->pc = 0x28EA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EA20u, 0x28EBB0u, 0x28EBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EBB8u;
label_28ebb8:
    // 0x28ebb8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x28ebb8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ebbc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x28EBBCu;
    {
        const bool branch_taken_0x28ebbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EBBCu;
        // 0x28ebc0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ebbc) {
            ctx->pc = 0x28EBD0u;
            goto label_28ebd0;
        }
    }
    ctx->pc = 0x28EBC4u;
    // 0x28ebc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28ebc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ebc8: 0x80a3a30  j           func_28E8C0
    ctx->pc = 0x28EBC8u;
    ctx->pc = 0x28EBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EBC8u;
    // 0x28ebcc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E8C0u, 0x28EBC8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x28EBD0u;
label_28ebd0:
    // 0x28ebd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28ebd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ebd4: 0x3e00008  jr          $ra
    ctx->pc = 0x28EBD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28EBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EBD4u;
        // 0x28ebd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EBD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28EBDCu;
    // 0x28ebdc: 0x0  nop
    ctx->pc = 0x28ebdcu;
    // NOP
    ctx->pc = 0x28ebe0u;
}
