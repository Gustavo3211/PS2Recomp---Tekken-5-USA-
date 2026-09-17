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

// Function: sub_0022AD70
// Address: 0x22ad70 - 0x22add8
void sub_0022AD70_0x22ad70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022AD70_0x22ad70");
#endif

    switch (ctx->pc) {
        case 0x22ad90u: goto label_22ad90;
        case 0x22adc4u: goto label_22adc4;
        default: break;
    }

    ctx->pc = 0x22ad70u;

    // 0x22ad70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22ad70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22ad74: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x22ad74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x22ad78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22ad78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22ad7c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x22ad7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ad80: 0x248437e0  addiu       $a0, $a0, 0x37E0
    ctx->pc = 0x22ad80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    // 0x22ad84: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x22ad84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x22ad88: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x22AD88u;
    SET_GPR_U32(ctx, 31, 0x22AD90u);
    ctx->pc = 0x22AD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AD88u;
    // 0x22ad8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x22AD88u, 0x22AD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AD90u;
label_22ad90:
    // 0x22ad90: 0x24460068  addiu       $a2, $v0, 0x68
    ctx->pc = 0x22ad90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x22ad94: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x22ad94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x22ad98: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22AD98u;
    {
        const bool branch_taken_0x22ad98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AD98u;
        // 0x22ad9c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ad98) {
            ctx->pc = 0x22ADB0u;
            goto label_22adb0;
        }
    }
    ctx->pc = 0x22ADA0u;
    // 0x22ada0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x22ada0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x22ada4: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x22ada4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x22ada8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22ADA8u;
    {
        const bool branch_taken_0x22ada8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x22ada8) {
            ctx->pc = 0x22ADBCu;
            goto label_22adbc;
        }
    }
    ctx->pc = 0x22ADB0u;
label_22adb0:
    // 0x22adb0: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x22adb0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x22adb4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x22adb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22adb8: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x22adb8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_22adbc:
    // 0x22adbc: 0xc0b83a4  jal         func_2E0E90
    ctx->pc = 0x22ADBCu;
    SET_GPR_U32(ctx, 31, 0x22ADC4u);
    ctx->pc = 0x2E0E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0E90u, 0x22ADBCu, 0x22ADC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ADC4u;
label_22adc4:
    // 0x22adc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22adc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22adc8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x22adc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22adcc: 0x3e00008  jr          $ra
    ctx->pc = 0x22ADCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22ADD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ADCCu;
        // 0x22add0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22ADCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22ADD4u;
    // 0x22add4: 0x0  nop
    ctx->pc = 0x22add4u;
    // NOP
    ctx->pc = 0x22add8u;
}
