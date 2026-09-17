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

// Function: sub_002DE638
// Address: 0x2de638 - 0x2de680
void sub_002DE638_0x2de638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE638_0x2de638");
#endif

    ctx->pc = 0x2de638u;

    // 0x2de638: 0x3c02e800  lui         $v0, 0xE800
    ctx->pc = 0x2de638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59392 << 16));
    // 0x2de63c: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x2de63cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x2de640: 0x24634a10  addiu       $v1, $v1, 0x4A10
    ctx->pc = 0x2de640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18960));
    // 0x2de644: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2de644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2de648: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x2de648u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x2de64c: 0xac820040  sw          $v0, 0x40($a0)
    ctx->pc = 0x2de64cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
    // 0x2de650: 0xac830038  sw          $v1, 0x38($a0)
    ctx->pc = 0x2de650u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 3));
    // 0x2de654: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x2de654u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x2de658: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x2de658u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x2de65c: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x2de65cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x2de660: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x2de660u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x2de664: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x2de664u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x2de668: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x2de668u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x2de66c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2de66cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2de670: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2de670u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2de674: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x2de674u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x2de678: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE678u;
        // 0x2de67c: 0xac800028  sw          $zero, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE680u;
}
