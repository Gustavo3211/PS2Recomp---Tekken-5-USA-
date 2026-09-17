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

// Function: sub_0048D008
// Address: 0x48d008 - 0x48d048
void sub_0048D008_0x48d008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048D008_0x48d008");
#endif

    switch (ctx->pc) {
        case 0x48d018u: goto label_48d018;
        default: break;
    }

    ctx->pc = 0x48d008u;

    // 0x48d008: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x48d008u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x48d00c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x48d00cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48d010: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x48d010u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x48d014: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x48d014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_48d018:
    // 0x48d018: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x48d018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x48d01c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x48d01cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x48d020: 0x84630008  lh          $v1, 0x8($v1)
    ctx->pc = 0x48d020u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x48d024: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x48D024u;
    {
        const bool branch_taken_0x48d024 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x48D028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D024u;
        // 0x48d028: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d024) {
            ctx->pc = 0x48D040u;
            goto label_48d040;
        }
    }
    ctx->pc = 0x48D02Cu;
    // 0x48d02c: 0x0  nop
    ctx->pc = 0x48d02cu;
    // NOP
    // 0x48d030: 0x0  nop
    ctx->pc = 0x48d030u;
    // NOP
    // 0x48d034: 0x54a3fff8  bnel        $a1, $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x48D034u;
    {
        const bool branch_taken_0x48d034 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x48d034) {
            ctx->pc = 0x48D038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48D034u;
            // 0x48d038: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48D018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48d018;
        }
    }
    ctx->pc = 0x48D03Cu;
    // 0x48d03c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48d03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48d040:
    // 0x48d040: 0x3e00008  jr          $ra
    ctx->pc = 0x48D040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48D040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48D048u;
}
