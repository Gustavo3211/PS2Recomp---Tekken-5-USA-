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

// Function: sub_004FA920
// Address: 0x4fa920 - 0x4fa960
void sub_004FA920_0x4fa920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004FA920_0x4fa920");
#endif

    switch (ctx->pc) {
        case 0x4fa940u: goto label_4fa940;
        default: break;
    }

    ctx->pc = 0x4fa920u;

    // 0x4fa920: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x4fa920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x4fa924: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4fa924u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4fa928: 0x8c62ce9c  lw          $v0, -0x3164($v1)
    ctx->pc = 0x4fa928u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x56CE9Cu));
    // 0x4fa92c: 0x28420dad  slti        $v0, $v0, 0xDAD
    ctx->pc = 0x4fa92cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3501) ? 1 : 0);
    // 0x4fa930: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4FA930u;
    {
        const bool branch_taken_0x4fa930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4FA934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FA930u;
        // 0x4fa934: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fa930) {
            ctx->pc = 0x4FA950u;
            goto label_4fa950;
        }
    }
    ctx->pc = 0x4FA938u;
    // 0x4fa938: 0xc13ea58  jal         func_4FA960
    ctx->pc = 0x4FA938u;
    SET_GPR_U32(ctx, 31, 0x4FA940u);
    ctx->pc = 0x4FA960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FA960u, 0x4FA938u, 0x4FA940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA940u;
label_4fa940:
    // 0x4fa940: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4fa940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4fa944: 0x813ea1e  j           func_4FA878
    ctx->pc = 0x4FA944u;
    ctx->pc = 0x4FA948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FA944u;
    // 0x4fa948: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FA878u;
    sub_004FA878_0x4fa878(rdram, ctx, runtime); return;
    ctx->pc = 0x4FA94Cu;
    // 0x4fa94c: 0x0  nop
    ctx->pc = 0x4fa94cu;
    // NOP
label_4fa950:
    // 0x4fa950: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4fa950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4fa954: 0x3e00008  jr          $ra
    ctx->pc = 0x4FA954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FA958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FA954u;
        // 0x4fa958: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FA954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FA95Cu;
    // 0x4fa95c: 0x0  nop
    ctx->pc = 0x4fa95cu;
    // NOP
    ctx->pc = 0x4fa960u;
}
