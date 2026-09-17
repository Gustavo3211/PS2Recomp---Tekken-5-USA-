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

// Function: sub_00239FA0
// Address: 0x239fa0 - 0x23a000
void sub_00239FA0_0x239fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239FA0_0x239fa0");
#endif

    switch (ctx->pc) {
        case 0x239fb4u: goto label_239fb4;
        case 0x239fb8u: goto label_239fb8;
        case 0x239fc0u: goto label_239fc0;
        case 0x239fd0u: goto label_239fd0;
        case 0x239fe4u: goto label_239fe4;
        default: break;
    }

    ctx->pc = 0x239fa0u;

    // 0x239fa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x239fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x239fa4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x239fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x239fa8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x239fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x239fac: 0xc08e7d4  jal         func_239F50
    ctx->pc = 0x239FACu;
    SET_GPR_U32(ctx, 31, 0x239FB4u);
    ctx->pc = 0x239FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239FACu;
    // 0x239fb0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239F50u, 0x239FACu, 0x239FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239FB4u;
label_239fb4:
    // 0x239fb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x239fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_239fb8:
    // 0x239fb8: 0xc08e714  jal         func_239C50
    ctx->pc = 0x239FB8u;
    SET_GPR_U32(ctx, 31, 0x239FC0u);
    ctx->pc = 0x239FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239FB8u;
    // 0x239fbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239C50u, 0x239FB8u, 0x239FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239FC0u;
label_239fc0:
    // 0x239fc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x239fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239fc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x239fc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239fc8: 0xc08e720  jal         func_239C80
    ctx->pc = 0x239FC8u;
    SET_GPR_U32(ctx, 31, 0x239FD0u);
    ctx->pc = 0x239FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239FC8u;
    // 0x239fcc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239C80u, 0x239FC8u, 0x239FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239FD0u;
label_239fd0:
    // 0x239fd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x239fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239fd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x239fd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239fd8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x239fd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239fdc: 0xc08e720  jal         func_239C80
    ctx->pc = 0x239FDCu;
    SET_GPR_U32(ctx, 31, 0x239FE4u);
    ctx->pc = 0x239FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239FDCu;
    // 0x239fe0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239C80u, 0x239FDCu, 0x239FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239FE4u;
label_239fe4:
    // 0x239fe4: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x239fe4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x239fe8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x239FE8u;
    {
        const bool branch_taken_0x239fe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x239FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239FE8u;
        // 0x239fec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239fe8) {
            ctx->pc = 0x239FB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_239fb8;
        }
    }
    ctx->pc = 0x239FF0u;
    // 0x239ff0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x239ff0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239ff4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x239ff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x239ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x239FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239FF8u;
        // 0x239ffc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239FF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A000u;
}
