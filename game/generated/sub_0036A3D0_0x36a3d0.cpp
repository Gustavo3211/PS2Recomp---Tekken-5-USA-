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

// Function: sub_0036A3D0
// Address: 0x36a3d0 - 0x36a408
void sub_0036A3D0_0x36a3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036A3D0_0x36a3d0");
#endif

    ctx->pc = 0x36a3d0u;

    // 0x36a3d0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36a3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36a3d4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36a3d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36a3d8: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x36a3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x36a3dc: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x36a3dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x36a3e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36a3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36a3e4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x36A3E4u;
    {
        const bool branch_taken_0x36a3e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A3E4u;
        // 0x36a3e8: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a3e4) {
            ctx->pc = 0x36A3F8u;
            goto label_36a3f8;
        }
    }
    ctx->pc = 0x36A3ECu;
    // 0x36a3ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36a3ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36a3f0: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x36A3F0u;
    ctx->pc = 0x36A3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A3F0u;
    // 0x36a3f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x36A3F8u;
label_36a3f8:
    // 0x36a3f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36a3f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36a3fc: 0x3e00008  jr          $ra
    ctx->pc = 0x36A3FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A3FCu;
        // 0x36a400: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A3FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A404u;
    // 0x36a404: 0x0  nop
    ctx->pc = 0x36a404u;
    // NOP
    ctx->pc = 0x36a408u;
}
