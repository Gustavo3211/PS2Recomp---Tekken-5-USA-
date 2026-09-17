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

// Function: sub_0036ABD0
// Address: 0x36abd0 - 0x36ac08
void sub_0036ABD0_0x36abd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036ABD0_0x36abd0");
#endif

    ctx->pc = 0x36abd0u;

    // 0x36abd0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36abd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36abd4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36abd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36abd8: 0x2442db38  addiu       $v0, $v0, -0x24C8
    ctx->pc = 0x36abd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957880));
    // 0x36abdc: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x36abdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x36abe0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36abe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36abe4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x36ABE4u;
    {
        const bool branch_taken_0x36abe4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x36ABE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36ABE4u;
        // 0x36abe8: 0xac820068  sw          $v0, 0x68($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36abe4) {
            ctx->pc = 0x36ABF8u;
            goto label_36abf8;
        }
    }
    ctx->pc = 0x36ABECu;
    // 0x36abec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36abecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36abf0: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x36ABF0u;
    ctx->pc = 0x36ABF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36ABF0u;
    // 0x36abf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x36ABF8u;
label_36abf8:
    // 0x36abf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36abf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36abfc: 0x3e00008  jr          $ra
    ctx->pc = 0x36ABFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36AC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36ABFCu;
        // 0x36ac00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36ABFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36AC04u;
    // 0x36ac04: 0x0  nop
    ctx->pc = 0x36ac04u;
    // NOP
    ctx->pc = 0x36ac08u;
}
