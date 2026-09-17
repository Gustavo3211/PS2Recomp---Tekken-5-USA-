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

// Function: sub_002A5120
// Address: 0x2a5120 - 0x2a5158
void sub_002A5120_0x2a5120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A5120_0x2a5120");
#endif

    switch (ctx->pc) {
        case 0x2a5148u: goto label_2a5148;
        default: break;
    }

    ctx->pc = 0x2a5120u;

    // 0x2a5120: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a5120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a5124: 0x24a500a4  addiu       $a1, $a1, 0xA4
    ctx->pc = 0x2a5124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 164));
    // 0x2a5128: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a5128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a512c: 0x2403003a  addiu       $v1, $zero, 0x3A
    ctx->pc = 0x2a512cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x2a5130: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x2a5130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x2a5134: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A5134u;
    {
        const bool branch_taken_0x2a5134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2A5138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5134u;
        // 0x2a5138: 0x52a00  sll         $a1, $a1, 8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5134) {
            ctx->pc = 0x2A5148u;
            goto label_2a5148;
        }
    }
    ctx->pc = 0x2A513Cu;
    // 0x2a513c: 0x8c84015c  lw          $a0, 0x15C($a0)
    ctx->pc = 0x2a513cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 348)));
    // 0x2a5140: 0xc092690  jal         func_249A40
    ctx->pc = 0x2A5140u;
    SET_GPR_U32(ctx, 31, 0x2A5148u);
    ctx->pc = 0x2A5144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5140u;
    // 0x2a5144: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249A40u, 0x2A5140u, 0x2A5148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5148u;
label_2a5148:
    // 0x2a5148: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a5148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a514c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A514Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A514Cu;
        // 0x2a5150: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A514Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A5154u;
    // 0x2a5154: 0x0  nop
    ctx->pc = 0x2a5154u;
    // NOP
    ctx->pc = 0x2a5158u;
}
