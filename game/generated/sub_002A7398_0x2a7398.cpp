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

// Function: sub_002A7398
// Address: 0x2a7398 - 0x2a7400
void sub_002A7398_0x2a7398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A7398_0x2a7398");
#endif

    switch (ctx->pc) {
        case 0x2a73a0u: goto label_2a73a0;
        case 0x2a73d8u: goto label_2a73d8;
        default: break;
    }

    ctx->pc = 0x2a7398u;

    // 0x2a7398: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A7398u;
    {
        const bool branch_taken_0x2a7398 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A739Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7398u;
        // 0x2a739c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7398) {
            ctx->pc = 0x2A73BCu;
            goto label_2a73bc;
        }
    }
    ctx->pc = 0x2A73A0u;
label_2a73a0:
    // 0x2a73a0: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x2a73a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2a73a4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2a73a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2a73a8: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x2a73a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2a73ac: 0x0  nop
    ctx->pc = 0x2a73acu;
    // NOP
    // 0x2a73b0: 0x0  nop
    ctx->pc = 0x2a73b0u;
    // NOP
    // 0x2a73b4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2A73B4u;
    {
        const bool branch_taken_0x2a73b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A73B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A73B4u;
        // 0x2a73b8: 0xa0650000  sb          $a1, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a73b4) {
            ctx->pc = 0x2A73A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a73a0;
        }
    }
    ctx->pc = 0x2A73BCu;
label_2a73bc:
    // 0x2a73bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2A73BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A73BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A73C4u;
    // 0x2a73c4: 0x0  nop
    ctx->pc = 0x2a73c4u;
    // NOP
    // 0x2a73c8: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2a73c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a73cc: 0x18c00009  blez        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A73CCu;
    {
        const bool branch_taken_0x2a73cc = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2A73D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A73CCu;
        // 0x2a73d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a73cc) {
            ctx->pc = 0x2A73F4u;
            goto label_2a73f4;
        }
    }
    ctx->pc = 0x2A73D4u;
    // 0x2a73d4: 0x0  nop
    ctx->pc = 0x2a73d4u;
    // NOP
label_2a73d8:
    // 0x2a73d8: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x2a73d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2a73dc: 0x1072021  addu        $a0, $t0, $a3
    ctx->pc = 0x2a73dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x2a73e0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2a73e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a73e4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2a73e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2a73e8: 0xe6102a  slt         $v0, $a3, $a2
    ctx->pc = 0x2a73e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2a73ec: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2A73ECu;
    {
        const bool branch_taken_0x2a73ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A73F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A73ECu;
        // 0x2a73f0: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a73ec) {
            ctx->pc = 0x2A73D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a73d8;
        }
    }
    ctx->pc = 0x2A73F4u;
label_2a73f4:
    // 0x2a73f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A73F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A73F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A73FCu;
    // 0x2a73fc: 0x0  nop
    ctx->pc = 0x2a73fcu;
    // NOP
    ctx->pc = 0x2a7400u;
}
