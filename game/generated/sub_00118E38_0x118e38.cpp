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

// Function: sub_00118E38
// Address: 0x118e38 - 0x118e78
void sub_00118E38_0x118e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118E38_0x118e38");
#endif

    switch (ctx->pc) {
        case 0x118e40u: goto label_118e40;
        case 0x118e48u: goto label_118e48;
        case 0x118e50u: goto label_118e50;
        default: break;
    }

    ctx->pc = 0x118e38u;

    // 0x118e38: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x118e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x118e3c: 0xc  syscall     0
    ctx->pc = 0x118e3cu;
    ctx->pc = 0x118E40u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_118e40:
    // 0x118e40: 0x3e00008  jr          $ra
    ctx->pc = 0x118E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118E40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118E48u;
label_118e48:
    // 0x118e48: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x118E48u;
    {
        const bool branch_taken_0x118e48 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x118E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118E48u;
        // 0x118e4c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118e48) {
            ctx->pc = 0x118E70u;
            goto label_118e70;
        }
    }
    ctx->pc = 0x118E50u;
label_118e50:
    // 0x118e50: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x118e50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x118e54: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x118e54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x118e58: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x118e58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x118e5c: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x118e5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x118e60: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x118e60u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x118e64: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x118e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x118e68: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x118E68u;
    {
        const bool branch_taken_0x118e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x118e68) {
            ctx->pc = 0x118E50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_118e50;
        }
    }
    ctx->pc = 0x118E70u;
label_118e70:
    // 0x118e70: 0x3e00008  jr          $ra
    ctx->pc = 0x118E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118E70u;
        // 0x118e74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118E70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118E78u;
}
