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

// Function: sub_00242960
// Address: 0x242960 - 0x2429d0
void sub_00242960_0x242960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242960_0x242960");
#endif

    switch (ctx->pc) {
        case 0x242980u: goto label_242980;
        case 0x2429c0u: goto label_2429c0;
        default: break;
    }

    ctx->pc = 0x242960u;

    // 0x242960: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x242960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x242964: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x242964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x242968: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x242968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24296c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24296cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242970: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x242970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x242974: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x242974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x242978: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x242978u;
    SET_GPR_U32(ctx, 31, 0x242980u);
    ctx->pc = 0x24297Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242978u;
    // 0x24297c: 0x244437e0  addiu       $a0, $v0, 0x37E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 14304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x242978u, 0x242980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242980u;
label_242980:
    // 0x242980: 0x24470088  addiu       $a3, $v0, 0x88
    ctx->pc = 0x242980u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
    // 0x242984: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x242984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242988: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x242988u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x24298c: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x24298Cu;
    {
        const bool branch_taken_0x24298c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x242990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24298Cu;
        // 0x242990: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24298c) {
            ctx->pc = 0x2429A4u;
            goto label_2429a4;
        }
    }
    ctx->pc = 0x242994u;
    // 0x242994: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x242994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x242998: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x242998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x24299c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24299Cu;
    {
        const bool branch_taken_0x24299c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24299c) {
            ctx->pc = 0x2429B0u;
            goto label_2429b0;
        }
    }
    ctx->pc = 0x2429A4u;
label_2429a4:
    // 0x2429a4: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x2429a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x2429a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2429a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2429ac: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x2429acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_2429b0:
    // 0x2429b0: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2429B0u;
    {
        const bool branch_taken_0x2429b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2429b0) {
            ctx->pc = 0x2429B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2429B0u;
            // 0x2429b4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2429C4u;
            goto label_2429c4;
        }
    }
    ctx->pc = 0x2429B8u;
    // 0x2429b8: 0xc090a1c  jal         func_242870
    ctx->pc = 0x2429B8u;
    SET_GPR_U32(ctx, 31, 0x2429C0u);
    ctx->pc = 0x242870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242870u, 0x2429B8u, 0x2429C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2429C0u;
label_2429c0:
    // 0x2429c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2429c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2429c4:
    // 0x2429c4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2429c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2429c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2429C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2429CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2429C8u;
        // 0x2429cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2429C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2429D0u;
}
