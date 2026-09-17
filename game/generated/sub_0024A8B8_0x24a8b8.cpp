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

// Function: sub_0024A8B8
// Address: 0x24a8b8 - 0x24a900
void sub_0024A8B8_0x24a8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A8B8_0x24a8b8");
#endif

    ctx->pc = 0x24a8b8u;

    // 0x24a8b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24a8b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24a8bc: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x24a8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x24a8c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24a8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24a8c4: 0x84830040  lh          $v1, 0x40($a0)
    ctx->pc = 0x24a8c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x24a8c8: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24A8C8u;
    {
        const bool branch_taken_0x24a8c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24A8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A8C8u;
        // 0x24a8cc: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a8c8) {
            ctx->pc = 0x24A8E8u;
            goto label_24a8e8;
        }
    }
    ctx->pc = 0x24A8D0u;
    // 0x24a8d0: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24A8D0u;
    {
        const bool branch_taken_0x24a8d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24A8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A8D0u;
        // 0x24a8d4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a8d0) {
            ctx->pc = 0x24A8F8u;
            goto label_24a8f8;
        }
    }
    ctx->pc = 0x24A8D8u;
    // 0x24a8d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24a8d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a8dc: 0x8092a16  j           func_24A858
    ctx->pc = 0x24A8DCu;
    ctx->pc = 0x24A8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A8DCu;
    // 0x24a8e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A858u;
    sub_0024A858_0x24a858(rdram, ctx, runtime); return;
    ctx->pc = 0x24A8E4u;
    // 0x24a8e4: 0x0  nop
    ctx->pc = 0x24a8e4u;
    // NOP
label_24a8e8:
    // 0x24a8e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24a8e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24a8ec: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x24a8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x24a8f0: 0x8092a16  j           func_24A858
    ctx->pc = 0x24A8F0u;
    ctx->pc = 0x24A8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A8F0u;
    // 0x24a8f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A858u;
    sub_0024A858_0x24a858(rdram, ctx, runtime); return;
    ctx->pc = 0x24A8F8u;
label_24a8f8:
    // 0x24a8f8: 0x3e00008  jr          $ra
    ctx->pc = 0x24A8F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A8F8u;
        // 0x24a8fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A8F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A900u;
}
