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

// Function: sub_00299008
// Address: 0x299008 - 0x299098
void sub_00299008_0x299008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299008_0x299008");
#endif

    switch (ctx->pc) {
        case 0x299048u: goto label_299048;
        case 0x299070u: goto label_299070;
        default: break;
    }

    ctx->pc = 0x299008u;

    // 0x299008: 0x2c820011  sltiu       $v0, $a0, 0x11
    ctx->pc = 0x299008u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x29900c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x29900cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x299010: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x299010u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x299014: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x299014u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x299018: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x299018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x29901c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x29901cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x299020: 0x3e00008  jr          $ra
    ctx->pc = 0x299020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299020u;
        // 0x299024: 0x8c42beb8  lw          $v0, -0x4148($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950584)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299028u;
    // 0x299028: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x299028u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29902c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x29902Cu;
    {
        const bool branch_taken_0x29902c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29902c) {
            ctx->pc = 0x29908Cu;
            goto label_29908c;
        }
    }
    ctx->pc = 0x299034u;
    // 0x299034: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x299034u;
    {
        const bool branch_taken_0x299034 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x299034) {
            ctx->pc = 0x29908Cu;
            goto label_29908c;
        }
    }
    ctx->pc = 0x29903Cu;
    // 0x29903c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x29903Cu;
    {
        const bool branch_taken_0x29903c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29903c) {
            ctx->pc = 0x299054u;
            goto label_299054;
        }
    }
    ctx->pc = 0x299044u;
    // 0x299044: 0x0  nop
    ctx->pc = 0x299044u;
    // NOP
label_299048:
    // 0x299048: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x299048u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x29904c: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x29904cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x299050: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x299050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_299054:
    // 0x299054: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x299054u;
    {
        const bool branch_taken_0x299054 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x299054) {
            ctx->pc = 0x29908Cu;
            goto label_29908c;
        }
    }
    ctx->pc = 0x29905Cu;
    // 0x29905c: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x29905cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x299060: 0x5460fff9  bnel        $v1, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x299060u;
    {
        const bool branch_taken_0x299060 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x299060) {
            ctx->pc = 0x299064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x299060u;
            // 0x299064: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x299048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_299048;
        }
    }
    ctx->pc = 0x299068u;
    // 0x299068: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x299068u;
    {
        const bool branch_taken_0x299068 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x299068) {
            ctx->pc = 0x29908Cu;
            goto label_29908c;
        }
    }
    ctx->pc = 0x299070u;
label_299070:
    // 0x299070: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x299070u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x299074: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x299074u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x299078: 0x0  nop
    ctx->pc = 0x299078u;
    // NOP
    // 0x29907c: 0x0  nop
    ctx->pc = 0x29907cu;
    // NOP
    // 0x299080: 0x0  nop
    ctx->pc = 0x299080u;
    // NOP
    // 0x299084: 0x14c0fffa  bnez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x299084u;
    {
        const bool branch_taken_0x299084 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x299088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299084u;
        // 0x299088: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299084) {
            ctx->pc = 0x299070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_299070;
        }
    }
    ctx->pc = 0x29908Cu;
label_29908c:
    // 0x29908c: 0x3e00008  jr          $ra
    ctx->pc = 0x29908Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29908Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299094u;
    // 0x299094: 0x0  nop
    ctx->pc = 0x299094u;
    // NOP
    ctx->pc = 0x299098u;
}
