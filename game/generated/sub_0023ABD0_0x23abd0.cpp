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

// Function: sub_0023ABD0
// Address: 0x23abd0 - 0x23ac28
void sub_0023ABD0_0x23abd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023ABD0_0x23abd0");
#endif

    ctx->pc = 0x23abd0u;

    // 0x23abd0: 0x8f83a918  lw          $v1, -0x56E8($gp)
    ctx->pc = 0x23abd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945048)));
    // 0x23abd4: 0x90620074  lbu         $v0, 0x74($v1)
    ctx->pc = 0x23abd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x23abd8: 0x3e00008  jr          $ra
    ctx->pc = 0x23ABD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23ABDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ABD8u;
        // 0x23abdc: 0x211fa  dsrl        $v0, $v0, 7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 7);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23ABD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23ABE0u;
    // 0x23abe0: 0x8f83a918  lw          $v1, -0x56E8($gp)
    ctx->pc = 0x23abe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945048)));
    // 0x23abe4: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x23abe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x23abe8: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x23abe8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x23abec: 0x3e00008  jr          $ra
    ctx->pc = 0x23ABECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23ABF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ABECu;
        // 0x23abf0: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23ABECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23ABF4u;
    // 0x23abf4: 0x0  nop
    ctx->pc = 0x23abf4u;
    // NOP
    // 0x23abf8: 0x8f83a918  lw          $v1, -0x56E8($gp)
    ctx->pc = 0x23abf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945048)));
    // 0x23abfc: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x23abfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x23ac00: 0x21243  sra         $v0, $v0, 9
    ctx->pc = 0x23ac00u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 9));
    // 0x23ac04: 0x3e00008  jr          $ra
    ctx->pc = 0x23AC04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23AC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AC04u;
        // 0x23ac08: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23AC04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23AC0Cu;
    // 0x23ac0c: 0x0  nop
    ctx->pc = 0x23ac0cu;
    // NOP
    // 0x23ac10: 0x8f83a918  lw          $v1, -0x56E8($gp)
    ctx->pc = 0x23ac10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945048)));
    // 0x23ac14: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x23ac14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x23ac18: 0x21303  sra         $v0, $v0, 12
    ctx->pc = 0x23ac18u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 12));
    // 0x23ac1c: 0x3e00008  jr          $ra
    ctx->pc = 0x23AC1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23AC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AC1Cu;
        // 0x23ac20: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23AC1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23AC24u;
    // 0x23ac24: 0x0  nop
    ctx->pc = 0x23ac24u;
    // NOP
    ctx->pc = 0x23ac28u;
}
