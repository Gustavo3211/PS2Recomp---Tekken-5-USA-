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

// Function: sub_00359DD8
// Address: 0x359dd8 - 0x359e18
void sub_00359DD8_0x359dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00359DD8_0x359dd8");
#endif

    switch (ctx->pc) {
        case 0x359decu: goto label_359dec;
        default: break;
    }

    ctx->pc = 0x359dd8u;

    // 0x359dd8: 0x8f84c7ac  lw          $a0, -0x3854($gp)
    ctx->pc = 0x359dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952876)));
    // 0x359ddc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x359ddcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x359de0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x359de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x359de4: 0xc0d99de  jal         func_366778
    ctx->pc = 0x359DE4u;
    SET_GPR_U32(ctx, 31, 0x359DECu);
    ctx->pc = 0x359DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359DE4u;
    // 0x359de8: 0xaf80c7b0  sw          $zero, -0x3850($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952880), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366778u, 0x359DE4u, 0x359DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359DECu;
label_359dec:
    // 0x359dec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x359decu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359df0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x359df0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359df4: 0xaf80c7ac  sw          $zero, -0x3854($gp)
    ctx->pc = 0x359df4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952876), GPR_U32(ctx, 0));
    // 0x359df8: 0x3e00008  jr          $ra
    ctx->pc = 0x359DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359DF8u;
        // 0x359dfc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359DF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359E00u;
    // 0x359e00: 0x8f83c7ac  lw          $v1, -0x3854($gp)
    ctx->pc = 0x359e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952876)));
    // 0x359e04: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x359e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x359e08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x359e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x359e0c: 0x8c42a804  lw          $v0, -0x57FC($v0)
    ctx->pc = 0x359e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944772)));
    // 0x359e10: 0x3e00008  jr          $ra
    ctx->pc = 0x359E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359E10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359E18u;
}
