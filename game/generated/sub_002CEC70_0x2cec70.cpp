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

// Function: sub_002CEC70
// Address: 0x2cec70 - 0x2cecb8
void sub_002CEC70_0x2cec70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CEC70_0x2cec70");
#endif

    switch (ctx->pc) {
        case 0x2cec84u: goto label_2cec84;
        case 0x2ceca0u: goto label_2ceca0;
        case 0x2ceca8u: goto label_2ceca8;
        default: break;
    }

    ctx->pc = 0x2cec70u;

    // 0x2cec70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cec70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cec74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cec74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cec78: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2cec78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2cec7c: 0xc08e6d2  jal         func_239B48
    ctx->pc = 0x2CEC7Cu;
    SET_GPR_U32(ctx, 31, 0x2CEC84u);
    ctx->pc = 0x2CEC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEC7Cu;
    // 0x2cec80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239B48u, 0x2CEC7Cu, 0x2CEC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEC84u;
label_2cec84:
    // 0x2cec84: 0x30420060  andi        $v0, $v0, 0x60
    ctx->pc = 0x2cec84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
    // 0x2cec88: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CEC88u;
    {
        const bool branch_taken_0x2cec88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEC88u;
        // 0x2cec8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cec88) {
            ctx->pc = 0x2CECA8u;
            goto label_2ceca8;
        }
    }
    ctx->pc = 0x2CEC90u;
    // 0x2cec90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cec90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cec94: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x2cec94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
    // 0x2cec98: 0xc0b2e44  jal         func_2CB910
    ctx->pc = 0x2CEC98u;
    SET_GPR_U32(ctx, 31, 0x2CECA0u);
    ctx->pc = 0x2CEC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEC98u;
    // 0x2cec9c: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB910u, 0x2CEC98u, 0x2CECA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CECA0u;
label_2ceca0:
    // 0x2ceca0: 0xc092940  jal         func_24A500
    ctx->pc = 0x2CECA0u;
    SET_GPR_U32(ctx, 31, 0x2CECA8u);
    ctx->pc = 0x2CECA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CECA0u;
    // 0x2ceca4: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x2CECA0u, 0x2CECA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CECA8u;
label_2ceca8:
    // 0x2ceca8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ceca8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cecac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2cecacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cecb0: 0x3e00008  jr          $ra
    ctx->pc = 0x2CECB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CECB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CECB0u;
        // 0x2cecb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CECB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CECB8u;
}
