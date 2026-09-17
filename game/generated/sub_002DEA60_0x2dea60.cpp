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

// Function: sub_002DEA60
// Address: 0x2dea60 - 0x2deaa8
void sub_002DEA60_0x2dea60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DEA60_0x2dea60");
#endif

    switch (ctx->pc) {
        case 0x2dea80u: goto label_2dea80;
        case 0x2dea88u: goto label_2dea88;
        default: break;
    }

    ctx->pc = 0x2dea60u;

    // 0x2dea60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dea60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dea64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2dea64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2dea68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2dea68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dea6c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2dea6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2dea70: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x2dea70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2dea74: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2DEA74u;
    {
        const bool branch_taken_0x2dea74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEA74u;
        // 0x2dea78: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dea74) {
            ctx->pc = 0x2DEA98u;
            goto label_2dea98;
        }
    }
    ctx->pc = 0x2DEA7Cu;
    // 0x2dea7c: 0x0  nop
    ctx->pc = 0x2dea7cu;
    // NOP
label_2dea80:
    // 0x2dea80: 0xc0b7a38  jal         func_2DE8E0
    ctx->pc = 0x2DEA80u;
    SET_GPR_U32(ctx, 31, 0x2DEA88u);
    ctx->pc = 0x2DE8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE8E0u, 0x2DEA80u, 0x2DEA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEA88u;
label_2dea88:
    // 0x2dea88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dea88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dea8c: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x2dea8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2dea90: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2DEA90u;
    {
        const bool branch_taken_0x2dea90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dea90) {
            ctx->pc = 0x2DEA80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dea80;
        }
    }
    ctx->pc = 0x2DEA98u;
label_2dea98:
    // 0x2dea98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2dea98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dea9c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2dea9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2deaa0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DEAA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DEAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEAA0u;
        // 0x2deaa4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DEAA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DEAA8u;
}
