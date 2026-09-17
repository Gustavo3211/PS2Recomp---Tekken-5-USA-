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

// Function: sub_00294168
// Address: 0x294168 - 0x2941a0
void sub_00294168_0x294168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294168_0x294168");
#endif

    ctx->pc = 0x294168u;

    // 0x294168: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x294168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x29416c: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x29416Cu;
    {
        const bool branch_taken_0x29416c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x294170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29416Cu;
        // 0x294170: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29416c) {
            ctx->pc = 0x294194u;
            goto label_294194;
        }
    }
    ctx->pc = 0x294174u;
    // 0x294174: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x294174u;
    {
        const bool branch_taken_0x294174 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x294178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294174u;
        // 0x294178: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294174) {
            ctx->pc = 0x294194u;
            goto label_294194;
        }
    }
    ctx->pc = 0x29417Cu;
    // 0x29417c: 0x2442b710  addiu       $v0, $v0, -0x48F0
    ctx->pc = 0x29417cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948624));
    // 0x294180: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x294180u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x294184: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x294184u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x294188: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x294188u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x29418c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x29418cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x294190: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x294190u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_294194:
    // 0x294194: 0x3e00008  jr          $ra
    ctx->pc = 0x294194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29419Cu;
    // 0x29419c: 0x0  nop
    ctx->pc = 0x29419cu;
    // NOP
    ctx->pc = 0x2941a0u;
}
