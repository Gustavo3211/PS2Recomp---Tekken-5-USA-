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

// Function: sub_00100E60
// Address: 0x100e60 - 0x100ea0
void sub_00100E60_0x100e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100E60_0x100e60");
#endif

    switch (ctx->pc) {
        case 0x100e78u: goto label_100e78;
        case 0x100e88u: goto label_100e88;
        case 0x100e90u: goto label_100e90;
        default: break;
    }

    ctx->pc = 0x100e60u;

    // 0x100e60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x100e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x100e64: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x100e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x100e68: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x100E68u;
    {
        const bool branch_taken_0x100e68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x100E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100E68u;
        // 0x100e6c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100e68) {
            ctx->pc = 0x100E80u;
            goto label_100e80;
        }
    }
    ctx->pc = 0x100E70u;
    // 0x100e70: 0xc040188  jal         func_100620
    ctx->pc = 0x100E70u;
    SET_GPR_U32(ctx, 31, 0x100E78u);
    ctx->pc = 0x100620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100620u, 0x100E70u, 0x100E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100E78u;
label_100e78:
    // 0x100e78: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x100E78u;
    {
        const bool branch_taken_0x100e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x100e78) {
            ctx->pc = 0x100E88u;
            goto label_100e88;
        }
    }
    ctx->pc = 0x100E80u;
label_100e80:
    // 0x100e80: 0xc04017a  jal         func_1005E8
    ctx->pc = 0x100E80u;
    SET_GPR_U32(ctx, 31, 0x100E88u);
    ctx->pc = 0x1005E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005E8u, 0x100E80u, 0x100E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100E88u;
label_100e88:
    // 0x100e88: 0xc040336  jal         func_100CD8
    ctx->pc = 0x100E88u;
    SET_GPR_U32(ctx, 31, 0x100E90u);
    ctx->pc = 0x100CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100CD8u, 0x100E88u, 0x100E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100E90u;
label_100e90:
    // 0x100e90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x100e90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100e94: 0x3e00008  jr          $ra
    ctx->pc = 0x100E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100E94u;
        // 0x100e98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100E9Cu;
    // 0x100e9c: 0x0  nop
    ctx->pc = 0x100e9cu;
    // NOP
    ctx->pc = 0x100ea0u;
}
