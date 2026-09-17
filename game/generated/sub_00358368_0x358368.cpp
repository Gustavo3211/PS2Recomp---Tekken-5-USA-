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

// Function: sub_00358368
// Address: 0x358368 - 0x3583a0
void sub_00358368_0x358368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358368_0x358368");
#endif

    ctx->pc = 0x358368u;

    // 0x358368: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x358368u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x35836c: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x35836cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x358370: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x358370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x358374: 0x8042e78c  lb          $v0, -0x1874($v0)
    ctx->pc = 0x358374u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961036)));
    // 0x358378: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x358378u;
    {
        const bool branch_taken_0x358378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35837Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358378u;
        // 0x35837c: 0x28850020  slti        $a1, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x358378) {
            ctx->pc = 0x358390u;
            goto label_358390;
        }
    }
    ctx->pc = 0x358380u;
    // 0x358380: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x358380u;
    {
        const bool branch_taken_0x358380 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x358384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358380u;
        // 0x358384: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358380) {
            ctx->pc = 0x358394u;
            goto label_358394;
        }
    }
    ctx->pc = 0x358388u;
    // 0x358388: 0x4810002  bgez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x358388u;
    {
        const bool branch_taken_0x358388 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x35838Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358388u;
        // 0x35838c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358388) {
            ctx->pc = 0x358394u;
            goto label_358394;
        }
    }
    ctx->pc = 0x358390u;
label_358390:
    // 0x358390: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x358390u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_358394:
    // 0x358394: 0x3e00008  jr          $ra
    ctx->pc = 0x358394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35839Cu;
    // 0x35839c: 0x0  nop
    ctx->pc = 0x35839cu;
    // NOP
    ctx->pc = 0x3583a0u;
}
