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

// Function: sub_002EF2B0
// Address: 0x2ef2b0 - 0x2ef310
void sub_002EF2B0_0x2ef2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EF2B0_0x2ef2b0");
#endif

    switch (ctx->pc) {
        case 0x2ef2f0u: goto label_2ef2f0;
        default: break;
    }

    ctx->pc = 0x2ef2b0u;

    // 0x2ef2b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ef2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ef2b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ef2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ef2b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ef2b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef2bc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ef2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2ef2c0: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x2ef2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x2ef2c4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EF2C4u;
    {
        const bool branch_taken_0x2ef2c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef2c4) {
            ctx->pc = 0x2EF2C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF2C4u;
            // 0x2ef2c8: 0x8e020058  lw          $v0, 0x58($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF2E0u;
            goto label_2ef2e0;
        }
    }
    ctx->pc = 0x2EF2CCu;
    // 0x2ef2cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ef2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ef2d0: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x2ef2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x2ef2d4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2EF2D4u;
    {
        const bool branch_taken_0x2ef2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF2D4u;
        // 0x2ef2d8: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef2d4) {
            ctx->pc = 0x2EF2FCu;
            goto label_2ef2fc;
        }
    }
    ctx->pc = 0x2EF2DCu;
    // 0x2ef2dc: 0x0  nop
    ctx->pc = 0x2ef2dcu;
    // NOP
label_2ef2e0:
    // 0x2ef2e0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EF2E0u;
    {
        const bool branch_taken_0x2ef2e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef2e0) {
            ctx->pc = 0x2EF2E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF2E0u;
            // 0x2ef2e4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF2F4u;
            goto label_2ef2f4;
        }
    }
    ctx->pc = 0x2EF2E8u;
    // 0x2ef2e8: 0xc0bba72  jal         func_2EE9C8
    ctx->pc = 0x2EF2E8u;
    SET_GPR_U32(ctx, 31, 0x2EF2F0u);
    ctx->pc = 0x2EE9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE9C8u, 0x2EF2E8u, 0x2EF2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF2F0u;
label_2ef2f0:
    // 0x2ef2f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ef2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ef2f4:
    // 0x2ef2f4: 0xae000110  sw          $zero, 0x110($s0)
    ctx->pc = 0x2ef2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
    // 0x2ef2f8: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x2ef2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
label_2ef2fc:
    // 0x2ef2fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ef2fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ef300: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ef300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ef304: 0x3e00008  jr          $ra
    ctx->pc = 0x2EF304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EF308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF304u;
        // 0x2ef308: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EF30Cu;
    // 0x2ef30c: 0x0  nop
    ctx->pc = 0x2ef30cu;
    // NOP
    ctx->pc = 0x2ef310u;
}
