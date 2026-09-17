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

// Function: sub_0033A400
// Address: 0x33a400 - 0x33a488
void sub_0033A400_0x33a400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033A400_0x33a400");
#endif

    switch (ctx->pc) {
        case 0x33a418u: goto label_33a418;
        case 0x33a41cu: goto label_33a41c;
        default: break;
    }

    ctx->pc = 0x33a400u;

    // 0x33a400: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x33a400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x33a404: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x33A404u;
    {
        const bool branch_taken_0x33a404 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A404u;
        // 0x33a408: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a404) {
            ctx->pc = 0x33A47Cu;
            goto label_33a47c;
        }
    }
    ctx->pc = 0x33A40Cu;
    // 0x33a40c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x33A40Cu;
    {
        const bool branch_taken_0x33a40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A40Cu;
        // 0x33a410: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a40c) {
            ctx->pc = 0x33A420u;
            goto label_33a420;
        }
    }
    ctx->pc = 0x33A414u;
    // 0x33a414: 0x0  nop
    ctx->pc = 0x33a414u;
    // NOP
label_33a418:
    // 0x33a418: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x33a418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_33a41c:
    // 0x33a41c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x33a41cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_33a420:
    // 0x33a420: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x33A420u;
    {
        const bool branch_taken_0x33a420 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A420u;
        // 0x33a424: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a420) {
            ctx->pc = 0x33A478u;
            goto label_33a478;
        }
    }
    ctx->pc = 0x33A428u;
    // 0x33a428: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x33a428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33a42c: 0x0  nop
    ctx->pc = 0x33a42cu;
    // NOP
    // 0x33a430: 0x0  nop
    ctx->pc = 0x33a430u;
    // NOP
    // 0x33a434: 0x0  nop
    ctx->pc = 0x33a434u;
    // NOP
    // 0x33a438: 0x5445fff8  bnel        $v0, $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x33A438u;
    {
        const bool branch_taken_0x33a438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x33a438) {
            ctx->pc = 0x33A43Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A438u;
            // 0x33a43c: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A41Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33a41c;
        }
    }
    ctx->pc = 0x33A440u;
    // 0x33a440: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x33A440u;
    {
        const bool branch_taken_0x33a440 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a440) {
            ctx->pc = 0x33A45Cu;
            goto label_33a45c;
        }
    }
    ctx->pc = 0x33A448u;
    // 0x33a448: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x33a448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x33a44c: 0x21702  srl         $v0, $v0, 28
    ctx->pc = 0x33a44cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 28));
    // 0x33a450: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x33a450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x33a454: 0x5040fff1  beql        $v0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x33A454u;
    {
        const bool branch_taken_0x33a454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a454) {
            ctx->pc = 0x33A458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A454u;
            // 0x33a458: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A41Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33a41c;
        }
    }
    ctx->pc = 0x33A45Cu;
label_33a45c:
    // 0x33a45c: 0x10e00006  beqz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x33A45Cu;
    {
        const bool branch_taken_0x33a45c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A45Cu;
        // 0x33a460: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a45c) {
            ctx->pc = 0x33A478u;
            goto label_33a478;
        }
    }
    ctx->pc = 0x33A464u;
    // 0x33a464: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x33a464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x33a468: 0x21742  srl         $v0, $v0, 29
    ctx->pc = 0x33a468u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 29));
    // 0x33a46c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x33a46cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x33a470: 0x1040ffe9  beqz        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x33A470u;
    {
        const bool branch_taken_0x33a470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A470u;
        // 0x33a474: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a470) {
            ctx->pc = 0x33A418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33a418;
        }
    }
    ctx->pc = 0x33A478u;
label_33a478:
    // 0x33a478: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x33a478u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_33a47c:
    // 0x33a47c: 0x3e00008  jr          $ra
    ctx->pc = 0x33A47Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A47Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33A484u;
    // 0x33a484: 0x0  nop
    ctx->pc = 0x33a484u;
    // NOP
    ctx->pc = 0x33a488u;
}
