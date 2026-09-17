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

// Function: sub_00260428
// Address: 0x260428 - 0x260490
void sub_00260428_0x260428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00260428_0x260428");
#endif

    switch (ctx->pc) {
        case 0x260440u: goto label_260440;
        case 0x260450u: goto label_260450;
        default: break;
    }

    ctx->pc = 0x260428u;

    // 0x260428: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x260428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26042c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26042cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x260430: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x260430u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260434: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x260434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x260438: 0xc097fdc  jal         func_25FF70
    ctx->pc = 0x260438u;
    SET_GPR_U32(ctx, 31, 0x260440u);
    ctx->pc = 0x26043Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260438u;
    // 0x26043c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FF70u, 0x260438u, 0x260440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260440u;
label_260440:
    // 0x260440: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x260440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260444: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x260444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260448: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x260448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x26044c: 0x0  nop
    ctx->pc = 0x26044cu;
    // NOP
label_260450:
    // 0x260450: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x260450u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x260454: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x260454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x260458: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x260458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x26045c: 0x28830007  slti        $v1, $a0, 0x7
    ctx->pc = 0x26045cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x260460: 0x0  nop
    ctx->pc = 0x260460u;
    // NOP
    // 0x260464: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x260464u;
    {
        const bool branch_taken_0x260464 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x260468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260464u;
        // 0x260468: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260464) {
            ctx->pc = 0x260450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_260450;
        }
    }
    ctx->pc = 0x26046Cu;
    // 0x26046c: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x26046cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x260470: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x260470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x260474: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x260474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x260478: 0xaca20024  sw          $v0, 0x24($a1)
    ctx->pc = 0x260478u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 2));
    // 0x26047c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x26047cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x260480: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x260480u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x260484: 0xac64001c  sw          $a0, 0x1C($v1)
    ctx->pc = 0x260484u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 4));
    // 0x260488: 0x3e00008  jr          $ra
    ctx->pc = 0x260488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26048Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260488u;
        // 0x26048c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x260490u;
}
