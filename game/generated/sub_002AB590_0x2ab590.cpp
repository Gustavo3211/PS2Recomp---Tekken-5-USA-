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

// Function: sub_002AB590
// Address: 0x2ab590 - 0x2ab608
void sub_002AB590_0x2ab590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AB590_0x2ab590");
#endif

    switch (ctx->pc) {
        case 0x2ab5a8u: goto label_2ab5a8;
        case 0x2ab5b4u: goto label_2ab5b4;
        case 0x2ab5c0u: goto label_2ab5c0;
        case 0x2ab5ccu: goto label_2ab5cc;
        case 0x2ab5d8u: goto label_2ab5d8;
        case 0x2ab5e4u: goto label_2ab5e4;
        default: break;
    }

    ctx->pc = 0x2ab590u;

    // 0x2ab590: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ab590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ab594: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ab594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ab598: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ab598u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab59c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ab59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2ab5a0: 0xc0aa772  jal         func_2A9DC8
    ctx->pc = 0x2AB5A0u;
    SET_GPR_U32(ctx, 31, 0x2AB5A8u);
    ctx->pc = 0x2AB5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB5A0u;
    // 0x2ab5a4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC8u, 0x2AB5A0u, 0x2AB5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB5A8u;
label_2ab5a8:
    // 0x2ab5a8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2ab5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ab5ac: 0xc0aa772  jal         func_2A9DC8
    ctx->pc = 0x2AB5ACu;
    SET_GPR_U32(ctx, 31, 0x2AB5B4u);
    ctx->pc = 0x2AB5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB5ACu;
    // 0x2ab5b0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC8u, 0x2AB5ACu, 0x2AB5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB5B4u;
label_2ab5b4:
    // 0x2ab5b4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2ab5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2ab5b8: 0xc0aa772  jal         func_2A9DC8
    ctx->pc = 0x2AB5B8u;
    SET_GPR_U32(ctx, 31, 0x2AB5C0u);
    ctx->pc = 0x2AB5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB5B8u;
    // 0x2ab5bc: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC8u, 0x2AB5B8u, 0x2AB5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB5C0u;
label_2ab5c0:
    // 0x2ab5c0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2ab5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ab5c4: 0xc0aa740  jal         func_2A9D00
    ctx->pc = 0x2AB5C4u;
    SET_GPR_U32(ctx, 31, 0x2AB5CCu);
    ctx->pc = 0x2AB5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB5C4u;
    // 0x2ab5c8: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9D00u, 0x2AB5C4u, 0x2AB5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB5CCu;
label_2ab5cc:
    // 0x2ab5cc: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2ab5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2ab5d0: 0xc0aa740  jal         func_2A9D00
    ctx->pc = 0x2AB5D0u;
    SET_GPR_U32(ctx, 31, 0x2AB5D8u);
    ctx->pc = 0x2AB5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB5D0u;
    // 0x2ab5d4: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9D00u, 0x2AB5D0u, 0x2AB5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB5D8u;
label_2ab5d8:
    // 0x2ab5d8: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x2ab5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2ab5dc: 0xc0aa740  jal         func_2A9D00
    ctx->pc = 0x2AB5DCu;
    SET_GPR_U32(ctx, 31, 0x2AB5E4u);
    ctx->pc = 0x2AB5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB5DCu;
    // 0x2ab5e0: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9D00u, 0x2AB5DCu, 0x2AB5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB5E4u;
label_2ab5e4:
    // 0x2ab5e4: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x2ab5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x2ab5e8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ab5e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ab5ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ab5ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ab5f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB5F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB5F0u;
        // 0x2ab5f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB5F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB5F8u;
    // 0x2ab5f8: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2ab5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2ab5fc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2ab5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2ab600: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB600u;
        // 0x2ab604: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB608u;
}
