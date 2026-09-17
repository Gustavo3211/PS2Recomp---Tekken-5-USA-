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

// Function: sub_00503B78
// Address: 0x503b78 - 0x503bc8
void sub_00503B78_0x503b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00503B78_0x503b78");
#endif

    switch (ctx->pc) {
        case 0x503b80u: goto label_503b80;
        case 0x503bb4u: goto label_503bb4;
        default: break;
    }

    ctx->pc = 0x503b78u;

    // 0x503b78: 0x3e00008  jr          $ra
    ctx->pc = 0x503B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x503B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x503B78u;
        // 0x503b7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x503B78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x503B80u;
label_503b80:
    // 0x503b80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x503b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x503b84: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x503b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x503b88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x503b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x503b8c: 0x2442bf40  addiu       $v0, $v0, -0x40C0
    ctx->pc = 0x503b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950720));
    // 0x503b90: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x503b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x503b94: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x503b94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x503b98: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x503b98u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EBF44u));
    // 0x503b9c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x503B9Cu;
    {
        const bool branch_taken_0x503b9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x503BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x503B9Cu;
        // 0x503ba0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x503b9c) {
            ctx->pc = 0x503BB8u;
            goto label_503bb8;
        }
    }
    ctx->pc = 0x503BA4u;
    // 0x503ba4: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x503ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x503ba8: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x503ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x503bac: 0xc140f86  jal         func_503E18
    ctx->pc = 0x503BACu;
    SET_GPR_U32(ctx, 31, 0x503BB4u);
    ctx->pc = 0x503BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x503BACu;
    // 0x503bb0: 0x8c44c3c8  lw          $a0, -0x3C38($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951880)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x503E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x503E18u, 0x503BACu, 0x503BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x503BB4u;
label_503bb4:
    // 0x503bb4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x503bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_503bb8:
    // 0x503bb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x503bb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x503bbc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x503bbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x503bc0: 0x3e00008  jr          $ra
    ctx->pc = 0x503BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x503BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x503BC0u;
        // 0x503bc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x503BC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x503BC8u;
}
