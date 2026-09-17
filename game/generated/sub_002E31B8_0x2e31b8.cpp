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

// Function: sub_002E31B8
// Address: 0x2e31b8 - 0x2e31f0
void sub_002E31B8_0x2e31b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E31B8_0x2e31b8");
#endif

    switch (ctx->pc) {
        case 0x2e31e0u: goto label_2e31e0;
        default: break;
    }

    ctx->pc = 0x2e31b8u;

    // 0x2e31b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e31b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e31bc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2e31bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e31c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e31c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e31c4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2e31c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e31c8: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x2e31c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x2e31cc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E31CCu;
    {
        const bool branch_taken_0x2e31cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E31D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E31CCu;
        // 0x2e31d0: 0x24640088  addiu       $a0, $v1, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e31cc) {
            ctx->pc = 0x2E31D8u;
            goto label_2e31d8;
        }
    }
    ctx->pc = 0x2E31D4u;
    // 0x2e31d4: 0xac650064  sw          $a1, 0x64($v1)
    ctx->pc = 0x2e31d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 5));
label_2e31d8:
    // 0x2e31d8: 0xc0c1274  jal         func_3049D0
    ctx->pc = 0x2E31D8u;
    SET_GPR_U32(ctx, 31, 0x2E31E0u);
    ctx->pc = 0x2E31DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E31D8u;
    // 0x2e31dc: 0x8c650058  lw          $a1, 0x58($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3049D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3049D0u, 0x2E31D8u, 0x2E31E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E31E0u;
label_2e31e0:
    // 0x2e31e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e31e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e31e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E31E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E31E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E31E4u;
        // 0x2e31e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E31E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E31ECu;
    // 0x2e31ec: 0x0  nop
    ctx->pc = 0x2e31ecu;
    // NOP
    ctx->pc = 0x2e31f0u;
}
