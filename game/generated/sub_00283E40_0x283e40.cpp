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

// Function: sub_00283E40
// Address: 0x283e40 - 0x283ec8
void sub_00283E40_0x283e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283E40_0x283e40");
#endif

    switch (ctx->pc) {
        case 0x283e88u: goto label_283e88;
        default: break;
    }

    ctx->pc = 0x283e40u;

    // 0x283e40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x283e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x283e44: 0x2784ca90  addiu       $a0, $gp, -0x3570
    ctx->pc = 0x283e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953616));
    // 0x283e48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x283e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x283e4c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x283e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x283e50: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x283e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x283e54: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x283E54u;
    {
        const bool branch_taken_0x283e54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x283E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283E54u;
        // 0x283e58: 0x244583c0  addiu       $a1, $v0, -0x7C40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283e54) {
            ctx->pc = 0x283E68u;
            goto label_283e68;
        }
    }
    ctx->pc = 0x283E5Cu;
    // 0x283e5c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x283e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x283e60: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x283E60u;
    {
        const bool branch_taken_0x283e60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283E60u;
        // 0x283e64: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283e60) {
            ctx->pc = 0x283E7Cu;
            goto label_283e7c;
        }
    }
    ctx->pc = 0x283E68u;
label_283e68:
    // 0x283e68: 0x90a30031  lbu         $v1, 0x31($a1)
    ctx->pc = 0x283e68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 49)));
    // 0x283e6c: 0x90a2002d  lbu         $v0, 0x2D($a1)
    ctx->pc = 0x283e6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 45)));
    // 0x283e70: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x283E70u;
    {
        const bool branch_taken_0x283e70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x283E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283E70u;
        // 0x283e74: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283e70) {
            ctx->pc = 0x283EB0u;
            goto label_283eb0;
        }
    }
    ctx->pc = 0x283E78u;
    // 0x283e78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x283e78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_283e7c:
    // 0x283e7c: 0x80a0f6a  j           func_283DA8
    ctx->pc = 0x283E7Cu;
    ctx->pc = 0x283E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283E7Cu;
    // 0x283e80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283DA8u;
    sub_00283DA8_0x283da8(rdram, ctx, runtime); return;
    ctx->pc = 0x283E84u;
    // 0x283e84: 0x0  nop
    ctx->pc = 0x283e84u;
    // NOP
label_283e88:
    // 0x283e88: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x283E88u;
    {
        const bool branch_taken_0x283e88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x283E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283E88u;
        // 0x283e8c: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283e88) {
            ctx->pc = 0x283EACu;
            goto label_283eac;
        }
    }
    ctx->pc = 0x283E90u;
    // 0x283e90: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x283e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x283e94: 0x7c0821  addu        $at, $v1, $gp
    ctx->pc = 0x283e94u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 28)));
    // 0x283e98: 0xac22caa8  sw          $v0, -0x3558($at)
    ctx->pc = 0x283e98u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953640), GPR_U32(ctx, 2));
    // 0x283e9c: 0x7c0821  addu        $at, $v1, $gp
    ctx->pc = 0x283e9cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 28)));
    // 0x283ea0: 0xac20ca98  sw          $zero, -0x3568($at)
    ctx->pc = 0x283ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953624), GPR_U32(ctx, 0));
    // 0x283ea4: 0x7c0821  addu        $at, $v1, $gp
    ctx->pc = 0x283ea4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 28)));
    // 0x283ea8: 0xac20caa0  sw          $zero, -0x3560($at)
    ctx->pc = 0x283ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953632), GPR_U32(ctx, 0));
label_283eac:
    // 0x283eac: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x283eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_283eb0:
    // 0x283eb0: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x283eb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x283eb4: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x283EB4u;
    {
        const bool branch_taken_0x283eb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x283eb4) {
            ctx->pc = 0x283EB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283EB4u;
            // 0x283eb8: 0x90a20031  lbu         $v0, 0x31($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 49)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283E88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_283e88;
        }
    }
    ctx->pc = 0x283EBCu;
    // 0x283ebc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x283ebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x283ec0: 0x3e00008  jr          $ra
    ctx->pc = 0x283EC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283EC0u;
        // 0x283ec4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283EC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283EC8u;
}
