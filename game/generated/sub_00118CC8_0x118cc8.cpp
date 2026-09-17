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

// Function: sub_00118CC8
// Address: 0x118cc8 - 0x118d10
void sub_00118CC8_0x118cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118CC8_0x118cc8");
#endif

    switch (ctx->pc) {
        case 0x118cd0u: goto label_118cd0;
        case 0x118cd8u: goto label_118cd8;
        case 0x118ce8u: goto label_118ce8;
        default: break;
    }

    ctx->pc = 0x118cc8u;

    // 0x118cc8: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x118cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x118ccc: 0xc  syscall     0
    ctx->pc = 0x118cccu;
    ctx->pc = 0x118CD0u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_118cd0:
    // 0x118cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x118CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118CD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118CD8u;
label_118cd8:
    // 0x118cd8: 0x63082  srl         $a2, $a2, 2
    ctx->pc = 0x118cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x118cdc: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x118CDCu;
    {
        const bool branch_taken_0x118cdc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x118CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118CDCu;
        // 0x118ce0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118cdc) {
            ctx->pc = 0x118D08u;
            goto label_118d08;
        }
    }
    ctx->pc = 0x118CE4u;
    // 0x118ce4: 0x0  nop
    ctx->pc = 0x118ce4u;
    // NOP
label_118ce8:
    // 0x118ce8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x118ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x118cec: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x118cecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x118cf0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x118cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x118cf4: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x118cf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x118cf8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x118cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x118cfc: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x118cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x118d00: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x118D00u;
    {
        const bool branch_taken_0x118d00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x118d00) {
            ctx->pc = 0x118CE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_118ce8;
        }
    }
    ctx->pc = 0x118D08u;
label_118d08:
    // 0x118d08: 0x3e00008  jr          $ra
    ctx->pc = 0x118D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118D08u;
        // 0x118d0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118D08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118D10u;
}
