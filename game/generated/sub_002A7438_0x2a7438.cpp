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

// Function: sub_002A7438
// Address: 0x2a7438 - 0x2a74b0
void sub_002A7438_0x2a7438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A7438_0x2a7438");
#endif

    switch (ctx->pc) {
        case 0x2a7450u: goto label_2a7450;
        case 0x2a7488u: goto label_2a7488;
        default: break;
    }

    ctx->pc = 0x2a7438u;

    // 0x2a7438: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x2a7438u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a743c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a743cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7440: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2A7440u;
    {
        const bool branch_taken_0x2a7440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7440u;
        // 0x2a7444: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7440) {
            ctx->pc = 0x2A746Cu;
            goto label_2a746c;
        }
    }
    ctx->pc = 0x2A7448u;
    // 0x2a7448: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2a7448u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a744c: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x2a744cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2a7450:
    // 0x2a7450: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x2a7450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x2a7454: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2a7454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2a7458: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2a7458u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a745c: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x2a745cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2a7460: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x2a7460u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a7464: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2A7464u;
    {
        const bool branch_taken_0x2a7464 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a7464) {
            ctx->pc = 0x2A7468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A7464u;
            // 0x2a7468: 0x90440000  lbu         $a0, 0x0($v0) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A7450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a7450;
        }
    }
    ctx->pc = 0x2A746Cu;
label_2a746c:
    // 0x2a746c: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x2a746cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x2a7470: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7470u;
        // 0x2a7474: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7478u;
    // 0x2a7478: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2a7478u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a747c: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A747Cu;
    {
        const bool branch_taken_0x2a747c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A747Cu;
        // 0x2a7480: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a747c) {
            ctx->pc = 0x2A74A4u;
            goto label_2a74a4;
        }
    }
    ctx->pc = 0x2A7484u;
    // 0x2a7484: 0x0  nop
    ctx->pc = 0x2a7484u;
    // NOP
label_2a7488:
    // 0x2a7488: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x2a7488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2a748c: 0x1072021  addu        $a0, $t0, $a3
    ctx->pc = 0x2a748cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x2a7490: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2a7490u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a7494: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2a7494u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2a7498: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x2a7498u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2a749c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2A749Cu;
    {
        const bool branch_taken_0x2a749c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A74A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A749Cu;
        // 0x2a74a0: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a749c) {
            ctx->pc = 0x2A7488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a7488;
        }
    }
    ctx->pc = 0x2A74A4u;
label_2a74a4:
    // 0x2a74a4: 0x1061021  addu        $v0, $t0, $a2
    ctx->pc = 0x2a74a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x2a74a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A74A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A74ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A74A8u;
        // 0x2a74ac: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A74A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A74B0u;
}
