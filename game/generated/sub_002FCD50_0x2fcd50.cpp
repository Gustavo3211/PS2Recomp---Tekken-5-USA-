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

// Function: sub_002FCD50
// Address: 0x2fcd50 - 0x2fcdb8
void sub_002FCD50_0x2fcd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FCD50_0x2fcd50");
#endif

    switch (ctx->pc) {
        case 0x2fcd70u: goto label_2fcd70;
        default: break;
    }

    ctx->pc = 0x2fcd50u;

    // 0x2fcd50: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2fcd50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2fcd54: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2fcd54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcd58: 0x24431bb8  addiu       $v1, $v0, 0x1BB8
    ctx->pc = 0x2fcd58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 7096));
    // 0x2fcd5c: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x2fcd5cu;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x481BB8u));
    // 0x2fcd60: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2FCD60u;
    {
        const bool branch_taken_0x2fcd60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCD60u;
        // 0x2fcd64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcd60) {
            ctx->pc = 0x2FCDACu;
            goto label_2fcdac;
        }
    }
    ctx->pc = 0x2FCD68u;
    // 0x2fcd68: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x2fcd68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcd6c: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x2fcd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_2fcd70:
    // 0x2fcd70: 0xc81821  addu        $v1, $a2, $t0
    ctx->pc = 0x2fcd70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x2fcd74: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x2fcd74u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fcd78: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2fcd78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2fcd7c: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x2fcd7cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fcd80: 0x28c3000e  slti        $v1, $a2, 0xE
    ctx->pc = 0x2fcd80u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x2fcd84: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FCD84u;
    {
        const bool branch_taken_0x2fcd84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2FCD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCD84u;
        // 0x2fcd88: 0xc82821  addu        $a1, $a2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcd84) {
            ctx->pc = 0x2FCD98u;
            goto label_2fcd98;
        }
    }
    ctx->pc = 0x2FCD8Cu;
    // 0x2fcd8c: 0xa0e0000e  sb          $zero, 0xE($a3)
    ctx->pc = 0x2fcd8cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 14), (uint8_t)GPR_U32(ctx, 0));
    // 0x2fcd90: 0x3e00008  jr          $ra
    ctx->pc = 0x2FCD90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FCD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCD90u;
        // 0x2fcd94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FCD90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FCD98u;
label_2fcd98:
    // 0x2fcd98: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FCD98u;
    {
        const bool branch_taken_0x2fcd98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fcd98) {
            ctx->pc = 0x2FCDACu;
            goto label_2fcdac;
        }
    }
    ctx->pc = 0x2FCDA0u;
    // 0x2fcda0: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x2fcda0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fcda4: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x2FCDA4u;
    {
        const bool branch_taken_0x2fcda4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fcda4) {
            ctx->pc = 0x2FCDA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FCDA4u;
            // 0x2fcda8: 0xe61021  addu        $v0, $a3, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FCD70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fcd70;
        }
    }
    ctx->pc = 0x2FCDACu;
label_2fcdac:
    // 0x2fcdac: 0x3e00008  jr          $ra
    ctx->pc = 0x2FCDACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FCDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCDACu;
        // 0x2fcdb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FCDACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FCDB4u;
    // 0x2fcdb4: 0x0  nop
    ctx->pc = 0x2fcdb4u;
    // NOP
    ctx->pc = 0x2fcdb8u;
}
