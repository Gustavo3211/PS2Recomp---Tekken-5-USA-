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

// Function: sub_002DE590
// Address: 0x2de590 - 0x2de5c8
void sub_002DE590_0x2de590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE590_0x2de590");
#endif

    switch (ctx->pc) {
        case 0x2de5b8u: goto label_2de5b8;
        default: break;
    }

    ctx->pc = 0x2de590u;

    // 0x2de590: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2de590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2de594: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2de594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2de598: 0x14a20007  bne         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DE598u;
    {
        const bool branch_taken_0x2de598 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DE59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE598u;
        // 0x2de59c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de598) {
            ctx->pc = 0x2DE5B8u;
            goto label_2de5b8;
        }
    }
    ctx->pc = 0x2DE5A0u;
    // 0x2de5a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2de5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2de5a4: 0x54820005  bnel        $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DE5A4u;
    {
        const bool branch_taken_0x2de5a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2de5a4) {
            ctx->pc = 0x2DE5A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DE5A4u;
            // 0x2de5a8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DE5BCu;
            goto label_2de5bc;
        }
    }
    ctx->pc = 0x2DE5ACu;
    // 0x2de5ac: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x2de5acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x2de5b0: 0xc0b7870  jal         func_2DE1C0
    ctx->pc = 0x2DE5B0u;
    SET_GPR_U32(ctx, 31, 0x2DE5B8u);
    ctx->pc = 0x2DE5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE5B0u;
    // 0x2de5b4: 0x248437a0  addiu       $a0, $a0, 0x37A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE1C0u, 0x2DE5B0u, 0x2DE5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE5B8u;
label_2de5b8:
    // 0x2de5b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2de5b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2de5bc:
    // 0x2de5bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE5BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE5BCu;
        // 0x2de5c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE5BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE5C4u;
    // 0x2de5c4: 0x0  nop
    ctx->pc = 0x2de5c4u;
    // NOP
    ctx->pc = 0x2de5c8u;
}
