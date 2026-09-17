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

// Function: sub_0036B2B0
// Address: 0x36b2b0 - 0x36b300
void sub_0036B2B0_0x36b2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036B2B0_0x36b2b0");
#endif

    switch (ctx->pc) {
        case 0x36b2d4u: goto label_36b2d4;
        case 0x36b2ecu: goto label_36b2ec;
        default: break;
    }

    ctx->pc = 0x36b2b0u;

    // 0x36b2b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36b2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36b2b4: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36b2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36b2b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36b2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36b2bc: 0x24506e28  addiu       $s0, $v0, 0x6E28
    ctx->pc = 0x36b2bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 28200));
    // 0x36b2c0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36b2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D6E28u));
    // 0x36b2c4: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36B2C4u;
    {
        const bool branch_taken_0x36b2c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36B2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B2C4u;
        // 0x36b2c8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b2c4) {
            ctx->pc = 0x36B2ECu;
            goto label_36b2ec;
        }
    }
    ctx->pc = 0x36B2CCu;
    // 0x36b2cc: 0xc0db706  jal         func_36DC18
    ctx->pc = 0x36B2CCu;
    SET_GPR_U32(ctx, 31, 0x36B2D4u);
    ctx->pc = 0x36DC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36DC18u, 0x36B2CCu, 0x36B2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B2D4u;
label_36b2d4:
    // 0x36b2d4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36b2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36b2d8: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x36b2d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36b2dc: 0x24a5b440  addiu       $a1, $a1, -0x4BC0
    ctx->pc = 0x36b2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947904));
    // 0x36b2e0: 0x24c67170  addiu       $a2, $a2, 0x7170
    ctx->pc = 0x36b2e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29040));
    // 0x36b2e4: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36B2E4u;
    SET_GPR_U32(ctx, 31, 0x36B2ECu);
    ctx->pc = 0x36B2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B2E4u;
    // 0x36b2e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36B2E4u, 0x36B2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B2ECu;
label_36b2ec:
    // 0x36b2ec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36b2ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b2f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36b2f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36b2f4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36b2f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36b2f8: 0x3e00008  jr          $ra
    ctx->pc = 0x36B2F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36B2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B2F8u;
        // 0x36b2fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B2F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36B300u;
}
