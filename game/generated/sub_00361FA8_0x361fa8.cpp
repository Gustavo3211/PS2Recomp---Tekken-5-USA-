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

// Function: sub_00361FA8
// Address: 0x361fa8 - 0x361fd8
void sub_00361FA8_0x361fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00361FA8_0x361fa8");
#endif

    switch (ctx->pc) {
        case 0x361fc0u: goto label_361fc0;
        default: break;
    }

    ctx->pc = 0x361fa8u;

    // 0x361fa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x361fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x361fac: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x361FACu;
    {
        const bool branch_taken_0x361fac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x361FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361FACu;
        // 0x361fb0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361fac) {
            ctx->pc = 0x361FC8u;
            goto label_361fc8;
        }
    }
    ctx->pc = 0x361FB4u;
    // 0x361fb4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x361fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x361fb8: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x361FB8u;
    SET_GPR_U32(ctx, 31, 0x361FC0u);
    ctx->pc = 0x361FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361FB8u;
    // 0x361fbc: 0x248470e8  addiu       $a0, $a0, 0x70E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x361FB8u, 0x361FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361FC0u;
label_361fc0:
    // 0x361fc0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x361FC0u;
    {
        const bool branch_taken_0x361fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x361FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361FC0u;
        // 0x361fc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361fc0) {
            ctx->pc = 0x361FCCu;
            goto label_361fcc;
        }
    }
    ctx->pc = 0x361FC8u;
label_361fc8:
    // 0x361fc8: 0x84820014  lh          $v0, 0x14($a0)
    ctx->pc = 0x361fc8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
label_361fcc:
    // 0x361fcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x361fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x361fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x361FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x361FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361FD0u;
        // 0x361fd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x361FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x361FD8u;
}
