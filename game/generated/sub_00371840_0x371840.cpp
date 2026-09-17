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

// Function: sub_00371840
// Address: 0x371840 - 0x371878
void sub_00371840_0x371840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00371840_0x371840");
#endif

    ctx->pc = 0x371840u;

    // 0x371840: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x371840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x371844: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x371844u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x371848: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x371848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x37184c: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x37184cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x371850: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x371850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x371854: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x371854u;
    {
        const bool branch_taken_0x371854 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x371858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371854u;
        // 0x371858: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371854) {
            ctx->pc = 0x371868u;
            goto label_371868;
        }
    }
    ctx->pc = 0x37185Cu;
    // 0x37185c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37185cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x371860: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x371860u;
    ctx->pc = 0x371864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371860u;
    // 0x371864: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x371868u;
label_371868:
    // 0x371868: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x371868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37186c: 0x3e00008  jr          $ra
    ctx->pc = 0x37186Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37186Cu;
        // 0x371870: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37186Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371874u;
    // 0x371874: 0x0  nop
    ctx->pc = 0x371874u;
    // NOP
    ctx->pc = 0x371878u;
}
