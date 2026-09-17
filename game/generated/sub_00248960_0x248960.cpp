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

// Function: sub_00248960
// Address: 0x248960 - 0x2489a8
void sub_00248960_0x248960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248960_0x248960");
#endif

    switch (ctx->pc) {
        case 0x248974u: goto label_248974;
        default: break;
    }

    ctx->pc = 0x248960u;

    // 0x248960: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x248960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x248964: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x248964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x248968: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x248968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x24896c: 0xc092240  jal         func_248900
    ctx->pc = 0x24896Cu;
    SET_GPR_U32(ctx, 31, 0x248974u);
    ctx->pc = 0x248970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24896Cu;
    // 0x248970: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248900u, 0x24896Cu, 0x248974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248974u;
label_248974:
    // 0x248974: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x248974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248978: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x248978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24897c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x24897cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x248980: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x248980u;
    {
        const bool branch_taken_0x248980 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x248984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248980u;
        // 0x248984: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248980) {
            ctx->pc = 0x248994u;
            goto label_248994;
        }
    }
    ctx->pc = 0x248988u;
    // 0x248988: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x248988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x24898c: 0x501026  xor         $v0, $v0, $s0
    ctx->pc = 0x24898cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 16));
    // 0x248990: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x248990u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_248994:
    // 0x248994: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x248994u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x248998: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x248998u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24899c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24899cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2489a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2489A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2489A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2489A0u;
        // 0x2489a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2489A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2489A8u;
}
