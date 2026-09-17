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

// Function: sub_00513B80
// Address: 0x513b80 - 0x513bb8
void sub_00513B80_0x513b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00513B80_0x513b80");
#endif

    ctx->pc = 0x513b80u;

    // 0x513b80: 0x3c030090  lui         $v1, 0x90
    ctx->pc = 0x513b80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)144 << 16));
    // 0x513b84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x513b84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x513b88: 0x24644100  addiu       $a0, $v1, 0x4100
    ctx->pc = 0x513b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16640));
    // 0x513b8c: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x513b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x904230u));
    // 0x513b90: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x513B90u;
    {
        const bool branch_taken_0x513b90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x513B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x513B90u;
        // 0x513b94: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x513b90) {
            ctx->pc = 0x513BA4u;
            goto label_513ba4;
        }
    }
    ctx->pc = 0x513B98u;
    // 0x513b98: 0x8c820270  lw          $v0, 0x270($a0)
    ctx->pc = 0x513b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 624)));
    // 0x513b9c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x513B9Cu;
    {
        const bool branch_taken_0x513b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x513b9c) {
            ctx->pc = 0x513BA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x513B9Cu;
            // 0x513ba0: 0xac600270  sw          $zero, 0x270($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 624), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x513BACu;
            goto label_513bac;
        }
    }
    ctx->pc = 0x513BA4u;
label_513ba4:
    // 0x513ba4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x513ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x513ba8: 0xac600270  sw          $zero, 0x270($v1)
    ctx->pc = 0x513ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 624), GPR_U32(ctx, 0));
label_513bac:
    // 0x513bac: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x513bacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x513bb0: 0x3e00008  jr          $ra
    ctx->pc = 0x513BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x513BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x513BB0u;
        // 0x513bb4: 0xac600130  sw          $zero, 0x130($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x513BB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x513BB8u;
}
