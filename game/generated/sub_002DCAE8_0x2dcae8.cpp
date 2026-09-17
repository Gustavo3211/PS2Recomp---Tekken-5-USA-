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

// Function: sub_002DCAE8
// Address: 0x2dcae8 - 0x2dcb70
void sub_002DCAE8_0x2dcae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DCAE8_0x2dcae8");
#endif

    switch (ctx->pc) {
        case 0x2dcb00u: goto label_2dcb00;
        default: break;
    }

    ctx->pc = 0x2dcae8u;

    // 0x2dcae8: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x2dcae8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcaec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2dcaecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcaf0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2dcaf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2dcaf4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2dcaf4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcaf8: 0x240b0049  addiu       $t3, $zero, 0x49
    ctx->pc = 0x2dcaf8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x2dcafc: 0x240a004c  addiu       $t2, $zero, 0x4C
    ctx->pc = 0x2dcafcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_2dcb00:
    // 0x2dcb00: 0x14eb0004  bne         $a3, $t3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DCB00u;
    {
        const bool branch_taken_0x2dcb00 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 11));
        ctx->pc = 0x2DCB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCB00u;
        // 0x2dcb04: 0xa81821  addu        $v1, $a1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcb00) {
            ctx->pc = 0x2DCB14u;
            goto label_2dcb14;
        }
    }
    ctx->pc = 0x2DCB08u;
    // 0x2dcb08: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x2dcb08u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2dcb0c: 0x504a0001  beql        $v0, $t2, . + 4 + (0x1 << 2)
    ctx->pc = 0x2DCB0Cu;
    {
        const bool branch_taken_0x2dcb0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 10));
        if (branch_taken_0x2dcb0c) {
            ctx->pc = 0x2DCB10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DCB0Cu;
            // 0x2dcb10: 0xa0670000  sb          $a3, 0x0($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DCB14u;
            goto label_2dcb14;
        }
    }
    ctx->pc = 0x2DCB14u;
label_2dcb14:
    // 0x2dcb14: 0x14ea0005  bne         $a3, $t2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DCB14u;
    {
        const bool branch_taken_0x2dcb14 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 10));
        ctx->pc = 0x2DCB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCB14u;
        // 0x2dcb18: 0x80620000  lb          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcb14) {
            ctx->pc = 0x2DCB2Cu;
            goto label_2dcb2c;
        }
    }
    ctx->pc = 0x2DCB1Cu;
    // 0x2dcb1c: 0x144b0005  bne         $v0, $t3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DCB1Cu;
    {
        const bool branch_taken_0x2dcb1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 11));
        if (branch_taken_0x2dcb1c) {
            ctx->pc = 0x2DCB34u;
            goto label_2dcb34;
        }
    }
    ctx->pc = 0x2DCB24u;
    // 0x2dcb24: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x2dcb24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x2dcb28: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x2dcb28u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2dcb2c:
    // 0x2dcb2c: 0x104b0004  beq         $v0, $t3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DCB2Cu;
    {
        const bool branch_taken_0x2dcb2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 11));
        ctx->pc = 0x2DCB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCB2Cu;
        // 0x2dcb30: 0x80620000  lb          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcb2c) {
            ctx->pc = 0x2DCB40u;
            goto label_2dcb40;
        }
    }
    ctx->pc = 0x2DCB34u;
label_2dcb34:
    // 0x2dcb34: 0x144a0004  bne         $v0, $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DCB34u;
    {
        const bool branch_taken_0x2dcb34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 10));
        ctx->pc = 0x2DCB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCB34u;
        // 0x2dcb38: 0x90660000  lbu         $a2, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcb34) {
            ctx->pc = 0x2DCB48u;
            goto label_2dcb48;
        }
    }
    ctx->pc = 0x2DCB3Cu;
    // 0x2dcb3c: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x2dcb3cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2dcb40:
    // 0x2dcb40: 0x10e20005  beq         $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DCB40u;
    {
        const bool branch_taken_0x2dcb40 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DCB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCB40u;
        // 0x2dcb44: 0x90660000  lbu         $a2, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcb40) {
            ctx->pc = 0x2DCB58u;
            goto label_2dcb58;
        }
    }
    ctx->pc = 0x2DCB48u;
label_2dcb48:
    // 0x2dcb48: 0x1241021  addu        $v0, $t1, $a0
    ctx->pc = 0x2dcb48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x2dcb4c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2dcb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2dcb50: 0xa0460000  sb          $a2, 0x0($v0)
    ctx->pc = 0x2dcb50u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x2dcb54: 0x80670000  lb          $a3, 0x0($v1)
    ctx->pc = 0x2dcb54u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2dcb58:
    // 0x2dcb58: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2dcb58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2dcb5c: 0x29020028  slti        $v0, $t0, 0x28
    ctx->pc = 0x2dcb5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x2dcb60: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x2DCB60u;
    {
        const bool branch_taken_0x2dcb60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DCB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCB60u;
        // 0x2dcb64: 0x1241021  addu        $v0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcb60) {
            ctx->pc = 0x2DCB00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dcb00;
        }
    }
    ctx->pc = 0x2DCB68u;
    // 0x2dcb68: 0x3e00008  jr          $ra
    ctx->pc = 0x2DCB68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DCB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCB68u;
        // 0x2dcb6c: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DCB68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DCB70u;
}
