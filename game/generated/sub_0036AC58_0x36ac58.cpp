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

// Function: sub_0036AC58
// Address: 0x36ac58 - 0x36ac90
void sub_0036AC58_0x36ac58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036AC58_0x36ac58");
#endif

    ctx->pc = 0x36ac58u;

    // 0x36ac58: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36ac58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36ac5c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36ac5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36ac60: 0x2442db38  addiu       $v0, $v0, -0x24C8
    ctx->pc = 0x36ac60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957880));
    // 0x36ac64: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x36ac64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x36ac68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36ac68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36ac6c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x36AC6Cu;
    {
        const bool branch_taken_0x36ac6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x36AC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AC6Cu;
        // 0x36ac70: 0xac820068  sw          $v0, 0x68($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ac6c) {
            ctx->pc = 0x36AC80u;
            goto label_36ac80;
        }
    }
    ctx->pc = 0x36AC74u;
    // 0x36ac74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36ac74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36ac78: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x36AC78u;
    ctx->pc = 0x36AC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AC78u;
    // 0x36ac7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x36AC80u;
label_36ac80:
    // 0x36ac80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36ac80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36ac84: 0x3e00008  jr          $ra
    ctx->pc = 0x36AC84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36AC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AC84u;
        // 0x36ac88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36AC84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36AC8Cu;
    // 0x36ac8c: 0x0  nop
    ctx->pc = 0x36ac8cu;
    // NOP
    ctx->pc = 0x36ac90u;
}
