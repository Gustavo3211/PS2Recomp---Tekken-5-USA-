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

// Function: sub_0020E138
// Address: 0x20e138 - 0x20e1e0
void sub_0020E138_0x20e138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020E138_0x20e138");
#endif

    switch (ctx->pc) {
        case 0x20e160u: goto label_20e160;
        case 0x20e1a8u: goto label_20e1a8;
        default: break;
    }

    ctx->pc = 0x20e138u;

    // 0x20e138: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x20e138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x20e13c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x20e13cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x20e140: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x20e140u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x20e144: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x20e144u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e148: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x20E148u;
    {
        const bool branch_taken_0x20e148 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20E14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E148u;
        // 0x20e14c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e148) {
            ctx->pc = 0x20E1D4u;
            goto label_20e1d4;
        }
    }
    ctx->pc = 0x20E150u;
    // 0x20e150: 0x2486022e  addiu       $a2, $a0, 0x22E
    ctx->pc = 0x20e150u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 558));
    // 0x20e154: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20e154u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e158: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x20E158u;
    {
        const bool branch_taken_0x20e158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E158u;
        // 0x20e15c: 0x84c20000  lh          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e158) {
            ctx->pc = 0x20E174u;
            goto label_20e174;
        }
    }
    ctx->pc = 0x20E160u;
label_20e160:
    // 0x20e160: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x20e160u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x20e164: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x20e164u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x20e168: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x20E168u;
    {
        const bool branch_taken_0x20e168 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E168u;
        // 0x20e16c: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e168) {
            ctx->pc = 0x20E188u;
            goto label_20e188;
        }
    }
    ctx->pc = 0x20E170u;
    // 0x20e170: 0x8442022e  lh          $v0, 0x22E($v0)
    ctx->pc = 0x20e170u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 558)));
label_20e174:
    // 0x20e174: 0x0  nop
    ctx->pc = 0x20e174u;
    // NOP
    // 0x20e178: 0x0  nop
    ctx->pc = 0x20e178u;
    // NOP
    // 0x20e17c: 0x5445fff8  bnel        $v0, $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x20E17Cu;
    {
        const bool branch_taken_0x20e17c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x20e17c) {
            ctx->pc = 0x20E180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E17Cu;
            // 0x20e180: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20e160;
        }
    }
    ctx->pc = 0x20E184u;
    // 0x20e184: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20e184u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20e188:
    // 0x20e188: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x20e188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x20e18c: 0x54e20011  bnel        $a3, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x20E18Cu;
    {
        const bool branch_taken_0x20e18c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x20e18c) {
            ctx->pc = 0x20E190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E18Cu;
            // 0x20e190: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E1D4u;
            goto label_20e1d4;
        }
    }
    ctx->pc = 0x20E194u;
    // 0x20e194: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x20e194u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x20e198: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x20e198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20e19c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x20E19Cu;
    {
        const bool branch_taken_0x20e19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E19Cu;
        // 0x20e1a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e19c) {
            ctx->pc = 0x20E1C4u;
            goto label_20e1c4;
        }
    }
    ctx->pc = 0x20E1A4u;
    // 0x20e1a4: 0x0  nop
    ctx->pc = 0x20e1a4u;
    // NOP
label_20e1a8:
    // 0x20e1a8: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x20e1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x20e1ac: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x20e1acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x20e1b0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x20E1B0u;
    {
        const bool branch_taken_0x20e1b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E1B0u;
        // 0x20e1b4: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e1b0) {
            ctx->pc = 0x20E1D0u;
            goto label_20e1d0;
        }
    }
    ctx->pc = 0x20E1B8u;
    // 0x20e1b8: 0x2446022e  addiu       $a2, $v0, 0x22E
    ctx->pc = 0x20e1b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 558));
    // 0x20e1bc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x20e1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20e1c0: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x20e1c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_20e1c4:
    // 0x20e1c4: 0x5443fff8  bnel        $v0, $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x20E1C4u;
    {
        const bool branch_taken_0x20e1c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x20e1c4) {
            ctx->pc = 0x20E1C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E1C4u;
            // 0x20e1c8: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E1A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20e1a8;
        }
    }
    ctx->pc = 0x20E1CCu;
    // 0x20e1cc: 0xa4c50000  sh          $a1, 0x0($a2)
    ctx->pc = 0x20e1ccu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 5));
label_20e1d0:
    // 0x20e1d0: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x20e1d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_20e1d4:
    // 0x20e1d4: 0x3e00008  jr          $ra
    ctx->pc = 0x20E1D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E1D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20E1DCu;
    // 0x20e1dc: 0x0  nop
    ctx->pc = 0x20e1dcu;
    // NOP
    ctx->pc = 0x20e1e0u;
}
