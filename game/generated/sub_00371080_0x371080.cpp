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

// Function: sub_00371080
// Address: 0x371080 - 0x3710e0
void sub_00371080_0x371080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00371080_0x371080");
#endif

    switch (ctx->pc) {
        case 0x3710a4u: goto label_3710a4;
        case 0x3710bcu: goto label_3710bc;
        default: break;
    }

    ctx->pc = 0x371080u;

    // 0x371080: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x371080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x371084: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x371084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x371088: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x371088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x37108c: 0x24507550  addiu       $s0, $v0, 0x7550
    ctx->pc = 0x37108cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 30032));
    // 0x371090: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x371090u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D7550u));
    // 0x371094: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x371094u;
    {
        const bool branch_taken_0x371094 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x371098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371094u;
        // 0x371098: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371094) {
            ctx->pc = 0x3710BCu;
            goto label_3710bc;
        }
    }
    ctx->pc = 0x37109Cu;
    // 0x37109c: 0xc0dae78  jal         func_36B9E0
    ctx->pc = 0x37109Cu;
    SET_GPR_U32(ctx, 31, 0x3710A4u);
    ctx->pc = 0x36B9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36B9E0u, 0x37109Cu, 0x3710A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3710A4u;
label_3710a4:
    // 0x3710a4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3710a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3710a8: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x3710a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x3710ac: 0x24a50c60  addiu       $a1, $a1, 0xC60
    ctx->pc = 0x3710acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3168));
    // 0x3710b0: 0x24c66ec8  addiu       $a2, $a2, 0x6EC8
    ctx->pc = 0x3710b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28360));
    // 0x3710b4: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x3710B4u;
    SET_GPR_U32(ctx, 31, 0x3710BCu);
    ctx->pc = 0x3710B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3710B4u;
    // 0x3710b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x3710B4u, 0x3710BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3710BCu;
label_3710bc:
    // 0x3710bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3710bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3710c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3710c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3710c4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3710c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3710c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3710C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3710CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3710C8u;
        // 0x3710cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3710C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3710D0u;
    // 0x3710d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3710D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3710D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3710D0u;
        // 0x3710d4: 0xac85015c  sw          $a1, 0x15C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 348), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3710D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3710D8u;
    // 0x3710d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3710D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3710DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3710D8u;
        // 0x3710dc: 0x8c82015c  lw          $v0, 0x15C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 348)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3710D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3710E0u;
}
