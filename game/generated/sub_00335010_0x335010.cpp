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

// Function: sub_00335010
// Address: 0x335010 - 0x335048
void sub_00335010_0x335010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335010_0x335010");
#endif

    switch (ctx->pc) {
        case 0x335038u: goto label_335038;
        default: break;
    }

    ctx->pc = 0x335010u;

    // 0x335010: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x335010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x335014: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x335014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x335018: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x335018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33501c: 0x34633c00  ori         $v1, $v1, 0x3C00
    ctx->pc = 0x33501cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15360);
    // 0x335020: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x335020u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10003C00u)); // MMIO: 0x10003c00
    // 0x335024: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x335024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x335028: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x335028u;
    {
        const bool branch_taken_0x335028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x335028) {
            ctx->pc = 0x33502Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x335028u;
            // 0x33502c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33503Cu;
            goto label_33503c;
        }
    }
    ctx->pc = 0x335030u;
    // 0x335030: 0xc0cd1ca  jal         func_334728
    ctx->pc = 0x335030u;
    SET_GPR_U32(ctx, 31, 0x335038u);
    ctx->pc = 0x335034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335030u;
    // 0x335034: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x334728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334728u, 0x335030u, 0x335038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335038u;
label_335038:
    // 0x335038: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x335038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33503c:
    // 0x33503c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x33503cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335040: 0x3e00008  jr          $ra
    ctx->pc = 0x335040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335040u;
        // 0x335044: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335048u;
}
