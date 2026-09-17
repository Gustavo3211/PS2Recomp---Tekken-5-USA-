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

// Function: sub_00294038
// Address: 0x294038 - 0x294060
void sub_00294038_0x294038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294038_0x294038");
#endif

    ctx->pc = 0x294038u;

    // 0x294038: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x294038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x29403c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x29403cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x294040: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x294040u;
    {
        const bool branch_taken_0x294040 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x294044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294040u;
        // 0x294044: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294040) {
            ctx->pc = 0x294058u;
            goto label_294058;
        }
    }
    ctx->pc = 0x294048u;
    // 0x294048: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x294048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x29404c: 0x8c62b710  lw          $v0, -0x48F0($v1)
    ctx->pc = 0x29404cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3BB710u));
    // 0x294050: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x294050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x294054: 0x2c440001  sltiu       $a0, $v0, 0x1
    ctx->pc = 0x294054u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_294058:
    // 0x294058: 0x3e00008  jr          $ra
    ctx->pc = 0x294058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29405Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294058u;
        // 0x29405c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294060u;
}
