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

// Function: sub_0029ED30
// Address: 0x29ed30 - 0x29ed78
void sub_0029ED30_0x29ed30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029ED30_0x29ed30");
#endif

    switch (ctx->pc) {
        case 0x29ed48u: goto label_29ed48;
        case 0x29ed50u: goto label_29ed50;
        case 0x29ed5cu: goto label_29ed5c;
        case 0x29ed64u: goto label_29ed64;
        default: break;
    }

    ctx->pc = 0x29ed30u;

    // 0x29ed30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29ed30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29ed34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29ed34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29ed38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29ed38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ed3c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x29ed3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x29ed40: 0xc08b882  jal         func_22E208
    ctx->pc = 0x29ED40u;
    SET_GPR_U32(ctx, 31, 0x29ED48u);
    ctx->pc = 0x29ED44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29ED40u;
    // 0x29ed44: 0x8e040150  lw          $a0, 0x150($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E208u, 0x29ED40u, 0x29ED48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ED48u;
label_29ed48:
    // 0x29ed48: 0xc0a5b52  jal         func_296D48
    ctx->pc = 0x29ED48u;
    SET_GPR_U32(ctx, 31, 0x29ED50u);
    ctx->pc = 0x29ED4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29ED48u;
    // 0x29ed4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D48u, 0x29ED48u, 0x29ED50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ED50u;
label_29ed50:
    // 0x29ed50: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x29ed50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x29ed54: 0xc0a7a20  jal         func_29E880
    ctx->pc = 0x29ED54u;
    SET_GPR_U32(ctx, 31, 0x29ED5Cu);
    ctx->pc = 0x29ED58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29ED54u;
    // 0x29ed58: 0x2484c668  addiu       $a0, $a0, -0x3998 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E880u, 0x29ED54u, 0x29ED5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ED5Cu;
label_29ed5c:
    // 0x29ed5c: 0xc0a7a34  jal         func_29E8D0
    ctx->pc = 0x29ED5Cu;
    SET_GPR_U32(ctx, 31, 0x29ED64u);
    ctx->pc = 0x29ED60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29ED5Cu;
    // 0x29ed60: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E8D0u, 0x29ED5Cu, 0x29ED64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ED64u;
label_29ed64:
    // 0x29ed64: 0xaf80b6cc  sw          $zero, -0x4934($gp)
    ctx->pc = 0x29ed64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948556), GPR_U32(ctx, 0));
    // 0x29ed68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29ed68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29ed6c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x29ed6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29ed70: 0x3e00008  jr          $ra
    ctx->pc = 0x29ED70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29ED74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ED70u;
        // 0x29ed74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29ED70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29ED78u;
}
