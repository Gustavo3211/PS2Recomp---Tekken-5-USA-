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

// Function: sub_0036B388
// Address: 0x36b388 - 0x36b3e8
void sub_0036B388_0x36b388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036B388_0x36b388");
#endif

    switch (ctx->pc) {
        case 0x36b3b8u: goto label_36b3b8;
        default: break;
    }

    ctx->pc = 0x36b388u;

    // 0x36b388: 0x3e00008  jr          $ra
    ctx->pc = 0x36B388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36B390u;
    // 0x36b390: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36b390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36b394: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x36b394u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b398: 0x2442e0f8  addiu       $v0, $v0, -0x1F08
    ctx->pc = 0x36b398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959352));
    // 0x36b39c: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x36b39cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x36b3a0: 0xad420008  sw          $v0, 0x8($t2)
    ctx->pc = 0x36b3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 2));
    // 0x36b3a4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x36b3a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b3a8: 0xad45006c  sw          $a1, 0x6C($t2)
    ctx->pc = 0x36b3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 108), GPR_U32(ctx, 5));
    // 0x36b3ac: 0xad470054  sw          $a3, 0x54($t2)
    ctx->pc = 0x36b3acu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 84), GPR_U32(ctx, 7));
    // 0x36b3b0: 0xad460050  sw          $a2, 0x50($t2)
    ctx->pc = 0x36b3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 80), GPR_U32(ctx, 6));
    // 0x36b3b4: 0x25460008  addiu       $a2, $t2, 0x8
    ctx->pc = 0x36b3b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
label_36b3b8:
    // 0x36b3b8: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x36b3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x36b3bc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x36b3bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x36b3c0: 0x481821  addu        $v1, $v0, $t0
    ctx->pc = 0x36b3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x36b3c4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x36b3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x36b3c8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x36b3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36b3cc: 0x29250005  slti        $a1, $t1, 0x5
    ctx->pc = 0x36b3ccu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x36b3d0: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x36B3D0u;
    {
        const bool branch_taken_0x36b3d0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x36B3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B3D0u;
        // 0x36b3d4: 0xac440050  sw          $a0, 0x50($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b3d0) {
            ctx->pc = 0x36B3B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36b3b8;
        }
    }
    ctx->pc = 0x36B3D8u;
    // 0x36b3d8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x36b3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x36b3dc: 0x2463b178  addiu       $v1, $v1, -0x4E88
    ctx->pc = 0x36b3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947192));
    // 0x36b3e0: 0x3e00008  jr          $ra
    ctx->pc = 0x36B3E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36B3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B3E0u;
        // 0x36b3e4: 0xad430038  sw          $v1, 0x38($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B3E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36B3E8u;
}
