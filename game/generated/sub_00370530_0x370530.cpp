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

// Function: sub_00370530
// Address: 0x370530 - 0x370568
void sub_00370530_0x370530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370530_0x370530");
#endif

    ctx->pc = 0x370530u;

    // 0x370530: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x370530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x370534: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x370534u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x370538: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x370538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x37053c: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x37053cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x370540: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x370540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x370544: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x370544u;
    {
        const bool branch_taken_0x370544 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x370548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370544u;
        // 0x370548: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370544) {
            ctx->pc = 0x370558u;
            goto label_370558;
        }
    }
    ctx->pc = 0x37054Cu;
    // 0x37054c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37054cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x370550: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x370550u;
    ctx->pc = 0x370554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370550u;
    // 0x370554: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x370558u;
label_370558:
    // 0x370558: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x370558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37055c: 0x3e00008  jr          $ra
    ctx->pc = 0x37055Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37055Cu;
        // 0x370560: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37055Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370564u;
    // 0x370564: 0x0  nop
    ctx->pc = 0x370564u;
    // NOP
    ctx->pc = 0x370568u;
}
