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

// Function: sub_0024A788
// Address: 0x24a788 - 0x24a7d0
void sub_0024A788_0x24a788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A788_0x24a788");
#endif

    ctx->pc = 0x24a788u;

    // 0x24a788: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24a788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24a78c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x24a78cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a790: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24a790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24a794: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x24A794u;
    {
        const bool branch_taken_0x24a794 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A794u;
        // 0x24a798: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a794) {
            ctx->pc = 0x24A7B0u;
            goto label_24a7b0;
        }
    }
    ctx->pc = 0x24A79Cu;
    // 0x24a79c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24a79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24a7a0: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24A7A0u;
    {
        const bool branch_taken_0x24a7a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24A7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A7A0u;
        // 0x24a7a4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a7a0) {
            ctx->pc = 0x24A7C0u;
            goto label_24a7c0;
        }
    }
    ctx->pc = 0x24A7A8u;
    // 0x24a7a8: 0x3e00008  jr          $ra
    ctx->pc = 0x24A7A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A7A8u;
        // 0x24a7ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A7A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A7B0u;
label_24a7b0:
    // 0x24a7b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24a7b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24a7b4: 0x80d6392  j           func_358E48
    ctx->pc = 0x24A7B4u;
    ctx->pc = 0x24A7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A7B4u;
    // 0x24a7b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358E48u;
    sub_00358E48_0x358e48(rdram, ctx, runtime); return;
    ctx->pc = 0x24A7BCu;
    // 0x24a7bc: 0x0  nop
    ctx->pc = 0x24a7bcu;
    // NOP
label_24a7c0:
    // 0x24a7c0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x24a7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24a7c4: 0x80d6392  j           func_358E48
    ctx->pc = 0x24A7C4u;
    ctx->pc = 0x24A7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A7C4u;
    // 0x24a7c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358E48u;
    sub_00358E48_0x358e48(rdram, ctx, runtime); return;
    ctx->pc = 0x24A7CCu;
    // 0x24a7cc: 0x0  nop
    ctx->pc = 0x24a7ccu;
    // NOP
    ctx->pc = 0x24a7d0u;
}
