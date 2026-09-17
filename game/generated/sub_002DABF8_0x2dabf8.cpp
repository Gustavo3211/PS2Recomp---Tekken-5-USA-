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

// Function: sub_002DABF8
// Address: 0x2dabf8 - 0x2dac48
void sub_002DABF8_0x2dabf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DABF8_0x2dabf8");
#endif

    switch (ctx->pc) {
        case 0x2dac08u: goto label_2dac08;
        default: break;
    }

    ctx->pc = 0x2dabf8u;

    // 0x2dabf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dabf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dabfc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dabfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dac00: 0xc089622  jal         func_225888
    ctx->pc = 0x2DAC00u;
    SET_GPR_U32(ctx, 31, 0x2DAC08u);
    ctx->pc = 0x2DAC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAC00u;
    // 0x2dac04: 0x24040046  addiu       $a0, $zero, 0x46 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225888u, 0x2DAC00u, 0x2DAC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAC08u;
label_2dac08:
    // 0x2dac08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dac08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dac0c: 0x8f83bbe0  lw          $v1, -0x4420($gp)
    ctx->pc = 0x2dac0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949856)));
    // 0x2dac10: 0x38820001  xori        $v0, $a0, 0x1
    ctx->pc = 0x2dac10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x2dac14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dac14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dac18: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x2dac18u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x2dac1c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DAC1Cu;
    {
        const bool branch_taken_0x2dac1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DAC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAC1Cu;
        // 0x2dac20: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dac1c) {
            ctx->pc = 0x2DAC30u;
            goto label_2dac30;
        }
    }
    ctx->pc = 0x2DAC24u;
    // 0x2dac24: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2DAC24u;
    {
        const bool branch_taken_0x2dac24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAC24u;
        // 0x2dac28: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dac24) {
            ctx->pc = 0x2DAC34u;
            goto label_2dac34;
        }
    }
    ctx->pc = 0x2DAC2Cu;
    // 0x2dac2c: 0x0  nop
    ctx->pc = 0x2dac2cu;
    // NOP
label_2dac30:
    // 0x2dac30: 0xaf82bbe0  sw          $v0, -0x4420($gp)
    ctx->pc = 0x2dac30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949856), GPR_U32(ctx, 2));
label_2dac34:
    // 0x2dac34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dac34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dac38: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2dac38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dac3c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DAC3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DAC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAC3Cu;
        // 0x2dac40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DAC3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DAC44u;
    // 0x2dac44: 0x0  nop
    ctx->pc = 0x2dac44u;
    // NOP
    ctx->pc = 0x2dac48u;
}
