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

// Function: sub_002E26B8
// Address: 0x2e26b8 - 0x2e2728
void sub_002E26B8_0x2e26b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E26B8_0x2e26b8");
#endif

    ctx->pc = 0x2e26b8u;

    // 0x2e26b8: 0x2484007c  addiu       $a0, $a0, 0x7C
    ctx->pc = 0x2e26b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 124));
    // 0x2e26bc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e26bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e26c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E26C0u;
    {
        const bool branch_taken_0x2e26c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E26C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E26C0u;
        // 0x2e26c4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e26c0) {
            ctx->pc = 0x2E26D8u;
            goto label_2e26d8;
        }
    }
    ctx->pc = 0x2E26C8u;
    // 0x2e26c8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e26c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e26cc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e26ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e26d0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E26D0u;
    {
        const bool branch_taken_0x2e26d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e26d0) {
            ctx->pc = 0x2E26E4u;
            goto label_2e26e4;
        }
    }
    ctx->pc = 0x2E26D8u;
label_2e26d8:
    // 0x2e26d8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e26d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e26dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e26dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e26e0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e26e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_2e26e4:
    // 0x2e26e4: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x2E26E4u;
    {
        const bool branch_taken_0x2e26e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e26e4) {
            ctx->pc = 0x2E2720u;
            goto label_2e2720;
        }
    }
    ctx->pc = 0x2E26ECu;
    // 0x2e26ec: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e26ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e26f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E26F0u;
    {
        const bool branch_taken_0x2e26f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E26F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E26F0u;
        // 0x2e26f4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e26f0) {
            ctx->pc = 0x2E2708u;
            goto label_2e2708;
        }
    }
    ctx->pc = 0x2E26F8u;
    // 0x2e26f8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e26f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e26fc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e26fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e2700: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2700u;
    {
        const bool branch_taken_0x2e2700 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e2700) {
            ctx->pc = 0x2E2704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2700u;
            // 0x2e2704: 0x8cc2005c  lw          $v0, 0x5C($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2718u;
            goto label_2e2718;
        }
    }
    ctx->pc = 0x2E2708u;
label_2e2708:
    // 0x2e2708: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e2708u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2e270c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e270cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2710: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e2710u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e2714: 0x8cc2005c  lw          $v0, 0x5C($a2)
    ctx->pc = 0x2e2714u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5Cu));
label_2e2718:
    // 0x2e2718: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E2718u;
    {
        const bool branch_taken_0x2e2718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2718) {
            ctx->pc = 0x2E271Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2718u;
            // 0x2e271c: 0xacc5005c  sw          $a1, 0x5C($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 92), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2720u;
            goto label_2e2720;
        }
    }
    ctx->pc = 0x2E2720u;
label_2e2720:
    // 0x2e2720: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2728u;
}
