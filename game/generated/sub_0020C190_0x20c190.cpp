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

// Function: sub_0020C190
// Address: 0x20c190 - 0x20c1e8
void sub_0020C190_0x20c190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020C190_0x20c190");
#endif

    switch (ctx->pc) {
        case 0x20c1a0u: goto label_20c1a0;
        default: break;
    }

    ctx->pc = 0x20c190u;

    // 0x20c190: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20c190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20c194: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20c194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20c198: 0xc07ebb4  jal         func_1FAED0
    ctx->pc = 0x20C198u;
    SET_GPR_U32(ctx, 31, 0x20C1A0u);
    ctx->pc = 0x1FAED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAED0u, 0x20C198u, 0x20C1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C1A0u;
label_20c1a0:
    // 0x20c1a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20c1a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c1a4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x20c1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20c1a8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20C1A8u;
    {
        const bool branch_taken_0x20c1a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C1A8u;
        // 0x20c1ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c1a8) {
            ctx->pc = 0x20C1B8u;
            goto label_20c1b8;
        }
    }
    ctx->pc = 0x20C1B0u;
    // 0x20c1b0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x20C1B0u;
    {
        const bool branch_taken_0x20c1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C1B0u;
        // 0x20c1b4: 0x8c82005c  lw          $v0, 0x5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c1b0) {
            ctx->pc = 0x20C1D4u;
            goto label_20c1d4;
        }
    }
    ctx->pc = 0x20C1B8u;
label_20c1b8:
    // 0x20c1b8: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20C1B8u;
    {
        const bool branch_taken_0x20c1b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20c1b8) {
            ctx->pc = 0x20C1BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C1B8u;
            // 0x20c1bc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C1C8u;
            goto label_20c1c8;
        }
    }
    ctx->pc = 0x20C1C0u;
    // 0x20c1c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x20C1C0u;
    {
        const bool branch_taken_0x20c1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C1C0u;
        // 0x20c1c4: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c1c0) {
            ctx->pc = 0x20C1D4u;
            goto label_20c1d4;
        }
    }
    ctx->pc = 0x20C1C8u;
label_20c1c8:
    // 0x20c1c8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20C1C8u;
    {
        const bool branch_taken_0x20c1c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20C1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C1C8u;
        // 0x20c1cc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c1c8) {
            ctx->pc = 0x20C1DCu;
            goto label_20c1dc;
        }
    }
    ctx->pc = 0x20C1D0u;
    // 0x20c1d0: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x20c1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_20c1d4:
    // 0x20c1d4: 0xac820058  sw          $v0, 0x58($a0)
    ctx->pc = 0x20c1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 2));
    // 0x20c1d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20c1d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20c1dc:
    // 0x20c1dc: 0x3e00008  jr          $ra
    ctx->pc = 0x20C1DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C1DCu;
        // 0x20c1e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C1DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20C1E4u;
    // 0x20c1e4: 0x0  nop
    ctx->pc = 0x20c1e4u;
    // NOP
    ctx->pc = 0x20c1e8u;
}
