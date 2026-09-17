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

// Function: sub_002B7EB8
// Address: 0x2b7eb8 - 0x2b7f10
void sub_002B7EB8_0x2b7eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7EB8_0x2b7eb8");
#endif

    ctx->pc = 0x2b7eb8u;

    // 0x2b7eb8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2b7eb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7ebc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b7ebcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b7ec0: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x2b7ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2b7ec4: 0x2ce40004  sltiu       $a0, $a3, 0x4
    ctx->pc = 0x2b7ec4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2b7ec8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b7ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b7ecc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b7eccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7ed0: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x2B7ED0u;
    {
        const bool branch_taken_0x2b7ed0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7ED0u;
        // 0x2b7ed4: 0x671821  addu        $v1, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7ed0) {
            ctx->pc = 0x2B7F00u;
            goto label_2b7f00;
        }
    }
    ctx->pc = 0x2B7ED8u;
    // 0x2b7ed8: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2b7ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b7edc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b7edcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b7ee0: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x2b7ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2b7ee4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2b7ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b7ee8: 0x3c010017  lui         $at, 0x17
    ctx->pc = 0x2b7ee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)23 << 16));
    // 0x2b7eec: 0x242178c0  addiu       $at, $at, 0x78C0
    ctx->pc = 0x2b7eecu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 30912));
    // 0x2b7ef0: 0x242021  addu        $a0, $at, $a0
    ctx->pc = 0x2b7ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x2b7ef4: 0x80ae18a  j           func_2B8628
    ctx->pc = 0x2B7EF4u;
    ctx->pc = 0x2B7EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7EF4u;
    // 0x2b7ef8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8628u, 0x2B7EF4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B7EFCu;
    // 0x2b7efc: 0x0  nop
    ctx->pc = 0x2b7efcu;
    // NOP
label_2b7f00:
    // 0x2b7f00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b7f00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b7f04: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7F04u;
        // 0x2b7f08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7F04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7F0Cu;
    // 0x2b7f0c: 0x0  nop
    ctx->pc = 0x2b7f0cu;
    // NOP
    ctx->pc = 0x2b7f10u;
}
