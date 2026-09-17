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

// Function: sub_002B7B78
// Address: 0x2b7b78 - 0x2b7bf8
void sub_002B7B78_0x2b7b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7B78_0x2b7b78");
#endif

    switch (ctx->pc) {
        case 0x2b7b9cu: goto label_2b7b9c;
        case 0x2b7bb0u: goto label_2b7bb0;
        case 0x2b7bc4u: goto label_2b7bc4;
        default: break;
    }

    ctx->pc = 0x2b7b78u;

    // 0x2b7b78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b7b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b7b7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b7b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b7b80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b7b80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7b84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b7b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b7b88: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2b7b88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7b8c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2b7b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2b7b90: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2b7b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2b7b94: 0xc0ade98  jal         func_2B7A60
    ctx->pc = 0x2B7B94u;
    SET_GPR_U32(ctx, 31, 0x2B7B9Cu);
    ctx->pc = 0x2B7B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7B94u;
    // 0x2b7b98: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7A60u, 0x2B7B94u, 0x2B7B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7B9Cu;
label_2b7b9c:
    // 0x2b7b9c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2b7b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b7ba0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b7ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b7ba4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b7ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b7ba8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2b7ba8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b7bac: 0x0  nop
    ctx->pc = 0x2b7bacu;
    // NOP
label_2b7bb0:
    // 0x2b7bb0: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B7BB0u;
    {
        const bool branch_taken_0x2b7bb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7bb0) {
            ctx->pc = 0x2B7BD0u;
            goto label_2b7bd0;
        }
    }
    ctx->pc = 0x2B7BB8u;
    // 0x2b7bb8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2b7bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b7bbc: 0xc04a43b  jal         func_1290EC
    ctx->pc = 0x2B7BBCu;
    SET_GPR_U32(ctx, 31, 0x2B7BC4u);
    ctx->pc = 0x2B7BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7BBCu;
    // 0x2b7bc0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1290ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1290ECu, 0x2B7BBCu, 0x2B7BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7BC4u;
label_2b7bc4:
    // 0x2b7bc4: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2B7BC4u;
    {
        const bool branch_taken_0x2b7bc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b7bc4) {
            ctx->pc = 0x2B7BC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7BC4u;
            // 0x2b7bc8: 0x8e100008  lw          $s0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B7BB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b7bb0;
        }
    }
    ctx->pc = 0x2B7BCCu;
    // 0x2b7bcc: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x2b7bccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b7bd0:
    // 0x2b7bd0: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B7BD0u;
    {
        const bool branch_taken_0x2b7bd0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7BD0u;
        // 0x2b7bd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7bd0) {
            ctx->pc = 0x2B7BDCu;
            goto label_2b7bdc;
        }
    }
    ctx->pc = 0x2B7BD8u;
    // 0x2b7bd8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2b7bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2b7bdc:
    // 0x2b7bdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b7bdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b7be0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b7be0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b7be4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b7be4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b7be8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2b7be8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7bec: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7BECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7BECu;
        // 0x2b7bf0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7BECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7BF4u;
    // 0x2b7bf4: 0x0  nop
    ctx->pc = 0x2b7bf4u;
    // NOP
    ctx->pc = 0x2b7bf8u;
}
