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

// Function: sub_0022FAB0
// Address: 0x22fab0 - 0x22faf0
void sub_0022FAB0_0x22fab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022FAB0_0x22fab0");
#endif

    switch (ctx->pc) {
        case 0x22fac4u: goto label_22fac4;
        default: break;
    }

    ctx->pc = 0x22fab0u;

    // 0x22fab0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22fab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22fab4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22fab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22fab8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x22fab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x22fabc: 0xc08be1a  jal         func_22F868
    ctx->pc = 0x22FABCu;
    SET_GPR_U32(ctx, 31, 0x22FAC4u);
    ctx->pc = 0x22FAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FABCu;
    // 0x22fac0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F868u, 0x22FABCu, 0x22FAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FAC4u;
label_22fac4:
    // 0x22fac4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22fac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22fac8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x22fac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22facc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22faccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22fad0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x22fad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22fad4: 0xac700004  sw          $s0, 0x4($v1)
    ctx->pc = 0x22fad4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
    // 0x22fad8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22fad8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22fadc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x22fadcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22fae0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x22fae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x22fae4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x22fae4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x22fae8: 0x3e00008  jr          $ra
    ctx->pc = 0x22FAE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22FAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FAE8u;
        // 0x22faec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22FAE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22FAF0u;
}
