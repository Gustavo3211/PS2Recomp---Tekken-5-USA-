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

// Function: sub_00512C38
// Address: 0x512c38 - 0x512c80
void sub_00512C38_0x512c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00512C38_0x512c38");
#endif

    switch (ctx->pc) {
        case 0x512c58u: goto label_512c58;
        case 0x512c60u: goto label_512c60;
        default: break;
    }

    ctx->pc = 0x512c38u;

    // 0x512c38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x512c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x512c3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x512c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x512c40: 0x3c100090  lui         $s0, 0x90
    ctx->pc = 0x512c40u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)144 << 16));
    // 0x512c44: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x512c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x512c48: 0x8e10e444  lw          $s0, -0x1BBC($s0)
    ctx->pc = 0x512c48u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x8FE444u));
    // 0x512c4c: 0x86020008  lh          $v0, 0x8($s0)
    ctx->pc = 0x512c4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x512c50: 0x4420008  bltzl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x512C50u;
    {
        const bool branch_taken_0x512c50 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x512c50) {
            ctx->pc = 0x512C54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x512C50u;
            // 0x512c54: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x512C74u;
            goto label_512c74;
        }
    }
    ctx->pc = 0x512C58u;
label_512c58:
    // 0x512c58: 0xc144af2  jal         func_512BC8
    ctx->pc = 0x512C58u;
    SET_GPR_U32(ctx, 31, 0x512C60u);
    ctx->pc = 0x512C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x512C58u;
    // 0x512c5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512BC8u, 0x512C58u, 0x512C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x512C60u;
label_512c60:
    // 0x512c60: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x512c60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x512c64: 0x86020008  lh          $v0, 0x8($s0)
    ctx->pc = 0x512c64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x512c68: 0x441fffb  bgez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x512C68u;
    {
        const bool branch_taken_0x512c68 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x512c68) {
            ctx->pc = 0x512C58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_512c58;
        }
    }
    ctx->pc = 0x512C70u;
    // 0x512c70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x512c70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_512c74:
    // 0x512c74: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x512c74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x512c78: 0x3e00008  jr          $ra
    ctx->pc = 0x512C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x512C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x512C78u;
        // 0x512c7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x512C78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x512C80u;
}
