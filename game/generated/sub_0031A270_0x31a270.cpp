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

// Function: sub_0031A270
// Address: 0x31a270 - 0x31a330
void sub_0031A270_0x31a270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031A270_0x31a270");
#endif

    switch (ctx->pc) {
        case 0x31a284u: goto label_31a284;
        case 0x31a2ccu: goto label_31a2cc;
        case 0x31a2ecu: goto label_31a2ec;
        case 0x31a324u: goto label_31a324;
        default: break;
    }

    ctx->pc = 0x31a270u;

    // 0x31a270: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x31a270u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x31a274: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31a274u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31a278: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31a278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31a27c: 0xc0c69c4  jal         func_31A710
    ctx->pc = 0x31A27Cu;
    SET_GPR_U32(ctx, 31, 0x31A284u);
    ctx->pc = 0x31A280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A27Cu;
    // 0x31a280: 0x24840400  addiu       $a0, $a0, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A710u, 0x31A27Cu, 0x31A284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A284u;
label_31a284:
    // 0x31a284: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31a284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31a288: 0x3e00008  jr          $ra
    ctx->pc = 0x31A288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A288u;
        // 0x31a28c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31A290u;
    // 0x31a290: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x31a290u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a294: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x31a294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a298: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x31a298u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a29c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x31a29cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a2a0: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x31a2a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a2a4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x31a2a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a2a8: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x31a2a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a2ac: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x31a2acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a2b0: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x31a2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x31a2b4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31a2b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31a2b8: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x31a2b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a2bc: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x31a2bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a2c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31a2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31a2c4: 0xc0c6a06  jal         func_31A818
    ctx->pc = 0x31A2C4u;
    SET_GPR_U32(ctx, 31, 0x31A2CCu);
    ctx->pc = 0x31A2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A2C4u;
    // 0x31a2c8: 0x24840400  addiu       $a0, $a0, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A818u, 0x31A2C4u, 0x31A2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A2CCu;
label_31a2cc:
    // 0x31a2cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31a2ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31a2d0: 0x3e00008  jr          $ra
    ctx->pc = 0x31A2D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A2D0u;
        // 0x31a2d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A2D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31A2D8u;
    // 0x31a2d8: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x31a2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x31a2dc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31a2dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31a2e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31a2e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31a2e4: 0xc0c6a20  jal         func_31A880
    ctx->pc = 0x31A2E4u;
    SET_GPR_U32(ctx, 31, 0x31A2ECu);
    ctx->pc = 0x31A2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A2E4u;
    // 0x31a2e8: 0x24840400  addiu       $a0, $a0, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A880u, 0x31A2E4u, 0x31A2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A2ECu;
label_31a2ec:
    // 0x31a2ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31a2ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31a2f0: 0x3e00008  jr          $ra
    ctx->pc = 0x31A2F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A2F0u;
        // 0x31a2f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A2F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31A2F8u;
    // 0x31a2f8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x31a2f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a2fc: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x31a2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x31a300: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x31a300u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a304: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x31a304u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a308: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31a308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31a30c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x31a30cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a310: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x31a310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a314: 0x24840400  addiu       $a0, $a0, 0x400
    ctx->pc = 0x31a314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1024));
    // 0x31a318: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31a318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31a31c: 0xc0c6aa2  jal         func_31AA88
    ctx->pc = 0x31A31Cu;
    SET_GPR_U32(ctx, 31, 0x31A324u);
    ctx->pc = 0x31A320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A31Cu;
    // 0x31a320: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31AA88u, 0x31A31Cu, 0x31A324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A324u;
label_31a324:
    // 0x31a324: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31a324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31a328: 0x3e00008  jr          $ra
    ctx->pc = 0x31A328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A328u;
        // 0x31a32c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31A330u;
}
