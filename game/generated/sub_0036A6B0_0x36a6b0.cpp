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

// Function: sub_0036A6B0
// Address: 0x36a6b0 - 0x36a700
void sub_0036A6B0_0x36a6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036A6B0_0x36a6b0");
#endif

    switch (ctx->pc) {
        case 0x36a6d4u: goto label_36a6d4;
        case 0x36a6e8u: goto label_36a6e8;
        default: break;
    }

    ctx->pc = 0x36a6b0u;

    // 0x36a6b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36a6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36a6b4: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36a6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36a6b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36a6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36a6bc: 0x24506d18  addiu       $s0, $v0, 0x6D18
    ctx->pc = 0x36a6bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 27928));
    // 0x36a6c0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36a6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D6D18u));
    // 0x36a6c4: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x36A6C4u;
    {
        const bool branch_taken_0x36a6c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36A6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A6C4u;
        // 0x36a6c8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a6c4) {
            ctx->pc = 0x36A6E8u;
            goto label_36a6e8;
        }
    }
    ctx->pc = 0x36A6CCu;
    // 0x36a6cc: 0xc0da950  jal         func_36A540
    ctx->pc = 0x36A6CCu;
    SET_GPR_U32(ctx, 31, 0x36A6D4u);
    ctx->pc = 0x36A540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A540u, 0x36A6CCu, 0x36A6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A6D4u;
label_36a6d4:
    // 0x36a6d4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x36a6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x36a6d8: 0x24a52750  addiu       $a1, $a1, 0x2750
    ctx->pc = 0x36a6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10064));
    // 0x36a6dc: 0x2786cc70  addiu       $a2, $gp, -0x3390
    ctx->pc = 0x36a6dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294954096));
    // 0x36a6e0: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36A6E0u;
    SET_GPR_U32(ctx, 31, 0x36A6E8u);
    ctx->pc = 0x36A6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A6E0u;
    // 0x36a6e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36A6E0u, 0x36A6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A6E8u;
label_36a6e8:
    // 0x36a6e8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36a6e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a6ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36a6ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36a6f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36a6f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36a6f4: 0x3e00008  jr          $ra
    ctx->pc = 0x36A6F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A6F4u;
        // 0x36a6f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A6F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A6FCu;
    // 0x36a6fc: 0x0  nop
    ctx->pc = 0x36a6fcu;
    // NOP
    ctx->pc = 0x36a700u;
}
