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

// Function: sub_002EB790
// Address: 0x2eb790 - 0x2eb7c8
void sub_002EB790_0x2eb790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EB790_0x2eb790");
#endif

    ctx->pc = 0x2eb790u;

    // 0x2eb790: 0x248400e8  addiu       $a0, $a0, 0xE8
    ctx->pc = 0x2eb790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 232));
    // 0x2eb794: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2eb794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2eb798: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EB798u;
    {
        const bool branch_taken_0x2eb798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB798u;
        // 0x2eb79c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb798) {
            ctx->pc = 0x2EB7B0u;
            goto label_2eb7b0;
        }
    }
    ctx->pc = 0x2EB7A0u;
    // 0x2eb7a0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2eb7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2eb7a4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2eb7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2eb7a8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EB7A8u;
    {
        const bool branch_taken_0x2eb7a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2eb7a8) {
            ctx->pc = 0x2EB7BCu;
            goto label_2eb7bc;
        }
    }
    ctx->pc = 0x2EB7B0u;
label_2eb7b0:
    // 0x2eb7b0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2eb7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2eb7b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2eb7b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb7b8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2eb7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_2eb7bc:
    // 0x2eb7bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2EB7BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EB7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB7BCu;
        // 0x2eb7c0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EB7BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EB7C4u;
    // 0x2eb7c4: 0x0  nop
    ctx->pc = 0x2eb7c4u;
    // NOP
    ctx->pc = 0x2eb7c8u;
}
