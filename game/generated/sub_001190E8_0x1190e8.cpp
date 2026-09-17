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

// Function: sub_001190E8
// Address: 0x1190e8 - 0x119130
void sub_001190E8_0x1190e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001190E8_0x1190e8");
#endif

    switch (ctx->pc) {
        case 0x1190f0u: goto label_1190f0;
        case 0x1190f8u: goto label_1190f8;
        case 0x119108u: goto label_119108;
        default: break;
    }

    ctx->pc = 0x1190e8u;

    // 0x1190e8: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x1190e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x1190ec: 0xc  syscall     0
    ctx->pc = 0x1190ecu;
    ctx->pc = 0x1190F0u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1190f0:
    // 0x1190f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1190F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1190F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1190F8u;
label_1190f8:
    // 0x1190f8: 0x63082  srl         $a2, $a2, 2
    ctx->pc = 0x1190f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x1190fc: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x1190FCu;
    {
        const bool branch_taken_0x1190fc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x119100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1190FCu;
        // 0x119100: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1190fc) {
            ctx->pc = 0x119128u;
            goto label_119128;
        }
    }
    ctx->pc = 0x119104u;
    // 0x119104: 0x0  nop
    ctx->pc = 0x119104u;
    // NOP
label_119108:
    // 0x119108: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x119108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11910c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x11910cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x119110: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x119110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x119114: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x119114u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x119118: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x119118u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x11911c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x11911cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x119120: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x119120u;
    {
        const bool branch_taken_0x119120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x119120) {
            ctx->pc = 0x119108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_119108;
        }
    }
    ctx->pc = 0x119128u;
label_119128:
    // 0x119128: 0x3e00008  jr          $ra
    ctx->pc = 0x119128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11912Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119128u;
        // 0x11912c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119130u;
}
