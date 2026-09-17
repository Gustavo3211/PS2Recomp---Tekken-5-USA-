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

// Function: sub_0033E8D0
// Address: 0x33e8d0 - 0x33e918
void sub_0033E8D0_0x33e8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033E8D0_0x33e8d0");
#endif

    switch (ctx->pc) {
        case 0x33e900u: goto label_33e900;
        default: break;
    }

    ctx->pc = 0x33e8d0u;

    // 0x33e8d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33e8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33e8d4: 0x2ca20002  sltiu       $v0, $a1, 0x2
    ctx->pc = 0x33e8d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x33e8d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33e8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33e8dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33e8dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e8e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x33e8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x33e8e4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x33E8E4u;
    {
        const bool branch_taken_0x33e8e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33E8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E8E4u;
        // 0x33e8e8: 0xae050060  sw          $a1, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e8e4) {
            ctx->pc = 0x33E904u;
            goto label_33e904;
        }
    }
    ctx->pc = 0x33E8ECu;
    // 0x33e8ec: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x33e8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x33e8f0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x33E8F0u;
    {
        const bool branch_taken_0x33e8f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33e8f0) {
            ctx->pc = 0x33E8F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33E8F0u;
            // 0x33e8f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33E908u;
            goto label_33e908;
        }
    }
    ctx->pc = 0x33E8F8u;
    // 0x33e8f8: 0xc0cfa46  jal         func_33E918
    ctx->pc = 0x33E8F8u;
    SET_GPR_U32(ctx, 31, 0x33E900u);
    ctx->pc = 0x33E918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E918u, 0x33E8F8u, 0x33E900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E900u;
label_33e900:
    // 0x33e900: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x33e900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_33e904:
    // 0x33e904: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33e904u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33e908:
    // 0x33e908: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33e908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33e90c: 0x3e00008  jr          $ra
    ctx->pc = 0x33E90Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33E910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E90Cu;
        // 0x33e910: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E90Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33E914u;
    // 0x33e914: 0x0  nop
    ctx->pc = 0x33e914u;
    // NOP
    ctx->pc = 0x33e918u;
}
