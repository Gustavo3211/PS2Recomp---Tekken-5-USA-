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

// Function: sub_00119798
// Address: 0x119798 - 0x119820
void sub_00119798_0x119798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119798_0x119798");
#endif

    switch (ctx->pc) {
        case 0x1197c8u: goto label_1197c8;
        default: break;
    }

    ctx->pc = 0x119798u;

    // 0x119798: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x119798u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11979c: 0x3c090013  lui         $t1, 0x13
    ctx->pc = 0x11979cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)19 << 16));
    // 0x1197a0: 0xdcc20020  ld          $v0, 0x20($a2)
    ctx->pc = 0x1197a0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x1197a4: 0x25252148  addiu       $a1, $t1, 0x2148
    ctx->pc = 0x1197a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 8520));
    // 0x1197a8: 0xdcc30010  ld          $v1, 0x10($a2)
    ctx->pc = 0x1197a8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1197ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1197acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1197b0: 0xdcc40018  ld          $a0, 0x18($a2)
    ctx->pc = 0x1197b0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x1197b4: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x1197b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1197b8: 0x8ca50018  lw          $a1, 0x18($a1)
    ctx->pc = 0x1197b8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x132160u));
    // 0x1197bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1197BCu;
    {
        const bool branch_taken_0x1197bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1197C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1197BCu;
        // 0x1197c0: 0x44382f  dsubu       $a3, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) - GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1197bc) {
            ctx->pc = 0x1197CCu;
            goto label_1197cc;
        }
    }
    ctx->pc = 0x1197C4u;
    // 0x1197c4: 0x0  nop
    ctx->pc = 0x1197c4u;
    // NOP
label_1197c8:
    // 0x1197c8: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x1197c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1197cc:
    // 0x1197cc: 0x50a0000a  beql        $a1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1197CCu;
    {
        const bool branch_taken_0x1197cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1197cc) {
            ctx->pc = 0x1197D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1197CCu;
            // 0x1197d0: 0xacc80004  sw          $t0, 0x4($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1197F8u;
            goto label_1197f8;
        }
    }
    ctx->pc = 0x1197D4u;
    // 0x1197d4: 0xdca20020  ld          $v0, 0x20($a1)
    ctx->pc = 0x1197d4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1197d8: 0xdca30010  ld          $v1, 0x10($a1)
    ctx->pc = 0x1197d8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1197dc: 0xdca40018  ld          $a0, 0x18($a1)
    ctx->pc = 0x1197dcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1197e0: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x1197e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1197e4: 0x44102f  dsubu       $v0, $v0, $a0
    ctx->pc = 0x1197e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 4));
    // 0x1197e8: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x1197e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1197ec: 0x5040fff6  beql        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x1197ECu;
    {
        const bool branch_taken_0x1197ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1197ec) {
            ctx->pc = 0x1197F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1197ECu;
            // 0x1197f0: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1197C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1197c8;
        }
    }
    ctx->pc = 0x1197F4u;
    // 0x1197f4: 0xacc80004  sw          $t0, 0x4($a2)
    ctx->pc = 0x1197f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
label_1197f8:
    // 0x1197f8: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1197F8u;
    {
        const bool branch_taken_0x1197f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1197FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1197F8u;
        // 0x1197fc: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1197f8) {
            ctx->pc = 0x119804u;
            goto label_119804;
        }
    }
    ctx->pc = 0x119800u;
    // 0x119800: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x119800u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
label_119804:
    // 0x119804: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x119804u;
    {
        const bool branch_taken_0x119804 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x119808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119804u;
        // 0x119808: 0x25222148  addiu       $v0, $t1, 0x2148 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 8520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119804) {
            ctx->pc = 0x119814u;
            goto label_119814;
        }
    }
    ctx->pc = 0x11980Cu;
    // 0x11980c: 0x3e00008  jr          $ra
    ctx->pc = 0x11980Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11980Cu;
        // 0x119810: 0xad060000  sw          $a2, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11980Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119814u;
label_119814:
    // 0x119814: 0x3e00008  jr          $ra
    ctx->pc = 0x119814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119814u;
        // 0x119818: 0xac460018  sw          $a2, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11981Cu;
    // 0x11981c: 0x0  nop
    ctx->pc = 0x11981cu;
    // NOP
    ctx->pc = 0x119820u;
}
