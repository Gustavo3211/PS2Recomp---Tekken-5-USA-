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

// Function: sub_00241920
// Address: 0x241920 - 0x241980
void sub_00241920_0x241920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00241920_0x241920");
#endif

    ctx->pc = 0x241920u;

    // 0x241920: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x241920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x241924: 0x10820010  beq         $a0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x241924u;
    {
        const bool branch_taken_0x241924 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x241928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241924u;
        // 0x241928: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241924) {
            ctx->pc = 0x241968u;
            goto label_241968;
        }
    }
    ctx->pc = 0x24192Cu;
    // 0x24192c: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x24192cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x241930: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x241930u;
    {
        const bool branch_taken_0x241930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x241934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241930u;
        // 0x241934: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241930) {
            ctx->pc = 0x241948u;
            goto label_241948;
        }
    }
    ctx->pc = 0x241938u;
    // 0x241938: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x241938u;
    {
        const bool branch_taken_0x241938 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x241938) {
            ctx->pc = 0x24193Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241938u;
            // 0x24193c: 0x8f83c9bc  lw          $v1, -0x3644($gp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953404)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24196Cu;
            goto label_24196c;
        }
    }
    ctx->pc = 0x241940u;
    // 0x241940: 0x3e00008  jr          $ra
    ctx->pc = 0x241940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241940u;
        // 0x241944: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x241940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x241948u;
label_241948:
    // 0x241948: 0x50820008  beql        $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x241948u;
    {
        const bool branch_taken_0x241948 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x241948) {
            ctx->pc = 0x24194Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241948u;
            // 0x24194c: 0x8f83c9c4  lw          $v1, -0x363C($gp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953412)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24196Cu;
            goto label_24196c;
        }
    }
    ctx->pc = 0x241950u;
    // 0x241950: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x241950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x241954: 0x50820005  beql        $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x241954u;
    {
        const bool branch_taken_0x241954 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x241954) {
            ctx->pc = 0x241958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241954u;
            // 0x241958: 0x8f83c9c8  lw          $v1, -0x3638($gp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953416)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24196Cu;
            goto label_24196c;
        }
    }
    ctx->pc = 0x24195Cu;
    // 0x24195c: 0x3e00008  jr          $ra
    ctx->pc = 0x24195Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24195Cu;
        // 0x241960: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24195Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x241964u;
    // 0x241964: 0x0  nop
    ctx->pc = 0x241964u;
    // NOP
label_241968:
    // 0x241968: 0x8f83c9c0  lw          $v1, -0x3640($gp)
    ctx->pc = 0x241968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953408)));
label_24196c:
    // 0x24196c: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x24196cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x241970: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x241970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x241974: 0x3e00008  jr          $ra
    ctx->pc = 0x241974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241974u;
        // 0x241978: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x241974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24197Cu;
    // 0x24197c: 0x0  nop
    ctx->pc = 0x24197cu;
    // NOP
    ctx->pc = 0x241980u;
}
