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

// Function: sub_0031D6B0
// Address: 0x31d6b0 - 0x31d708
void sub_0031D6B0_0x31d6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031D6B0_0x31d6b0");
#endif

    switch (ctx->pc) {
        case 0x31d6c0u: goto label_31d6c0;
        case 0x31d6c8u: goto label_31d6c8;
        case 0x31d6d4u: goto label_31d6d4;
        case 0x31d6e0u: goto label_31d6e0;
        case 0x31d6f8u: goto label_31d6f8;
        default: break;
    }

    ctx->pc = 0x31d6b0u;

    // 0x31d6b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31d6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31d6b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31d6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31d6b8: 0xc043fba  jal         func_10FEE8
    ctx->pc = 0x31D6B8u;
    SET_GPR_U32(ctx, 31, 0x31D6C0u);
    ctx->pc = 0x31D6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D6B8u;
    // 0x31d6bc: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FEE8u, 0x31D6B8u, 0x31D6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D6C0u;
label_31d6c0:
    // 0x31d6c0: 0xc04098c  jal         func_102630
    ctx->pc = 0x31D6C0u;
    SET_GPR_U32(ctx, 31, 0x31D6C8u);
    ctx->pc = 0x31D6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D6C0u;
    // 0x31d6c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102630u, 0x31D6C0u, 0x31D6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D6C8u;
label_31d6c8:
    // 0x31d6c8: 0x3c040032  lui         $a0, 0x32
    ctx->pc = 0x31d6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50 << 16));
    // 0x31d6cc: 0xc040b52  jal         func_102D48
    ctx->pc = 0x31D6CCu;
    SET_GPR_U32(ctx, 31, 0x31D6D4u);
    ctx->pc = 0x31D6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D6CCu;
    // 0x31d6d0: 0x2484d938  addiu       $a0, $a0, -0x26C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102D48u, 0x31D6CCu, 0x31D6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D6D4u;
label_31d6d4:
    // 0x31d6d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31d6d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31d6d8: 0x3e00008  jr          $ra
    ctx->pc = 0x31D6D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D6D8u;
        // 0x31d6dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D6D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31D6E0u;
label_31d6e0:
    // 0x31d6e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31d6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31d6e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31d6e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d6e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31d6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31d6ec: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x31d6ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d6f0: 0xc0ce0b0  jal         func_3382C0
    ctx->pc = 0x31D6F0u;
    SET_GPR_U32(ctx, 31, 0x31D6F8u);
    ctx->pc = 0x31D6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D6F0u;
    // 0x31d6f4: 0xdc840238  ld          $a0, 0x238($a0) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 568)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3382C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3382C0u, 0x31D6F0u, 0x31D6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D6F8u;
label_31d6f8:
    // 0x31d6f8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x31d6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31d6fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31d6fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31d700: 0x3e00008  jr          $ra
    ctx->pc = 0x31D700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D700u;
        // 0x31d704: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31D708u;
}
