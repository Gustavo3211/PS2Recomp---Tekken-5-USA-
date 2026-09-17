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

// Function: sub_0035FF48
// Address: 0x35ff48 - 0x35ff90
void sub_0035FF48_0x35ff48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035FF48_0x35ff48");
#endif

    switch (ctx->pc) {
        case 0x35ff6cu: goto label_35ff6c;
        default: break;
    }

    ctx->pc = 0x35ff48u;

    // 0x35ff48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35ff48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35ff4c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x35ff4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x35ff50: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x35ff50u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x35ff54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35ff54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35ff58: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x35ff58u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x35ff5c: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x35ff5cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x35ff60: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x35ff60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x35ff64: 0xc0d7fac  jal         func_35FEB0
    ctx->pc = 0x35FF64u;
    SET_GPR_U32(ctx, 31, 0x35FF6Cu);
    ctx->pc = 0x35FF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FF64u;
    // 0x35ff68: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35FEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35FEB0u, 0x35FF64u, 0x35FF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FF6Cu;
label_35ff6c:
    // 0x35ff6c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35FF6Cu;
    {
        const bool branch_taken_0x35ff6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x35FF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FF6Cu;
        // 0x35ff70: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ff6c) {
            ctx->pc = 0x35FF80u;
            goto label_35ff80;
        }
    }
    ctx->pc = 0x35FF74u;
    // 0x35ff74: 0x21023  negu        $v0, $v0
    ctx->pc = 0x35ff74u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x35ff78: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x35ff78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x35ff7c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x35ff7cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_35ff80:
    // 0x35ff80: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x35ff80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35ff84: 0x3e00008  jr          $ra
    ctx->pc = 0x35FF84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35FF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FF84u;
        // 0x35ff88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35FF84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35FF8Cu;
    // 0x35ff8c: 0x0  nop
    ctx->pc = 0x35ff8cu;
    // NOP
    ctx->pc = 0x35ff90u;
}
