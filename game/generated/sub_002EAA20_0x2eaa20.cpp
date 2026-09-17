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

// Function: sub_002EAA20
// Address: 0x2eaa20 - 0x2eaa78
void sub_002EAA20_0x2eaa20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EAA20_0x2eaa20");
#endif

    switch (ctx->pc) {
        case 0x2eaa38u: goto label_2eaa38;
        case 0x2eaa68u: goto label_2eaa68;
        default: break;
    }

    ctx->pc = 0x2eaa20u;

    // 0x2eaa20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2eaa20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2eaa24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2eaa24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2eaa28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2eaa28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaa2c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2eaa2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2eaa30: 0xc0bbf56  jal         func_2EFD58
    ctx->pc = 0x2EAA30u;
    SET_GPR_U32(ctx, 31, 0x2EAA38u);
    ctx->pc = 0x2EAA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAA30u;
    // 0x2eaa34: 0x26100140  addiu       $s0, $s0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EFD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFD58u, 0x2EAA30u, 0x2EAA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAA38u;
label_2eaa38:
    // 0x2eaa38: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2eaa38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2eaa3c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EAA3Cu;
    {
        const bool branch_taken_0x2eaa3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eaa3c) {
            ctx->pc = 0x2EAA40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EAA3Cu;
            // 0x2eaa40: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EAA58u;
            goto label_2eaa58;
        }
    }
    ctx->pc = 0x2EAA44u;
    // 0x2eaa44: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2eaa44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2eaa48: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2eaa48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2eaa4c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EAA4Cu;
    {
        const bool branch_taken_0x2eaa4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2eaa4c) {
            ctx->pc = 0x2EAA60u;
            goto label_2eaa60;
        }
    }
    ctx->pc = 0x2EAA54u;
    // 0x2eaa54: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2eaa54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2eaa58:
    // 0x2eaa58: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2eaa58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaa5c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2eaa5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2eaa60:
    // 0x2eaa60: 0xc0ba5d2  jal         func_2E9748
    ctx->pc = 0x2EAA60u;
    SET_GPR_U32(ctx, 31, 0x2EAA68u);
    ctx->pc = 0x2E9748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9748u, 0x2EAA60u, 0x2EAA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAA68u;
label_2eaa68:
    // 0x2eaa68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2eaa68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eaa6c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2eaa6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2eaa70: 0x3e00008  jr          $ra
    ctx->pc = 0x2EAA70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EAA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAA70u;
        // 0x2eaa74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EAA70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EAA78u;
}
