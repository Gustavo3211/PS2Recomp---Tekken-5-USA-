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

// Function: sub_002AB338
// Address: 0x2ab338 - 0x2ab3a0
void sub_002AB338_0x2ab338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AB338_0x2ab338");
#endif

    switch (ctx->pc) {
        case 0x2ab348u: goto label_2ab348;
        default: break;
    }

    ctx->pc = 0x2ab338u;

    // 0x2ab338: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x2ab338u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x2ab33c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ab33cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab340: 0x2486000c  addiu       $a2, $a0, 0xC
    ctx->pc = 0x2ab340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x2ab344: 0x0  nop
    ctx->pc = 0x2ab344u;
    // NOP
label_2ab348:
    // 0x2ab348: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2ab348u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2ab34c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2ab34cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2ab350: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2ab350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2ab354: 0x28a3000e  slti        $v1, $a1, 0xE
    ctx->pc = 0x2ab354u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x2ab358: 0x0  nop
    ctx->pc = 0x2ab358u;
    // NOP
    // 0x2ab35c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2AB35Cu;
    {
        const bool branch_taken_0x2ab35c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AB360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB35Cu;
        // 0x2ab360: 0xac400030  sw          $zero, 0x30($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab35c) {
            ctx->pc = 0x2AB348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ab348;
        }
    }
    ctx->pc = 0x2AB364u;
    // 0x2ab364: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ab364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ab368: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x2ab368u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x2ab36c: 0xac820034  sw          $v0, 0x34($a0)
    ctx->pc = 0x2ab36cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 2));
    // 0x2ab370: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2ab370u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2ab374: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB374u;
        // 0x2ab378: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB37Cu;
    // 0x2ab37c: 0x0  nop
    ctx->pc = 0x2ab37cu;
    // NOP
    // 0x2ab380: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2ab380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2ab384: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2ab384u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x2ab388: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x2ab388u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x2ab38c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2ab38cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2ab390: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2ab390u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2ab394: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2ab394u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2ab398: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB398u;
        // 0x2ab39c: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB3A0u;
}
