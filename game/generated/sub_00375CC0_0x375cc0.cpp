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

// Function: sub_00375CC0
// Address: 0x375cc0 - 0x375d08
void sub_00375CC0_0x375cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00375CC0_0x375cc0");
#endif

    ctx->pc = 0x375cc0u;

    // 0x375cc0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x375cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x375cc4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x375cc4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x375cc8: 0x244215b0  addiu       $v0, $v0, 0x15B0
    ctx->pc = 0x375cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5552));
    // 0x375ccc: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x375cccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x375cd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x375cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x375cd4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x375CD4u;
    {
        const bool branch_taken_0x375cd4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x375CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375CD4u;
        // 0x375cd8: 0xac820050  sw          $v0, 0x50($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375cd4) {
            ctx->pc = 0x375CE8u;
            goto label_375ce8;
        }
    }
    ctx->pc = 0x375CDCu;
    // 0x375cdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x375cdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x375ce0: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x375CE0u;
    ctx->pc = 0x375CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375CE0u;
    // 0x375ce4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x375CE8u;
label_375ce8:
    // 0x375ce8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x375ce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x375cec: 0x3e00008  jr          $ra
    ctx->pc = 0x375CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375CECu;
        // 0x375cf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375CECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375CF4u;
    // 0x375cf4: 0x0  nop
    ctx->pc = 0x375cf4u;
    // NOP
    // 0x375cf8: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x375cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x375cfc: 0x246324f8  addiu       $v1, $v1, 0x24F8
    ctx->pc = 0x375cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9464));
    // 0x375d00: 0x3e00008  jr          $ra
    ctx->pc = 0x375D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375D00u;
        // 0x375d04: 0xac830050  sw          $v1, 0x50($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375D00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375D08u;
}
