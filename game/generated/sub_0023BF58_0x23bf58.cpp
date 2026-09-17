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

// Function: sub_0023BF58
// Address: 0x23bf58 - 0x23bfd0
void sub_0023BF58_0x23bf58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023BF58_0x23bf58");
#endif

    switch (ctx->pc) {
        case 0x23bf70u: goto label_23bf70;
        case 0x23bf78u: goto label_23bf78;
        case 0x23bf80u: goto label_23bf80;
        case 0x23bf98u: goto label_23bf98;
        case 0x23bfb0u: goto label_23bfb0;
        default: break;
    }

    ctx->pc = 0x23bf58u;

    // 0x23bf58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23bf58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23bf5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23bf5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23bf60: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23bf60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23bf64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23bf64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23bf68: 0xc08b1ea  jal         func_22C7A8
    ctx->pc = 0x23BF68u;
    SET_GPR_U32(ctx, 31, 0x23BF70u);
    ctx->pc = 0x23BF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BF68u;
    // 0x23bf6c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C7A8u, 0x23BF68u, 0x23BF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BF70u;
label_23bf70:
    // 0x23bf70: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x23bf70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bf74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23bf74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23bf78:
    // 0x23bf78: 0xc0b85da  jal         func_2E1768
    ctx->pc = 0x23BF78u;
    SET_GPR_U32(ctx, 31, 0x23BF80u);
    ctx->pc = 0x23BF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BF78u;
    // 0x23bf7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1768u, 0x23BF78u, 0x23BF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BF80u;
label_23bf80:
    // 0x23bf80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23bf80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bf84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23bf84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bf88: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23BF88u;
    {
        const bool branch_taken_0x23bf88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BF88u;
        // 0x23bf8c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bf88) {
            ctx->pc = 0x23BFB0u;
            goto label_23bfb0;
        }
    }
    ctx->pc = 0x23BF90u;
    // 0x23bf90: 0xc0b85da  jal         func_2E1768
    ctx->pc = 0x23BF90u;
    SET_GPR_U32(ctx, 31, 0x23BF98u);
    ctx->pc = 0x2E1768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1768u, 0x23BF90u, 0x23BF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BF98u;
label_23bf98:
    // 0x23bf98: 0x24440094  addiu       $a0, $v0, 0x94
    ctx->pc = 0x23bf98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 148));
    // 0x23bf9c: 0x24420054  addiu       $v0, $v0, 0x54
    ctx->pc = 0x23bf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x23bfa0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x23BFA0u;
    {
        const bool branch_taken_0x23bfa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bfa0) {
            ctx->pc = 0x23BFA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BFA0u;
            // 0x23bfa4: 0x2a020005  slti        $v0, $s0, 0x5 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23BFB4u;
            goto label_23bfb4;
        }
    }
    ctx->pc = 0x23BFA8u;
    // 0x23bfa8: 0xc0bf200  jal         func_2FC800
    ctx->pc = 0x23BFA8u;
    SET_GPR_U32(ctx, 31, 0x23BFB0u);
    ctx->pc = 0x2FC800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC800u, 0x23BFA8u, 0x23BFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BFB0u;
label_23bfb0:
    // 0x23bfb0: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x23bfb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
label_23bfb4:
    // 0x23bfb4: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x23BFB4u;
    {
        const bool branch_taken_0x23bfb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23BFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BFB4u;
        // 0x23bfb8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bfb4) {
            ctx->pc = 0x23BF78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23bf78;
        }
    }
    ctx->pc = 0x23BFBCu;
    // 0x23bfbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23bfbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23bfc0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23bfc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23bfc4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23bfc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23bfc8: 0x3e00008  jr          $ra
    ctx->pc = 0x23BFC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23BFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BFC8u;
        // 0x23bfcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BFC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23BFD0u;
}
