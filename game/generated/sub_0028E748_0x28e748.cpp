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

// Function: sub_0028E748
// Address: 0x28e748 - 0x28e798
void sub_0028E748_0x28e748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E748_0x28e748");
#endif

    switch (ctx->pc) {
        case 0x28e758u: goto label_28e758;
        default: break;
    }

    ctx->pc = 0x28e748u;

    // 0x28e748: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28e748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28e74c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28e74cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28e750: 0xc08215c  jal         func_208570
    ctx->pc = 0x28E750u;
    SET_GPR_U32(ctx, 31, 0x28E758u);
    ctx->pc = 0x208570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208570u, 0x28E750u, 0x28E758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E758u;
label_28e758:
    // 0x28e758: 0x3842001f  xori        $v0, $v0, 0x1F
    ctx->pc = 0x28e758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)31);
    // 0x28e75c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28e75cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28e760: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x28e760u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x28e764: 0x3e00008  jr          $ra
    ctx->pc = 0x28E764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E764u;
        // 0x28e768: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28E76Cu;
    // 0x28e76c: 0x0  nop
    ctx->pc = 0x28e76cu;
    // NOP
    // 0x28e770: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x28e770u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x28e774: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28e774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e778: 0x8c8388a8  lw          $v1, -0x7758($a0)
    ctx->pc = 0x28e778u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A88A8u));
    // 0x28e77c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x28e77cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x28e780: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x28e780u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x28e784: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x28E784u;
    {
        const bool branch_taken_0x28e784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E784u;
        // 0x28e788: 0x30630002  andi        $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e784) {
            ctx->pc = 0x28E790u;
            goto label_28e790;
        }
    }
    ctx->pc = 0x28E78Cu;
    // 0x28e78c: 0x3282b  sltu        $a1, $zero, $v1
    ctx->pc = 0x28e78cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_28e790:
    // 0x28e790: 0x3e00008  jr          $ra
    ctx->pc = 0x28E790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E790u;
        // 0x28e794: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28E798u;
}
