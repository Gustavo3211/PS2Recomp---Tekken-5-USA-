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

// Function: sub_004FF780
// Address: 0x4ff780 - 0x4ff7f0
void sub_004FF780_0x4ff780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004FF780_0x4ff780");
#endif

    switch (ctx->pc) {
        case 0x4ff794u: goto label_4ff794;
        case 0x4ff7bcu: goto label_4ff7bc;
        default: break;
    }

    ctx->pc = 0x4ff780u;

    // 0x4ff780: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ff780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ff784: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ff784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ff788: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4ff788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4ff78c: 0xc140d38  jal         func_5034E0
    ctx->pc = 0x4FF78Cu;
    SET_GPR_U32(ctx, 31, 0x4FF794u);
    ctx->pc = 0x4FF790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FF78Cu;
    // 0x4ff790: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5034E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5034E0u, 0x4FF78Cu, 0x4FF794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FF794u;
label_4ff794:
    // 0x4ff794: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4ff794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ff798: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4ff798u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ff79c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ff79cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ff7a0: 0x3e00008  jr          $ra
    ctx->pc = 0x4FF7A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FF7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FF7A0u;
        // 0x4ff7a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FF7A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FF7A8u;
    // 0x4ff7a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ff7a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ff7ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ff7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ff7b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4ff7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4ff7b4: 0xc13fb58  jal         func_4FED60
    ctx->pc = 0x4FF7B4u;
    SET_GPR_U32(ctx, 31, 0x4FF7BCu);
    ctx->pc = 0x4FF7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FF7B4u;
    // 0x4ff7b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FED60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FED60u, 0x4FF7B4u, 0x4FF7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FF7BCu;
label_4ff7bc:
    // 0x4ff7bc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4ff7bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ff7c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4ff7c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ff7c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ff7c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ff7c8: 0x3e00008  jr          $ra
    ctx->pc = 0x4FF7C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FF7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FF7C8u;
        // 0x4ff7cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FF7C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FF7D0u;
    // 0x4ff7d0: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x4ff7d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ff7d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4ff7d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ff7d8: 0xac860014  sw          $a2, 0x14($a0)
    ctx->pc = 0x4ff7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 6));
    // 0x4ff7dc: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x4ff7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4ff7e0: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x4ff7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x4ff7e4: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x4ff7e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x4ff7e8: 0x3e00008  jr          $ra
    ctx->pc = 0x4FF7E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FF7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FF7E8u;
        // 0x4ff7ec: 0xac86001c  sw          $a2, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FF7E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FF7F0u;
}
