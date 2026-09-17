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

// Function: sub_00284270
// Address: 0x284270 - 0x2842b0
void sub_00284270_0x284270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00284270_0x284270");
#endif

    switch (ctx->pc) {
        case 0x28429cu: goto label_28429c;
        default: break;
    }

    ctx->pc = 0x284270u;

    // 0x284270: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x284270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x284274: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x284274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x284278: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x284278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28427c: 0x9482003c  lhu         $v0, 0x3C($a0)
    ctx->pc = 0x28427cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x284280: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x284280u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x284284: 0x5c1821  addu        $v1, $v0, $gp
    ctx->pc = 0x284284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 28)));
    // 0x284288: 0x8c63caa0  lw          $v1, -0x3560($v1)
    ctx->pc = 0x284288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953632)));
    // 0x28428c: 0x54650004  bnel        $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x28428Cu;
    {
        const bool branch_taken_0x28428c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x28428c) {
            ctx->pc = 0x284290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28428Cu;
            // 0x284290: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2842A0u;
            goto label_2842a0;
        }
    }
    ctx->pc = 0x284294u;
    // 0x284294: 0xc0a0af6  jal         func_282BD8
    ctx->pc = 0x284294u;
    SET_GPR_U32(ctx, 31, 0x28429Cu);
    ctx->pc = 0x282BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282BD8u, 0x284294u, 0x28429Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28429Cu;
label_28429c:
    // 0x28429c: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x28429cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_2842a0:
    // 0x2842a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2842a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2842a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2842A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2842A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2842A4u;
        // 0x2842a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2842A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2842ACu;
    // 0x2842ac: 0x0  nop
    ctx->pc = 0x2842acu;
    // NOP
    ctx->pc = 0x2842b0u;
}
