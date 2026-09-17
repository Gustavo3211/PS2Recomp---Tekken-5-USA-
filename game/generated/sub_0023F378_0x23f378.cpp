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

// Function: sub_0023F378
// Address: 0x23f378 - 0x23f3d0
void sub_0023F378_0x23f378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F378_0x23f378");
#endif

    ctx->pc = 0x23f378u;

    // 0x23f378: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23f378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f37c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x23f37cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f380: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23F380u;
    {
        const bool branch_taken_0x23f380 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x23F384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F380u;
        // 0x23f384: 0x530c0  sll         $a2, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f380) {
            ctx->pc = 0x23F3A0u;
            goto label_23f3a0;
        }
    }
    ctx->pc = 0x23F388u;
    // 0x23f388: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23f388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23f38c: 0x5082000a  beql        $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x23F38Cu;
    {
        const bool branch_taken_0x23f38c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x23f38c) {
            ctx->pc = 0x23F390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F38Cu;
            // 0x23f390: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F3B8u;
            goto label_23f3b8;
        }
    }
    ctx->pc = 0x23F394u;
    // 0x23f394: 0x3e00008  jr          $ra
    ctx->pc = 0x23F394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F394u;
        // 0x23f398: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F39Cu;
    // 0x23f39c: 0x0  nop
    ctx->pc = 0x23f39cu;
    // NOP
label_23f3a0:
    // 0x23f3a0: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x23f3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x23f3a4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x23f3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x23f3a8: 0x8c42b730  lw          $v0, -0x48D0($v0)
    ctx->pc = 0x23f3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948656)));
    // 0x23f3ac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x23F3ACu;
    {
        const bool branch_taken_0x23f3ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F3ACu;
        // 0x23f3b0: 0x21ac0  sll         $v1, $v0, 11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f3ac) {
            ctx->pc = 0x23F3C8u;
            goto label_23f3c8;
        }
    }
    ctx->pc = 0x23F3B4u;
    // 0x23f3b4: 0x0  nop
    ctx->pc = 0x23f3b4u;
    // NOP
label_23f3b8:
    // 0x23f3b8: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x23f3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x23f3bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23f3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23f3c0: 0x8c63e848  lw          $v1, -0x17B8($v1)
    ctx->pc = 0x23f3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961224)));
    // 0x23f3c4: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x23f3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
label_23f3c8:
    // 0x23f3c8: 0x3e00008  jr          $ra
    ctx->pc = 0x23F3C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F3C8u;
        // 0x23f3cc: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F3C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F3D0u;
}
