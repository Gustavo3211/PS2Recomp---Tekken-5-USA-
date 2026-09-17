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

// Function: sub_00254CD0
// Address: 0x254cd0 - 0x254d10
void sub_00254CD0_0x254cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254CD0_0x254cd0");
#endif

    switch (ctx->pc) {
        case 0x254ce4u: goto label_254ce4;
        default: break;
    }

    ctx->pc = 0x254cd0u;

    // 0x254cd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x254cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x254cd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x254cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x254cd8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x254cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x254cdc: 0xc040538  jal         func_1014E0
    ctx->pc = 0x254CDCu;
    SET_GPR_U32(ctx, 31, 0x254CE4u);
    ctx->pc = 0x254CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254CDCu;
    // 0x254ce0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1014E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1014E0u, 0x254CDCu, 0x254CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254CE4u;
label_254ce4:
    // 0x254ce4: 0x2e030060  sltiu       $v1, $s0, 0x60
    ctx->pc = 0x254ce4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)96) ? 1 : 0);
    // 0x254ce8: 0x1081c0  sll         $s0, $s0, 7
    ctx->pc = 0x254ce8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 7));
    // 0x254cec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x254cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254cf0: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x254CF0u;
    {
        const bool branch_taken_0x254cf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x254CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254CF0u;
        // 0x254cf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254cf0) {
            ctx->pc = 0x254CFCu;
            goto label_254cfc;
        }
    }
    ctx->pc = 0x254CF8u;
    // 0x254cf8: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x254cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_254cfc:
    // 0x254cfc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x254cfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254d00: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x254d00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x254d04: 0x3e00008  jr          $ra
    ctx->pc = 0x254D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254D04u;
        // 0x254d08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254D04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254D0Cu;
    // 0x254d0c: 0x0  nop
    ctx->pc = 0x254d0cu;
    // NOP
    ctx->pc = 0x254d10u;
}
