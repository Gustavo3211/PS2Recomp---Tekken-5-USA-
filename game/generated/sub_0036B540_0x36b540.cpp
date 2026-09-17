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

// Function: sub_0036B540
// Address: 0x36b540 - 0x36b578
void sub_0036B540_0x36b540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036B540_0x36b540");
#endif

    ctx->pc = 0x36b540u;

    // 0x36b540: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36b540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36b544: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36b544u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36b548: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x36b548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x36b54c: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x36b54cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x36b550: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36b550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36b554: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x36B554u;
    {
        const bool branch_taken_0x36b554 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B554u;
        // 0x36b558: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b554) {
            ctx->pc = 0x36B568u;
            goto label_36b568;
        }
    }
    ctx->pc = 0x36B55Cu;
    // 0x36b55c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36b55cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36b560: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x36B560u;
    ctx->pc = 0x36B564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B560u;
    // 0x36b564: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x36B568u;
label_36b568:
    // 0x36b568: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36b568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36b56c: 0x3e00008  jr          $ra
    ctx->pc = 0x36B56Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36B570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B56Cu;
        // 0x36b570: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B56Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36B574u;
    // 0x36b574: 0x0  nop
    ctx->pc = 0x36b574u;
    // NOP
    ctx->pc = 0x36b578u;
}
