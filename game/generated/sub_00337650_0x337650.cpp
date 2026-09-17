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

// Function: sub_00337650
// Address: 0x337650 - 0x3376d8
void sub_00337650_0x337650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337650_0x337650");
#endif

    switch (ctx->pc) {
        case 0x337680u: goto label_337680;
        default: break;
    }

    ctx->pc = 0x337650u;

    // 0x337650: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x337650u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337654: 0x3c090044  lui         $t1, 0x44
    ctx->pc = 0x337654u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)68 << 16));
    // 0x337658: 0xdce50010  ld          $a1, 0x10($a3)
    ctx->pc = 0x337658u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x33765c: 0x25240a60  addiu       $a0, $t1, 0xA60
    ctx->pc = 0x33765cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 2656));
    // 0x337660: 0xdce20020  ld          $v0, 0x20($a3)
    ctx->pc = 0x337660u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x337664: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x337664u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337668: 0xdce30018  ld          $v1, 0x18($a3)
    ctx->pc = 0x337668u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x33766c: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x33766cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x440A78u));
    // 0x337670: 0x45102d  daddu       $v0, $v0, $a1
    ctx->pc = 0x337670u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
    // 0x337674: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x337674u;
    {
        const bool branch_taken_0x337674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337674u;
        // 0x337678: 0x43282f  dsubu       $a1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337674) {
            ctx->pc = 0x337684u;
            goto label_337684;
        }
    }
    ctx->pc = 0x33767Cu;
    // 0x33767c: 0x0  nop
    ctx->pc = 0x33767cu;
    // NOP
label_337680:
    // 0x337680: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x337680u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_337684:
    // 0x337684: 0x50c0000a  beql        $a2, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x337684u;
    {
        const bool branch_taken_0x337684 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x337684) {
            ctx->pc = 0x337688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x337684u;
            // 0x337688: 0xace80004  sw          $t0, 0x4($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3376B0u;
            goto label_3376b0;
        }
    }
    ctx->pc = 0x33768Cu;
    // 0x33768c: 0xdcc20020  ld          $v0, 0x20($a2)
    ctx->pc = 0x33768cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x337690: 0xdcc30010  ld          $v1, 0x10($a2)
    ctx->pc = 0x337690u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x337694: 0xdcc40018  ld          $a0, 0x18($a2)
    ctx->pc = 0x337694u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x337698: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x337698u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x33769c: 0x44102f  dsubu       $v0, $v0, $a0
    ctx->pc = 0x33769cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 4));
    // 0x3376a0: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x3376a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3376a4: 0x5040fff6  beql        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x3376A4u;
    {
        const bool branch_taken_0x3376a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3376a4) {
            ctx->pc = 0x3376A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3376A4u;
            // 0x3376a8: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x337680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_337680;
        }
    }
    ctx->pc = 0x3376ACu;
    // 0x3376ac: 0xace80004  sw          $t0, 0x4($a3)
    ctx->pc = 0x3376acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 8));
label_3376b0:
    // 0x3376b0: 0x10c00002  beqz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x3376B0u;
    {
        const bool branch_taken_0x3376b0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3376B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3376B0u;
        // 0x3376b4: 0xace60000  sw          $a2, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3376b0) {
            ctx->pc = 0x3376BCu;
            goto label_3376bc;
        }
    }
    ctx->pc = 0x3376B8u;
    // 0x3376b8: 0xacc70004  sw          $a3, 0x4($a2)
    ctx->pc = 0x3376b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 7));
label_3376bc:
    // 0x3376bc: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3376BCu;
    {
        const bool branch_taken_0x3376bc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3376C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3376BCu;
        // 0x3376c0: 0x25220a60  addiu       $v0, $t1, 0xA60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 2656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3376bc) {
            ctx->pc = 0x3376D0u;
            goto label_3376d0;
        }
    }
    ctx->pc = 0x3376C4u;
    // 0x3376c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3376C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3376C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3376C4u;
        // 0x3376c8: 0xad070000  sw          $a3, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3376C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3376CCu;
    // 0x3376cc: 0x0  nop
    ctx->pc = 0x3376ccu;
    // NOP
label_3376d0:
    // 0x3376d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3376D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3376D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3376D0u;
        // 0x3376d4: 0xac470018  sw          $a3, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3376D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3376D8u;
}
