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

// Function: sub_002FC580
// Address: 0x2fc580 - 0x2fc5c0
void sub_002FC580_0x2fc580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FC580_0x2fc580");
#endif

    switch (ctx->pc) {
        case 0x2fc5a8u: goto label_2fc5a8;
        default: break;
    }

    ctx->pc = 0x2fc580u;

    // 0x2fc580: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fc580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fc584: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fc584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fc588: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2fc588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2fc58c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2FC58Cu;
    {
        const bool branch_taken_0x2fc58c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC58Cu;
        // 0x2fc590: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc58c) {
            ctx->pc = 0x2FC5B4u;
            goto label_2fc5b4;
        }
    }
    ctx->pc = 0x2FC594u;
    // 0x2fc594: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x2fc594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2fc598: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FC598u;
    {
        const bool branch_taken_0x2fc598 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC598u;
        // 0x2fc59c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc598) {
            ctx->pc = 0x2FC5B4u;
            goto label_2fc5b4;
        }
    }
    ctx->pc = 0x2FC5A0u;
    // 0x2fc5a0: 0xc0bf3f0  jal         func_2FCFC0
    ctx->pc = 0x2FC5A0u;
    SET_GPR_U32(ctx, 31, 0x2FC5A8u);
    ctx->pc = 0x2FCFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCFC0u, 0x2FC5A0u, 0x2FC5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC5A8u;
label_2fc5a8:
    // 0x2fc5a8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2fc5a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc5ac: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2FC5ACu;
    {
        const bool branch_taken_0x2fc5ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fc5ac) {
            ctx->pc = 0x2FC5B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FC5ACu;
            // 0x2fc5b0: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FC5B4u;
            goto label_2fc5b4;
        }
    }
    ctx->pc = 0x2FC5B4u;
label_2fc5b4:
    // 0x2fc5b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fc5b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fc5b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC5B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC5B8u;
        // 0x2fc5bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC5B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FC5C0u;
}
