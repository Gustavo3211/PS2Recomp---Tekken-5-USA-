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

// Function: sub_00248370
// Address: 0x248370 - 0x2483b0
void sub_00248370_0x248370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248370_0x248370");
#endif

    ctx->pc = 0x248370u;

    // 0x248370: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x248370u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x248374: 0x24a20050  addiu       $v0, $a1, 0x50
    ctx->pc = 0x248374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
    // 0x248378: 0x24a30090  addiu       $v1, $a1, 0x90
    ctx->pc = 0x248378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
    // 0x24837c: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x24837cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x248380: 0x833821  addu        $a3, $a0, $v1
    ctx->pc = 0x248380u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x248384: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x248384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x248388: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x248388u;
    {
        const bool branch_taken_0x248388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24838Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248388u;
        // 0x24838c: 0xa42821  addu        $a1, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248388) {
            ctx->pc = 0x2483A8u;
            goto label_2483a8;
        }
    }
    ctx->pc = 0x248390u;
    // 0x248390: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x248390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x248394: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x248394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x248398: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x248398u;
    {
        const bool branch_taken_0x248398 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x248398) {
            ctx->pc = 0x2483A8u;
            goto label_2483a8;
        }
    }
    ctx->pc = 0x2483A0u;
    // 0x2483a0: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2483a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x2483a4: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x2483a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_2483a8:
    // 0x2483a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2483A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2483ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2483A8u;
        // 0x2483ac: 0x8ca20050  lw          $v0, 0x50($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2483A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2483B0u;
}
