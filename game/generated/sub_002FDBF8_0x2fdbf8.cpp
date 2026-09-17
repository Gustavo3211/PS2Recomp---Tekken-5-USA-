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

// Function: sub_002FDBF8
// Address: 0x2fdbf8 - 0x2fdc60
void sub_002FDBF8_0x2fdbf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FDBF8_0x2fdbf8");
#endif

    switch (ctx->pc) {
        case 0x2fdc18u: goto label_2fdc18;
        default: break;
    }

    ctx->pc = 0x2fdbf8u;

    // 0x2fdbf8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2fdbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2fdbfc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2fdbfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fdc00: 0x24431bc8  addiu       $v1, $v0, 0x1BC8
    ctx->pc = 0x2fdc00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 7112));
    // 0x2fdc04: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x2fdc04u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x481BC8u));
    // 0x2fdc08: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2FDC08u;
    {
        const bool branch_taken_0x2fdc08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDC08u;
        // 0x2fdc0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdc08) {
            ctx->pc = 0x2FDC54u;
            goto label_2fdc54;
        }
    }
    ctx->pc = 0x2FDC10u;
    // 0x2fdc10: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x2fdc10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fdc14: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x2fdc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_2fdc18:
    // 0x2fdc18: 0xc81821  addu        $v1, $a2, $t0
    ctx->pc = 0x2fdc18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x2fdc1c: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x2fdc1cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fdc20: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2fdc20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2fdc24: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x2fdc24u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fdc28: 0x28c3000a  slti        $v1, $a2, 0xA
    ctx->pc = 0x2fdc28u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2fdc2c: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FDC2Cu;
    {
        const bool branch_taken_0x2fdc2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2FDC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDC2Cu;
        // 0x2fdc30: 0xc82821  addu        $a1, $a2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdc2c) {
            ctx->pc = 0x2FDC40u;
            goto label_2fdc40;
        }
    }
    ctx->pc = 0x2FDC34u;
    // 0x2fdc34: 0xa0e0000e  sb          $zero, 0xE($a3)
    ctx->pc = 0x2fdc34u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 14), (uint8_t)GPR_U32(ctx, 0));
    // 0x2fdc38: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDC38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDC38u;
        // 0x2fdc3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDC38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDC40u;
label_2fdc40:
    // 0x2fdc40: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FDC40u;
    {
        const bool branch_taken_0x2fdc40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fdc40) {
            ctx->pc = 0x2FDC54u;
            goto label_2fdc54;
        }
    }
    ctx->pc = 0x2FDC48u;
    // 0x2fdc48: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x2fdc48u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fdc4c: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x2FDC4Cu;
    {
        const bool branch_taken_0x2fdc4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fdc4c) {
            ctx->pc = 0x2FDC50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FDC4Cu;
            // 0x2fdc50: 0xe61021  addu        $v0, $a3, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FDC18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fdc18;
        }
    }
    ctx->pc = 0x2FDC54u;
label_2fdc54:
    // 0x2fdc54: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDC54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDC54u;
        // 0x2fdc58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDC54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDC5Cu;
    // 0x2fdc5c: 0x0  nop
    ctx->pc = 0x2fdc5cu;
    // NOP
    ctx->pc = 0x2fdc60u;
}
