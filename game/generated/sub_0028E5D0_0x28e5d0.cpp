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

// Function: sub_0028E5D0
// Address: 0x28e5d0 - 0x28e630
void sub_0028E5D0_0x28e5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E5D0_0x28e5d0");
#endif

    switch (ctx->pc) {
        case 0x28e624u: goto label_28e624;
        default: break;
    }

    ctx->pc = 0x28e5d0u;

    // 0x28e5d0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x28e5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x28e5d4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28e5d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28e5d8: 0x8c4383c0  lw          $v1, -0x7C40($v0)
    ctx->pc = 0x28e5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x28e5dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28e5dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28e5e0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x28E5E0u;
    {
        const bool branch_taken_0x28e5e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E5E0u;
        // 0x28e5e4: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e5e0) {
            ctx->pc = 0x28E608u;
            goto label_28e608;
        }
    }
    ctx->pc = 0x28E5E8u;
    // 0x28e5e8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28E5E8u;
    {
        const bool branch_taken_0x28e5e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E5E8u;
        // 0x28e5ec: 0x3c020017  lui         $v0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e5e8) {
            ctx->pc = 0x28E60Cu;
            goto label_28e60c;
        }
    }
    ctx->pc = 0x28E5F0u;
    // 0x28e5f0: 0x38620005  xori        $v0, $v1, 0x5
    ctx->pc = 0x28e5f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)5);
    // 0x28e5f4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28E5F4u;
    {
        const bool branch_taken_0x28e5f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E5F4u;
        // 0x28e5f8: 0x3c020017  lui         $v0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e5f4) {
            ctx->pc = 0x28E60Cu;
            goto label_28e60c;
        }
    }
    ctx->pc = 0x28E5FCu;
    // 0x28e5fc: 0x38620006  xori        $v0, $v1, 0x6
    ctx->pc = 0x28e5fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)6);
    // 0x28e600: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x28E600u;
    {
        const bool branch_taken_0x28e600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E600u;
        // 0x28e604: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e600) {
            ctx->pc = 0x28E628u;
            goto label_28e628;
        }
    }
    ctx->pc = 0x28E608u;
label_28e608:
    // 0x28e608: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x28e608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
label_28e60c:
    // 0x28e60c: 0x24426fe0  addiu       $v0, $v0, 0x6FE0
    ctx->pc = 0x28e60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28640));
    // 0x28e610: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x28e610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x28e614: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28E614u;
    {
        const bool branch_taken_0x28e614 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E614u;
        // 0x28e618: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e614) {
            ctx->pc = 0x28E624u;
            goto label_28e624;
        }
    }
    ctx->pc = 0x28E61Cu;
    // 0x28e61c: 0xc0a3792  jal         func_28DE48
    ctx->pc = 0x28E61Cu;
    SET_GPR_U32(ctx, 31, 0x28E624u);
    ctx->pc = 0x28DE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DE48u, 0x28E61Cu, 0x28E624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E624u;
label_28e624:
    // 0x28e624: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28e624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28e628:
    // 0x28e628: 0x3e00008  jr          $ra
    ctx->pc = 0x28E628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E628u;
        // 0x28e62c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28E630u;
}
