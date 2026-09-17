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

// Function: sub_00374444
// Address: 0x374444 - 0x374498
void sub_00374444_0x374444(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00374444_0x374444");
#endif

    switch (ctx->pc) {
        case 0x374464u: goto label_374464;
        default: break;
    }

    ctx->pc = 0x374444u;

    // 0x374444: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x374444u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x374448: 0xffbe0000  sd          $fp, 0x0($sp)
    ctx->pc = 0x374448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 30));
    // 0x37444c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x37444cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x374450: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x374450u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374454: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x374454u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374458: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x374458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37445c: 0xc0dd067  jal         func_37419C
    ctx->pc = 0x37445Cu;
    SET_GPR_U32(ctx, 31, 0x374464u);
    ctx->pc = 0x37419Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37419Cu, 0x37445Cu, 0x374464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374464u;
label_374464:
    // 0x374464: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x374464u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374468: 0xdfbe0000  ld          $fp, 0x0($sp)
    ctx->pc = 0x374468u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37446c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x37446cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x374470: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x374470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x374474: 0x3e00008  jr          $ra
    ctx->pc = 0x374474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37447Cu;
    // 0x37447c: 0x0  nop
    ctx->pc = 0x37447cu;
    // NOP
    // 0x374480: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x374480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x374484: 0x3e00008  jr          $ra
    ctx->pc = 0x374484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374484u;
        // 0x374488: 0x24427780  addiu       $v0, $v0, 0x7780 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30592));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37448Cu;
    // 0x37448c: 0x0  nop
    ctx->pc = 0x37448cu;
    // NOP
    // 0x374490: 0x3e00008  jr          $ra
    ctx->pc = 0x374490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374498u;
}
