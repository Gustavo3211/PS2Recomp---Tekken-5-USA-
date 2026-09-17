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

// Function: sub_0029E558
// Address: 0x29e558 - 0x29e5a8
void sub_0029E558_0x29e558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029E558_0x29e558");
#endif

    ctx->pc = 0x29e558u;

    // 0x29e558: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x29e558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x29e55c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x29e55cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x29e560: 0x8c4483c0  lw          $a0, -0x7C40($v0)
    ctx->pc = 0x29e560u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x29e564: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x29E564u;
    {
        const bool branch_taken_0x29e564 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x29E568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E564u;
        // 0x29e568: 0x28820006  slti        $v0, $a0, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e564) {
            ctx->pc = 0x29E598u;
            goto label_29e598;
        }
    }
    ctx->pc = 0x29E56Cu;
    // 0x29e56c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29E56Cu;
    {
        const bool branch_taken_0x29e56c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E56Cu;
        // 0x29e570: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e56c) {
            ctx->pc = 0x29E588u;
            goto label_29e588;
        }
    }
    ctx->pc = 0x29E574u;
    // 0x29e574: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x29e574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x29e578: 0x50820008  beql        $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x29E578u;
    {
        const bool branch_taken_0x29e578 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x29e578) {
            ctx->pc = 0x29E57Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29E578u;
            // 0x29e57c: 0x8f83cad4  lw          $v1, -0x352C($gp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953684)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29E59Cu;
            goto label_29e59c;
        }
    }
    ctx->pc = 0x29E580u;
    // 0x29e580: 0x3e00008  jr          $ra
    ctx->pc = 0x29E580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E588u;
label_29e588:
    // 0x29e588: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29E588u;
    {
        const bool branch_taken_0x29e588 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x29E58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E588u;
        // 0x29e58c: 0x8f83cad8  lw          $v1, -0x3528($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e588) {
            ctx->pc = 0x29E59Cu;
            goto label_29e59c;
        }
    }
    ctx->pc = 0x29E590u;
    // 0x29e590: 0x3e00008  jr          $ra
    ctx->pc = 0x29E590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E598u;
label_29e598:
    // 0x29e598: 0x8f83cad0  lw          $v1, -0x3530($gp)
    ctx->pc = 0x29e598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953680)));
label_29e59c:
    // 0x29e59c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29e59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29e5a0: 0x3e00008  jr          $ra
    ctx->pc = 0x29E5A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E5A0u;
        // 0x29e5a4: 0xac62015c  sw          $v0, 0x15C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 348), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E5A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E5A8u;
}
