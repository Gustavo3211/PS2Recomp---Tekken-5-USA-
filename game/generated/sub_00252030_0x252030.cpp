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

// Function: sub_00252030
// Address: 0x252030 - 0x252088
void sub_00252030_0x252030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252030_0x252030");
#endif

    switch (ctx->pc) {
        case 0x252040u: goto label_252040;
        case 0x252058u: goto label_252058;
        default: break;
    }

    ctx->pc = 0x252030u;

    // 0x252030: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x252030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x252034: 0x24050067  addiu       $a1, $zero, 0x67
    ctx->pc = 0x252034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x252038: 0x24447f70  addiu       $a0, $v0, 0x7F70
    ctx->pc = 0x252038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32624));
    // 0x25203c: 0x0  nop
    ctx->pc = 0x25203cu;
    // NOP
label_252040:
    // 0x252040: 0x9482000e  lhu         $v0, 0xE($a0)
    ctx->pc = 0x252040u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x252044: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x252044u;
    {
        const bool branch_taken_0x252044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x252044) {
            ctx->pc = 0x252048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252044u;
            // 0x252048: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252078u;
            goto label_252078;
        }
    }
    ctx->pc = 0x25204Cu;
    // 0x25204c: 0x8482000c  lh          $v0, 0xC($a0)
    ctx->pc = 0x25204cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x252050: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x252050u;
    {
        const bool branch_taken_0x252050 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x252054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252050u;
        // 0x252054: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252050) {
            ctx->pc = 0x252074u;
            goto label_252074;
        }
    }
    ctx->pc = 0x252058u;
label_252058:
    // 0x252058: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x252058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x25205c: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x25205cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
    // 0x252060: 0x0  nop
    ctx->pc = 0x252060u;
    // NOP
    // 0x252064: 0x0  nop
    ctx->pc = 0x252064u;
    // NOP
    // 0x252068: 0x0  nop
    ctx->pc = 0x252068u;
    // NOP
    // 0x25206c: 0x1c40fffa  bgtz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x25206Cu;
    {
        const bool branch_taken_0x25206c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x252070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25206Cu;
        // 0x252070: 0x24630030  addiu       $v1, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25206c) {
            ctx->pc = 0x252058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_252058;
        }
    }
    ctx->pc = 0x252074u;
label_252074:
    // 0x252074: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x252074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_252078:
    // 0x252078: 0x1ca0fff1  bgtz        $a1, . + 4 + (-0xF << 2)
    ctx->pc = 0x252078u;
    {
        const bool branch_taken_0x252078 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x25207Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252078u;
        // 0x25207c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252078) {
            ctx->pc = 0x252040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_252040;
        }
    }
    ctx->pc = 0x252080u;
    // 0x252080: 0x3e00008  jr          $ra
    ctx->pc = 0x252080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252088u;
}
