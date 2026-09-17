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

// Function: sub_0024ADA0
// Address: 0x24ada0 - 0x24add0
void sub_0024ADA0_0x24ada0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024ADA0_0x24ada0");
#endif

    ctx->pc = 0x24ada0u;

    // 0x24ada0: 0x28820008  slti        $v0, $a0, 0x8
    ctx->pc = 0x24ada0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x24ada4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24ada4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ada8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24ADA8u;
    {
        const bool branch_taken_0x24ada8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24ADACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ADA8u;
        // 0x24adac: 0x2883000f  slti        $v1, $a0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)15) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ada8) {
            ctx->pc = 0x24ADC8u;
            goto label_24adc8;
        }
    }
    ctx->pc = 0x24ADB0u;
    // 0x24adb0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x24ADB0u;
    {
        const bool branch_taken_0x24adb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24ADB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ADB0u;
        // 0x24adb4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24adb0) {
            ctx->pc = 0x24ADC8u;
            goto label_24adc8;
        }
    }
    ctx->pc = 0x24ADB8u;
    // 0x24adb8: 0x28830019  slti        $v1, $a0, 0x19
    ctx->pc = 0x24adb8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)25) ? 1 : 0);
    // 0x24adbc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x24adbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24adc0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x24adc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24adc4: 0x43280a  movz        $a1, $v0, $v1
    ctx->pc = 0x24adc4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_24adc8:
    // 0x24adc8: 0x3e00008  jr          $ra
    ctx->pc = 0x24ADC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24ADCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ADC8u;
        // 0x24adcc: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24ADC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24ADD0u;
}
