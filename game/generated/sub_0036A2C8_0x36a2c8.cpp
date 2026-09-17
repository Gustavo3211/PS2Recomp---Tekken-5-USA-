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

// Function: sub_0036A2C8
// Address: 0x36a2c8 - 0x36a328
void sub_0036A2C8_0x36a2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036A2C8_0x36a2c8");
#endif

    switch (ctx->pc) {
        case 0x36a2ecu: goto label_36a2ec;
        case 0x36a304u: goto label_36a304;
        default: break;
    }

    ctx->pc = 0x36a2c8u;

    // 0x36a2c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36a2c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36a2cc: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36a2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36a2d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36a2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36a2d4: 0x24506cc8  addiu       $s0, $v0, 0x6CC8
    ctx->pc = 0x36a2d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 27848));
    // 0x36a2d8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36a2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D6CC8u));
    // 0x36a2dc: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36A2DCu;
    {
        const bool branch_taken_0x36a2dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36A2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A2DCu;
        // 0x36a2e0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a2dc) {
            ctx->pc = 0x36A304u;
            goto label_36a304;
        }
    }
    ctx->pc = 0x36A2E4u;
    // 0x36a2e4: 0xc0db706  jal         func_36DC18
    ctx->pc = 0x36A2E4u;
    SET_GPR_U32(ctx, 31, 0x36A2ECu);
    ctx->pc = 0x36DC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36DC18u, 0x36A2E4u, 0x36A2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A2ECu;
label_36a2ec:
    // 0x36a2ec: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x36a2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x36a2f0: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x36a2f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36a2f4: 0x24a512b8  addiu       $a1, $a1, 0x12B8
    ctx->pc = 0x36a2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4792));
    // 0x36a2f8: 0x24c67170  addiu       $a2, $a2, 0x7170
    ctx->pc = 0x36a2f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29040));
    // 0x36a2fc: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36A2FCu;
    SET_GPR_U32(ctx, 31, 0x36A304u);
    ctx->pc = 0x36A300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A2FCu;
    // 0x36a300: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36A2FCu, 0x36A304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A304u;
label_36a304:
    // 0x36a304: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36a304u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a308: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36a308u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36a30c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36a30cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36a310: 0x3e00008  jr          $ra
    ctx->pc = 0x36A310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A310u;
        // 0x36a314: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A318u;
    // 0x36a318: 0x3e00008  jr          $ra
    ctx->pc = 0x36A318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A318u;
        // 0x36a31c: 0xac850074  sw          $a1, 0x74($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A320u;
    // 0x36a320: 0x3e00008  jr          $ra
    ctx->pc = 0x36A320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A320u;
        // 0x36a324: 0x8c820074  lw          $v0, 0x74($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A328u;
}
