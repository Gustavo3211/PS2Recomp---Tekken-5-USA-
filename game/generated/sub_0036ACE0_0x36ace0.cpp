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

// Function: sub_0036ACE0
// Address: 0x36ace0 - 0x36ad18
void sub_0036ACE0_0x36ace0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036ACE0_0x36ace0");
#endif

    ctx->pc = 0x36ace0u;

    // 0x36ace0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36ace0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36ace4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36ace4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36ace8: 0x2442db38  addiu       $v0, $v0, -0x24C8
    ctx->pc = 0x36ace8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957880));
    // 0x36acec: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x36acecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x36acf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36acf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36acf4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x36ACF4u;
    {
        const bool branch_taken_0x36acf4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x36ACF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36ACF4u;
        // 0x36acf8: 0xac820068  sw          $v0, 0x68($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36acf4) {
            ctx->pc = 0x36AD08u;
            goto label_36ad08;
        }
    }
    ctx->pc = 0x36ACFCu;
    // 0x36acfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36acfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36ad00: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x36AD00u;
    ctx->pc = 0x36AD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AD00u;
    // 0x36ad04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x36AD08u;
label_36ad08:
    // 0x36ad08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36ad08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36ad0c: 0x3e00008  jr          $ra
    ctx->pc = 0x36AD0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36AD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AD0Cu;
        // 0x36ad10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36AD0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36AD14u;
    // 0x36ad14: 0x0  nop
    ctx->pc = 0x36ad14u;
    // NOP
    ctx->pc = 0x36ad18u;
}
