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

// Function: sub_00130CC8
// Address: 0x130cc8 - 0x130d04
void sub_00130CC8_0x130cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00130CC8_0x130cc8");
#endif

    ctx->pc = 0x130cc8u;

    // 0x130cc8: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x130cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x130ccc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x130cccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x130cd0: 0x24424d68  addiu       $v0, $v0, 0x4D68
    ctx->pc = 0x130cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19816));
    // 0x130cd4: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x130cd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x130cd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x130cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x130cdc: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x130CDCu;
    {
        const bool branch_taken_0x130cdc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x130CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130CDCu;
        // 0x130ce0: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130cdc) {
            ctx->pc = 0x130CF0u;
            goto label_130cf0;
        }
    }
    ctx->pc = 0x130CE4u;
    // 0x130ce4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x130ce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130ce8: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x130CE8u;
    ctx->pc = 0x130CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130CE8u;
    // 0x130cec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x130CF0u;
label_130cf0:
    // 0x130cf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x130cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130cf4: 0x3e00008  jr          $ra
    ctx->pc = 0x130CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130CF4u;
        // 0x130cf8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130CF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130CFCu;
    // 0x130cfc: 0x0  nop
    ctx->pc = 0x130cfcu;
    // NOP
    // 0x130d00: 0x0  nop
    ctx->pc = 0x130d00u;
    // NOP
    ctx->pc = 0x130d04u;
}
