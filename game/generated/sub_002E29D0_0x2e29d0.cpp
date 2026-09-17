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

// Function: sub_002E29D0
// Address: 0x2e29d0 - 0x2e2a50
void sub_002E29D0_0x2e29d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E29D0_0x2e29d0");
#endif

    switch (ctx->pc) {
        case 0x2e2a3cu: goto label_2e2a3c;
        default: break;
    }

    ctx->pc = 0x2e29d0u;

    // 0x2e29d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e29d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e29d4: 0x24850074  addiu       $a1, $a0, 0x74
    ctx->pc = 0x2e29d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 116));
    // 0x2e29d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e29d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e29dc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2e29dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e29e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E29E0u;
    {
        const bool branch_taken_0x2e29e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E29E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E29E0u;
        // 0x2e29e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e29e0) {
            ctx->pc = 0x2E29F8u;
            goto label_2e29f8;
        }
    }
    ctx->pc = 0x2E29E8u;
    // 0x2e29e8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e29e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e29ec: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2e29ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2e29f0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E29F0u;
    {
        const bool branch_taken_0x2e29f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e29f0) {
            ctx->pc = 0x2E2A04u;
            goto label_2e2a04;
        }
    }
    ctx->pc = 0x2E29F8u;
label_2e29f8:
    // 0x2e29f8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2e29f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2e29fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e29fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2a00: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2e2a00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2e2a04:
    // 0x2e2a04: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x2E2A04u;
    {
        const bool branch_taken_0x2e2a04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2A04u;
        // 0x2e2a08: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2a04) {
            ctx->pc = 0x2E2A40u;
            goto label_2e2a40;
        }
    }
    ctx->pc = 0x2E2A0Cu;
    // 0x2e2a0c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2e2a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e2a10: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E2A10u;
    {
        const bool branch_taken_0x2e2a10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2a10) {
            ctx->pc = 0x2E2A14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2A10u;
            // 0x2e2a14: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2A2Cu;
            goto label_2e2a2c;
        }
    }
    ctx->pc = 0x2E2A18u;
    // 0x2e2a18: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e2a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2e2a1c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2e2a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2e2a20: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E2A20u;
    {
        const bool branch_taken_0x2e2a20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e2a20) {
            ctx->pc = 0x2E2A34u;
            goto label_2e2a34;
        }
    }
    ctx->pc = 0x2E2A28u;
    // 0x2e2a28: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2e2a28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2e2a2c:
    // 0x2e2a2c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e2a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2a30: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2e2a30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2e2a34:
    // 0x2e2a34: 0xc0b8ce4  jal         func_2E3390
    ctx->pc = 0x2E2A34u;
    SET_GPR_U32(ctx, 31, 0x2E2A3Cu);
    ctx->pc = 0x2E3390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3390u, 0x2E2A34u, 0x2E2A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2A3Cu;
label_2e2a3c:
    // 0x2e2a3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e2a3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e2a40:
    // 0x2e2a40: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E2A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2A40u;
        // 0x2e2a44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2A40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2A48u;
    // 0x2e2a48: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E2A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2A48u;
        // 0x2e2a4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2A48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2A50u;
}
