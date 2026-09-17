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

// Function: sub_00118AC8
// Address: 0x118ac8 - 0x118b08
void sub_00118AC8_0x118ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118AC8_0x118ac8");
#endif

    switch (ctx->pc) {
        case 0x118ae0u: goto label_118ae0;
        default: break;
    }

    ctx->pc = 0x118ac8u;

    // 0x118ac8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x118ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x118acc: 0x1046000b  beq         $v0, $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x118ACCu;
    {
        const bool branch_taken_0x118acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x118AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118ACCu;
        // 0x118ad0: 0x85102b  sltu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x118acc) {
            ctx->pc = 0x118AFCu;
            goto label_118afc;
        }
    }
    ctx->pc = 0x118AD4u;
    // 0x118ad4: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x118AD4u;
    {
        const bool branch_taken_0x118ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x118ad4) {
            ctx->pc = 0x118AD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x118AD4u;
            // 0x118ad8: 0x2200a  movz        $a0, $zero, $v0 (Delay Slot)
            if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x118B00u;
            goto label_118b00;
        }
    }
    ctx->pc = 0x118ADCu;
    // 0x118adc: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x118adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_118ae0:
    // 0x118ae0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x118ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x118ae4: 0x10460005  beq         $v0, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x118AE4u;
    {
        const bool branch_taken_0x118ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x118AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118AE4u;
        // 0x118ae8: 0x85102b  sltu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x118ae4) {
            ctx->pc = 0x118AFCu;
            goto label_118afc;
        }
    }
    ctx->pc = 0x118AECu;
    // 0x118aec: 0x5440fffc  bnel        $v0, $zero, . + 4 + (-0x4 << 2)
    ctx->pc = 0x118AECu;
    {
        const bool branch_taken_0x118aec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x118aec) {
            ctx->pc = 0x118AF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x118AECu;
            // 0x118af0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x118AE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_118ae0;
        }
    }
    ctx->pc = 0x118AF4u;
    // 0x118af4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x118AF4u;
    {
        const bool branch_taken_0x118af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118AF4u;
        // 0x118af8: 0x2200a  movz        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118af4) {
            ctx->pc = 0x118B00u;
            goto label_118b00;
        }
    }
    ctx->pc = 0x118AFCu;
label_118afc:
    // 0x118afc: 0x2200a  movz        $a0, $zero, $v0
    ctx->pc = 0x118afcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_118b00:
    // 0x118b00: 0x3e00008  jr          $ra
    ctx->pc = 0x118B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118B00u;
        // 0x118b04: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118B00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118B08u;
}
