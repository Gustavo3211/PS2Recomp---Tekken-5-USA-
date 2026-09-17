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

// Function: sub_0021F130
// Address: 0x21f130 - 0x21f170
void sub_0021F130_0x21f130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021F130_0x21f130");
#endif

    ctx->pc = 0x21f130u;

    // 0x21f130: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21f130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21f134: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x21f134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x21f138: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21F138u;
    {
        const bool branch_taken_0x21f138 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x21F13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F138u;
        // 0x21f13c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f138) {
            ctx->pc = 0x21F158u;
            goto label_21f158;
        }
    }
    ctx->pc = 0x21F140u;
    // 0x21f140: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x21f140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x21f144: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21F144u;
    {
        const bool branch_taken_0x21f144 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x21F148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F144u;
        // 0x21f148: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f144) {
            ctx->pc = 0x21F168u;
            goto label_21f168;
        }
    }
    ctx->pc = 0x21F14Cu;
    // 0x21f14c: 0x3e00008  jr          $ra
    ctx->pc = 0x21F14Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F14Cu;
        // 0x21f150: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F14Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F154u;
    // 0x21f154: 0x0  nop
    ctx->pc = 0x21f154u;
    // NOP
label_21f158:
    // 0x21f158: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21f158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f15c: 0x8087d1a  j           func_21F468
    ctx->pc = 0x21F15Cu;
    ctx->pc = 0x21F160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F15Cu;
    // 0x21f160: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F468u, 0x21F15Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x21F164u;
    // 0x21f164: 0x0  nop
    ctx->pc = 0x21f164u;
    // NOP
label_21f168:
    // 0x21f168: 0x8087d5c  j           func_21F570
    ctx->pc = 0x21F168u;
    ctx->pc = 0x21F16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F168u;
    // 0x21f16c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F570u;
    sub_0021F570_0x21f570(rdram, ctx, runtime); return;
    ctx->pc = 0x21F170u;
}
