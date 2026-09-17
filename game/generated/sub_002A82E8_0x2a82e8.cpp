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

// Function: sub_002A82E8
// Address: 0x2a82e8 - 0x2a8388
void sub_002A82E8_0x2a82e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A82E8_0x2a82e8");
#endif

    switch (ctx->pc) {
        case 0x2a8300u: goto label_2a8300;
        case 0x2a8358u: goto label_2a8358;
        default: break;
    }

    ctx->pc = 0x2a82e8u;

    // 0x2a82e8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2a82e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a82ec: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2A82ECu;
    {
        const bool branch_taken_0x2a82ec = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2A82F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A82ECu;
        // 0x2a82f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a82ec) {
            ctx->pc = 0x2A8330u;
            goto label_2a8330;
        }
    }
    ctx->pc = 0x2A82F4u;
    // 0x2a82f4: 0x8c890190  lw          $t1, 0x190($a0)
    ctx->pc = 0x2a82f4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 400)));
    // 0x2a82f8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2a82f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a82fc: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x2a82fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_2a8300:
    // 0x2a8300: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2a8300u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2a8304: 0x493021  addu        $a2, $v0, $t1
    ctx->pc = 0x2a8304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2a8308: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2a8308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a830c: 0x14450006  bne         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A830Cu;
    {
        const bool branch_taken_0x2a830c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x2A8310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A830Cu;
        // 0x2a8310: 0xe8182a  slt         $v1, $a3, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a830c) {
            ctx->pc = 0x2A8328u;
            goto label_2a8328;
        }
    }
    ctx->pc = 0x2A8314u;
    // 0x2a8314: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2a8314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2a8318: 0x8c830194  lw          $v1, 0x194($a0)
    ctx->pc = 0x2a8318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 404)));
    // 0x2a831c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2a831cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2a8320: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8320u;
        // 0x2a8324: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8328u;
label_2a8328:
    // 0x2a8328: 0x5460fff5  bnel        $v1, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x2A8328u;
    {
        const bool branch_taken_0x2a8328 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a8328) {
            ctx->pc = 0x2A832Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A8328u;
            // 0x2a832c: 0x710c0  sll         $v0, $a3, 3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A8300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a8300;
        }
    }
    ctx->pc = 0x2A8330u;
label_2a8330:
    // 0x2a8330: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2a8330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2a8334: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8334u;
        // 0x2a8338: 0x2442cdb8  addiu       $v0, $v0, -0x3248 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954424));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A833Cu;
    // 0x2a833c: 0x0  nop
    ctx->pc = 0x2a833cu;
    // NOP
    // 0x2a8340: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2a8340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a8344: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2A8344u;
    {
        const bool branch_taken_0x2a8344 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2A8348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8344u;
        // 0x2a8348: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8344) {
            ctx->pc = 0x2A837Cu;
            goto label_2a837c;
        }
    }
    ctx->pc = 0x2A834Cu;
    // 0x2a834c: 0x8c840190  lw          $a0, 0x190($a0)
    ctx->pc = 0x2a834cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 400)));
    // 0x2a8350: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2a8350u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8354: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x2a8354u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_2a8358:
    // 0x2a8358: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2a8358u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2a835c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2a835cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2a8360: 0xe8302a  slt         $a2, $a3, $t0
    ctx->pc = 0x2a8360u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2a8364: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a8364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a8368: 0x10650005  beq         $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A8368u;
    {
        const bool branch_taken_0x2a8368 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x2A836Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8368u;
        // 0x2a836c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8368) {
            ctx->pc = 0x2A8380u;
            goto label_2a8380;
        }
    }
    ctx->pc = 0x2A8370u;
    // 0x2a8370: 0x0  nop
    ctx->pc = 0x2a8370u;
    // NOP
    // 0x2a8374: 0x54c0fff8  bnel        $a2, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2A8374u;
    {
        const bool branch_taken_0x2a8374 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a8374) {
            ctx->pc = 0x2A8378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A8374u;
            // 0x2a8378: 0x710c0  sll         $v0, $a3, 3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A8358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a8358;
        }
    }
    ctx->pc = 0x2A837Cu;
label_2a837c:
    // 0x2a837c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a837cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8380:
    // 0x2a8380: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8388u;
}
