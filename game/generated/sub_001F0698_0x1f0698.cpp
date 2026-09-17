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

// Function: sub_001F0698
// Address: 0x1f0698 - 0x1f0700
void sub_001F0698_0x1f0698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0698_0x1f0698");
#endif

    switch (ctx->pc) {
        case 0x1f06e8u: goto label_1f06e8;
        default: break;
    }

    ctx->pc = 0x1f0698u;

    // 0x1f0698: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f0698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f069c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f069cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f06a0: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x1f06a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x1f06a4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1F06A4u;
    {
        const bool branch_taken_0x1f06a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F06A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F06A4u;
        // 0x1f06a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f06a4) {
            ctx->pc = 0x1F06F4u;
            goto label_1f06f4;
        }
    }
    ctx->pc = 0x1F06ACu;
    // 0x1f06ac: 0x90820050  lbu         $v0, 0x50($a0)
    ctx->pc = 0x1f06acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x1f06b0: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F06B0u;
    {
        const bool branch_taken_0x1f06b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F06B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F06B0u;
        // 0x1f06b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f06b0) {
            ctx->pc = 0x1F06F4u;
            goto label_1f06f4;
        }
    }
    ctx->pc = 0x1F06B8u;
    // 0x1f06b8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1f06b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1f06bc: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1f06bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1f06c0: 0x24428858  addiu       $v0, $v0, -0x77A8
    ctx->pc = 0x1f06c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936664));
    // 0x1f06c4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1f06c4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A8860u));
    // 0x1f06c8: 0x5464000a  bnel        $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F06C8u;
    {
        const bool branch_taken_0x1f06c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1f06c8) {
            ctx->pc = 0x1F06CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F06C8u;
            // 0x1f06cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F06F4u;
            goto label_1f06f4;
        }
    }
    ctx->pc = 0x1F06D0u;
    // 0x1f06d0: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1f06d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1f06d4: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x1f06d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1f06d8: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F06D8u;
    {
        const bool branch_taken_0x1f06d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f06d8) {
            ctx->pc = 0x1F06DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F06D8u;
            // 0x1f06dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F06F4u;
            goto label_1f06f4;
        }
    }
    ctx->pc = 0x1F06E0u;
    // 0x1f06e0: 0xc08217c  jal         func_2085F0
    ctx->pc = 0x1F06E0u;
    SET_GPR_U32(ctx, 31, 0x1F06E8u);
    ctx->pc = 0x2085F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085F0u, 0x1F06E0u, 0x1F06E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F06E8u;
label_1f06e8:
    // 0x1f06e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F06E8u;
    {
        const bool branch_taken_0x1f06e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F06ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F06E8u;
        // 0x1f06ec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f06e8) {
            ctx->pc = 0x1F06F8u;
            goto label_1f06f8;
        }
    }
    ctx->pc = 0x1F06F0u;
    // 0x1f06f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f06f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f06f4:
    // 0x1f06f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f06f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f06f8:
    // 0x1f06f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F06F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F06FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F06F8u;
        // 0x1f06fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F06F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0700u;
}
