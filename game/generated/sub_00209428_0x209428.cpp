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

// Function: sub_00209428
// Address: 0x209428 - 0x209488
void sub_00209428_0x209428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209428_0x209428");
#endif

    switch (ctx->pc) {
        case 0x20945cu: goto label_20945c;
        default: break;
    }

    ctx->pc = 0x209428u;

    // 0x209428: 0x8f8298c4  lw          $v0, -0x673C($gp)
    ctx->pc = 0x209428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940868)));
    // 0x20942c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20942cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x209430: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x209430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x209434: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x209434u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209438: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x209438u;
    {
        const bool branch_taken_0x209438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209438u;
        // 0x20943c: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209438) {
            ctx->pc = 0x209470u;
            goto label_209470;
        }
    }
    ctx->pc = 0x209440u;
    // 0x209440: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x209440u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x209444: 0x8c6283c0  lw          $v0, -0x7C40($v1)
    ctx->pc = 0x209444u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x209448: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x209448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x20944c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x20944Cu;
    {
        const bool branch_taken_0x20944c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20944c) {
            ctx->pc = 0x209450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20944Cu;
            // 0x209450: 0x8f8298b8  lw          $v0, -0x6748($gp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940856)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209468u;
            goto label_209468;
        }
    }
    ctx->pc = 0x209454u;
    // 0x209454: 0xc0a947c  jal         func_2A51F0
    ctx->pc = 0x209454u;
    SET_GPR_U32(ctx, 31, 0x20945Cu);
    ctx->pc = 0x2A51F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A51F0u, 0x209454u, 0x20945Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20945Cu;
label_20945c:
    // 0x20945c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x20945Cu;
    {
        const bool branch_taken_0x20945c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20945c) {
            ctx->pc = 0x209460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20945Cu;
            // 0x209460: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209474u;
            goto label_209474;
        }
    }
    ctx->pc = 0x209464u;
    // 0x209464: 0x8f8298b8  lw          $v0, -0x6748($gp)
    ctx->pc = 0x209464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940856)));
label_209468:
    // 0x209468: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x209468u;
    {
        const bool branch_taken_0x209468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20946Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209468u;
        // 0x20946c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209468) {
            ctx->pc = 0x209478u;
            goto label_209478;
        }
    }
    ctx->pc = 0x209470u;
label_209470:
    // 0x209470: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x209470u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_209474:
    // 0x209474: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x209474u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_209478:
    // 0x209478: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x209478u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20947c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20947cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x209480: 0x3e00008  jr          $ra
    ctx->pc = 0x209480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209480u;
        // 0x209484: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209488u;
}
